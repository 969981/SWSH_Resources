/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da4c30; name: FUN_00da4c30
 */


void FUN_00da4c30(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0xa0 + (long)param_2 * 0x4fb0;
  if (1 < param_2) {
    lVar1 = param_1 + 0xa0;
  }
  FUN_00da5dd0(lVar1);
  FUN_00da5dd0(lVar1 + 0xff0);
  FUN_00da5dd0(lVar1 + 0x1fe0);
  FUN_00da5dd0(lVar1 + 0x2fd0);
  FUN_00da5dd0(lVar1 + 0x3fc0);
  return;
}


