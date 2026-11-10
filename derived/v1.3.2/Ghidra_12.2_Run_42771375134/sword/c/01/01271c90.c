/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01271c90; name: FUN_01271c90
 */


void FUN_01271c90(undefined1 *param_1,undefined8 *param_2)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  puVar6 = (undefined8 *)(param_1 + 0x10);
  *puVar6 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 **)(param_1 + 8) = puVar6;
  plVar5 = param_2 + 1;
  if ((long *)*param_2 != plVar5) {
    plVar7 = (long *)(param_1 + 8);
    plVar8 = (long *)*param_2;
    do {
      while( true ) {
        plVar1 = (long *)FUN_012720e0(plVar7,puVar6,&local_58,auStack_60,
                                      (undefined8 *)((long)plVar8 + 0x1c));
        if (*plVar1 == 0) break;
        plVar1 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) goto LAB_01271d74;
LAB_01271d64:
        do {
          plVar8 = plVar1;
          plVar1 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
LAB_01271da0:
        if (plVar8 == plVar5) goto LAB_01271db8;
      }
      p_Var2 = (__tree_node_base *)FUN_017cd750(0x28);
      *(undefined8 *)(p_Var2 + 0x1c) = *(undefined8 *)((long)plVar8 + 0x1c);
      *(undefined8 *)p_Var2 = 0;
      *(undefined8 *)(p_Var2 + 8) = 0;
      *(undefined8 *)(p_Var2 + 0x10) = local_58;
      *plVar1 = (long)p_Var2;
      if (*(long *)*plVar7 != 0) {
        *plVar7 = *(long *)*plVar7;
        p_Var2 = (__tree_node_base *)*plVar1;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                (*(__tree_node_base **)(param_1 + 0x10),p_Var2);
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      plVar1 = (long *)plVar8[1];
      if ((long *)plVar8[1] != (long *)0x0) goto LAB_01271d64;
LAB_01271d74:
      plVar1 = plVar8 + 2;
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar3 != plVar8) {
        do {
          lVar4 = *plVar1;
          plVar1 = (long *)(lVar4 + 0x10);
          plVar8 = (long *)*plVar1;
        } while (*plVar8 != lVar4);
        goto LAB_01271da0;
      }
      plVar8 = plVar3;
    } while (plVar3 != plVar5);
  }
LAB_01271db8:
  *param_1 = 1;
  return;
}


