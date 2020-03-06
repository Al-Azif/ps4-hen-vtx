#ifndef __OFFSETS_H__
#define __OFFSETS_H__
#pragma once

// 5.03
#define XFAST_SYSCALL_addr              0x000001C0

// Names - Data
#define PRISON0_addr                    0x010986A0
#define ROOTVNODE_addr                  0x022C1A70
#define PMAP_STORE_addr                 0x022CB570
#define DT_HASH_SEGMENT_addr            0x00B5EF30

// Functions
#define pmap_protect_addr               0x002E3090
#define pmap_protect_p_addr             0x002E30D4

// Patches
// debug menu error
#define debug_menu_error_patch1         0x004F9008
#define debug_menu_error_patch2         0x004FA11C

// disable signature check
#define disable_signature_check_patch   0x006A26C0

// enable debug RIFs
#define enable_debug_rifs_patch1        0x0064B270
#define enable_debug_rifs_patch2        0x0064B290

// allow sys_dynlib_dlsym in all processes
#define sys_dynlib_dlsym_patch          0x00237F3A

// enable uart
#define enable_uart                     0x019ECEB0

// sdk version spoof - enable all VR fws
#define sdk_version_patch               0x014A63F0

#endif
