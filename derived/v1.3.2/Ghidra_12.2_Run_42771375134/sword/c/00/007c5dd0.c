/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c5dd0; name: FUN_007c5dd0
 */


void FUN_007c5dd0(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  long local_28;
  
  local_28 = *param_4;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN_007b6ec0(param_1,param_2,param_3,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  param_1[0xa0] = 0;
  *param_1 = (long)(PTR_DAT_02716bc0 + 0x10);
  puVar1 = PTR_DAT_02716bc8;
  param_1[0xa2] = 0;
  param_1[0x9f] = (long)(puVar1 + 0x10);
  param_1[0xa1] = (long)(PTR_DAT_02716bd0 + 0x10);
  puVar1 = PTR_DAT_02716bd8;
  param_1[0xa4] = 0;
  param_1[0xa6] = 0;
  param_1[0xa3] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_02716be0;
  param_1[0xa8] = 0;
  param_1[0xa5] = (long)(puVar1 + 0x10);
  param_1[0xa7] = (long)(PTR_DAT_02716be8 + 0x10);
  puVar1 = PTR_DAT_02716bf0;
  param_1[0xaa] = 0;
  param_1[0xac] = 0;
  param_1[0xa9] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_02716bf8;
  param_1[0xae] = 0;
  param_1[0xab] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_02716c00;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  param_1[0xaf] = (long)param_1;
  param_1[0xad] = (long)(puVar1 + 0x10);
  return;
}


