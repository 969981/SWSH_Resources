/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ea07b0; name: FUN_00ea07b0
 */


undefined8 FUN_00ea07b0(long *param_1)

{
  ulong uVar1;
  float fVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x198))(param_1,PTR_DAT_0271ecf0,0);
  if ((((uVar1 & 1) != 0) &&
      (fVar2 = (float)(**(code **)(*param_1 + 0x178))(0,param_1,PTR_DAT_0271e870), fVar2 < 2.0)) &&
     (0.0 < fVar2)) {
    return 1;
  }
  return 0;
}


