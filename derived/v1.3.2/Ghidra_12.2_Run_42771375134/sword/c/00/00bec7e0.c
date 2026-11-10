/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bec7e0; name: FUN_00bec7e0
 */


void FUN_00bec7e0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long local_38;
  long local_28;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *param_3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_28 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_38 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_00ff5fc0(param_1,&local_28,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  puVar2 = PTR_DAT_0271b9c0;
  puVar1 = PTR_DAT_0271b9c0 + 0x10;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = (long)puVar1;
  param_1[9] = (long)(puVar2 + 0x78);
  param_1[10] = (long)(puVar2 + 0xb8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  puVar1 = PTR_DAT_0271b9e8;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x78);
  param_1[10] = (long)(puVar1 + 0xb8);
  *(undefined8 *)((long)param_1 + 0x95) = 0;
  puVar1 = PTR_DAT_02710860;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  param_1[0x18] = lVar3;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x233) = 0;
  *(undefined1 *)(param_1 + 0x242) = 0;
  *(undefined1 *)(param_1 + 0x251) = 0;
  *(undefined1 *)(param_1 + 0x252) = 0;
  *(undefined1 *)(param_1 + 599) = 0;
  *(undefined1 *)(param_1 + 0x259) = 0;
  *(undefined1 *)(param_1 + 0x25b) = 0;
  *(undefined1 *)(param_1 + 0x26a) = 0;
  *(undefined1 *)(param_1 + 0x279) = 0;
  *(undefined1 *)(param_1 + 0x27b) = 0;
  *(undefined1 *)(param_1 + 0x27d) = 0;
  *(undefined1 *)(param_1 + 0x388) = 0;
  *(undefined1 *)(param_1 + 0x255) = 0;
  param_1[0x254] = 0;
  param_1[0x253] = 0;
  param_1[0x494] = 0;
  param_1[0x493] = 0;
  return;
}


