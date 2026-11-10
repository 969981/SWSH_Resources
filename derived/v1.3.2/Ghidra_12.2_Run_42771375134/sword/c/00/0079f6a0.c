/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079f6a0; name: FUN_0079f6a0
 */


void FUN_0079f6a0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_1[10];
  puVar1 = PTR_DAT_02716600 + 0x40;
  *param_1 = (long)(PTR_DAT_02716600 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_0079ffb0(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0079f6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0xb] + 0x18))((long *)param_1[0xb],lVar2,param_1[0xc],param_1[0xd]);
  return;
}


