/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d4b30; name: FUN_006d4b30
 */


void FUN_006d4b30(long *param_1,undefined8 param_2,long *param_3,byte param_4)

{
  undefined *puVar1;
  long local_28;
  
  FUN_006d0990();
  puVar1 = PTR_DAT_02715360;
  param_1[0x52] = 0;
  *(byte *)((long)param_1 + 0x29c) = param_4 & 1;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x68);
  param_1[10] = (long)(puVar1 + 0xa8);
  *(undefined4 *)(param_1 + 0x53) = 1;
  (**(code **)(*param_3 + 0x20))(&local_28,param_3);
  if (param_1[0x52] != 0) {
    (**(code **)(*(long *)(param_1[0x52] + 0x48) + 0x18))();
    param_1[0x52] = 0;
  }
  param_1[0x52] = local_28;
  return;
}


