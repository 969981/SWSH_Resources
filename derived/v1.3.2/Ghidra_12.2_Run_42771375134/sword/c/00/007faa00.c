/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007faa00; name: FUN_007faa00
 */


undefined8 FUN_007faa00(long *param_1,ulong *param_2)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  ulong uVar4;
  long *plVar5;
  __tree_node_base *p_Var6;
  __tree_node_base *p_Var7;
  long lVar8;
  __tree_node_base *p_Var9;
  
  p_Var6 = (__tree_node_base *)(param_1 + 1);
  p_Var3 = *(__tree_node_base **)p_Var6;
  if (p_Var3 != (__tree_node_base *)0x0) {
    uVar4 = *param_2;
    p_Var7 = p_Var3;
    p_Var9 = p_Var6;
    do {
      while (*(ulong *)(p_Var7 + 0x20) < uVar4) {
        p_Var7 = *(__tree_node_base **)(p_Var7 + 8);
        if (p_Var7 == (__tree_node_base *)0x0) goto LAB_007faa78;
      }
      if ((uVar4 < *(ulong *)(p_Var7 + 0x20)) || ((int)param_2[1] <= *(int *)(p_Var7 + 0x28))) {
        p_Var2 = *(__tree_node_base **)p_Var7;
        p_Var9 = p_Var7;
      }
      else {
        p_Var2 = *(__tree_node_base **)(p_Var7 + 8);
      }
      p_Var7 = p_Var2;
    } while (p_Var7 != (__tree_node_base *)0x0);
LAB_007faa78:
    if (p_Var9 == p_Var6) {
      return 0;
    }
    if (*(ulong *)(p_Var9 + 0x20) <= uVar4) {
      if ((uVar4 <= *(ulong *)(p_Var9 + 0x20)) && ((int)param_2[1] < *(int *)(p_Var9 + 0x28))) {
        return 0;
      }
      plVar1 = *(long **)(p_Var9 + 8);
      if (*(long **)(p_Var9 + 8) == (long *)0x0) {
        p_Var6 = p_Var9 + 0x10;
        plVar5 = *(long **)p_Var6;
        if ((__tree_node_base *)*plVar5 != p_Var9) {
          do {
            lVar8 = *(long *)p_Var6;
            p_Var6 = (__tree_node_base *)(lVar8 + 0x10);
            plVar5 = *(long **)p_Var6;
          } while (*plVar5 != lVar8);
        }
      }
      else {
        do {
          plVar5 = plVar1;
          plVar1 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      if ((__tree_node_base *)*param_1 == p_Var9) {
        *param_1 = (long)plVar5;
      }
      param_1[2] = param_1[2] + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>(p_Var3,p_Var9);
      operator_delete(p_Var9);
      return 1;
    }
  }
  return 0;
}


