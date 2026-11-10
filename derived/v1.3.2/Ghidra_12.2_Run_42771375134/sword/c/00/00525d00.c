/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00525d00; name: FUN_00525d00
 */


undefined8 FUN_00525d00(long param_1)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x11a0) != 0) {
    plVar4 = *(long **)(*(long *)(param_1 + 0x18) + 0x30);
    lVar1 = (**(code **)(*plVar4 + 0x50))(plVar4);
    if (lVar1 != 0) {
      if (lVar1 != *(long *)(param_1 + 0x11b0)) {
        return 0xffffffff;
      }
      goto LAB_00525dcc;
    }
    *(char *)(param_1 + 0x11b8) = *(char *)(param_1 + 0x11c8);
    if (*(char *)(param_1 + 0x11c8) == '\0') {
      *(long **)(param_1 + 0x11b0) = *(long **)(param_1 + 0x1198);
      if (*(long *)(param_1 + 0x1200) == 0) {
        if (*(int *)PTR_DAT_02713970 == 0) {
          return 0xffffffff;
        }
        if (*(int *)PTR_DAT_02713980 == 0) {
          return 0xffffffff;
        }
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0xa41c)
        ;
        pcVar3 = 
        "CPostEffect::BeginCommandList_SiGfx(): m_pCurrentNVNcommandBuffer==NULL. Please call SetCurrentCommandBuffer_Nvn().\n"
        ;
        goto LAB_00525e64;
      }
      (**(code **)(**(long **)(param_1 + 0x1198) + 0x90))();
      lVar1 = *(long *)(param_1 + 0x11b0);
    }
    else {
      lVar1 = *(long *)(param_1 + 0x11c0);
      if (lVar1 == 0) {
        lVar1 = (**(code **)(**(long **)(param_1 + 0x11a0) + 0xb0))
                          (*(long **)(param_1 + 0x11a0),1,0,0);
        *(long *)(param_1 + 0x11c0) = lVar1;
      }
      *(long *)(param_1 + 0x11b0) = lVar1;
    }
    uVar2 = (**(code **)(*plVar4 + 0x40))(plVar4,lVar1);
    if ((uVar2 & 1) == 0) {
      if (*(int *)PTR_DAT_02713970 == 0) {
        return 0xffffffff;
      }
      if (*(int *)PTR_DAT_02713980 == 0) {
        return 0xffffffff;
      }
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0xa429);
      pcVar3 = 
      "CPostEffect::BeginCommandList_SiGfx(): Failed pSiGfxDrawContext->BeginCommandList(m_pCurrentUsedSiGfxCommandList).\n"
      ;
LAB_00525e64:
      FUN_00517ae0(pcVar3);
      return 0xffffffff;
    }
  }
LAB_00525dcc:
  *(int *)(param_1 + 0x11cc) = *(int *)(param_1 + 0x11cc) + 1;
  return 0;
}


