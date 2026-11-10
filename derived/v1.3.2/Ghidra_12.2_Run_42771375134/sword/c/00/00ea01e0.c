/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ea01e0; name: FUN_00ea01e0
 */


bool FUN_00ea01e0(long *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return false;
  }
  iVar1 = (**(code **)(*param_1 + 0x188))(param_1,PTR_DAT_0271e8a0,0);
  return iVar1 == param_2;
}


