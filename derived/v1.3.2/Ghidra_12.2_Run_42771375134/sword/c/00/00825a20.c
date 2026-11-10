/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00825a20; name: FUN_00825a20
 */


void FUN_00825a20(long *param_1,int param_2,__tree_node_base param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  __tree_node_base *p_Var4;
  __tree_node_base *p_Var5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar6 = param_1 + 1;
  plVar7 = (long *)*plVar6;
  if (plVar7 == (long *)0x0) {
    plVar8 = plVar6;
  }
  else {
    iVar3 = (int)plVar7[4];
    iVar1 = iVar3 - param_2;
    plVar6 = param_1 + 1;
    while( true ) {
      while (plVar2 = plVar7, plVar8 = plVar2, param_2 < iVar3) {
        plVar7 = (long *)*plVar2;
        if (plVar7 == (long *)0x0) {
          p_Var5 = (__tree_node_base *)*plVar2;
          goto joined_r0x00825ac4;
        }
        iVar3 = (int)plVar7[4];
        iVar1 = iVar3 - param_2;
        plVar6 = plVar2;
      }
      if (iVar1 < 0 == SBORROW4(iVar3,param_2)) break;
      plVar6 = plVar2 + 1;
      plVar7 = (long *)*plVar6;
      if (plVar7 == (long *)0x0) break;
      iVar3 = (int)plVar7[4];
      iVar1 = iVar3 - param_2;
    }
  }
  p_Var5 = (__tree_node_base *)*plVar6;
  plVar2 = plVar6;
joined_r0x00825ac4:
  if (p_Var5 == (__tree_node_base *)0x0) {
    p_Var5 = operator_new(0x40);
    *(int *)(p_Var5 + 0x20) = param_2;
    *(long **)(p_Var5 + 0x10) = plVar8;
    *(undefined8 *)(p_Var5 + 0x30) = 0;
    *(undefined8 *)(p_Var5 + 0x38) = 0;
    *(undefined8 *)(p_Var5 + 0x28) = 0;
    *(undefined8 *)p_Var5 = 0;
    *(undefined8 *)(p_Var5 + 8) = 0;
    *plVar2 = (long)p_Var5;
    if (*(long *)*param_1 == 0) {
      p_Var4 = p_Var5;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var4 = (__tree_node_base *)*plVar2;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var4);
    param_1[2] = param_1[2] + 1;
    *(undefined8 *)(p_Var5 + 0x38) = param_5;
    p_Var5[0x30] = param_3;
    p_Var5[0x31] = (__tree_node_base)0x0;
  }
  else {
    *(undefined8 *)(p_Var5 + 0x38) = param_5;
  }
  p_Var5[0x32] = (__tree_node_base)((byte)p_Var5[0x32] & 0xf0);
  *(undefined4 *)(p_Var5 + 0x28) = param_4;
  return;
}


