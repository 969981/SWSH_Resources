/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054c110; name: FUN_0054c110
 */


undefined8 FUN_0054c110(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  char cVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  int unaff_w27;
  undefined4 unaff_w28;
  
  if ((param_2 == 0) || (lVar12 = *(long *)(param_2 + 0x88), lVar12 == 0)) {
    return 0xffffffff;
  }
  plVar13 = *(long **)(param_1 + 0x80);
  iVar4 = *(int *)(lVar12 + 0x28);
  plVar7 = (long *)(**(code **)(*plVar13 + 0xd0))(plVar13,1,0,0);
  if (plVar7 == (long *)0x0) {
    if (*(int *)PTR_DAT_02713970 == 0) {
      return 0xffffffff;
    }
    if (*(int *)PTR_DAT_02713980 == 0) {
      return 0xffffffff;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX ERROR: ",
                 0x18da);
    pcVar8 = 
    "CTinyEffect::CreateSiGfxProgramResources(): pSiGfxDevice->CreateRootSignature() failed.\n";
LAB_0054c3dc:
    FUN_00517ae0(pcVar8);
    uVar9 = 0xffffffff;
  }
  else {
    iVar5 = *(int *)(lVar12 + 0x34);
    iVar2 = *(int *)(lVar12 + 0x2c);
    iVar3 = *(int *)(lVar12 + 0x30);
    iVar6 = *(int *)(lVar12 + 0x38);
    cVar11 = '\x02';
    if (iVar4 == 0) {
      cVar11 = '\x01';
    }
    cVar1 = iVar4 != 0;
    if (iVar2 != 0) {
      cVar1 = cVar11;
    }
    if (iVar3 != 0) {
      cVar1 = cVar1 + '\x01';
    }
    (**(code **)(*plVar7 + 0x40))();
    (**(code **)(*plVar7 + 0x50))(plVar7,cVar1);
    cVar11 = iVar4 != 0;
    if ((bool)cVar11) {
      (**(code **)(*plVar7 + 0x60))(plVar7,0,2,3,0,0);
    }
    if (iVar2 != 0) {
      (**(code **)(*plVar7 + 0x70))(plVar7,cVar11,1,iVar2);
      iVar14 = 0;
      do {
        lVar10 = *(long *)(lVar12 + (long)iVar14 * 8 + 0x40);
        if (lVar10 != 0) {
          unaff_w27 = *(int *)(lVar10 + 0x2c);
          unaff_w28 = *(undefined4 *)(lVar10 + 0x24);
        }
        unaff_w27 = unaff_w27 + 0x10;
        (**(code **)(*plVar7 + 0x78))(plVar7,cVar11,iVar14,1,unaff_w27,0,unaff_w28,0xffffffff);
        iVar14 = iVar14 + 1;
      } while (iVar2 != iVar14);
      cVar11 = cVar11 + '\x01';
    }
    if (iVar3 != 0) {
      (**(code **)(*plVar7 + 0x70))(plVar7,cVar11,2,iVar3);
      iVar14 = 0;
      do {
        lVar10 = *(long *)(lVar12 + (long)iVar14 * 8 + 0x140);
        if (lVar10 != 0) {
          unaff_w27 = *(int *)(lVar10 + 0x2c);
          unaff_w28 = *(undefined4 *)(lVar10 + 0x24);
        }
        (**(code **)(*plVar7 + 0x78))(plVar7,cVar11,iVar14,1,unaff_w27,0,unaff_w28,0xffffffff);
        iVar14 = iVar14 + 1;
      } while (iVar3 != iVar14);
    }
    (**(code **)(*plVar7 + 0x48))(plVar7);
    if ((((iVar2 == 0 && iVar4 == 0) && iVar5 == 0) && iVar3 == 0) && iVar6 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(*plVar13 + 0xe0))(plVar13,1,0,0);
      if (lVar12 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
        if (*(int *)PTR_DAT_02713970 == 0) {
          return 0xffffffff;
        }
        if (*(int *)PTR_DAT_02713980 == 0) {
          return 0xffffffff;
        }
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX ERROR: "
                     ,0x1991);
        pcVar8 = 
        "CTinyEffect::CreateSiGfxProgramResources(): pSiGfxDevice->CreateDescriptorSet() failed.\n";
        goto LAB_0054c3dc;
      }
    }
    uVar9 = 0;
    *(undefined1 *)(param_2 + 0xc0) = 0;
    *(long **)(param_2 + 0x90) = plVar7;
    *(long *)(param_2 + 0x98) = lVar12;
    *(undefined8 *)(param_2 + 0xb0) = 0;
    *(undefined8 *)(param_2 + 0xb8) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
  }
  return uVar9;
}


