/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00828f90; name: FUN_00828f90
 */


undefined8
FUN_00828f90(long *param_1,int param_2,__tree_node_base param_3,long *param_4,undefined8 param_5)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  int iVar4;
  __tree_node_base *p_Var5;
  undefined8 uVar6;
  __tree_node_base *p_Var7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  plVar9 = param_1 + 1;
  plVar10 = (long *)*plVar9;
  if (plVar10 == (long *)0x0) {
    plVar11 = plVar9;
  }
  else {
    iVar4 = (int)plVar10[4];
    iVar1 = iVar4 - param_2;
    plVar9 = param_1 + 1;
    while( true ) {
      while (plVar3 = plVar10, plVar11 = plVar3, param_2 < iVar4) {
        plVar10 = (long *)*plVar3;
        if (plVar10 == (long *)0x0) {
          lVar8 = *plVar3;
          goto joined_r0x00829034;
        }
        iVar4 = (int)plVar10[4];
        iVar1 = iVar4 - param_2;
        plVar9 = plVar3;
      }
      if (iVar1 < 0 == SBORROW4(iVar4,param_2)) break;
      plVar9 = plVar3 + 1;
      plVar10 = (long *)*plVar9;
      if (plVar10 == (long *)0x0) break;
      iVar4 = (int)plVar10[4];
      iVar1 = iVar4 - param_2;
    }
  }
  lVar8 = *plVar9;
  plVar3 = plVar9;
joined_r0x00829034:
  if (lVar8 == 0) {
    p_Var5 = operator_new(0x40);
    *(int *)(p_Var5 + 0x20) = param_2;
    *(undefined8 *)(p_Var5 + 0x30) = 0;
    *(undefined8 *)(p_Var5 + 0x38) = 0;
    *(undefined8 *)(p_Var5 + 0x28) = 0;
    *(undefined8 *)p_Var5 = 0;
    *(undefined8 *)(p_Var5 + 8) = 0;
    *(long **)(p_Var5 + 0x10) = plVar11;
    *plVar3 = (long)p_Var5;
    if (*(long *)*param_1 == 0) {
      p_Var7 = p_Var5;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var7 = (__tree_node_base *)*plVar3;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var7);
    lVar8 = param_1[3];
    param_1[2] = param_1[2] + 1;
    *(undefined8 *)(p_Var5 + 0x38) = param_5;
    p_Var5[0x30] = param_3;
    p_Var5[0x31] = (__tree_node_base)0x0;
    p_Var5[0x32] = (__tree_node_base)((byte)p_Var5[0x32] & 0xf);
    uVar6 = (**(code **)(*param_4 + 0x20))(param_4,lVar8);
    *(undefined8 *)(p_Var5 + 0x28) = uVar6;
    p_Var5[0x32] = (__tree_node_base)((byte)p_Var5[0x32] & 0xf0);
  }
  else {
    bVar2 = *(byte *)(lVar8 + 0x32);
    *(undefined8 *)(lVar8 + 0x38) = param_5;
    *(byte *)(lVar8 + 0x32) = bVar2 & 0xf0;
    if ((bVar2 >> 4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00829080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(**(long **)(lVar8 + 0x28) + 0x20))(*(long **)(lVar8 + 0x28),param_4);
      return uVar6;
    }
    uVar6 = *(undefined8 *)(lVar8 + 0x28);
  }
  return uVar6;
}


