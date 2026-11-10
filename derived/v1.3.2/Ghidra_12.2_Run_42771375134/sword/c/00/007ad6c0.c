/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ad6c0; name: FUN_007ad6c0
 */


__tree_node_base * FUN_007ad6c0(long param_1)

{
  undefined4 uVar1;
  __tree_node_base *p_Var2;
  ulong uVar3;
  ulong uVar4;
  __tree_node_base *p_Var5;
  __tree_node_base *p_Var6;
  long *plVar7;
  __tree_node_base *p_Var8;
  __tree_node_base *p_Var9;
  
  plVar7 = (long *)(param_1 + 0x20);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  uVar3 = FUN_017d2ec0();
  p_Var8 = (__tree_node_base *)(param_1 + 0x70);
  p_Var5 = *(__tree_node_base **)p_Var8;
  if (p_Var5 != (__tree_node_base *)0x0) {
    p_Var6 = p_Var8;
    do {
      if (*(ulong *)(p_Var5 + 0x20) >= uVar3) {
        p_Var6 = p_Var5;
      }
      p_Var5 = *(__tree_node_base **)(p_Var5 + (ulong)(*(ulong *)(p_Var5 + 0x20) < uVar3) * 8);
    } while (p_Var5 != (__tree_node_base *)0x0);
    if ((p_Var6 != p_Var8) && (*(ulong *)(p_Var6 + 0x20) <= uVar3)) goto LAB_007ad8f8;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = FUN_017d2ec0();
  p_Var5 = *(__tree_node_base **)(param_1 + 0x70);
  if (p_Var5 == (__tree_node_base *)0x0) {
    p_Var9 = p_Var8;
    p_Var6 = p_Var8;
LAB_007ad7a8:
    p_Var5 = *(__tree_node_base **)p_Var9;
    p_Var2 = p_Var9;
  }
  else {
    uVar4 = *(ulong *)(p_Var5 + 0x20);
    p_Var9 = (__tree_node_base *)(param_1 + 0x70);
    while( true ) {
      while( true ) {
        p_Var2 = p_Var5;
        p_Var6 = p_Var2;
        if (uVar3 < uVar4) break;
        if (uVar3 <= uVar4) goto LAB_007ad7a8;
        p_Var9 = p_Var2 + 8;
        p_Var5 = *(__tree_node_base **)p_Var9;
        if (p_Var5 == (__tree_node_base *)0x0) goto LAB_007ad7a8;
        uVar4 = *(ulong *)(p_Var5 + 0x20);
      }
      p_Var5 = *(__tree_node_base **)p_Var2;
      if (p_Var5 == (__tree_node_base *)0x0) break;
      uVar4 = *(ulong *)(p_Var5 + 0x20);
      p_Var9 = p_Var2;
    }
    p_Var5 = *(__tree_node_base **)p_Var2;
  }
  if (p_Var5 == (__tree_node_base *)0x0) {
    p_Var5 = (__tree_node_base *)FUN_017cd750(0x30);
    *(ulong *)(p_Var5 + 0x20) = uVar3;
    *(undefined4 *)(p_Var5 + 0x28) = 0;
    *(undefined8 *)p_Var5 = 0;
    *(undefined8 *)(p_Var5 + 8) = 0;
    *(__tree_node_base **)(p_Var5 + 0x10) = p_Var6;
    *(__tree_node_base **)p_Var2 = p_Var5;
    if (**(long **)(param_1 + 0x68) == 0) {
      p_Var6 = p_Var5;
    }
    else {
      *(long *)(param_1 + 0x68) = **(long **)(param_1 + 0x68);
      p_Var6 = *(__tree_node_base **)p_Var2;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x70),p_Var6);
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
  }
  *(undefined4 *)(p_Var5 + 0x28) = uVar1;
  uVar3 = FUN_017d2ec0();
  p_Var5 = *(__tree_node_base **)p_Var8;
  if (p_Var5 != (__tree_node_base *)0x0) {
    p_Var8 = (__tree_node_base *)(param_1 + 0x70);
    uVar4 = *(ulong *)(p_Var5 + 0x20);
    do {
      if (uVar3 < uVar4) {
        p_Var6 = *(__tree_node_base **)p_Var5;
        p_Var8 = p_Var5;
        if (p_Var6 == (__tree_node_base *)0x0) {
          p_Var6 = *(__tree_node_base **)p_Var5;
          goto joined_r0x007ad8a0;
        }
      }
      else {
        if (uVar3 <= uVar4) goto LAB_007ad874;
        p_Var8 = p_Var5 + 8;
        p_Var6 = *(__tree_node_base **)p_Var8;
        if (p_Var6 == (__tree_node_base *)0x0) goto LAB_007ad874;
      }
      uVar4 = *(ulong *)(p_Var6 + 0x20);
      p_Var5 = p_Var6;
    } while( true );
  }
  p_Var6 = *(__tree_node_base **)p_Var8;
  p_Var5 = p_Var8;
  goto joined_r0x007ad8a0;
LAB_007ad874:
  p_Var6 = *(__tree_node_base **)p_Var8;
joined_r0x007ad8a0:
  if (p_Var6 == (__tree_node_base *)0x0) {
    p_Var6 = (__tree_node_base *)FUN_017cd750(0x30);
    *(ulong *)(p_Var6 + 0x20) = uVar3;
    *(undefined4 *)(p_Var6 + 0x28) = 0;
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *(__tree_node_base **)(p_Var6 + 0x10) = p_Var5;
    *(__tree_node_base **)p_Var8 = p_Var6;
    if (**(long **)(param_1 + 0x68) == 0) {
      p_Var8 = p_Var6;
    }
    else {
      *(long *)(param_1 + 0x68) = **(long **)(param_1 + 0x68);
      p_Var8 = *(__tree_node_base **)p_Var8;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x70),p_Var8);
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
  }
LAB_007ad8f8:
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return p_Var6 + 0x28;
}


