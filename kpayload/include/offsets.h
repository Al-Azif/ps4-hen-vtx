#ifndef __OFFSETS_H__
#define __OFFSETS_H__
#pragma once

// data
#define XFAST_SYSCALL_addr                                          0x000001C0
#define M_TEMP_addr                                                 0x014B4110
#define MINI_SYSCORE_SELF_BINARY_addr                               0x014C9D48
#define ALLPROC_addr                                                0x02382FF8
#define SBL_DRIVER_MAPPED_PAGES_addr                                0x0271E208
#define SBL_PFS_SX_addr                                             0x0271E5D8
#define SBL_KEYMGR_KEY_SLOTS_addr                                   0x02744548
#define SBL_KEYMGR_KEY_RBTREE_addr                                  0x02744558
#define SBL_KEYMGR_BUF_VA_addr                                      0x02748000
#define SBL_KEYMGR_BUF_GVA_addr                                     0x02748800
#define FPU_CTX_addr                                                0x0274C040
#define DIPSW_addr                                                  0x01CD0650

// common
#define memcmp_addr                                                 0x00050AC0
#define _sx_xlock_addr                                              0x000F5E10
#define _sx_xunlock_addr                                            0x000F5FD0
#define malloc_addr                                                 0x0010E250
#define free_addr                                                   0x0010E460
#define strstr_addr                                                 0x0017DFB0
#define fpu_kern_enter_addr                                         0x001BFF90
#define fpu_kern_leave_addr                                         0x001C0090
#define memcpy_addr                                                 0x001EA530
#define memset_addr                                                 0x00320580
#define strlen_addr                                                 0x003B7160
#define printf_addr                                                 0x00436000
#define eventhandler_register_addr                                  0x001EC400

// Fself
#define sceSblACMgrGetPathId_addr                                   0x000117E0
#define sceSblServiceMailbox_addr                                   0x00632500
#define sceSblAuthMgrSmIsLoadable2_addr                             0x0063C4B0
#define _sceSblAuthMgrGetSelfInfo_addr                              0x0063CD00
#define _sceSblAuthMgrSmStart_addr                                  0x006418A0
#define sceSblAuthMgrVerifyHeader_addr                              0x00642B00

// Fpkg
#define RsaesPkcs1v15Dec2048CRT_addr                                0x001FD7D0
#define Sha256Hmac_addr                                             0x002D55B0
#define AesCbcCfb128Encrypt_addr                                    0x003A2B90
#define AesCbcCfb128Decrypt_addr                                    0x003A2DC0
#define sceSblDriverSendMsg_0_addr                                  0x0061D7B0
#define sceSblPfsSetKeys_addr                                       0x0061EF60
#define sceSblKeymgrSetKeyStorage_addr                              0x00623F80
#define sceSblKeymgrSetKeyForPfs_addr                               0x0062D740
#define sceSblKeymgrCleartKey_addr                                  0x0062DAD0
#define sceSblKeymgrSmCallfunc_addr                                 0x0062E260

// Patch
#define vmspace_acquire_ref_addr                                    0x0019EF90
#define vmspace_free_addr                                           0x0019EDC0
#define vm_map_lock_read_addr                                       0x0019F140
#define vm_map_unlock_read_addr                                     0x0019F190
#define vm_map_lookup_entry_addr                                    0x0019F760
#define proc_rwmem_addr                                             0x0030D150

// Fself hooks
#define sceSblAuthMgrIsLoadable__sceSblACMgrGetPathId_hook          0x0063E21D
#define sceSblAuthMgrIsLoadable2_hook                               0x0063E361
#define sceSblAuthMgrVerifyHeader_hook1                             0x0063EABC
#define sceSblAuthMgrVerifyHeader_hook2                             0x0063F6D8
#define sceSblAuthMgrSmLoadSelfSegment__sceSblServiceMailbox_hook   0x0064314B
#define sceSblAuthMgrSmLoadSelfBlock__sceSblServiceMailbox_hook     0x00643D62

// Fpkg hooks
#define sceSblKeymgrSetKeyStorage__sceSblDriverSendMsg_hook         0x00624025
#define sceSblKeymgrInvalidateKey__sx_xlock_hook                    0x0062E92D
#define sceSblKeymgrSmCallfunc_npdrm_decrypt_isolated_rif_hook      0x0064C6E0
#define sceSblKeymgrSmCallfunc_npdrm_decrypt_rif_new_hook           0x0064D4BF
#define mountpfs__sceSblPfsSetKeys_hook1                            0x006AAA95
#define mountpfs__sceSblPfsSetKeys_hook2                            0x006AACC4

// SceShellUI - libkernel patches
#define sceSblRcMgrIsAllowDebugMenuForSettings_patch                0x0001BD90
#define sceSblRcMgrIsStoreMode_patch                                0x0001C090

// SceShellCore patches
// call sceKernelIsGenuineCEX
#define sceKernelIsGenuineCEX_patch1                                0x0017F4DB
#define sceKernelIsGenuineCEX_patch2                                0x0079FF6B
#define sceKernelIsGenuineCEX_patch3                                0x007EC173
#define sceKernelIsGenuineCEX_patch4                                0x0095068B

// call nidf_libSceDipsw
#define nidf_libSceDipsw_patch1                                     0x00175007
#define nidf_libSceDipsw_patch2                                     0x0023C8DB
#define nidf_libSceDipsw_patch3                                     0x0079FF97
#define nidf_libSceDipsw_patch4                                     0x009506B7

// enable data mount
#define enable_data_mount_patch                                     0x0031EEF3

// enable fpkg
#define enable_fpkg_patch                                           0x003E55E2

// debug pkg free string
#define fake_free_patch                                             0x00EB21A7

// make pkgs installer working with external hdd
#define pkg_installer_patch                                         0x00937F10

// enable support with 6.xx external hdd
#define ext_hdd_patch                                               0x0059A26D

// enable debug trophies on retail
#define debug_trophies_patch                                        0x006B2599

#endif
