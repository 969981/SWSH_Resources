/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cdc1c0; name: FUN_00cdc1c0
 */


void FUN_00cdc1c0(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0271c8c0;
  *param_1 = (long)(PTR_DAT_0271c8b8 + 0x10);
  param_1[5] = (long)(puVar1 + 0x10);
  *(undefined8 *)PTR_DAT_0271c8c8 = 0;
  if (param_1[8] != 0) {
    (**(code **)(*(long *)param_1[6] + 0xb8))();
  }
  if (param_1[0xc] != 0) {
    (**(code **)(*(long *)param_1[10] + 0xb8))();
  }
  if (param_1[0x10] != 0) {
    (**(code **)(*(long *)param_1[0xe] + 0xb8))();
  }
  FUN_001034a0(param_1 + 5);
  *param_1 = (long)(PTR_DAT_02717510 + 0x10);
  return;
}


