/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00801fc0; name: FUN_00801fc0
 */


void FUN_00801fc0(long *param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  void *__dest;
  __tree_node_base *p_Var2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  __tree_node_base *p_Var7;
  void *__src;
  size_t __n;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  plVar8 = param_1 + 1;
  plVar9 = (long *)*plVar8;
  if (plVar9 == (long *)0x0) {
    plVar9 = plVar8;
LAB_0080204c:
    p_Var7 = (__tree_node_base *)*plVar8;
    if (p_Var7 != (__tree_node_base *)0x0) goto LAB_00802054;
LAB_00802094:
    p_Var7 = operator_new(0x40);
    *(undefined8 *)(p_Var7 + 0x30) = 0;
    *(undefined8 *)(p_Var7 + 0x38) = 0;
    *(ulong *)(p_Var7 + 0x20) = param_2;
    *(undefined8 *)(p_Var7 + 0x28) = 0;
    *(long **)(p_Var7 + 0x10) = plVar9;
    *(undefined8 *)p_Var7 = 0;
    *(undefined8 *)(p_Var7 + 8) = 0;
    *plVar8 = (long)p_Var7;
    if (*(long *)*param_1 == 0) {
      p_Var2 = p_Var7;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var2 = (__tree_node_base *)*plVar8;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var2);
    param_1[2] = param_1[2] + 1;
    puVar6 = *(undefined8 **)(p_Var7 + 0x30);
    puVar4 = *(undefined8 **)(p_Var7 + 0x38);
    if (puVar6 != puVar4) {
LAB_00802060:
      *puVar6 = param_3;
      *(long *)(p_Var7 + 0x30) = *(long *)(p_Var7 + 0x30) + 8;
      return;
    }
  }
  else {
    plVar8 = param_1 + 1;
    bVar1 = param_2 <= (ulong)plVar9[4];
    if (!bVar1 || plVar9[4] == param_2) goto LAB_00802024;
    while (plVar8 = plVar9, plVar9 = (long *)*plVar8, plVar9 != (long *)0x0) {
      bVar1 = param_2 <= (ulong)plVar9[4];
      if (!bVar1 || plVar9[4] == param_2) {
LAB_00802024:
        do {
          if (bVar1) goto LAB_0080204c;
          plVar8 = plVar9 + 1;
          plVar3 = (long *)*plVar8;
          if (plVar3 == (long *)0x0) goto LAB_0080204c;
          bVar1 = param_2 <= (ulong)plVar3[4];
          plVar9 = plVar3;
        } while (!bVar1 || plVar3[4] == param_2);
      }
    }
    p_Var7 = (__tree_node_base *)*plVar8;
    plVar9 = plVar8;
    if (p_Var7 == (__tree_node_base *)0x0) goto LAB_00802094;
LAB_00802054:
    puVar6 = *(undefined8 **)(p_Var7 + 0x30);
    puVar4 = *(undefined8 **)(p_Var7 + 0x38);
    if (puVar6 != puVar4) goto LAB_00802060;
  }
  __src = *(void **)(p_Var7 + 0x28);
  __n = (long)puVar6 - (long)__src;
  uVar10 = ((long)__n >> 3) + 1;
  if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)((long)puVar4 - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar5 = (long)puVar4 - (long)__src >> 2;
    if (uVar10 <= uVar5) {
      uVar10 = uVar5;
    }
    if (uVar10 == 0) {
      __dest = (void *)0x0;
      goto LAB_0080214c;
    }
    if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    uVar10 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar10 << 3);
LAB_0080214c:
  puVar6 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar6 = param_3;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(p_Var7 + 0x28) = __dest;
  *(undefined8 **)(p_Var7 + 0x30) = puVar6 + 1;
  *(void **)(p_Var7 + 0x38) = (void *)((long)__dest + uVar10 * 8);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}


