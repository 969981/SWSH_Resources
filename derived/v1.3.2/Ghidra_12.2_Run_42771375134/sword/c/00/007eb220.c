/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007eb220; name: FUN_007eb220
 */


void FUN_007eb220(long param_1,ulong param_2)

{
  bool bVar1;
  __tree_node_base *p_Var2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if (param_2 != 0) {
    plVar5 = (long *)(param_1 + 0x68);
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      plVar6 = plVar5;
LAB_007eb2a4:
      lVar4 = *plVar5;
    }
    else {
      plVar5 = (long *)(param_1 + 0x68);
      bVar1 = param_2 <= (ulong)plVar6[4];
      if (!bVar1 || plVar6[4] == param_2) goto LAB_007eb27c;
      while( true ) {
        plVar5 = plVar6;
        plVar6 = (long *)*plVar5;
        if (plVar6 == (long *)0x0) break;
        bVar1 = param_2 <= (ulong)plVar6[4];
        if (!bVar1 || plVar6[4] == param_2) {
LAB_007eb27c:
          do {
            if (bVar1) goto LAB_007eb2a4;
            plVar5 = plVar6 + 1;
            plVar3 = (long *)*plVar5;
            if (plVar3 == (long *)0x0) goto LAB_007eb2a4;
            bVar1 = param_2 <= (ulong)plVar3[4];
            plVar6 = plVar3;
          } while (!bVar1 || plVar3[4] == param_2);
        }
      }
      lVar4 = *plVar5;
      plVar6 = plVar5;
    }
    if (lVar4 == 0) {
      p_Var2 = operator_new(0x28);
      *(ulong *)(p_Var2 + 0x20) = param_2;
      *(undefined8 *)p_Var2 = 0;
      *(undefined8 *)(p_Var2 + 8) = 0;
      *(long **)(p_Var2 + 0x10) = plVar6;
      *plVar5 = (long)p_Var2;
      if (**(long **)(param_1 + 0x60) != 0) {
        *(long *)(param_1 + 0x60) = **(long **)(param_1 + 0x60);
        p_Var2 = (__tree_node_base *)*plVar5;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                (*(__tree_node_base **)(param_1 + 0x68),p_Var2);
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
      if (0 < *(int *)(param_2 + 0x28)) {
        lVar4 = 0;
        do {
          FUN_007eb220(param_1,*(undefined8 *)
                                (*(long *)(param_2 + 0x20) +
                                (long)*(int *)(*(long *)(param_2 + 0x30) + lVar4 * 4) * 8));
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(param_2 + 0x28));
      }
    }
  }
  return;
}


