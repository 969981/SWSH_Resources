/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00545ed0; name: FUN_00545ed0
 */


int FUN_00545ed0(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_1[1] + -1;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    uVar2 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*param_1 + 0x10))();
    FUN_005b9b10(uVar2,param_1);
  }
  return iVar1;
}


