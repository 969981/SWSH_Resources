/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013472f0; name: FUN_013472f0
 */


void FUN_013472f0(long *param_1,long param_2)

{
  undefined *puVar1;
  long local_28;
  
  local_28 = 0;
  FUN_01347870(param_1,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  puVar1 = PTR_DAT_02728248;
  param_1[0x19] = param_2;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0xe0);
  param_1[10] = (long)(puVar1 + 0x150);
  return;
}


