

#ifndef __FRW_IPC_MSGQUEUE_H__
#define __FRW_IPC_MSGQUEUE_H__

/* ����ͷ�ļ����� */
#include "oal_ext_if.h"
#include "oam_ext_if.h"

#undef THIS_FILE_ID
#define THIS_FILE_ID OAM_FILE_ID_FRW_IPC_MSGQUEUE_H

/* �궨�� */
#define FRW_IPC_MASTER_TO_SLAVE_QUEUE_MAX_NUM (1 << 7) /* ������Ϣ���д�С ����Ϊ2�������η� */
#define FRW_IPC_SLAVE_TO_MASTER_QUEUE_MAX_NUM (1 << 8) /* ������Ϣ���д�С ����Ϊ2�������η� */

/* �ж϶����Ƿ��� */
#define frw_ipc_ring_full(_head, _tail, _length) (((_tail) + 1) % (_length) == (_head))

/* �ж϶����Ƿ�Ϊ�� */
#define frw_ipc_ring_empty(_head, _tail) ((_head) == (_tail))

/* �ɷ�ת�Ķ���ͷβ+1���� */
#define frw_ipc_ring_incr(_val, _lim) ((_val) = (((_val) + 1) & ((_lim) - 1)))

/* ������Ϣ�������β+1���� */
#define frw_ipc_ring_tx_incr(_val) (frw_ipc_ring_incr((_val), (FRW_IPC_MASTER_TO_SLAVE_QUEUE_MAX_NUM)))

/* ������Ϣ�������ͷ+1���� */
#define frw_ipc_ring_rx_incr(_val) (frw_ipc_ring_incr((_val), (FRW_IPC_SLAVE_TO_MASTER_QUEUE_MAX_NUM)))

/* �˼�ͨ�Ŷ����澯��ӡ */
#define frw_ipc_lost_warning_log1(_uc_vap_id, _puc_string, _l_para1)
#define frw_ipc_lost_warning_log2(_uc_vap_id, _puc_string, _l_para1, _l_para2)

/* �˼�ͨ����־ά����Ϣ��ӡ */
#define frw_ipc_log_info_print1(_uc_vap_id, _puc_string, _l_para1)
#define frw_ipc_log_info_print4(_uc_vap_id, _puc_string, _l_para1, _l_para2, _l_para3, _l_para4)
#define MAX_LOG_RECORD 100 /* ��־��¼������� */

/* ö�ٶ��� */
typedef enum {
    FRW_IPC_TX_CTRL_ENABLED = 0,  /* Ŀ��˿��п��Է��ͺ˼�ͨѶ */
    FRW_IPC_TX_CTRL_DISABLED = 1, /* Ŀ���æ����������ͨѶ�ж� */

    FRW_IPC_TX_BUTT
} frw_ipc_tx_ctrl_enum;

typedef oal_mem_stru frw_ipc_msg_mem_stru; /* �¼��ṹ���ڴ��ת���� */

/* STRUCT ���� */
typedef struct {
    frw_ipc_msg_mem_stru *pst_msg_mem;
} frw_ipc_msg_dscr_stru;

typedef struct {
    OAL_VOLATILE uint32_t ul_tail; /* ָ��ȡ����һ����Ϣλ�� */
    OAL_VOLATILE uint32_t ul_head; /* ָ��Ҫ������һ����Ϣλ�� */
    uint32_t ul_max_num;           /* ������Ϣ���д�С */
    frw_ipc_msg_dscr_stru *pst_dscr; /* ������Ϣ�����������׵�ַ */
} frw_ipc_msg_queue_stru;

typedef struct {
    void (*p_tx_complete_func)(frw_ipc_msg_mem_stru *); /* ������ɻص����� */
    void (*p_rx_complete_func)(frw_ipc_msg_mem_stru *); /* ���ջص����� */
} frw_ipc_msg_callback_stru;

typedef struct {
    uint16_t us_seq_num;     /* ������Ϣ�����к� */
    uint8_t uc_target_cpuid; /* Ŀ���cpuid */
    uint8_t uc_msg_type;     /* ��Ϣ���� uint8_t */
    int32_t l_time_stamp;    /* ���ͻ������Ϣ��ʱ��� */
} frw_ipc_log_record_stru;

typedef struct {
    OAL_VOLATILE uint32_t ul_stats_recv_lost;                 /* ���ն���ͳ�� */
    OAL_VOLATILE uint32_t ul_stats_send_lost;                 /* ���Ͷ���ͳ�� */
    OAL_VOLATILE uint32_t ul_stats_assert;                    /* �澯ͳ�� */
    OAL_VOLATILE uint32_t ul_stats_send;                      /* ���ʹ��� */
    OAL_VOLATILE uint32_t ul_stats_recv;                      /* ���ܴ��� */
    OAL_VOLATILE uint32_t ul_tx_index;                        /* ������־�ṹ�������±� */
    OAL_VOLATILE uint32_t ul_rx_index;                        /* ������־�ṹ�������±� */
    frw_ipc_log_record_stru st_tx_stats_record[MAX_LOG_RECORD]; /* ������־��Ϣ�ṹ������ */
    frw_ipc_log_record_stru st_rx_stats_record[MAX_LOG_RECORD]; /* ������־��Ϣ�ṹ������ */
} frw_ipc_log_stru;

/* �������� */
uint32_t frw_ipc_msg_queue_init(frw_ipc_msg_queue_stru *pst_msg_queue, uint32_t ul_queue_len);
uint32_t frw_ipc_msg_queue_destroy(frw_ipc_msg_queue_stru *pst_msg_queue);
uint32_t frw_ipc_msg_queue_recv(void *p_arg);
uint32_t frw_ipc_msg_queue_send(frw_ipc_msg_queue_stru *pst_ipc_tx_msg_queue,
                                frw_ipc_msg_mem_stru *pst_msg_input, uint8_t uc_flags, uint8_t uc_cpuid);
uint32_t frw_ipc_msg_queue_register_callback(frw_ipc_msg_callback_stru *p_ipc_msg_handler);
uint32_t frw_ipc_log_exit(frw_ipc_log_stru *pst_log);
uint32_t frw_ipc_log_init(frw_ipc_log_stru *pst_log);
uint32_t frw_ipc_log_recv_alarm(frw_ipc_log_stru *pst_log, uint32_t ul_lost);
uint32_t frw_ipc_log_send_alarm(frw_ipc_log_stru *pst_log);
uint32_t frw_ipc_log_send(frw_ipc_log_stru *pst_log, uint16_t us_seq_num, uint8_t uc_target_cpuid, uint8_t uc_msg_type);
uint32_t frw_ipc_log_recv(frw_ipc_log_stru *pst_log, uint16_t us_seq_num, uint8_t uc_target_cpuid, uint8_t uc_msg_type);
uint32_t frw_ipc_log_tx_print(frw_ipc_log_stru *pst_log);
uint32_t frw_ipc_log_rx_print(frw_ipc_log_stru *pst_log);

#endif /* end of frw_ipc_msgqueue.h */