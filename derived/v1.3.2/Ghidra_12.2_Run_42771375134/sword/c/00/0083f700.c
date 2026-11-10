/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083f700; name: FUN_0083f700
 */


undefined8 FUN_0083f700(undefined8 *param_1,long param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  __tree_node_base *p_Var5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  __tree_node_base *p_Var9;
  
  iVar1 = *(int *)(param_2 + 0x38);
  p_Var5 = (__tree_node_base *)(param_1 + 1);
  p_Var3 = *(__tree_node_base **)p_Var5;
  if (p_Var3 != (__tree_node_base *)0x0) {
    p_Var9 = p_Var5;
    do {
      if (iVar1 <= *(int *)(p_Var3 + 0x20)) {
        p_Var9 = p_Var3;
      }
      p_Var3 = *(__tree_node_base **)(p_Var3 + (ulong)(*(int *)(p_Var3 + 0x20) < iVar1) * 8);
    } while (p_Var3 != (__tree_node_base *)0x0);
    if ((p_Var9 != p_Var5) && (*(int *)(p_Var9 + 0x20) <= iVar1)) {
      if (((byte)p_Var9[0x32] >> 4 & 1) == 0) {
        uVar7 = *(undefined8 *)(p_Var9 + 0x28);
        p_Var3 = *(__tree_node_base **)p_Var5;
      }
      else {
        plVar8 = *(long **)(p_Var9 + 0x28);
        uVar7 = (**(code **)(*param_3 + 0x10))(param_3,*(undefined8 *)(param_2 + 0x68));
        uVar7 = (**(code **)(*plVar8 + 0x40))(plVar8,uVar7);
        if ((param_1[3] == 0) && (*(long **)(p_Var9 + 0x28) != (long *)0x0)) {
          (**(code **)(**(long **)(p_Var9 + 0x28) + 8))();
        }
        p_Var3 = *(__tree_node_base **)p_Var5;
      }
      if (p_Var3 == (__tree_node_base *)0x0) {
        return uVar7;
      }
      iVar1 = *(int *)(param_2 + 0x38);
      p_Var4 = p_Var3;
      p_Var9 = p_Var5;
      do {
        if (iVar1 <= *(int *)(p_Var4 + 0x20)) {
          p_Var9 = p_Var4;
        }
        p_Var4 = *(__tree_node_base **)(p_Var4 + (ulong)(*(int *)(p_Var4 + 0x20) < iVar1) * 8);
      } while (p_Var4 != (__tree_node_base *)0x0);
      if (p_Var9 == p_Var5) {
        return uVar7;
      }
      if (iVar1 < *(int *)(p_Var9 + 0x20)) {
        return uVar7;
      }
      plVar8 = *(long **)(p_Var9 + 8);
      if (*(long **)(p_Var9 + 8) == (long *)0x0) {
        p_Var5 = p_Var9 + 0x10;
        plVar2 = *(long **)p_Var5;
        if ((__tree_node_base *)*plVar2 != p_Var9) {
          do {
            lVar6 = *(long *)p_Var5;
            p_Var5 = (__tree_node_base *)(lVar6 + 0x10);
            plVar2 = *(long **)p_Var5;
          } while (*plVar2 != lVar6);
        }
      }
      else {
        do {
          plVar2 = plVar8;
          plVar8 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
      if ((__tree_node_base *)*param_1 == p_Var9) {
        *param_1 = plVar2;
      }
      param_1[2] = param_1[2] + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>(p_Var3,p_Var9);
      operator_delete(p_Var9);
      return uVar7;
    }
  }
  return 0;
}


