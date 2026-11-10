/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012d0130; name: FUN_012d0130
 */


undefined8 FUN_012d0130(int *param_1,int *param_2,long param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 2) != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  iVar1 = *param_2;
  *param_1 = iVar1;
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = *(long *)PTR_DAT_02727858;
  *(long **)(lVar3 + 0x10) = param_4;
  *(long *)(lVar3 + 0x20) = param_3;
  lVar2 = (**(code **)(*param_4 + 0x10))(param_4,param_3,8);
  *(long *)(lVar3 + 0x18) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar3 + 0x10) + 0xb8))();
    lVar2 = *(long *)(lVar3 + 0x18);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,param_3 + -0xb8,0);
  *(long *)(lVar3 + 8) = lVar2;
  *(long *)(param_1 + 2) = lVar2;
  FUN_008d4280(&local_40,lVar2);
  *(undefined8 *)(param_1 + 4) = local_40;
  *(undefined8 *)(param_1 + 6) = uStack_38;
  return *(undefined8 *)(param_1 + 2);
}


