/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053ba80; name: FUN_0053ba80
 */


int FUN_0053ba80(long param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  int iVar3;
  __tree_node_base *p_Var4;
  long *plVar5;
  long lVar6;
  __tree_node_base *p_Var7;
  
  p_Var4 = *(__tree_node_base **)(param_1 + 0x11f0);
  if (p_Var4 != (__tree_node_base *)0x0) {
    p_Var7 = (__tree_node_base *)(param_1 + 0x11f0);
    do {
      while (param_2 <= *(ulong *)(p_Var4 + 0x20)) {
        if ((param_2 < *(ulong *)(p_Var4 + 0x20)) || (param_3 <= *(ulong *)(p_Var4 + 0x28))) {
          p_Var2 = *(__tree_node_base **)p_Var4;
          p_Var7 = p_Var4;
        }
        else {
          p_Var2 = *(__tree_node_base **)(p_Var4 + 8);
        }
        p_Var4 = p_Var2;
        if (p_Var4 == (__tree_node_base *)0x0) goto LAB_0053baf0;
      }
      p_Var4 = *(__tree_node_base **)(p_Var4 + 8);
    } while (p_Var4 != (__tree_node_base *)0x0);
LAB_0053baf0:
    if (((p_Var7 != (__tree_node_base *)(param_1 + 0x11f0)) &&
        (*(ulong *)(p_Var7 + 0x20) <= param_2)) &&
       ((*(ulong *)(p_Var7 + 0x20) < param_2 || (*(ulong *)(p_Var7 + 0x28) <= param_3)))) {
      iVar3 = FUN_00539a90(param_1,*(undefined8 *)(p_Var7 + 0x30),0);
      if (iVar3 == 0) {
        if (*(long **)(p_Var7 + 0x30) != (long *)0x0) {
          (**(code **)(**(long **)(p_Var7 + 0x30) + 0x18))();
          *(undefined8 *)(p_Var7 + 0x30) = 0;
        }
        if (*(long **)(p_Var7 + 0x38) != (long *)0x0) {
          (**(code **)(**(long **)(p_Var7 + 0x38) + 0x18))();
          *(undefined8 *)(p_Var7 + 0x38) = 0;
        }
        plVar1 = *(long **)(p_Var7 + 8);
        if (*(long **)(p_Var7 + 8) == (long *)0x0) {
          p_Var4 = p_Var7 + 0x10;
          plVar5 = *(long **)p_Var4;
          if ((__tree_node_base *)*plVar5 != p_Var7) {
            do {
              lVar6 = *(long *)p_Var4;
              p_Var4 = (__tree_node_base *)(lVar6 + 0x10);
              plVar5 = *(long **)p_Var4;
            } while (*plVar5 != lVar6);
          }
        }
        else {
          do {
            plVar5 = plVar1;
            plVar1 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        if (*(__tree_node_base **)(param_1 + 0x11e8) == p_Var7) {
          *(long **)(param_1 + 0x11e8) = plVar5;
        }
        *(long *)(param_1 + 0x11f8) = *(long *)(param_1 + 0x11f8) + -1;
        std::__tree_remove<std::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(param_1 + 0x11f0),p_Var7);
        FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,p_Var7);
      }
      FUN_0053f130(*(undefined8 *)(param_1 + 0x18));
      return iVar3;
    }
  }
  return -6;
}


