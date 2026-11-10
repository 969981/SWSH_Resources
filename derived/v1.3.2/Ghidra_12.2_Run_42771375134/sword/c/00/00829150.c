/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00829150; name: FUN_00829150
 */


void FUN_00829150(long *param_1,int param_2,__tree_node_base param_3,undefined8 param_4,
                 long *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  __tree_node_base *p_Var4;
  long *plVar5;
  __tree_node_base *p_Var6;
  long lVar7;
  code *pcVar8;
  __tree_node_base *p_Var9;
  long *plVar10;
  long *plVar11;
  
  if (param_5 == (long *)0x0) {
    param_1 = param_1 + 1;
    plVar5 = (long *)*param_1;
    if (plVar5 == (long *)0x0) {
      return;
    }
    plVar10 = param_1;
    do {
      if (param_2 <= (int)plVar5[4]) {
        plVar10 = plVar5;
      }
      plVar5 = (long *)plVar5[(int)plVar5[4] < param_2];
    } while (plVar5 != (long *)0x0);
    if (plVar10 == param_1) {
      return;
    }
    if (param_2 < (int)plVar10[4]) {
      return;
    }
    FUN_00825830(plVar10 + 5);
    return;
  }
  lVar3 = (**(code **)(*param_5 + 0x28))(param_5);
  plVar5 = param_1 + 1;
  plVar10 = (long *)*plVar5;
  if (plVar10 == (long *)0x0) {
    plVar11 = plVar5;
LAB_008292b8:
    lVar7 = *plVar5;
  }
  else {
    iVar2 = (int)plVar10[4];
    iVar1 = iVar2 - param_2;
    plVar5 = param_1 + 1;
    while( true ) {
      while (plVar11 = plVar10, iVar2 <= param_2) {
        if (iVar1 < 0 == SBORROW4(iVar2,param_2)) goto LAB_008292b8;
        plVar5 = plVar11 + 1;
        plVar10 = (long *)*plVar5;
        if (plVar10 == (long *)0x0) goto LAB_008292b8;
        iVar2 = (int)plVar10[4];
        iVar1 = iVar2 - param_2;
      }
      plVar10 = (long *)*plVar11;
      plVar5 = plVar11;
      if (plVar10 == (long *)0x0) break;
      iVar2 = (int)plVar10[4];
      iVar1 = iVar2 - param_2;
    }
    lVar7 = *plVar11;
  }
  if (lVar7 == 0) {
    p_Var4 = operator_new(0x40);
    *(int *)(p_Var4 + 0x20) = param_2;
    *(undefined8 *)(p_Var4 + 0x30) = 0;
    *(undefined8 *)(p_Var4 + 0x38) = 0;
    *(undefined8 *)(p_Var4 + 0x28) = 0;
    *(undefined8 *)p_Var4 = 0;
    *(undefined8 *)(p_Var4 + 8) = 0;
    *(long **)(p_Var4 + 0x10) = plVar11;
    *plVar5 = (long)p_Var4;
    if (*(long *)*param_1 == 0) {
      p_Var6 = p_Var4;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var6 = (__tree_node_base *)*plVar5;
    }
    p_Var9 = p_Var4 + 0x28;
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var6);
    lVar7 = param_1[3];
    param_1[2] = param_1[2] + 1;
    *(undefined8 *)(p_Var4 + 0x38) = param_4;
    p_Var4[0x30] = param_3;
    p_Var4[0x31] = (__tree_node_base)0x0;
    p_Var4[0x32] = (__tree_node_base)((byte)p_Var4[0x32] & 0xf);
    if (lVar3 == lVar7) {
LAB_008293ac:
      *(long **)p_Var9 = param_5;
      goto LAB_008293b0;
    }
    if (lVar3 == 0) {
      *(long **)p_Var9 = param_5;
      goto LAB_00829394;
    }
LAB_00829340:
    plVar5 = (long *)(**(code **)(*param_5 + 0x20))(param_5);
    *(long **)p_Var9 = plVar5;
    pcVar8 = *(code **)(*plVar5 + 0x50);
  }
  else {
    p_Var9 = (__tree_node_base *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x38) = param_4;
    if ((*(byte *)(lVar7 + 0x32) >> 4 & 1) == 0) {
      lVar7 = param_1[3];
      if (lVar7 == 0) {
        if (*(long **)p_Var9 != (long *)0x0) {
          (**(code **)(**(long **)p_Var9 + 8))();
          lVar7 = param_1[3];
          goto joined_r0x00829384;
        }
        if (lVar3 == 0) goto LAB_008293ac;
      }
      else {
joined_r0x00829384:
        if (lVar3 == lVar7) goto LAB_008293ac;
      }
      if (lVar3 == 0) {
        *(long **)p_Var9 = param_5;
        lVar7 = param_1[3];
LAB_00829394:
        FUN_0080bea0(lVar7,param_5);
        goto LAB_008293b0;
      }
      goto LAB_00829340;
    }
    plVar5 = *(long **)p_Var9;
    pcVar8 = *(code **)(*plVar5 + 0x28);
  }
  (*pcVar8)(plVar5,param_5);
LAB_008293b0:
  p_Var9[10] = (__tree_node_base)((byte)p_Var9[10] & 0xf0);
  return;
}


