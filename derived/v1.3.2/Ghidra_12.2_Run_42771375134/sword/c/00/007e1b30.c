/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e1b30; name: FUN_007e1b30
 */


undefined8 FUN_007e1b30(long param_1,long param_2)

{
  ulong *puVar1;
  int iVar2;
  __tree_node_base *p_Var3;
  void *__dest;
  long lVar4;
  ulong uVar5;
  void *__src;
  long *plVar6;
  long *plVar7;
  size_t __n;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar9 = *(ulong *)(param_2 + 0x50);
  iVar2 = *(int *)(param_2 + 0x38);
  plVar8 = *(long **)(param_1 + 0x148);
  plVar6 = (long *)(param_1 + 0x148);
  if (plVar8 == (long *)0x0) {
    lVar4 = *plVar6;
    plVar7 = plVar6;
  }
  else {
    do {
      uVar10 = plVar8[4];
      plVar7 = plVar6;
      plVar6 = plVar8;
      while (uVar10 <= uVar9) {
        if (uVar9 <= uVar10) {
          if (iVar2 < (int)plVar6[5]) break;
          if (iVar2 <= (int)plVar6[5]) goto LAB_007e1bcc;
        }
        plVar7 = plVar6 + 1;
        plVar8 = (long *)*plVar7;
        if (plVar8 == (long *)0x0) goto LAB_007e1bcc;
        plVar6 = plVar8;
        uVar10 = plVar8[4];
      }
      plVar8 = (long *)*plVar6;
    } while (plVar8 != (long *)0x0);
    plVar7 = plVar6;
LAB_007e1bcc:
    lVar4 = *plVar7;
  }
  if (lVar4 != 0) {
    return 0;
  }
  p_Var3 = operator_new(0x38);
  *(ulong *)(p_Var3 + 0x20) = uVar9;
  *(int *)(p_Var3 + 0x28) = iVar2;
  *(long *)(p_Var3 + 0x30) = param_2;
  *(long **)(p_Var3 + 0x10) = plVar6;
  *(undefined8 *)p_Var3 = 0;
  *(undefined8 *)(p_Var3 + 8) = 0;
  *plVar7 = (long)p_Var3;
  if (**(long **)(param_1 + 0x140) != 0) {
    *(long *)(param_1 + 0x140) = **(long **)(param_1 + 0x140);
    p_Var3 = (__tree_node_base *)*plVar7;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
            (*(__tree_node_base **)(param_1 + 0x148),p_Var3);
  *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x150) + 1;
  puVar1 = *(ulong **)(param_1 + 0x1a8);
  if (puVar1 != *(ulong **)(param_1 + 0x1b0)) {
    *puVar1 = uVar9;
    *(int *)(puVar1 + 1) = iVar2;
    *(long *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x1a8) + 0x10;
    return 1;
  }
  __src = *(void **)(param_1 + 0x1a0);
  __n = (long)puVar1 - (long)__src;
  uVar10 = ((long)__n >> 4) + 1;
  if (uVar10 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = (long)*(ulong **)(param_1 + 0x1b0) - (long)__src;
  if ((ulong)(lVar4 >> 4) < 0x7ffffffffffffff) {
    uVar5 = lVar4 >> 3;
    if (uVar10 <= uVar5) {
      uVar10 = uVar5;
    }
    if (uVar10 == 0) {
      __dest = (void *)0x0;
      goto LAB_007e1cac;
    }
    if (uVar10 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    uVar10 = 0xfffffffffffffff;
  }
  __dest = operator_new(uVar10 << 4);
LAB_007e1cac:
  puVar1 = (ulong *)((long)__dest + ((long)__n >> 4) * 0x10);
  *(int *)(puVar1 + 1) = iVar2;
  *puVar1 = uVar9;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(param_1 + 0x1a0) = __dest;
  *(ulong **)(param_1 + 0x1a8) = puVar1 + 2;
  *(void **)(param_1 + 0x1b0) = (void *)((long)__dest + uVar10 * 0x10);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
  return 1;
}


