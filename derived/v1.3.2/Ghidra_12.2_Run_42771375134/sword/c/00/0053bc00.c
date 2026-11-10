/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053bc00; name: FUN_0053bc00
 */


undefined8 FUN_0053bc00(long param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  __tree_node_base *p_Var4;
  __tree_node_base *p_Var5;
  long *plVar6;
  long lVar7;
  __tree_node_base *p_Var8;
  long *plVar9;
  
  if (*(__tree_node_base **)(param_1 + 0x11d8) == (__tree_node_base *)0x0) {
    return 0xfffffffa;
  }
  p_Var5 = *(__tree_node_base **)(param_1 + 0x11d8);
  p_Var8 = (__tree_node_base *)(param_1 + 0x11d8);
  do {
    while (p_Var4 = p_Var5, *(ulong *)(p_Var4 + 0x20) < param_2) {
      p_Var5 = *(__tree_node_base **)(p_Var4 + 8);
joined_r0x0053bc60:
      if (p_Var5 == (__tree_node_base *)0x0) goto LAB_0053bc74;
    }
    if ((*(ulong *)(p_Var4 + 0x20) <= param_2) && (*(ulong *)(p_Var4 + 0x28) < param_3)) {
      p_Var5 = *(__tree_node_base **)(p_Var4 + 8);
      goto joined_r0x0053bc60;
    }
    p_Var5 = *(__tree_node_base **)p_Var4;
    p_Var8 = p_Var4;
  } while (*(__tree_node_base **)p_Var4 != (__tree_node_base *)0x0);
LAB_0053bc74:
  if (p_Var8 == (__tree_node_base *)(param_1 + 0x11d8)) {
    return 0xfffffffa;
  }
  if (param_2 < *(ulong *)(p_Var8 + 0x20)) {
    return 0xfffffffa;
  }
  if ((param_2 <= *(ulong *)(p_Var8 + 0x20)) && (param_3 < *(ulong *)(p_Var8 + 0x28))) {
    return 0xfffffffa;
  }
  uVar2 = FUN_00539cc0(param_1,*(undefined8 *)(p_Var8 + 0x30),0);
  puVar1 = PTR_DAT_027139b0;
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  iVar3 = *(int *)PTR_DAT_027139b0;
  if (iVar3 < 1) {
    plVar9 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar9,0);
    *(long **)PTR_DAT_027139b8 = plVar9;
    *(undefined4 *)puVar1 = 1;
LAB_0053bd40:
    if (plVar9 != (long *)0x0) {
      uVar2 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar9 + 0x20))(plVar9);
      FUN_005b9b10(uVar2,plVar9);
      *(undefined8 *)PTR_DAT_027139b8 = 0;
      *(undefined4 *)puVar1 = 0;
      goto joined_r0x0053bd80;
    }
    iVar3 = 0;
  }
  else {
    plVar9 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar3 + 1;
    if (iVar3 + 1 < 2) goto LAB_0053bd40;
  }
  *(int *)puVar1 = iVar3;
joined_r0x0053bd80:
  if (((plVar9 != (long *)0x0) && (plVar9[6] != 0)) && (*(long *)(plVar9[6] + 0x78) != 0)) {
    FUN_0054dfa0();
  }
  if (*(long **)(p_Var8 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(p_Var8 + 0x30) + 0x18))();
    *(undefined8 *)(p_Var8 + 0x30) = 0;
  }
  if (*(long *)(p_Var8 + 0x38) != 0) {
    plVar9 = (long *)FUN_005cbff0();
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))();
    if ((plVar9 != (long *)0x0) && (*(long *)(p_Var8 + 0x38) != 0)) {
      (**(code **)(*plVar9 + 0x48))
                (plVar9,*(long *)(p_Var8 + 0x38),
                 "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0xa577);
    }
    *(undefined8 *)(p_Var8 + 0x38) = 0;
  }
  plVar9 = *(long **)(p_Var8 + 8);
  if (*(long **)(p_Var8 + 8) == (long *)0x0) {
    p_Var5 = p_Var8 + 0x10;
    plVar6 = *(long **)p_Var5;
    if ((__tree_node_base *)*plVar6 != p_Var8) {
      do {
        lVar7 = *(long *)p_Var5;
        p_Var5 = (__tree_node_base *)(lVar7 + 0x10);
        plVar6 = *(long **)p_Var5;
      } while (*plVar6 != lVar7);
    }
  }
  else {
    do {
      plVar6 = plVar9;
      plVar9 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
  if (*(__tree_node_base **)(param_1 + 0x11d0) == p_Var8) {
    *(long **)(param_1 + 0x11d0) = plVar6;
  }
  *(long *)(param_1 + 0x11e0) = *(long *)(param_1 + 0x11e0) + -1;
  std::__tree_remove<std::__tree_node_base<void*>*>(*(__tree_node_base **)(param_1 + 0x11d8),p_Var8)
  ;
  FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,p_Var8);
  return 0;
}


