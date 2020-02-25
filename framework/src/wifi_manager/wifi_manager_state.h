/****************************************************************************
 *
 * Copyright 2020 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/

#ifndef _WIFI_MANAGER_STATE_H__
#define _WIFI_MANAGER_STATE_H__

/*  State Definition */
enum _wifimgr_state {
	WIFIMGR_UNINITIALIZED,
	WIFIMGR_STA_DISCONNECTED,
	WIFIMGR_STA_DISCONNECTING,
	WIFIMGR_STA_CONNECTING,
	WIFIMGR_STA_CONNECTED,
	WIFIMGR_STA_RECONNECT, // 5
	WIFIMGR_STA_RECONNECTING,
	WIFIMGR_STA_CONNECT_CANCEL,
	WIFIMGR_SOFTAP,
	WIFIMGR_SCANNING,
	WIFIMGR_NONE, // it is used for prev state only
	WIFIMGR_STATE_MAX,
};
typedef enum _wifimgr_state wifimgr_state_e;


#endif // _WIFI_MANAGER_STATE_H__
