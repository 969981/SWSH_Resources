/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00828850; name: FUN_00828850
 */


void FUN_00828850(long *param_1,int param_2,__tree_node_base param_3,byte param_4,undefined4 param_5
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
  
  plVar5 = param_1 + 1;
  plVar10 = (long *)*plVar5;
  if (plVar10 == (long *)0x0) {
    plVar11 = plVar5;
LAB_008288f8:
    lVar8 = *plVar5;
    plVar2 = plVar5;
  }
  else {
    iVar1 = (int)plVar10[4];
    iVar7 = iVar1 - param_2;
    plVar5 = param_1 + 1;
    while( true ) {
      while (plVar2 = plVar10, plVar11 = plVar2, iVar1 <= param_2) {
        if (iVar7 < 0 == SBORROW4(iVar1,param_2)) goto LAB_008288f8;
        plVar5 = plVar2 + 1;
        plVar10 = (long *)*plVar5;
        if (plVar10 == (long *)0x0) goto LAB_008288f8;
        iVar1 = (int)plVar10[4];
        iVar7 = iVar1 - param_2;
      }
      plVar10 = (long *)*plVar2;
      if (plVar10 == (long *)0x0) break;
      iVar1 = (int)plVar10[4];
      iVar7 = iVar1 - param_2;
      plVar5 = plVar2;
    }
    lVar8 = *plVar2;
  }
  if (lVar8 == 0) {
    p_Var3 = operator_new(0x40);
    *(int *)(p_Var3 + 0x20) = param_2;
    *(undefined8 *)(p_Var3 + 0x30) = 0;
    *(undefined8 *)(p_Var3 + 0x38) = 0;
    *(undefined8 *)(p_Var3 + 0x28) = 0;
    *(undefined8 *)p_Var3 = 0;
    *(undefined8 *)(p_Var3 + 8) = 0;
    *(long **)(p_Var3 + 0x10) = plVar11;
    *plVar2 = (long)p_Var3;
    if (*(long *)*param_1 == 0) {
      p_Var6 = p_Var3;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var6 = (__tree_node_base *)*plVar2;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var6);
    param_1[2] = param_1[2] + 1;
    *(undefined8 *)(p_Var3 + 0x38) = param_6;
    p_Var3[0x30] = param_3;
    p_Var3[0x31] = (__tree_node_base)0x1;
    p_Var3[0x33] = (__tree_node_base)(param_4 & 1);
    lVar8 = param_1[3];
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
      FUN_0080eeb0(lVar8,puVar4,PTR_LAB_02717158);
    }
    *(undefined8 **)(p_Var3 + 0x28) = puVar4;
    piVar9 = *(int **)(p_Var3 + 0x28);
    iVar7 = *piVar9;
    if (iVar7 != piVar9[1]) goto LAB_00828928;
  }
  else {
    *(undefined8 *)(lVar8 + 0x38) = param_6;
    piVar9 = *(int **)(lVar8 + 0x28);
    iVar7 = *piVar9;
    if (iVar7 != piVar9[1]) goto LAB_00828928;
  }
  FUN_007f7a40(piVar9,iVar7 + 1);
  iVar7 = *piVar9;
LAB_00828928:
  *piVar9 = iVar7 + 1;
  *(undefined4 *)(*(long *)(piVar9 + 2) + (long)iVar7 * 4 + 8) = param_5;
  return;
}


