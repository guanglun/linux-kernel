/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-3-Clause) */
/* QLogic qed NIC Driver
 * Copyright (c) 2015-2017  QLogic Corporation
 * Copyright (c) 2019-2020 Marvell International Ltd.
 */

#ifndef __ROCE_COMMON__
#define __ROCE_COMMON__

/************************/
/* ROCE FW CONSTANTS */
/************************/

#define ROCE_REQ_MAX_INLINE_DATA_SIZE	(256)
#define ROCE_REQ_MAX_SINGLE_SQ_WQE_SIZE	(288)

#define ROCE_MAX_QPS			(32 * 1024)
#define ROCE_DCQCN_NP_MAX_QPS		(64)
#define ROCE_DCQCN_RP_MAX_QPS		(64)
#define ROCE_LKEY_MW_DIF_EN_BIT		(28)

/* Affiliated asynchronous events / errors enumeration */
enum roce_async_events_type {
	ROCE_ASYNC_EVENT_NONE = 0,
	ROCE_ASYNC_EVENT_COMM_EST = 1,
	ROCE_ASYNC_EVENT_SQ_DRAINED,
	ROCE_ASYNC_EVENT_SRQ_LIMIT,
	ROCE_ASYNC_EVENT_LAST_WQE_REACHED,
	ROCE_ASYNC_EVENT_CQ_ERR,
	ROCE_ASYNC_EVENT_LOCAL_INVALID_REQUEST_ERR,
	ROCE_ASYNC_EVENT_LOCAL_CATASTROPHIC_ERR,
	ROCE_ASYNC_EVENT_LOCAL_ACCESS_ERR,
	ROCE_ASYNC_EVENT_QP_CATASTROPHIC_ERR,
	ROCE_ASYNC_EVENT_CQ_OVERFLOW_ERR,
	ROCE_ASYNC_EVENT_SRQ_EMPTY,
	ROCE_ASYNC_EVENT_DESTROY_QP_DONE,
	ROCE_ASYNC_EVENT_XRC_DOMAIN_ERR,
	ROCE_ASYNC_EVENT_INVALID_XRCETH_ERR,
	ROCE_ASYNC_EVENT_XRC_SRQ_CATASTROPHIC_ERR,
	MAX_ROCE_ASYNC_EVENTS_TYPE
};

#endif /* __ROCE_COMMON__ */
