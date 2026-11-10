/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00539a90; name: FUN_00539a90
 */


undefined8 FUN_00539a90(char *param_1,ulong param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char *pcVar3;
  __tree_node_base *p_Var4;
  __tree_node_base *p_Var5;
  long *plVar6;
  __tree_node_base *p_Var7;
  long lVar8;
  __tree_node_base *p_Var9;
  long *plVar10;
  
  if (*param_1 != '\0') {
    if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
      return 0xffffffff;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x8e6f);
    FUN_00517ae0(
                "CPostEffect::UnregisterDeviceSurface(): Cannot be called between BeginPostEffectScene() and EndPostEffectScene().\n"
                );
    return 0xffffffff;
  }
  p_Var5 = (__tree_node_base *)(param_1 + 0xe0);
  p_Var4 = *(__tree_node_base **)p_Var5;
  if (p_Var4 == (__tree_node_base *)0x0) {
    return 0xfffffffa;
  }
  p_Var7 = p_Var4;
  p_Var9 = p_Var5;
  do {
    if (*(ulong *)(p_Var7 + 0x20) >= param_2) {
      p_Var9 = p_Var7;
    }
    p_Var7 = *(__tree_node_base **)(p_Var7 + (ulong)(*(ulong *)(p_Var7 + 0x20) < param_2) * 8);
  } while (p_Var7 != (__tree_node_base *)0x0);
  if (p_Var9 == p_Var5) {
    return 0xfffffffa;
  }
  if (param_2 < *(ulong *)(p_Var9 + 0x20)) {
    return 0xfffffffa;
  }
  if (param_3 == 0) {
    plVar10 = *(long **)(p_Var9 + 0x28);
    if (plVar10 == *(long **)(param_1 + 0x120)) {
      uVar2 = 0xfffffffa;
      if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x8e9f)
        ;
        pcVar3 = 
        "CPostEffect::UnregisterDeviceSurface(): The resource is currently bound for SetTonemapDestination().\nUnbind the resource before unregistering.\n"
        ;
        goto LAB_00539bb4;
      }
    }
    else {
      plVar1 = *(long **)(p_Var9 + 8);
      if (*(long **)(p_Var9 + 8) == (long *)0x0) {
        p_Var5 = p_Var9 + 0x10;
        plVar6 = *(long **)p_Var5;
        if ((__tree_node_base *)*plVar6 != p_Var9) {
          do {
            lVar8 = *(long *)p_Var5;
            p_Var5 = (__tree_node_base *)(lVar8 + 0x10);
            plVar6 = *(long **)p_Var5;
          } while (*plVar6 != lVar8);
        }
      }
      else {
        do {
          plVar6 = plVar1;
          plVar1 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if (*(__tree_node_base **)(param_1 + 0xd8) == p_Var9) {
        *(long **)(param_1 + 0xd8) = plVar6;
      }
      *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>(p_Var4,p_Var9);
      FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,p_Var9);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xfffffffa;
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x8e91);
      pcVar3 = 
      "CPostEffect::UnregisterDeviceSurface(): Unable to replace the resource.\nThe specified resources are not compatible with each other."
      ;
LAB_00539bb4:
      FUN_00517ae0(pcVar3);
      return 0xfffffffa;
    }
  }
  return uVar2;
}


