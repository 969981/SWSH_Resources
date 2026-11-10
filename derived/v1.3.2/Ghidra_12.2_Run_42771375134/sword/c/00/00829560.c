/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00829560; name: FUN_00829560
 */


long FUN_00829560(long *param_1,int param_2,__tree_node_base param_3,long *param_4,
                 undefined8 param_5)

{
  __tree_node_base *p_Var1;
  int iVar2;
  int iVar3;
  long *plVar4;
  __tree_node_base *p_Var5;
  long *plVar6;
  undefined8 *puVar7;
  __tree_node_base *p_Var8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  long *plVar12;
  
  plVar6 = param_1 + 1;
  plVar11 = (long *)*plVar6;
  if (plVar11 == (long *)0x0) {
    plVar12 = plVar6;
  }
  else {
    iVar3 = (int)plVar11[4];
    iVar2 = iVar3 - param_2;
    plVar6 = param_1 + 1;
    while( true ) {
      while (plVar4 = plVar11, plVar12 = plVar4, param_2 < iVar3) {
        plVar11 = (long *)*plVar4;
        if (plVar11 == (long *)0x0) {
          lVar9 = *plVar4;
          goto joined_r0x00829604;
        }
        iVar3 = (int)plVar11[4];
        iVar2 = iVar3 - param_2;
        plVar6 = plVar4;
      }
      if (iVar2 < 0 == SBORROW4(iVar3,param_2)) break;
      plVar6 = plVar4 + 1;
      plVar11 = (long *)*plVar6;
      if (plVar11 == (long *)0x0) break;
      iVar3 = (int)plVar11[4];
      iVar2 = iVar3 - param_2;
    }
  }
  lVar9 = *plVar6;
  plVar4 = plVar6;
joined_r0x00829604:
  if (lVar9 == 0) {
    p_Var5 = operator_new(0x40);
    *(int *)(p_Var5 + 0x20) = param_2;
    *(undefined8 *)(p_Var5 + 0x30) = 0;
    *(undefined8 *)(p_Var5 + 0x38) = 0;
    *(undefined8 *)(p_Var5 + 0x28) = 0;
    *(undefined8 *)p_Var5 = 0;
    *(undefined8 *)(p_Var5 + 8) = 0;
    *(long **)(p_Var5 + 0x10) = plVar12;
    *plVar4 = (long)p_Var5;
    if (*(long *)*param_1 == 0) {
      p_Var8 = p_Var5;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var8 = (__tree_node_base *)*plVar4;
    }
    p_Var1 = p_Var5 + 0x28;
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var8);
    param_1[2] = param_1[2] + 1;
    *(undefined8 *)(p_Var5 + 0x38) = param_5;
    p_Var5[0x30] = param_3;
    p_Var5[0x31] = (__tree_node_base)0x1;
    lVar9 = param_1[3];
    if (lVar9 == 0) {
      puVar7 = operator_new(0x18);
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      *(undefined8 **)p_Var1 = puVar7;
      lVar9 = *(long *)p_Var1;
      piVar10 = *(int **)(lVar9 + 0x10);
    }
    else {
      plVar6 = (long *)FUN_0080efb0(lVar9,0,0x18);
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = lVar9;
      FUN_0080eeb0(lVar9,plVar6,PTR_LAB_02717198);
      *(long **)p_Var1 = plVar6;
      lVar9 = *(long *)p_Var1;
      piVar10 = *(int **)(lVar9 + 0x10);
    }
  }
  else {
    p_Var1 = (__tree_node_base *)(lVar9 + 0x28);
    *(undefined8 *)(lVar9 + 0x38) = param_5;
    lVar9 = *(long *)p_Var1;
    piVar10 = *(int **)(lVar9 + 0x10);
  }
  if (piVar10 != (int *)0x0) {
    iVar2 = *(int *)(lVar9 + 8);
    if (iVar2 < *piVar10) {
      *(int *)(lVar9 + 8) = iVar2 + 1;
      if (*(long *)(piVar10 + (long)iVar2 * 2 + 2) != 0) {
        return *(long *)(piVar10 + (long)iVar2 * 2 + 2);
      }
    }
  }
  lVar9 = (**(code **)(*param_4 + 0x20))(param_4,param_1[3]);
  FUN_00829780(*(long *)p_Var1,lVar9);
  return lVar9;
}


