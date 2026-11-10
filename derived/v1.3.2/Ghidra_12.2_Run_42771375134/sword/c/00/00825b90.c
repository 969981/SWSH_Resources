/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00825b90; name: FUN_00825b90
 */


undefined8 FUN_00825b90(long *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  __tree_node_base *p_Var5;
  __tree_node_base *p_Var6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar7 = param_1 + 1;
  plVar8 = (long *)*plVar7;
  if (plVar8 == (long *)0x0) {
    plVar9 = plVar7;
  }
  else {
    iVar3 = (int)plVar8[4];
    iVar1 = iVar3 - param_2;
    plVar7 = param_1 + 1;
    while( true ) {
      while (plVar2 = plVar8, plVar9 = plVar2, param_2 < iVar3) {
        plVar8 = (long *)*plVar2;
        if (plVar8 == (long *)0x0) {
          p_Var6 = (__tree_node_base *)*plVar2;
          goto joined_r0x00825c30;
        }
        iVar3 = (int)plVar8[4];
        iVar1 = iVar3 - param_2;
        plVar7 = plVar2;
      }
      if (iVar1 < 0 == SBORROW4(iVar3,param_2)) break;
      plVar7 = plVar2 + 1;
      plVar8 = (long *)*plVar7;
      if (plVar8 == (long *)0x0) break;
      iVar3 = (int)plVar8[4];
      iVar1 = iVar3 - param_2;
    }
  }
  p_Var6 = (__tree_node_base *)*plVar7;
  plVar2 = plVar7;
joined_r0x00825c30:
  if (p_Var6 == (__tree_node_base *)0x0) {
    p_Var6 = operator_new(0x40);
    *(int *)(p_Var6 + 0x20) = param_2;
    *(undefined8 *)(p_Var6 + 0x30) = 0;
    *(undefined8 *)(p_Var6 + 0x38) = 0;
    *(undefined8 *)(p_Var6 + 0x28) = 0;
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *(long **)(p_Var6 + 0x10) = plVar9;
    *plVar2 = (long)p_Var6;
    if (*(long *)*param_1 == 0) {
      p_Var5 = p_Var6;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var5 = (__tree_node_base *)*plVar2;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var5);
    uVar4 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar4 = 0;
  }
  *param_4 = p_Var6 + 0x28;
  *(undefined8 *)(p_Var6 + 0x38) = param_3;
  return uVar4;
}


