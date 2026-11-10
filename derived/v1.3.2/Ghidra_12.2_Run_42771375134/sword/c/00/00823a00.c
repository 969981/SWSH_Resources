/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00823a00; name: FUN_00823a00
 */


undefined1  [16] FUN_00823a00(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  __tree_node_base *p_Var3;
  long *plVar4;
  __tree_node_base *p_Var5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar6 = param_1 + 1;
  plVar7 = (long *)*plVar6;
  if (plVar7 != (long *)0x0) {
    plVar6 = param_1 + 1;
    uVar1 = FUN_00822e30(*param_2,plVar7[4]);
    do {
      if ((uVar1 & 1) == 0) {
        uVar1 = FUN_00822e30(plVar7[4],*param_2);
        if ((uVar1 & 1) == 0) goto LAB_00823aa8;
        plVar6 = plVar7 + 1;
        plVar4 = (long *)*plVar6;
        if (plVar4 == (long *)0x0) goto LAB_00823aa8;
      }
      else {
        plVar4 = (long *)*plVar7;
        plVar6 = plVar7;
        if (plVar4 == (long *)0x0) {
          p_Var5 = (__tree_node_base *)*plVar7;
          goto joined_r0x00823a88;
        }
      }
      uVar1 = FUN_00822e30(*param_2,plVar4[4]);
      plVar7 = plVar4;
    } while( true );
  }
  plVar7 = plVar6;
LAB_00823aa8:
  p_Var5 = (__tree_node_base *)*plVar6;
joined_r0x00823a88:
  if (p_Var5 == (__tree_node_base *)0x0) {
    if (param_1[2] == 0) {
      p_Var5 = malloc(0x28);
    }
    else {
      p_Var5 = (__tree_node_base *)FUN_0080efb0(param_1[2],0,0x28);
    }
    *(undefined8 *)(p_Var5 + 0x20) = *param_3;
    *(long **)(p_Var5 + 0x10) = plVar7;
    *(undefined8 *)p_Var5 = 0;
    *(undefined8 *)(p_Var5 + 8) = 0;
    *plVar6 = (long)p_Var5;
    if (*(long *)*param_1 == 0) {
      p_Var3 = p_Var5;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var3 = (__tree_node_base *)*plVar6;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var3);
    uVar2 = 1;
    param_1[3] = param_1[3] + 1;
  }
  else {
    uVar2 = 0;
  }
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = p_Var5;
  return auVar8;
}


