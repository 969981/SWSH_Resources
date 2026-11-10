/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb7100; name: FUN_00bb7100
 */


void FUN_00bb7100(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x5cc);
  iVar2 = 0;
  if (param_2 != 3) {
    iVar2 = param_2;
  }
  if (iVar1 == 4 || iVar1 == 2) {
    if (iVar2 == 0) goto LAB_00bb7148;
  }
  else {
    if (iVar1 == 1) {
      iVar1 = 0;
      if (iVar2 != 2) {
        iVar1 = iVar2;
      }
      *(int *)(param_1 + 0x61c) = iVar1;
      return;
    }
    if ((iVar2 == 0) || (iVar1 != 3)) goto LAB_00bb7148;
  }
  iVar2 = 0;
LAB_00bb7148:
  *(int *)(param_1 + 0x61c) = iVar2;
  return;
}


