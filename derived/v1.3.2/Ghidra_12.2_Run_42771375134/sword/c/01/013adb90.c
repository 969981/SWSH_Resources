/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013adb90; name: FUN_013adb90
 */


void FUN_013adb90(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long local_30;
  long local_28;
  
  local_28 = *param_2;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  local_30 = *param_3;
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
  }
  FUN_00ff5fc0(param_1,&local_28,&local_30);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  lVar2 = DAT_02728f50;
  lVar1 = DAT_02728f50 + 0x10;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *param_1 = lVar1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[9] = lVar2 + 0x78;
  param_1[10] = lVar2 + 0xb8;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  lVar1 = *(long *)PTR_DAT_027152c0;
  lVar2 = *(long *)(PTR_DAT_027152c0 + 8);
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x7c] = 0;
  param_1[0x20] = lVar1;
  param_1[0x21] = lVar2;
  return;
}


