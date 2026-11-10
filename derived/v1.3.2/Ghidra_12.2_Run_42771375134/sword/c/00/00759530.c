/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00759530; name: FUN_00759530
 */


void FUN_00759530(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_00708690(param_1,param_2,2);
  puVar1 = PTR_DAT_02715e90;
  param_1[0x4d] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0xb0);
  param_1[10] = (long)(puVar1 + 0xf0);
  FUN_006fbc40(param_1 + 0x4e);
  *(undefined4 *)(param_1 + 0x91) = 0;
  *(undefined8 *)((long)param_1 + 0x47e) = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0x7fffffff;
  if (param_1[0x16] != 0) {
    (**(code **)(*(long *)(param_1[0x16] + 0x48) + 0x18))();
    param_1[0x16] = 0;
  }
  param_1[0x16] = 0;
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
    param_1[0x26] = 0;
  }
  param_1[0x26] = 0;
  return;
}


