/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00823bd0; name: FUN_00823bd0
 */


void FUN_00823bd0(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  __tree_node_base *p_Var7;
  undefined8 *__ptr;
  byte *pbVar8;
  long *__ptr_00;
  long *plVar9;
  ulong uVar10;
  undefined1 auStack_78 [16];
  ulong local_68;
  __tree_node_base *p_Stack_60;
  
  __ptr = (undefined8 *)*param_2;
  lVar6 = param_2[1];
  uVar10 = param_2[2] & *(long *)(lVar6 + 8) - 1U;
  param_2[2] = uVar10;
  puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x20) + uVar10 * 8);
  if (puVar4 == __ptr) {
LAB_00823ca8:
    puVar4 = (undefined8 *)(param_1[4] + uVar10 * 8);
  }
  else {
    if ((puVar4 != (undefined8 *)0x0) &&
       (puVar4 != *(undefined8 **)(*(long *)(lVar6 + 0x20) + (uVar10 ^ 1) * 8))) {
      do {
        puVar4 = (undefined8 *)puVar4[3];
        if (puVar4 == (undefined8 *)0x0) goto LAB_00823c44;
      } while (puVar4 != __ptr);
      goto LAB_00823ca8;
    }
LAB_00823c44:
    FUN_00822b50(auStack_78,lVar6,__ptr);
    param_2[2] = local_68;
    param_2[3] = (long)p_Stack_60;
    lVar6 = *(long *)(*(long *)(param_2[1] + 0x20) + local_68 * 8);
    uVar10 = local_68;
    if (lVar6 == 0) {
      __ptr = (undefined8 *)*param_2;
      goto LAB_00823ca8;
    }
    __ptr = (undefined8 *)*param_2;
    plVar9 = param_1 + 4;
    puVar4 = (undefined8 *)(*plVar9 + local_68 * 8);
    if (lVar6 == *(long *)(*(long *)(param_2[1] + 0x20) + (local_68 ^ 1) * 8)) {
      __ptr_00 = (long *)*puVar4;
      plVar2 = *(long **)(p_Stack_60 + 8);
      if (*(long **)(p_Stack_60 + 8) == (long *)0x0) {
        p_Var7 = p_Stack_60 + 0x10;
        plVar5 = *(long **)p_Var7;
        if ((__tree_node_base *)*plVar5 != p_Stack_60) {
          do {
            lVar6 = *(long *)p_Var7;
            p_Var7 = (__tree_node_base *)(lVar6 + 0x10);
            plVar5 = *(long **)p_Var7;
          } while (*plVar5 != lVar6);
        }
      }
      else {
        do {
          plVar5 = plVar2;
          plVar2 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      if ((__tree_node_base *)*__ptr_00 == p_Stack_60) {
        *__ptr_00 = (long)plVar5;
      }
      __ptr_00[3] = __ptr_00[3] + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>((__tree_node_base *)__ptr_00[1],p_Stack_60);
      if (__ptr_00[2] == 0) {
        free(p_Stack_60);
      }
      if (__ptr_00[3] == 0) {
        lVar6 = param_1[5];
        FUN_00822960(__ptr_00,__ptr_00[1]);
        if (lVar6 == 0) {
          free(__ptr_00);
        }
        *(undefined8 *)(*plVar9 + (local_68 << 3 | 8)) = 0;
        *(undefined8 *)(*plVar9 + (local_68 & 0xfffffffffffffffe) * 8) = 0;
        iVar1 = *(int *)(__ptr + 1);
        uVar10 = local_68 & 0xfffffffffffffffe;
      }
      else {
        iVar1 = *(int *)(__ptr + 1);
      }
      goto joined_r0x00823e00;
    }
  }
  uVar3 = FUN_00823fc0(param_1,__ptr,*puVar4);
  *(undefined8 *)(param_1[4] + uVar10 * 8) = uVar3;
  iVar1 = *(int *)(__ptr + 1);
joined_r0x00823e00:
  if ((iVar1 == 9) && (pbVar8 = (byte *)*__ptr, pbVar8 != (byte *)0x0)) {
    if ((*pbVar8 & 1) != 0) {
      operator_delete(*(void **)(pbVar8 + 0x10));
    }
    operator_delete(pbVar8);
  }
  if (param_1[5] == 0) {
    free(__ptr);
  }
  *param_1 = *param_1 + -1;
  if ((uVar10 == param_1[3]) && (uVar10 < (ulong)param_1[1])) {
    do {
      if (*(long *)(param_1[4] + uVar10 * 8) != 0) {
        return;
      }
      uVar10 = uVar10 + 1;
      param_1[3] = uVar10;
    } while (uVar10 < (ulong)param_1[1]);
  }
  return;
}


