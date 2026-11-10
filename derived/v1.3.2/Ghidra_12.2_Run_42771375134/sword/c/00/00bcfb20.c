/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcfb20; name: FUN_00bcfb20
 */


int FUN_00bcfb20(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == 0) {
    iVar1 = param_2 + param_3 * 6;
  }
  if (param_1 != 1) {
    param_3 = iVar1;
  }
  return param_3;
}


