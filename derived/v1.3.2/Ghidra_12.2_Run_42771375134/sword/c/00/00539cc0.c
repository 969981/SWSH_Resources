/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00539cc0; name: FUN_00539cc0
 */


undefined8 FUN_00539cc0(char *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  __tree_node_base *p_Var4;
  char *pcVar5;
  __tree_node_base *p_Var6;
  long lVar7;
  long lVar8;
  __tree_node_base *p_Var9;
  long *plVar10;
  __tree_node_base *p_Var11;
  long *plVar12;
  undefined8 uVar13;
  __tree_node_base *p_Var14;
  long *plVar15;
  long *plVar16;
  
  if (param_2 == 0) {
    return 0xfffffffa;
  }
  if (param_2 == param_3) {
    if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139c0 != 0) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",0x8ec6)
      ;
      FUN_00517ae0(
                  "CPostEffect::UnregisterDeviceTexture(): Specified resources gpuTexture and gpuNewTexture are the same.\n"
                  );
    }
    return 1;
  }
  if (*param_1 != '\0') {
    if (*(int *)PTR_DAT_02713970 == 0) {
      return 0xffffffff;
    }
    if (*(int *)PTR_DAT_02713980 == 0) {
      return 0xffffffff;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x8ecd);
    FUN_00517ae0(
                "CPostEffect::UnregisterDeviceTexture(): Cannot be called between BeginPostEffectScene() and EndPostEffectScene().\n"
                );
    return 0xffffffff;
  }
  p_Var6 = (__tree_node_base *)(param_1 + 0xf8);
  p_Var4 = *(__tree_node_base **)p_Var6;
  if (p_Var4 == (__tree_node_base *)0x0) {
    return 0xfffffffa;
  }
  p_Var11 = p_Var4;
  p_Var14 = p_Var6;
  do {
    if (*(ulong *)(p_Var11 + 0x20) >= param_2) {
      p_Var14 = p_Var11;
    }
    p_Var11 = *(__tree_node_base **)(p_Var11 + (ulong)(*(ulong *)(p_Var11 + 0x20) < param_2) * 8);
  } while (p_Var11 != (__tree_node_base *)0x0);
  if (p_Var14 == p_Var6) {
    return 0xfffffffa;
  }
  if (param_2 < *(ulong *)(p_Var14 + 0x20)) {
    return 0xfffffffa;
  }
  if (param_3 != 0) {
    if (*(int *)PTR_DAT_02713970 == 0) {
      return 0xfffffffa;
    }
    if (*(int *)PTR_DAT_02713980 == 0) {
      return 0xfffffffa;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x8eee);
    pcVar5 = 
    "CPostEffect::UnregisterDeviceTexture(): Unable to replace the resource.\nThe specified resources are not compatible with each other."
    ;
LAB_00539e00:
    FUN_00517ae0(pcVar5);
    return 0xfffffffa;
  }
  plVar15 = *(long **)(p_Var14 + 0x28);
  lVar7 = *(long *)(param_1 + 0x50);
  if (*(long *)(param_1 + 0x50) != 0) {
    do {
      lVar8 = lVar7;
      lVar7 = *(long *)(lVar8 + 0x120);
    } while (lVar7 != 0);
    if (plVar15 == *(long **)(lVar8 + 0xa8)) {
      if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
        return 0xfffffffa;
      }
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x8efe);
      pcVar5 = 
      "CPostEffect::UnregisterDeviceTexture(): The resource is currently bound for SetDepthFactorSource().\nUnbind the resource before unregistering.\n"
      ;
      goto LAB_00539e00;
    }
  }
  lVar7 = *(long *)(param_1 + 0x70);
  if (*(long *)(param_1 + 0x70) != 0) {
    do {
      lVar8 = lVar7;
      lVar7 = *(long *)(lVar8 + 0x120);
    } while (lVar7 != 0);
    if (plVar15 == *(long **)(lVar8 + 0xa8)) {
      if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
        return 0xfffffffa;
      }
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x8f0a);
      pcVar5 = 
      "CPostEffect::UnregisterDeviceTexture(): The resource is currently bound for SetEffectSource().\nUnbind the resource before unregistering.\n"
      ;
      goto LAB_00539e00;
    }
  }
  lVar7 = *(long *)(param_1 + 0x80);
  if (*(long *)(param_1 + 0x80) != 0) {
    do {
      lVar8 = lVar7;
      lVar7 = *(long *)(lVar8 + 0x120);
    } while (lVar7 != 0);
    if (plVar15 == *(long **)(lVar8 + 0xa8)) {
      if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
        return 0xfffffffa;
      }
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x8f16);
      pcVar5 = 
      "CPostEffect::UnregisterDeviceTexture(): The resource is currently bound for SetDepthOfFieldDepthRemapLutSource().\nUnbind the resource before unregistering.\n"
      ;
      goto LAB_00539e00;
    }
  }
  lVar7 = *(long *)(param_1 + 0xb8);
  if (*(long *)(param_1 + 0xb8) != 0) {
    do {
      lVar8 = lVar7;
      lVar7 = *(long *)(lVar8 + 0x120);
    } while (lVar7 != 0);
    if (plVar15 == *(long **)(lVar8 + 0xa8)) {
      if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
        return 0xfffffffa;
      }
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x8f22);
      pcVar5 = 
      "CPostEffect::UnregisterDeviceTexture(): The resource is currently bound for SetGlareModulatorSource().\nUnbind the resource before unregistering.\n"
      ;
      goto LAB_00539e00;
    }
  }
  if (*(long **)(param_1 + 0x178) == plVar15) {
    if (*(int *)PTR_DAT_02713970 == 0) {
      return 0xfffffffa;
    }
    if (*(int *)PTR_DAT_02713980 == 0) {
      return 0xfffffffa;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x8f2d);
    pcVar5 = 
    "CPostEffect::UnregisterDeviceTexture(): The resource is currently bound for SetColorGradingLutSource().\nUnbind the resource before unregistering.\n"
    ;
    goto LAB_00539e00;
  }
  p_Var11 = *(__tree_node_base **)(param_1 + 0x110);
  p_Var6 = (__tree_node_base *)(param_1 + 0x110);
  if (p_Var11 != (__tree_node_base *)0x0) {
    p_Var9 = p_Var6;
    do {
      if (*(ulong *)(p_Var11 + 0x20) >= param_2) {
        p_Var9 = p_Var11;
      }
      p_Var11 = *(__tree_node_base **)(p_Var11 + (ulong)(*(ulong *)(p_Var11 + 0x20) < param_2) * 8);
    } while (p_Var11 != (__tree_node_base *)0x0);
    if ((p_Var9 != p_Var6) && (*(ulong *)(p_Var9 + 0x20) <= param_2)) {
      plVar16 = *(long **)(p_Var9 + 0x28);
      bVar3 = plVar16 == (long *)0x0;
      plVar12 = *(long **)(p_Var14 + 8);
      goto joined_r0x00539ef8;
    }
  }
  plVar16 = (long *)0x0;
  bVar3 = true;
  plVar12 = *(long **)(p_Var14 + 8);
  p_Var9 = p_Var6;
joined_r0x00539ef8:
  if (plVar12 == (long *)0x0) {
    p_Var6 = p_Var14 + 0x10;
    plVar10 = *(long **)p_Var6;
    if ((__tree_node_base *)*plVar10 != p_Var14) {
      do {
        lVar7 = *(long *)p_Var6;
        p_Var6 = (__tree_node_base *)(lVar7 + 0x10);
        plVar10 = *(long **)p_Var6;
      } while (*plVar10 != lVar7);
    }
  }
  else {
    do {
      plVar10 = plVar12;
      plVar12 = (long *)*plVar10;
    } while ((long *)*plVar10 != (long *)0x0);
  }
  if (*(__tree_node_base **)(param_1 + 0xf0) == p_Var14) {
    *(long **)(param_1 + 0xf0) = plVar10;
  }
  *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) + -1;
  std::__tree_remove<std::__tree_node_base<void*>*>(p_Var4,p_Var14);
  puVar2 = PTR_PTR_02713988;
  FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,p_Var14);
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 8))(plVar15);
  }
  if (!bVar3) {
    plVar15 = *(long **)(p_Var9 + 8);
    if (*(long **)(p_Var9 + 8) == (long *)0x0) {
      p_Var4 = p_Var9 + 0x10;
      plVar12 = *(long **)p_Var4;
      if ((__tree_node_base *)*plVar12 != p_Var9) {
        do {
          lVar7 = *(long *)p_Var4;
          p_Var4 = (__tree_node_base *)(lVar7 + 0x10);
          plVar12 = *(long **)p_Var4;
        } while (*plVar12 != lVar7);
      }
    }
    else {
      do {
        plVar12 = plVar15;
        plVar15 = (long *)*plVar12;
      } while ((long *)*plVar12 != (long *)0x0);
    }
    if (*(__tree_node_base **)(param_1 + 0x108) == p_Var9) {
      *(long **)(param_1 + 0x108) = plVar12;
    }
    *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + -1;
    std::__tree_remove<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x110),p_Var9);
    FUN_005b9b10(*(undefined8 *)puVar2,p_Var9);
    iVar1 = (int)plVar16[1] + -1;
    *(int *)(plVar16 + 1) = iVar1;
    if (iVar1 == 0) {
      uVar13 = *(undefined8 *)puVar2;
      (**(code **)(*plVar16 + 0x20))(plVar16);
      FUN_005b9b10(uVar13,plVar16);
    }
  }
  return 0;
}


