/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105db10; name: FUN_0105db10
 */


void FUN_0105db10(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  FUN_006d86d0(param_1,0x80048081);
  puVar1 = PTR_DAT_02723a90;
  param_1[0xf] = param_3;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x90);
  param_1[10] = (long)(puVar1 + 0x100);
  FUN_0105a260(param_1 + 0x10,param_1[1],param_2,0);
  if (param_1[0xf] == 0) {
    param_1[0xf] = (long)(param_1 + 0x10);
    return;
  }
  return;
}


