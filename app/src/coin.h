/*******************************************************************************
*  (c) 2018-2021 Zondax GmbH
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#define CLA                             0x06

#include <stdint.h>
#include <stddef.h>

#define HDPATH_LEN_DEFAULT   5

#define HDPATH_0_DEFAULT     (0x80000000u | 0x2cu)
#define HDPATH_1_DEFAULT     (0x80000000u | 0x1cdu)
#define HDPATH_2_DEFAULT     (0x80000000u | 0u)
#define HDPATH_3_DEFAULT     (0u)
#define HDPATH_4_DEFAULT     (0u)

#define HDPATH_0_TESTNET     (0x80000000u | 0x2cu)
#define HDPATH_1_TESTNET     (0x80000000u | 0x1u)

#define SECP256K1_PK_LEN            65u

typedef enum {
    addr_secp256k1 = 0,
} address_kind_e;

#define VIEW_ADDRESS_OFFSET_SECP256K1       (SECP256K1_PK_LEN + ADDRESS_PROTOCOL_SECP256K1_PAYLOAD_LEN + ADDRESS_PROTOCOL_LEN + 2)

#define COIN_AMOUNT_DECIMAL_PLACES 18

#define COIN_SUPPORTED_TX_VERSION           0

#define MENU_MAIN_APP_LINE1 "Filecoin"
#define MENU_MAIN_APP_LINE2 "Ready"
#define MENU_MAIN_APP_LINE2_SECRET          "???"
#define APPVERSION_LINE1 "Version"
#define APPVERSION_LINE2 "v" APPVERSION

#ifdef __cplusplus
}
#endif
