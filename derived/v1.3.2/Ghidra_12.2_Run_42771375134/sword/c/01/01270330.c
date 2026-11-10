/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01270330; name: FUN_01270330
 */


void FUN_01270330(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02726b98 + 0x80;
  *param_1 = (long)(PTR_DAT_02726b98 + 0x10);
  param_1[7] = (long)puVar1;
  if (param_1[8] != 0) {
    (**(code **)(*(long *)(param_1[8] + 0x48) + 0x18))();
    param_1[8] = 0;
  }
  *param_1 = (long)(PTR_DAT_02726bb8 + 0x10);
  if (param_1[5] != 0) {
    (**(code **)(*(long *)(param_1[5] + 0x48) + 0x18))();
    param_1[5] = 0;
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  return;
}


