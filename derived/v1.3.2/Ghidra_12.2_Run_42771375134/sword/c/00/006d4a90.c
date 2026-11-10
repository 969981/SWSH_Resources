/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d4a90; name: FUN_006d4a90
 */


void FUN_006d4a90(long *param_1,long *param_2,byte param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long local_28;
  
  uVar2 = FUN_006d38b0();
  FUN_006d0990(param_1,uVar2);
  puVar1 = PTR_DAT_02715360;
  param_1[0x52] = 0;
  *(byte *)((long)param_1 + 0x29c) = param_3 & 1;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x68);
  param_1[10] = (long)(puVar1 + 0xa8);
  *(undefined4 *)(param_1 + 0x53) = 1;
  (**(code **)(*param_2 + 0x20))(&local_28,param_2);
  if (param_1[0x52] != 0) {
    (**(code **)(*(long *)(param_1[0x52] + 0x48) + 0x18))();
    param_1[0x52] = 0;
  }
  param_1[0x52] = local_28;
  return;
}


