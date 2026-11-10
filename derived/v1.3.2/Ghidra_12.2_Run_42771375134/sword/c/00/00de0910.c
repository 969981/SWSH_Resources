/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de0910; name: FUN_00de0910
 */


void FUN_00de0910(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_0271ec30;
  lVar2 = param_1[1];
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = lVar2;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (lVar2 == 0) {
    return;
  }
  param_1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00de095c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar2,param_1[3] - lVar2,0x10);
  return;
}


