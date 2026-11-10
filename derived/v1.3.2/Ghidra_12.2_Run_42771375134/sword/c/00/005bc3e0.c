/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bc3e0; name: FUN_005bc3e0
 */


undefined1  [16] FUN_005bc3e0(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  __tree_node_base *p_Var2;
  undefined8 uVar3;
  __tree_node_base *p_Var4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar5 = param_1 + 1;
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    plVar7 = plVar5;
  }
  else {
    plVar5 = param_1 + 1;
    while( true ) {
      while( true ) {
        iVar1 = FUN_005528b0(param_2,plVar6 + 4);
        plVar7 = plVar6;
        if (iVar1 == 0) break;
        if ((long *)*plVar6 == (long *)0x0) {
          p_Var4 = (__tree_node_base *)*plVar6;
          goto joined_r0x005bc468;
        }
        plVar5 = plVar6;
        plVar6 = (long *)*plVar6;
      }
      iVar1 = FUN_005528b0(plVar6 + 4,param_2);
      if (iVar1 == 0) break;
      plVar5 = plVar6 + 1;
      if ((long *)*plVar5 == (long *)0x0) break;
      plVar6 = (long *)*plVar5;
    }
  }
  p_Var4 = (__tree_node_base *)*plVar5;
  plVar6 = plVar5;
joined_r0x005bc468:
  if (p_Var4 == (__tree_node_base *)0x0) {
    p_Var4 = (__tree_node_base *)
             FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x40,"../src/GPU/GPUMemoryAllocator.h",
                          0x1b8,0);
    FUN_00551290(p_Var4 + 0x20,param_3);
    FUN_00551290(p_Var4 + 0x30,param_3 + 0x10);
    *(undefined8 *)p_Var4 = 0;
    *(undefined8 *)(p_Var4 + 8) = 0;
    *(long **)(p_Var4 + 0x10) = plVar7;
    *plVar6 = (long)p_Var4;
    if (*(long *)*param_1 == 0) {
      p_Var2 = p_Var4;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var2 = (__tree_node_base *)*plVar6;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var2);
    uVar3 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar3 = 0;
  }
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = p_Var4;
  return auVar8;
}


