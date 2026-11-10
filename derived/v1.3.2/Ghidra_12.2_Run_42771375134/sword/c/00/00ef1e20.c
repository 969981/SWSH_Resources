/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef1e20; name: FUN_00ef1e20
 */


void FUN_00ef1e20(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long local_e8;
  undefined1 local_e0 [4];
  undefined4 local_dc;
  undefined1 auStack_d0 [8];
  long local_c8;
  long local_38;
  long local_28;
  
  switch(*(undefined4 *)(param_1 + 0x98)) {
  case 3:
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0xffffffff;
    FUN_008964f0(param_2,param_1 + 0x170);
    uVar1 = 3;
    break;
  case 4:
    FUN_0147cb30(param_2);
    uVar1 = 4;
    break;
  case 5:
    *(undefined4 *)(*(long *)(param_1 + 0x168) + 0x54) = 2;
    *(undefined4 *)(*(long *)(param_1 + 0x168) + 0x58) = 1;
    local_28 = *(long *)(param_1 + 0x168);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_014f9850(param_2,&local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    uVar1 = 5;
    break;
  case 6:
    uVar1 = 6;
    break;
  case 7:
    FUN_010e3370(param_2);
    uVar1 = 7;
    break;
  case 8:
    if (*(char *)(*(long *)PTR_DAT_0271bd18 + 0x47) == '\0') {
      FUN_00eedb90(&local_38,*(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68));
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
    }
    else {
      FUN_00c4cb80(param_2);
    }
    *(undefined4 *)(param_1 + 0x9c) = 8;
    FUN_006cf0a0(local_e0,&DAT_026617f0);
    FUN_016d3620(local_e0);
    if (local_c8 == 0) {
      return;
    }
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
    return;
  case 9:
    FUN_016190f0(param_2,param_1 + 0xc0);
    uVar1 = 9;
    break;
  case 10:
    local_e0[0] = 0;
    local_dc = 0;
    FUN_00db17d0(auStack_d0);
    memcpy((void *)(param_1 + 0x280),local_e0,0xa0);
    FUN_0172b760(param_2,(void *)(param_1 + 0x280),1);
    uVar1 = 10;
    break;
  case 0xb:
    FUN_01630320(&local_e8,param_2);
    if (local_e8 != 0) {
      (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
    }
    uVar1 = 0xb;
    break;
  case 0xc:
    FUN_015d5080(param_2);
    uVar1 = 0xc;
    break;
  case 0xd:
    FUN_017201e0(param_2);
    return;
  default:
    goto switchD_00ef1e5c_default;
  }
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
switchD_00ef1e5c_default:
  return;
}


