/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01417b30; name: FUN_01417b30
 */


void FUN_01417b30(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
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
    local_28 = 0;
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  puVar1 = PTR_DAT_02729908;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x13] = -0x340d631b7bddd9bb;
  param_1[0x14] = -0x340d631b7bddd9bb;
  param_1[0x15] = -0x340d631b7bddd9bb;
  param_1[0x16] = -0x340d631b7bddd9bb;
  param_1[9] = (long)(puVar1 + 0x78);
  param_1[10] = (long)(puVar1 + 0xb8);
  thunk_FUN_011f3570(param_1 + 0x17);
  return;
}


