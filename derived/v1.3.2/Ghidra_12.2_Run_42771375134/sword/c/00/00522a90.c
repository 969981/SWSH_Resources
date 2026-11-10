/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00522a90; name: FUN_00522a90
 */


/* WARNING: Removing unreachable block (ram,0x00522f6c) */

undefined8 FUN_00522a90(long param_1,long *param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  int iVar13;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined8 local_14c;
  undefined4 local_144;
  undefined1 local_140;
  undefined2 local_13f;
  undefined1 local_13d;
  undefined1 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined8 local_e4;
  undefined1 local_dc;
  undefined1 local_db;
  undefined2 local_d8 [4];
  undefined1 auStack_d0 [96];
  undefined2 local_70;
  
  puVar5 = PTR_DAT_02713978;
  if (*(char *)(param_1 + 0x1170) != '\0') {
    return 0;
  }
  uVar3 = 0;
  if (*(int *)PTR_DAT_02713978 != 1) {
    uVar3 = 3;
  }
  if (*(int *)PTR_DAT_02713978 == 0) {
    uVar3 = 0xffffffffffffffff;
  }
  FUN_005bc810(uVar3);
  lVar8 = param_1 + 0x1178;
  FUN_005cbdf0(lVar8);
  plVar2 = (long *)FUN_005cbff0();
  uVar3 = (**(code **)(*plVar2 + 0x30))();
  FUN_005ecc70(auStack_d0,uVar3);
  local_70 = 0;
  plVar2 = (long *)FUN_005cbff0();
  (**(code **)(*plVar2 + 0xd0))(plVar2,auStack_d0);
  puVar6 = PTR_DAT_02713970;
  if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)puVar5 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0xa330);
    FUN_00517ae0("IPfxBaseContext::CreateInternalResource_SiGfx(): SiGfxInit() succeeded.\n");
  }
  *(undefined8 *)(param_1 + 0x1208) = 0;
  puVar5 = PTR_DAT_02713a08;
  if (*(long *)PTR_DAT_02713a08 != 0) {
    plVar2 = (long *)(**(code **)(*(long *)(param_1 + 0x1178) + 0x38))
                               (lVar8,0x2c0,0x10,
                                "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0xa337);
    FUN_005bcb10(plVar2,0);
    *(long **)(param_1 + 0x1208) = plVar2;
    uVar4 = (**(code **)(*plVar2 + 0xa8))
                      (plVar2,lVar8,0x200,*(undefined8 *)puVar5,(long)*(int *)PTR_DAT_02713a10);
    if ((uVar4 & 1) == 0) {
      FUN_005cbe80();
      if ((*(int *)puVar6 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0xa340)
        ;
        FUN_00517ae0(
                    "CPostEffect::CreateInternalResource_SiGfx(): m_nvnMemoryPoolStorageAllocator.InitHeap()==false\n"
                    );
        FUN_005ecd30(auStack_d0);
        return 1;
      }
      goto LAB_005231e0;
    }
  }
  plVar2 = (long *)FUN_005cbff0();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x128))();
  (**(code **)(*plVar2 + 0x28))(plVar2,*(undefined8 *)(param_1 + 0x1208));
  if (*(long **)(param_1 + 0x11a0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x11a0) + 0x18))();
    *(undefined8 *)(param_1 + 0x11a0) = 0;
  }
  plVar2 = (long *)FUN_005cbff0();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))(plVar2,8,0);
  *(long **)(param_1 + 0x11a0) = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x280))(plVar2,0);
    puVar5 = *(undefined **)(param_3 + 0x20);
    puVar12 = *(undefined **)(param_3 + 0x28);
    puVar6 = *(undefined **)(param_3 + 0x30);
    puVar7 = *(undefined **)(param_3 + 0x38);
    uVar3 = *(undefined8 *)(param_3 + 0x40);
    uVar9 = *(undefined8 *)(param_3 + 0x48);
    uVar10 = *(undefined8 *)(param_3 + 0x50);
    uVar11 = *(undefined8 *)(param_3 + 0x58);
    if (puVar5 == (undefined *)0x0) {
      if (puVar6 == (undefined *)0x0) {
        iVar1 = *(int *)PTR_DAT_02713a18;
        iVar13 = *(int *)PTR_DAT_02713a20;
        if (iVar1 < 0) {
          iVar1 = (**(code **)PTR_DAT_02713a30)(*(undefined8 *)PTR_DAT_02713a28);
          iVar1 = iVar1 - iVar13;
        }
        puVar5 = PTR_DAT_02713a38;
        (**(code **)PTR_DAT_02713a38)(*(undefined8 *)(param_3 + 0x18),0x11,&local_190);
        (**(code **)puVar5)(*(undefined8 *)(param_3 + 0x18),0x24,local_d8);
        if (*(long *)(param_1 + 0x1220) != 0) {
          plVar2 = *(long **)(param_1 + 0x1218);
          lVar8 = *(long *)(param_1 + 0x1210);
          *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(lVar8 + 8);
          **(long **)(lVar8 + 8) = *plVar2;
          *(undefined8 *)(param_1 + 0x1220) = 0;
          puVar5 = PTR_PTR_02713988;
          while (plVar2 != (long *)(param_1 + 0x1210)) {
            plVar2 = (long *)plVar2[1];
            FUN_005b9b10(*(undefined8 *)puVar5);
          }
        }
        puVar5 = PTR_PTR_02713988;
        if (0 < iVar13) {
          do {
            plVar2 = (long *)FUN_005b9a50(*(undefined8 *)puVar5,0x18,
                                          "../src/GPU/GPUMemoryAllocator.h",0x1b8,0);
            *(int *)(plVar2 + 2) = iVar1;
            *plVar2 = 0;
            plVar2[1] = param_1 + 0x1210;
            lVar8 = *(long *)(param_1 + 0x1210);
            iVar13 = iVar13 + -1;
            iVar1 = iVar1 + 1;
            *plVar2 = lVar8;
            *(long **)(lVar8 + 8) = plVar2;
            *(long **)(param_1 + 0x1210) = plVar2;
            *(long *)(param_1 + 0x1220) = *(long *)(param_1 + 0x1220) + 1;
          } while (iVar13 != 0);
        }
        uVar3 = 0;
        uVar10 = 0;
        puVar5 = PTR_LAB_02713a40;
        puVar6 = PTR_LAB_02713a48;
      }
    }
    if ((puVar12 == (undefined *)0x0) && (puVar7 == (undefined *)0x0)) {
      iVar1 = *(int *)PTR_DAT_02713a18;
      iVar13 = *(int *)PTR_DAT_02713a20;
      if (iVar1 < 0) {
        iVar1 = (**(code **)PTR_DAT_02713a58)(*(undefined8 *)PTR_DAT_02713a50);
        iVar1 = iVar1 - iVar13;
      }
      puVar12 = PTR_DAT_02713a38;
      (**(code **)PTR_DAT_02713a38)(*(undefined8 *)(param_3 + 0x18),0x12,&local_190);
      (**(code **)puVar12)(*(undefined8 *)(param_3 + 0x18),0x25,local_d8);
      if (*(long *)(param_1 + 0x1238) != 0) {
        plVar2 = *(long **)(param_1 + 0x1230);
        lVar8 = *(long *)(param_1 + 0x1228);
        *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(lVar8 + 8);
        **(long **)(lVar8 + 8) = *plVar2;
        *(undefined8 *)(param_1 + 0x1238) = 0;
        puVar12 = PTR_PTR_02713988;
        while (plVar2 != (long *)(param_1 + 0x1228)) {
          plVar2 = (long *)plVar2[1];
          FUN_005b9b10(*(undefined8 *)puVar12);
        }
      }
      puVar12 = PTR_PTR_02713988;
      if (0 < iVar13) {
        do {
          plVar2 = (long *)FUN_005b9a50(*(undefined8 *)puVar12,0x18,
                                        "../src/GPU/GPUMemoryAllocator.h",0x1b8,0);
          *(int *)(plVar2 + 2) = iVar1;
          *plVar2 = 0;
          plVar2[1] = param_1 + 0x1228;
          lVar8 = *(long *)(param_1 + 0x1228);
          iVar13 = iVar13 + -1;
          iVar1 = iVar1 + 1;
          *plVar2 = lVar8;
          *(long **)(lVar8 + 8) = plVar2;
          *(long **)(param_1 + 0x1228) = plVar2;
          *(long *)(param_1 + 0x1238) = *(long *)(param_1 + 0x1238) + 1;
        } while (iVar13 != 0);
      }
      uVar9 = 0;
      uVar11 = 0;
      puVar7 = PTR_LAB_02713a68;
      puVar12 = PTR_LAB_02713a60;
    }
    local_190 = 0x1ffffffff;
    local_188 = 0xb00000001;
    local_130 = 4;
    local_140 = 0;
    local_13c = 0;
    local_f4 = 0x400000;
    local_dc = 1;
    local_180 = 0xc0000000c100;
    local_178 = 0xb2000000b300;
    local_170 = 0xb0000000b100;
    local_168 = 0xa0000000a100;
    local_160 = 0x920000009300;
    local_158 = 0x9100;
    local_144 = 0;
    local_14c = 0;
    local_154 = 0;
    local_e4 = 0;
    local_13f = 0;
    local_13d = 0;
    local_138 = 0x100;
    local_124 = 0x40000000020;
    local_11c = 0x10000000100;
    local_114 = 0x10000000000;
    local_12c = 0;
    local_db = 0;
    local_fc = 0;
    local_104 = 0;
    local_10c = 0;
    local_ec = 0x80000;
    uStack_e8 = 0;
    uVar4 = (**(code **)(**(long **)(param_1 + 0x11a0) + 0x2c0))
                      (*(long **)(param_1 + 0x11a0),&local_190,*(undefined8 *)(param_3 + 0x18),0,
                       puVar5,puVar12,puVar6,puVar7,uVar3,uVar9,uVar10,uVar11);
    puVar6 = PTR_DAT_02713978;
    puVar5 = PTR_DAT_02713970;
    if ((uVar4 & 1) != 0) {
      if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0xa3c9);
        FUN_00517ae0(
                    "CPostEffect::CreateInternalResource_SiGfx(): SiGfxGetKernel()->CreateDevice() succeeded.\n"
                    );
      }
      if (*(long **)(param_1 + 0x11a8) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x11a8) + 0x18))();
        *(undefined8 *)(param_1 + 0x11a8) = 0;
      }
      local_d8[0] = 0;
      lVar8 = (**(code **)(**(long **)(param_1 + 0x11a0) + 0xa8))
                        (*(long **)(param_1 + 0x11a0),1,0,local_d8,0);
      *(long *)(param_1 + 0x11a8) = lVar8;
      if (lVar8 != 0) {
        *param_2 = lVar8;
        if ((*(int *)puVar5 != 0) && (*(int *)puVar6 != 0)) {
          FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0xa3da);
          FUN_00517ae0(
                      "CPostEffect::CreateInternalResource_SiGfx(): ISiGfxDrawContext::CreateDrawContext() succeeded.\n"
                      );
        }
        if (*(long **)(param_1 + 0x1198) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x1198) + 0x18))();
          *(undefined8 *)(param_1 + 0x1198) = 0;
        }
        lVar8 = (**(code **)(**(long **)(param_1 + 0x11a0) + 0xb0))
                          (*(long **)(param_1 + 0x11a0),1,0,0);
        *(long *)(param_1 + 0x1198) = lVar8;
        if (lVar8 != 0) {
          if (*(long **)(param_1 + 0x11c0) != (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0x11c0) + 0x18))();
            *(undefined8 *)(param_1 + 0x11c0) = 0;
          }
          if ((*(int *)puVar5 != 0) && (*(int *)puVar6 != 0)) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0xa3e8);
            FUN_00517ae0(
                        "CPostEffect::CreateInternalResource_SiGfx(): ISiGfxDevice::CreateCommandList() succeeded.\n"
                        );
          }
          *(char *)(param_1 + 0x1170) = '\x01';
          FUN_005ecd30(auStack_d0);
          return 0;
        }
      }
    }
    if (*(long **)(param_1 + 0x11a0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x11a0) + 0x18))();
      *(undefined8 *)(param_1 + 0x11a0) = 0;
    }
  }
  FUN_005cbe80();
LAB_005231e0:
  FUN_005ecd30(auStack_d0);
  return 1;
}


