/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00828ab0; name: FUN_00828ab0
 */


undefined8 FUN_00828ab0(long *param_1,int param_2,__tree_node_base param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  __tree_node_base *p_Var4;
  undefined8 *puVar5;
  __tree_node_base *p_Var6;
  long lVar7;
  __tree_node_base *p_Var8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  plVar9 = param_1 + 1;
  plVar10 = (long *)*plVar9;
  if (plVar10 == (long *)0x0) {
    plVar11 = plVar9;
  }
  else {
    iVar3 = (int)plVar10[4];
    iVar1 = iVar3 - param_2;
    plVar9 = param_1 + 1;
    while( true ) {
      while (plVar2 = plVar10, plVar11 = plVar2, param_2 < iVar3) {
        plVar10 = (long *)*plVar2;
        if (plVar10 == (long *)0x0) {
          lVar7 = *plVar2;
          goto joined_r0x00828b50;
        }
        iVar3 = (int)plVar10[4];
        iVar1 = iVar3 - param_2;
        plVar9 = plVar2;
      }
      if (iVar1 < 0 == SBORROW4(iVar3,param_2)) break;
      plVar9 = plVar2 + 1;
      plVar10 = (long *)*plVar9;
      if (plVar10 == (long *)0x0) break;
      iVar3 = (int)plVar10[4];
      iVar1 = iVar3 - param_2;
    }
  }
  lVar7 = *plVar9;
  plVar2 = plVar9;
joined_r0x00828b50:
  if (lVar7 == 0) {
    p_Var4 = operator_new(0x40);
    *(int *)(p_Var4 + 0x20) = param_2;
    *(undefined8 *)(p_Var4 + 0x30) = 0;
    *(undefined8 *)(p_Var4 + 0x38) = 0;
    *(undefined8 *)(p_Var4 + 0x28) = 0;
    *(undefined8 *)p_Var4 = 0;
    *(undefined8 *)(p_Var4 + 8) = 0;
    *(long **)(p_Var4 + 0x10) = plVar11;
    *plVar2 = (long)p_Var4;
    if (*(long *)*param_1 == 0) {
      p_Var6 = p_Var4;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var6 = (__tree_node_base *)*plVar2;
    }
    p_Var8 = p_Var4 + 0x28;
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var6);
    param_1[2] = param_1[2] + 1;
    *(undefined8 *)(p_Var4 + 0x38) = param_4;
    p_Var4[0x30] = param_3;
    p_Var4[0x31] = (__tree_node_base)0x0;
    lVar7 = param_1[3];
    if (lVar7 == 0) {
      puVar5 = operator_new(0x18);
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
    }
    else {
      puVar5 = (undefined8 *)FUN_0080efb0(lVar7,0,0x18);
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      FUN_0080eeb0(lVar7,puVar5,PTR_LAB_02716e80);
    }
    *(undefined8 **)p_Var8 = puVar5;
  }
  else {
    p_Var8 = (__tree_node_base *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x38) = param_4;
  }
  p_Var8[10] = (__tree_node_base)((byte)p_Var8[10] & 0xf0);
  return *(undefined8 *)p_Var8;
}


