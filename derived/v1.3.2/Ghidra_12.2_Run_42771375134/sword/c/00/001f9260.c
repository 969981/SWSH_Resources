/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f9260; name: FUN_001f9260
 */


void FUN_001f9260(long param_1,long *param_2)

{
  long lVar1;
  
  FUN_001ccd40(param_1 + 0x10,param_2 + 0xc,0,0);
  FUN_00207d60(param_2 + 5,param_1,param_2,0,0);
  lVar1 = (**(code **)(*param_2 + 0x1c0))(param_2);
  if (lVar1 != 0) {
    FUN_001ce760(param_1 + 0x10,lVar1 + 0x10);
  }
  if (param_2[4] == 0) {
    return;
  }
  FUN_001e17d0(param_2 + 3);
  return;
}


