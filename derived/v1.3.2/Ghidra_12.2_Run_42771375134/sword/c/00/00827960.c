/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00827960; name: FUN_00827960
 */


void FUN_00827960(undefined8 param_1,long *param_2,int param_3,__tree_node_base param_4,byte param_5
                 ,undefined8 param_6)

{
  int iVar1;
  long *plVar2;
  __tree_node_base *p_Var3;
  undefined8 *puVar4;
  long *plVar5;
  __tree_node_base *p_Var6;
  int iVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  
  plVar5 = param_2 + 1;
  plVar10 = (long *)*plVar5;
  if (plVar10 == (long *)0x0) {
    plVar11 = plVar5;
LAB_00827a0c:
    lVar8 = *plVar5;
    plVar2 = plVar5;
  }
  else {
    iVar1 = (int)plVar10[4];
    iVar7 = iVar1 - param_3;
    plVar5 = param_2 + 1;
    while( true ) {
      while (plVar2 = plVar10, plVar11 = plVar2, iVar1 <= param_3) {
        if (iVar7 < 0 == SBORROW4(iVar1,param_3)) goto LAB_00827a0c;
        plVar5 = plVar2 + 1;
        plVar10 = (long *)*plVar5;
        if (plVar10 == (long *)0x0) goto LAB_00827a0c;
        iVar1 = (int)plVar10[4];
        iVar7 = iVar1 - param_3;
      }
      plVar10 = (long *)*plVar2;
      if (plVar10 == (long *)0x0) break;
      iVar1 = (int)plVar10[4];
      iVar7 = iVar1 - param_3;
      plVar5 = plVar2;
    }
    lVar8 = *plVar2;
  }
  if (lVar8 == 0) {
    p_Var3 = operator_new(0x40);
    *(int *)(p_Var3 + 0x20) = param_3;
    *(undefined8 *)(p_Var3 + 0x30) = 0;
    *(undefined8 *)(p_Var3 + 0x38) = 0;
    *(undefined8 *)(p_Var3 + 0x28) = 0;
    *(undefined8 *)p_Var3 = 0;
    *(undefined8 *)(p_Var3 + 8) = 0;
    *(long **)(p_Var3 + 0x10) = plVar11;
    *plVar2 = (long)p_Var3;
    if (*(long *)*param_2 == 0) {
      p_Var6 = p_Var3;
    }
    else {
      *param_2 = *(long *)*param_2;
      p_Var6 = (__tree_node_base *)*plVar2;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_2[1],p_Var6);
    param_2[2] = param_2[2] + 1;
    *(undefined8 *)(p_Var3 + 0x38) = param_6;
    p_Var3[0x30] = param_4;
    p_Var3[0x31] = (__tree_node_base)0x1;
    p_Var3[0x33] = (__tree_node_base)(param_5 & 1);
    lVar8 = param_2[3];
    if (lVar8 == 0) {
      puVar4 = operator_new(0x10);
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    else {
      puVar4 = (undefined8 *)FUN_0080efb0(lVar8,0,0x10);
      *puVar4 = 0;
      puVar4[1] = 0;
      plVar5 = (long *)FUN_0080efb0(lVar8,0,8);
      puVar4[1] = plVar5;
      *plVar5 = lVar8;
      FUN_0080eeb0(lVar8,puVar4,PTR_LAB_02717180);
    }
    *(undefined8 **)(p_Var3 + 0x28) = puVar4;
    piVar9 = *(int **)(p_Var3 + 0x28);
    iVar7 = *piVar9;
    if (iVar7 != piVar9[1]) goto LAB_00827a3c;
  }
  else {
    *(undefined8 *)(lVar8 + 0x38) = param_6;
    piVar9 = *(int **)(lVar8 + 0x28);
    iVar7 = *piVar9;
    if (iVar7 != piVar9[1]) goto LAB_00827a3c;
  }
  FUN_0081bd80(piVar9,iVar7 + 1);
  iVar7 = *piVar9;
LAB_00827a3c:
  *piVar9 = iVar7 + 1;
  *(undefined8 *)(*(long *)(piVar9 + 2) + (long)iVar7 * 8 + 8) = param_1;
  return;
}


