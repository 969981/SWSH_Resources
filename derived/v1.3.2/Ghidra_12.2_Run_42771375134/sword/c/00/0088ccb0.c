/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0088ccb0; name: FUN_0088ccb0
 */


void FUN_0088ccb0(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  long *plVar2;
  __tree_node_base *p_Var3;
  ulong *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  __tree_node_base *p_Var11;
  __tree_node_base *p_Var12;
  __tree_node_base *p_Var13;
  ulong *puVar14;
  long *plVar15;
  long local_58;
  char local_44 [4];
  
  if (((*(long *)(param_1 + 0x28) != 0) &&
      (plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 8), plVar2 != (long *)0x0)) &&
     (plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,0x18), plVar2 != (long *)0x0)) {
    plVar2[1] = 0;
    plVar2[2] = 0;
    *plVar2 = 0;
    local_44[0] = '\0';
    plVar9 = *(undefined8 **)(param_1 + 0x20) + 1;
    plVar15 = (long *)**(undefined8 **)(param_1 + 0x20);
    if (plVar15 != plVar9) {
      do {
        while( true ) {
          local_58 = plVar15[4];
          FUN_0088b6f0(local_58,local_44,param_2,param_3,param_4);
          if (local_44[0] == '\0') break;
          plVar6 = (long *)plVar2[1];
          if (plVar6 != (long *)plVar2[2]) {
            lVar5 = 0;
            if (plVar6 != (long *)0x0) {
              *plVar6 = local_58;
              lVar5 = plVar2[1];
            }
            plVar2[1] = lVar5 + 8;
            break;
          }
          FUN_0088fc70(plVar2,&local_58);
          plVar6 = (long *)plVar15[1];
          if ((long *)plVar15[1] == (long *)0x0) goto LAB_0088cd94;
LAB_0088cd70:
          do {
            plVar15 = plVar6;
            plVar6 = (long *)*plVar15;
          } while ((long *)*plVar15 != (long *)0x0);
LAB_0088cdc0:
          if (plVar15 == plVar9) goto LAB_0088cdd8;
        }
        plVar6 = (long *)plVar15[1];
        if ((long *)plVar15[1] != (long *)0x0) goto LAB_0088cd70;
LAB_0088cd94:
        plVar6 = plVar15 + 2;
        plVar8 = (long *)*plVar6;
        if ((long *)*plVar8 != plVar15) {
          do {
            lVar5 = *plVar6;
            plVar6 = (long *)(lVar5 + 0x10);
            plVar15 = (long *)*plVar6;
          } while (*plVar15 != lVar5);
          goto LAB_0088cdc0;
        }
        plVar15 = plVar8;
      } while (plVar8 != plVar9);
LAB_0088cdd8:
      puVar1 = PTR_DAT_027174a8;
      puVar14 = (ulong *)*plVar2;
      puVar4 = (ulong *)plVar2[1];
      if (puVar14 != puVar4) {
        do {
          puVar7 = *(undefined8 **)(param_1 + 0x20);
          p_Var11 = (__tree_node_base *)(puVar7 + 1);
          p_Var3 = *(__tree_node_base **)p_Var11;
          if (p_Var3 != (__tree_node_base *)0x0) {
            uVar10 = *puVar14;
            p_Var12 = p_Var3;
            p_Var13 = p_Var11;
            do {
              if (*(ulong *)(p_Var12 + 0x20) >= uVar10) {
                p_Var13 = p_Var12;
              }
              p_Var12 = *(__tree_node_base **)
                         (p_Var12 + (ulong)(*(ulong *)(p_Var12 + 0x20) < uVar10) * 8);
            } while (p_Var12 != (__tree_node_base *)0x0);
            if ((p_Var13 != p_Var11) && (*(ulong *)(p_Var13 + 0x20) <= uVar10)) {
              plVar15 = *(long **)(p_Var13 + 8);
              if (*(long **)(p_Var13 + 8) == (long *)0x0) {
                p_Var11 = p_Var13 + 0x10;
                plVar9 = *(long **)p_Var11;
                if ((__tree_node_base *)*plVar9 != p_Var13) {
                  do {
                    lVar5 = *(long *)p_Var11;
                    p_Var11 = (__tree_node_base *)(lVar5 + 0x10);
                    plVar9 = *(long **)p_Var11;
                  } while (*plVar9 != lVar5);
                }
              }
              else {
                do {
                  plVar9 = plVar15;
                  plVar15 = (long *)*plVar9;
                } while ((long *)*plVar9 != (long *)0x0);
              }
              if ((__tree_node_base *)*puVar7 == p_Var13) {
                *puVar7 = plVar9;
              }
              puVar7[2] = puVar7[2] + -1;
              std::__tree_remove<std::__tree_node_base<void*>*>(p_Var3,p_Var13);
              (**(code **)(**(long **)puVar1 + 0x18))(*(long **)puVar1,p_Var13);
            }
          }
          puVar14 = puVar14 + 1;
        } while (puVar14 != (ulong *)plVar2[1]);
        puVar4 = (ulong *)*plVar2;
      }
      if (puVar4 != (ulong *)0x0) {
        plVar2[1] = (long)puVar4;
        (**(code **)(**(long **)PTR_DAT_027174a8 + 0x18))();
      }
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0x28) + 8);
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar2);
    }
  }
  return;
}


