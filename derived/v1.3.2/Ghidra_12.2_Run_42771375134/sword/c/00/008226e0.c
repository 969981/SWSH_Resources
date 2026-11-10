/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008226e0; name: FUN_008226e0
 */


void FUN_008226e0(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  __tree_node_base *p_Var4;
  long *__ptr;
  byte *pbVar5;
  undefined8 *__ptr_00;
  ulong uVar6;
  __tree_node_base *__ptr_01;
  long *plVar7;
  __tree_node_base *p_Var8;
  
  uVar2 = 0;
  if (param_1[1] != 0) {
    uVar6 = 0;
    do {
      while( true ) {
        lVar1 = param_1[4];
        __ptr = *(long **)(lVar1 + uVar6 * 8);
        if (__ptr == (long *)0x0) break;
        if (__ptr == *(long **)(lVar1 + (uVar6 ^ 1) * 8)) {
          *(undefined8 *)(lVar1 + (uVar6 + 1) * 8) = 0;
          *(undefined8 *)(param_1[4] + uVar6 * 8) = 0;
          __ptr_01 = (__tree_node_base *)*__ptr;
          do {
            while( true ) {
              __ptr_00 = *(undefined8 **)(__ptr_01 + 0x20);
              p_Var4 = *(__tree_node_base **)(__ptr_01 + 8);
              if (*(__tree_node_base **)(__ptr_01 + 8) == (__tree_node_base *)0x0) {
                p_Var4 = __ptr_01 + 0x10;
                p_Var8 = *(__tree_node_base **)p_Var4;
                if (*(__tree_node_base **)p_Var8 != __ptr_01) {
                  do {
                    lVar1 = *(long *)p_Var4;
                    p_Var4 = (__tree_node_base *)(lVar1 + 0x10);
                    p_Var8 = *(__tree_node_base **)p_Var4;
                  } while (*(long *)p_Var8 != lVar1);
                }
              }
              else {
                do {
                  p_Var8 = p_Var4;
                  p_Var4 = *(__tree_node_base **)p_Var8;
                } while (*(__tree_node_base **)p_Var8 != (__tree_node_base *)0x0);
              }
              plVar7 = *(long **)(__ptr_01 + 8);
              if (*(long **)(__ptr_01 + 8) == (long *)0x0) {
                p_Var4 = __ptr_01 + 0x10;
                plVar3 = *(long **)p_Var4;
                if ((__tree_node_base *)*plVar3 != __ptr_01) {
                  do {
                    lVar1 = *(long *)p_Var4;
                    p_Var4 = (__tree_node_base *)(lVar1 + 0x10);
                    plVar3 = *(long **)p_Var4;
                  } while (*plVar3 != lVar1);
                }
              }
              else {
                do {
                  plVar3 = plVar7;
                  plVar7 = (long *)*plVar3;
                } while ((long *)*plVar3 != (long *)0x0);
              }
              if ((__tree_node_base *)*__ptr == __ptr_01) {
                *__ptr = (long)plVar3;
              }
              __ptr[3] = __ptr[3] + -1;
              std::__tree_remove<std::__tree_node_base<void*>*>
                        ((__tree_node_base *)__ptr[1],__ptr_01);
              if (__ptr[2] == 0) break;
              if (*(int *)(__ptr_00 + 1) != 9) goto LAB_008228cc;
LAB_0082288c:
              pbVar5 = (byte *)*__ptr_00;
              if (pbVar5 == (byte *)0x0) goto LAB_008228cc;
              if ((*pbVar5 & 1) != 0) {
                operator_delete(*(void **)(pbVar5 + 0x10));
              }
              operator_delete(pbVar5);
              if (param_1[5] != 0) goto LAB_008228d4;
LAB_008228e4:
              free(__ptr_00);
              __ptr_01 = p_Var8;
              if (p_Var8 == (__tree_node_base *)(__ptr + 1)) goto LAB_008228f8;
            }
            free(__ptr_01);
            if (*(int *)(__ptr_00 + 1) == 9) goto LAB_0082288c;
LAB_008228cc:
            if (param_1[5] == 0) goto LAB_008228e4;
LAB_008228d4:
            __ptr_01 = p_Var8;
          } while (p_Var8 != (__tree_node_base *)(__ptr + 1));
LAB_008228f8:
          lVar1 = param_1[5];
          FUN_00822960(__ptr,__ptr[1]);
          if (lVar1 == 0) {
            free(__ptr);
            uVar2 = param_1[1];
            uVar6 = uVar6 + 2;
            if (uVar2 <= uVar6) goto LAB_00822938;
          }
          else {
            uVar2 = param_1[1];
            uVar6 = uVar6 + 2;
            if (uVar2 <= uVar6) goto LAB_00822938;
          }
        }
        else {
          *(undefined8 *)(lVar1 + uVar6 * 8) = 0;
          do {
            while( true ) {
              plVar7 = (long *)__ptr[3];
              if (((int)__ptr[1] == 9) && (pbVar5 = (byte *)*__ptr, pbVar5 != (byte *)0x0)) {
                if ((*pbVar5 & 1) != 0) {
                  operator_delete(*(void **)(pbVar5 + 0x10));
                }
                operator_delete(pbVar5);
              }
              if (param_1[5] == 0) break;
              __ptr = plVar7;
              if (plVar7 == (long *)0x0) goto LAB_0082277c;
            }
            free(__ptr);
            __ptr = plVar7;
          } while (plVar7 != (long *)0x0);
LAB_0082277c:
          uVar2 = param_1[1];
          uVar6 = uVar6 + 1;
          if (uVar2 <= uVar6) goto LAB_00822938;
        }
      }
      uVar2 = param_1[1];
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
LAB_00822938:
  *param_1 = 0;
  param_1[3] = uVar2;
  return;
}


