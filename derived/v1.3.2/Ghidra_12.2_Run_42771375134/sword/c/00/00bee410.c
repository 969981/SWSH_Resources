/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bee410; name: FUN_00bee410
 */


void FUN_00bee410(long *param_1,long *param_2,long *param_3)

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
  *(undefined4 *)(param_1 + 0x11) = 0;
  puVar1 = PTR_DAT_0271ba38;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x11f) = 0;
  *(undefined4 *)((long)param_1 + 0x994) = 0;
  param_1[9] = (long)(puVar1 + 0x78);
  param_1[10] = (long)(puVar1 + 0xb8);
  *(undefined1 *)(param_1 + 0x133) = 0;
  *(undefined4 *)((long)param_1 + 0x99c) = 0;
  *(undefined1 *)(param_1 + 0x132) = 0;
  param_1[0x131] = 0;
  param_1[0x130] = 0;
  param_1[0x12f] = 0;
  param_1[0x12e] = 0;
  return;
}


