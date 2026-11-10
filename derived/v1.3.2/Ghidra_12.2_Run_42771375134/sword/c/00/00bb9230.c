/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb9230; name: FUN_00bb9230
 */


void FUN_00bb9230(long param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 2) {
    iVar3 = param_2;
  }
  piVar1 = (int *)(param_1 + 0x5e0);
  piVar2 = (int *)(param_1 + 0x5e4);
  FUN_00bcfb40(iVar3,param_3,piVar1,piVar2);
  if (iVar3 == 0) {
    *piVar1 = *piVar1 + 1;
  }
  *piVar2 = *piVar2 + 2;
  return;
}


