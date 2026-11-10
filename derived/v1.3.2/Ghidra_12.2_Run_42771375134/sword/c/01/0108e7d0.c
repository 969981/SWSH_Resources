/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108e7d0; name: FUN_0108e7d0
 */


undefined8 FUN_0108e7d0(uint *param_1,uint *param_2,long param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 2) != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar2 = *param_2;
  *param_1 = uVar2;
  if (1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = *(long *)PTR_DAT_027240d0 + (ulong)uVar2 * 0x20;
  *(undefined8 *)(lVar1 + 0x10) = param_4;
  *(long *)(lVar1 + 0x20) = param_3;
  lVar3 = (**(code **)(*param_4 + 0x10))(param_4,param_3,8);
  *(long *)(lVar1 + 0x18) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar1 + 0x10) + 0xb8))();
    lVar3 = *(long *)(lVar1 + 0x18);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,param_3 + -0xb8,0);
  *(long *)(lVar1 + 8) = lVar3;
  *(long *)(param_1 + 2) = lVar3;
  FUN_008d4280(&local_50,lVar3);
  *(undefined8 *)(param_1 + 4) = local_50;
  *(undefined8 *)(param_1 + 6) = uStack_48;
  return *(undefined8 *)(param_1 + 2);
}


