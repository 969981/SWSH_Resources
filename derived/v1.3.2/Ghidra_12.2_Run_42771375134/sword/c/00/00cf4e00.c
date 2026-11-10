/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cf4e00; name: FUN_00cf4e00
 */


void FUN_00cf4e00(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long local_38;
  long local_28;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *param_3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_28 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_38 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
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
  *(undefined4 *)(param_1 + 0xf) = 0;
  puVar1 = PTR_DAT_0271cc20;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[9] = (long)(puVar1 + 0x78);
  param_1[10] = (long)(puVar1 + 0xb8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  puVar1 = PTR_DAT_0271cc28;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x3a] = 0;
  param_1[9] = (long)(puVar1 + 0xb0);
  param_1[10] = (long)(puVar1 + 0xf0);
  param_1[0x32] = (long)(puVar1 + 0x118);
  param_1[0x33] = (long)(puVar1 + 0x178);
  param_1[0x34] = (long)(puVar1 + 0x1c8);
  param_1[0x35] = (long)(puVar1 + 0x1e8);
  *(undefined4 *)(param_1 + 0x39) = 1;
  return;
}


