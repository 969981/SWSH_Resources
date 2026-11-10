/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c96ec0; name: FUN_00c96ec0
 */


void FUN_00c96ec0(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_01029060();
  puVar1 = PTR_DAT_0271c4f0 + 0x50;
  *param_1 = (long)(PTR_DAT_0271c4f0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[0x31] = *param_2;
  param_1[0x32] = param_2[1];
  param_1[0x33] = param_2[2];
  lVar2 = param_2[3];
  param_1[0x34] = lVar2;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c96f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  return;
}


