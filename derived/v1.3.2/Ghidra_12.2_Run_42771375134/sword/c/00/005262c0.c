/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005262c0; name: FUN_005262c0
 */


undefined8 FUN_005262c0(long param_1)

{
  char *pcVar1;
  void *pvVar2;
  size_t sVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_68;
  
  iVar6 = *(int *)(param_1 + 0x11cc) + -1;
  *(int *)(param_1 + 0x11cc) = iVar6;
  if (iVar6 != 0) {
    return 0;
  }
  lVar14 = *(long *)(param_1 + 0x18);
  plVar10 = *(long **)(lVar14 + 0x30);
  plVar11 = *(long **)(lVar14 + 0x38);
  lVar13 = *(long *)(param_1 + 0x11a0);
  if (lVar13 == 0) {
LAB_00526430:
    lVar12 = *(long *)(lVar14 + 0x40);
    if (lVar12 != *(long *)(lVar14 + 0x48)) {
LAB_0052643c:
      puVar5 = PTR_DAT_02713980;
      puVar4 = PTR_DAT_02713970;
      if (lVar13 == 0) {
        do {
          iVar6 = FUN_0053dd20(lVar12,plVar10);
          if ((iVar6 < 0) && (*(int *)puVar4 != 0 && *(int *)puVar5 != 0)) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                         0xa4b4);
            FUN_00517ae0(
                        "CPostEffect::ExecuteLazyDrawCommand(): Failed GPUSiGfxLazyDrawCommand::Execute().\n"
                        );
          }
          lVar12 = lVar12 + 0x20;
        } while (lVar12 != *(long *)(lVar14 + 0x48));
        local_68 = (**(code **)(*plVar10 + 0x50))(plVar10);
        (**(code **)(*plVar10 + 0x48))(plVar10);
        plVar11 = (long *)(**(code **)(*plVar11 + 0x98))();
        (**(code **)(*plVar11 + 0x50))(plVar11,1,&local_68);
        uVar8 = (**(code **)(*plVar11 + 0x60))(plVar11);
        (**(code **)(*plVar11 + 0x68))(plVar11,uVar8);
        pvVar2 = *(void **)(lVar14 + 0x40);
        if (*(void **)(lVar14 + 0x48) != pvVar2) {
          while( true ) {
            FUN_0053dcb0(pvVar2);
            sVar3 = *(long *)(lVar14 + 0x48) - ((long)pvVar2 + 0x20);
            if (sVar3 == 0) break;
            memmove(pvVar2,(void *)((long)pvVar2 + 0x20),sVar3);
            *(void **)(lVar14 + 0x48) = (void *)((long)pvVar2 + ((long)sVar3 >> 5) * 0x20);
          }
          *(void **)(lVar14 + 0x48) = pvVar2;
        }
        (**(code **)(*plVar10 + 0x40))(plVar10,local_68);
      }
      else {
        local_68 = *(long *)(param_1 + 0x11c0);
        if (local_68 == 0) {
          local_68 = (**(code **)(*plVar11 + 0xb0))(plVar11,1,0,0);
          *(long *)(param_1 + 0x11c0) = local_68;
        }
        uVar9 = (**(code **)(*plVar10 + 0x40))(plVar10);
        puVar5 = PTR_DAT_02713980;
        puVar4 = PTR_DAT_02713970;
        if ((uVar9 & 1) == 0) {
          if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                         0xa48b);
            FUN_00517ae0(
                        "CPostEffect::EndCommandList_SiGfx(): Failed pSiGfxDrawContext->BeginCommandList(pTempCommandList).\n"
                        );
          }
          return 0xffffffff;
        }
        lVar13 = *(long *)(lVar14 + 0x40);
        if (lVar13 != *(long *)(lVar14 + 0x48)) {
          do {
            iVar6 = FUN_0053dd20(lVar13,plVar10);
            if ((iVar6 < 0) && (*(int *)puVar4 != 0 && *(int *)puVar5 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0xa495);
              FUN_00517ae0(
                          "CPostEffect::ExecuteLazyDrawCommand(): Failed GPUSiGfxLazyDrawCommand::Execute().\n"
                          );
            }
            lVar13 = lVar13 + 0x20;
          } while (lVar13 != *(long *)(lVar14 + 0x48));
        }
        (**(code **)(*plVar10 + 0x48))(plVar10);
        plVar10 = (long *)(**(code **)(*plVar11 + 0x98))();
        (**(code **)(*plVar10 + 0x50))(plVar10,1,&local_68);
        uVar8 = (**(code **)(*plVar10 + 0x60))(plVar10);
        (**(code **)(*plVar10 + 0x68))(plVar10,uVar8);
        pvVar2 = *(void **)(lVar14 + 0x40);
        if (*(void **)(lVar14 + 0x48) != pvVar2) {
          while( true ) {
            FUN_0053dcb0(pvVar2);
            sVar3 = *(long *)(lVar14 + 0x48) - ((long)pvVar2 + 0x20);
            if (sVar3 == 0) break;
            memmove(pvVar2,(void *)((long)pvVar2 + 0x20),sVar3);
            *(void **)(lVar14 + 0x48) = (void *)((long)pvVar2 + ((long)sVar3 >> 5) * 0x20);
          }
          *(void **)(lVar14 + 0x48) = pvVar2;
          plVar10 = *(long **)(param_1 + 0x11c0);
          *(undefined8 *)(param_1 + 0x11b0) = 0;
          if (plVar10 == (long *)0x0) {
            return 0;
          }
          goto LAB_00526730;
        }
      }
    }
  }
  else {
    (**(code **)(*plVar10 + 0x50))(plVar10);
    FUN_0053fce0(*(undefined8 *)(param_1 + 0x18));
    puVar5 = PTR_DAT_02713980;
    puVar4 = PTR_DAT_02713970;
    pcVar1 = (char *)(param_1 + 0x11b8);
    if ((*pcVar1 != '\0') && (lVar12 = *(long *)(lVar14 + 0x40), lVar12 != *(long *)(lVar14 + 0x48))
       ) {
      do {
        iVar6 = FUN_0053dd20(lVar12,plVar10);
        if ((iVar6 < 0) && (*(int *)puVar4 != 0 && *(int *)puVar5 != 0)) {
          FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                       0xa462);
          FUN_00517ae0(
                      "CPostEffect::ExecuteLazyDrawCommand(): Failed GPUSiGfxLazyDrawCommand::Execute().\n"
                      );
        }
        lVar12 = lVar12 + 0x20;
      } while (lVar12 != *(long *)(lVar14 + 0x48));
    }
    (**(code **)(*plVar10 + 0x48))(plVar10);
    if (*pcVar1 == '\0') goto LAB_00526430;
    *pcVar1 = '\0';
    plVar7 = (long *)(**(code **)(*plVar11 + 0x98))();
    (**(code **)(*plVar7 + 0x50))(plVar7,1,param_1 + 0x11b0);
    uVar8 = (**(code **)(*plVar7 + 0x60))(plVar7);
    (**(code **)(*plVar7 + 0x68))(plVar7,uVar8);
    pvVar2 = *(void **)(lVar14 + 0x40);
    if (*(void **)(lVar14 + 0x48) == pvVar2) goto LAB_00526430;
    while( true ) {
      FUN_0053dcb0(pvVar2);
      sVar3 = *(long *)(lVar14 + 0x48) - ((long)pvVar2 + 0x20);
      if (sVar3 == 0) break;
      memmove(pvVar2,(void *)((long)pvVar2 + 0x20),sVar3);
      *(void **)(lVar14 + 0x48) = (void *)((long)pvVar2 + ((long)sVar3 >> 5) * 0x20);
    }
    *(void **)(lVar14 + 0x48) = pvVar2;
    lVar12 = *(long *)(lVar14 + 0x40);
    if (lVar12 != *(long *)(lVar14 + 0x48)) goto LAB_0052643c;
  }
  plVar10 = *(long **)(param_1 + 0x11c0);
  *(undefined8 *)(param_1 + 0x11b0) = 0;
  if (plVar10 == (long *)0x0) {
    return 0;
  }
LAB_00526730:
  (**(code **)(*plVar10 + 0x18))();
  *(undefined8 *)(param_1 + 0x11c0) = 0;
  return 0;
}


