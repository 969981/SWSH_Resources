/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008021b0; name: FUN_008021b0
 */


undefined8 * FUN_008021b0(long param_1,ulong param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  void *__dest;
  __tree_node_base *p_Var3;
  undefined8 *puVar4;
  ulong uVar5;
  void *__src;
  __tree_node_base *p_Var6;
  size_t __n;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  puVar2 = operator_new(0x30);
  puVar2[1] = 0;
  *puVar2 = puVar2 + 1;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[2] = 0;
  puVar2[3] = puVar2 + 4;
  puVar7 = (undefined8 *)(param_1 + 0x20);
  puVar8 = (undefined8 *)*puVar7;
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = puVar7;
LAB_00802260:
    p_Var6 = (__tree_node_base *)*puVar7;
    if (p_Var6 != (__tree_node_base *)0x0) goto LAB_00802268;
LAB_00802294:
    p_Var6 = operator_new(0x40);
    *(undefined8 *)(p_Var6 + 0x30) = 0;
    *(undefined8 *)(p_Var6 + 0x38) = 0;
    *(ulong *)(p_Var6 + 0x20) = param_2;
    *(undefined8 *)(p_Var6 + 0x28) = 0;
    *(undefined8 **)(p_Var6 + 0x10) = puVar8;
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *puVar7 = p_Var6;
    if (**(long **)(param_1 + 0x18) == 0) {
      p_Var3 = p_Var6;
    }
    else {
      *(long *)(param_1 + 0x18) = **(long **)(param_1 + 0x18);
      p_Var3 = (__tree_node_base *)*puVar7;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x20),p_Var3);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    puVar7 = *(undefined8 **)(p_Var6 + 0x30);
    puVar8 = *(undefined8 **)(p_Var6 + 0x38);
    if (puVar7 != puVar8) {
LAB_00802274:
      *puVar7 = puVar2;
      *(long *)(p_Var6 + 0x30) = *(long *)(p_Var6 + 0x30) + 8;
      return puVar2;
    }
  }
  else {
    puVar7 = (undefined8 *)(param_1 + 0x20);
    bVar1 = param_2 <= (ulong)puVar8[4];
    if (!bVar1 || puVar8[4] == param_2) goto LAB_00802238;
    while (puVar7 = puVar8, puVar8 = (undefined8 *)*puVar7, puVar8 != (undefined8 *)0x0) {
      bVar1 = param_2 <= (ulong)puVar8[4];
      if (!bVar1 || puVar8[4] == param_2) {
LAB_00802238:
        do {
          if (bVar1) goto LAB_00802260;
          puVar7 = puVar8 + 1;
          puVar4 = (undefined8 *)*puVar7;
          if (puVar4 == (undefined8 *)0x0) goto LAB_00802260;
          bVar1 = param_2 <= (ulong)puVar4[4];
          puVar8 = puVar4;
        } while (!bVar1 || puVar4[4] == param_2);
      }
    }
    p_Var6 = (__tree_node_base *)*puVar7;
    puVar8 = puVar7;
    if (p_Var6 == (__tree_node_base *)0x0) goto LAB_00802294;
LAB_00802268:
    puVar7 = *(undefined8 **)(p_Var6 + 0x30);
    puVar8 = *(undefined8 **)(p_Var6 + 0x38);
    if (puVar7 != puVar8) goto LAB_00802274;
  }
  __src = *(void **)(p_Var6 + 0x28);
  __n = (long)puVar7 - (long)__src;
  uVar9 = ((long)__n >> 3) + 1;
  if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)((long)puVar8 - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar5 = (long)puVar8 - (long)__src >> 2;
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    if (uVar9 == 0) {
      __dest = (void *)0x0;
      goto LAB_0080234c;
    }
    if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    uVar9 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar9 << 3);
LAB_0080234c:
  puVar7 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar7 = puVar2;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(p_Var6 + 0x28) = __dest;
  *(undefined8 **)(p_Var6 + 0x30) = puVar7 + 1;
  *(void **)(p_Var6 + 0x38) = (void *)((long)__dest + uVar9 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
  return puVar2;
}


