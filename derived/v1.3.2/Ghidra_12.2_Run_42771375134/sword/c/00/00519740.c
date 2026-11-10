/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00519740; name: FUN_00519740
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00519740(char *param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  
  puVar3 = PTR_DAT_02713978;
  puVar2 = PTR_DAT_02713970;
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713978 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x2893);
    FUN_00517ae0("==== CPostEffect::Uninitialize() ====\n");
  }
  if (*param_1 != '\0') {
    if (*(int *)puVar2 != 0 && *(int *)PTR_DAT_02713980 != 0) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x289c);
      FUN_00517ae0(
                  "CPostEffect::Uninitialize(): Cannot be called between BeginPostEffectScene() and EndPostEffectScene().\n"
                  );
    }
    return 0xffffffff;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    plVar8 = *(long **)(param_1 + 0x18);
    if (((param_2 == 0) || (plVar8 == (long *)0x0)) ||
       (iVar7 = (**(code **)(*plVar8 + 0x20))(plVar8,param_2), iVar7 < 0)) goto LAB_00519804;
    bVar1 = true;
    plVar8 = *(long **)(param_1 + 0x18);
    *(long *)(param_1 + 0x40) = param_2;
  }
  else {
    if (*(long *)(param_1 + 0x40) == param_2) {
      return 0;
    }
LAB_00519804:
    bVar1 = false;
    plVar8 = *(long **)(param_1 + 0x18);
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    param_1[0x44] = '\0';
    param_1[0x45] = '\0';
    param_1[0x46] = '\0';
    param_1[0x47] = '\0';
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x48))(plVar8,0,0);
    plVar8 = *(long **)(param_1 + 0x18);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x160))(plVar8,0);
      plVar8 = *(long **)(param_1 + 0x18);
      (**(code **)(*plVar8 + 0x148))(plVar8,0xffffffff,1);
      FUN_0059e450(0x3f800000,0x1f,0,0,0,0,0,0,0);
    }
  }
  plVar9 = (long *)(param_1 + 0x18);
  plVar8 = *(long **)(param_1 + 0xd8);
  while (plVar8 != (long *)(param_1 + 0xe0)) {
    if ((long *)plVar8[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar8[5] + 8))();
      plVar8[5] = 0;
    }
    plVar11 = (long *)plVar8[1];
    if ((long *)plVar8[1] == (long *)0x0) {
      plVar11 = plVar8 + 2;
      if (*(long **)*plVar11 == plVar8) {
        plVar8 = (long *)*plVar11;
      }
      else {
        do {
          lVar13 = *plVar11;
          plVar11 = (long *)(lVar13 + 0x10);
          plVar8 = (long *)*plVar11;
        } while (*plVar8 != lVar13);
      }
    }
    else {
      do {
        plVar8 = plVar11;
        plVar11 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
  }
  FUN_0053c590(param_1 + 0xd8,*(undefined8 *)(param_1 + 0xe0));
  *(char **)(param_1 + 0xd8) = param_1 + 0xe0;
  param_1[0xe8] = '\0';
  param_1[0xe9] = '\0';
  param_1[0xea] = '\0';
  param_1[0xeb] = '\0';
  param_1[0xec] = '\0';
  param_1[0xed] = '\0';
  param_1[0xee] = '\0';
  param_1[0xef] = '\0';
  param_1[0xe0] = '\0';
  param_1[0xe1] = '\0';
  param_1[0xe2] = '\0';
  param_1[0xe3] = '\0';
  param_1[0xe4] = '\0';
  param_1[0xe5] = '\0';
  param_1[0xe6] = '\0';
  param_1[0xe7] = '\0';
  plVar8 = *(long **)(param_1 + 0xf0);
  while (plVar8 != (long *)(param_1 + 0xf8)) {
    if ((long *)plVar8[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar8[5] + 8))();
      plVar8[5] = 0;
    }
    plVar11 = (long *)plVar8[1];
    if ((long *)plVar8[1] == (long *)0x0) {
      plVar11 = plVar8 + 2;
      if (*(long **)*plVar11 == plVar8) {
        plVar8 = (long *)*plVar11;
      }
      else {
        do {
          lVar13 = *plVar11;
          plVar11 = (long *)(lVar13 + 0x10);
          plVar8 = (long *)*plVar11;
        } while (*plVar8 != lVar13);
      }
    }
    else {
      do {
        plVar8 = plVar11;
        plVar11 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
  }
  FUN_0053c540(param_1 + 0xf0,*(undefined8 *)(param_1 + 0xf8));
  plVar8 = (long *)(param_1 + 0x110);
  param_1[0xf8] = '\0';
  param_1[0xf9] = '\0';
  param_1[0xfa] = '\0';
  param_1[0xfb] = '\0';
  param_1[0xfc] = '\0';
  param_1[0xfd] = '\0';
  param_1[0xfe] = '\0';
  param_1[0xff] = '\0';
  param_1[0x100] = '\0';
  param_1[0x101] = '\0';
  param_1[0x102] = '\0';
  param_1[0x103] = '\0';
  param_1[0x104] = '\0';
  param_1[0x105] = '\0';
  param_1[0x106] = '\0';
  param_1[0x107] = '\0';
  *(char **)(param_1 + 0xf0) = param_1 + 0xf8;
  puVar4 = PTR_PTR_02713988;
  plVar11 = *(long **)(param_1 + 0x108);
joined_r0x005199b8:
  if (plVar11 != plVar8) {
    do {
      plVar17 = (long *)plVar11[5];
      if (plVar17 != (long *)0x0) {
        iVar7 = (int)plVar17[1] + -1;
        *(int *)(plVar17 + 1) = iVar7;
        if (iVar7 == 0) {
          uVar18 = *(undefined8 *)puVar4;
          (**(code **)(*plVar17 + 0x20))(plVar17);
          FUN_005b9b10(uVar18,plVar17);
        }
        plVar11[5] = 0;
      }
      plVar17 = (long *)plVar11[1];
      if ((long *)plVar11[1] == (long *)0x0) {
        plVar17 = plVar11 + 2;
        bVar6 = *(long **)*plVar17 == plVar11;
        plVar11 = (long *)*plVar17;
        if (bVar6) goto joined_r0x005199b8;
        do {
          lVar13 = *plVar17;
          plVar17 = (long *)(lVar13 + 0x10);
          plVar11 = (long *)*plVar17;
        } while (*plVar11 != lVar13);
      }
      else {
        do {
          plVar11 = plVar17;
          plVar17 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
      if (plVar11 == plVar8) break;
    } while( true );
  }
  FUN_0053c4f0(param_1 + 0x108,*(undefined8 *)(param_1 + 0x110));
  param_1[0x110] = '\0';
  param_1[0x111] = '\0';
  param_1[0x112] = '\0';
  param_1[0x113] = '\0';
  param_1[0x114] = '\0';
  param_1[0x115] = '\0';
  param_1[0x116] = '\0';
  param_1[0x117] = '\0';
  param_1[0x118] = '\0';
  param_1[0x119] = '\0';
  param_1[0x11a] = '\0';
  param_1[0x11b] = '\0';
  param_1[0x11c] = '\0';
  param_1[0x11d] = '\0';
  param_1[0x11e] = '\0';
  param_1[0x11f] = '\0';
  *(long **)(param_1 + 0x108) = plVar8;
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 8))();
    param_1[0x48] = '\0';
    param_1[0x49] = '\0';
    param_1[0x4a] = '\0';
    param_1[0x4b] = '\0';
    param_1[0x4c] = '\0';
    param_1[0x4d] = '\0';
    param_1[0x4e] = '\0';
    param_1[0x4f] = '\0';
  }
  plVar8 = *(long **)(param_1 + 0x198);
  if (plVar8 != (long *)0x0) {
    iVar7 = (int)plVar8[1] + -1;
    *(int *)(plVar8 + 1) = iVar7;
    if (iVar7 == 0) {
      uVar18 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      FUN_005b9b10(uVar18,plVar8);
    }
    param_1[0x198] = '\0';
    param_1[0x199] = '\0';
    param_1[0x19a] = '\0';
    param_1[0x19b] = '\0';
    param_1[0x19c] = '\0';
    param_1[0x19d] = '\0';
    param_1[0x19e] = '\0';
    param_1[0x19f] = '\0';
  }
  plVar8 = *(long **)(param_1 + 0x1a0);
  if (plVar8 != (long *)0x0) {
    iVar7 = (int)plVar8[1] + -1;
    *(int *)(plVar8 + 1) = iVar7;
    if (iVar7 == 0) {
      uVar18 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      FUN_005b9b10(uVar18,plVar8);
    }
    param_1[0x1a0] = '\0';
    param_1[0x1a1] = '\0';
    param_1[0x1a2] = '\0';
    param_1[0x1a3] = '\0';
    param_1[0x1a4] = '\0';
    param_1[0x1a5] = '\0';
    param_1[0x1a6] = '\0';
    param_1[0x1a7] = '\0';
  }
  plVar8 = *(long **)(param_1 + 400);
  if (plVar8 != (long *)0x0) {
    iVar7 = (int)plVar8[1] + -1;
    *(int *)(plVar8 + 1) = iVar7;
    if (iVar7 == 0) {
      uVar18 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      FUN_005b9b10(uVar18,plVar8);
    }
    param_1[400] = '\0';
    param_1[0x191] = '\0';
    param_1[0x192] = '\0';
    param_1[0x193] = '\0';
    param_1[0x194] = '\0';
    param_1[0x195] = '\0';
    param_1[0x196] = '\0';
    param_1[0x197] = '\0';
  }
  plVar8 = *(long **)(param_1 + 0x1b0);
  if (plVar8 != (long *)0x0) {
    iVar7 = (int)plVar8[1] + -1;
    *(int *)(plVar8 + 1) = iVar7;
    if (iVar7 == 0) {
      uVar18 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      FUN_005b9b10(uVar18,plVar8);
    }
    param_1[0x1b0] = '\0';
    param_1[0x1b1] = '\0';
    param_1[0x1b2] = '\0';
    param_1[0x1b3] = '\0';
    param_1[0x1b4] = '\0';
    param_1[0x1b5] = '\0';
    param_1[0x1b6] = '\0';
    param_1[0x1b7] = '\0';
  }
  plVar8 = *(long **)(param_1 + 0x1a8);
  if (plVar8 != (long *)0x0) {
    iVar7 = (int)plVar8[1] + -1;
    *(int *)(plVar8 + 1) = iVar7;
    if (iVar7 == 0) {
      uVar18 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      FUN_005b9b10(uVar18,plVar8);
    }
    param_1[0x1a8] = '\0';
    param_1[0x1a9] = '\0';
    param_1[0x1aa] = '\0';
    param_1[0x1ab] = '\0';
    param_1[0x1ac] = '\0';
    param_1[0x1ad] = '\0';
    param_1[0x1ae] = '\0';
    param_1[0x1af] = '\0';
  }
  plVar8 = *(long **)(param_1 + 0x1d8);
  if (plVar8 != (long *)0x0) {
    iVar7 = (int)plVar8[1] + -1;
    *(int *)(plVar8 + 1) = iVar7;
    if (iVar7 == 0) {
      uVar18 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      FUN_005b9b10(uVar18,plVar8);
    }
    param_1[0x1d8] = '\0';
    param_1[0x1d9] = '\0';
    param_1[0x1da] = '\0';
    param_1[0x1db] = '\0';
    param_1[0x1dc] = '\0';
    param_1[0x1dd] = '\0';
    param_1[0x1de] = '\0';
    param_1[0x1df] = '\0';
  }
  plVar8 = *(long **)(param_1 + 0x1e0);
  if (plVar8 != (long *)0x0) {
    iVar7 = (int)plVar8[1] + -1;
    *(int *)(plVar8 + 1) = iVar7;
    if (iVar7 == 0) {
      uVar18 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      FUN_005b9b10(uVar18,plVar8);
    }
    param_1[0x1e0] = '\0';
    param_1[0x1e1] = '\0';
    param_1[0x1e2] = '\0';
    param_1[0x1e3] = '\0';
    param_1[0x1e4] = '\0';
    param_1[0x1e5] = '\0';
    param_1[0x1e6] = '\0';
    param_1[0x1e7] = '\0';
  }
  plVar8 = *(long **)(param_1 + 0x1e8);
  if (plVar8 != (long *)0x0) {
    iVar7 = (int)plVar8[1] + -1;
    *(int *)(plVar8 + 1) = iVar7;
    if (iVar7 == 0) {
      uVar18 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      FUN_005b9b10(uVar18,plVar8);
    }
    param_1[0x1e8] = '\0';
    param_1[0x1e9] = '\0';
    param_1[0x1ea] = '\0';
    param_1[0x1eb] = '\0';
    param_1[0x1ec] = '\0';
    param_1[0x1ed] = '\0';
    param_1[0x1ee] = '\0';
    param_1[0x1ef] = '\0';
  }
  plVar8 = *(long **)(param_1 + 0x1f0);
  if (plVar8 != (long *)0x0) {
    iVar7 = (int)plVar8[1] + -1;
    *(int *)(plVar8 + 1) = iVar7;
    if (iVar7 == 0) {
      uVar18 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      FUN_005b9b10(uVar18,plVar8);
    }
    param_1[0x1f0] = '\0';
    param_1[0x1f1] = '\0';
    param_1[0x1f2] = '\0';
    param_1[499] = '\0';
    param_1[500] = '\0';
    param_1[0x1f5] = '\0';
    param_1[0x1f6] = '\0';
    param_1[0x1f7] = '\0';
  }
  plVar8 = *(long **)(param_1 + 0x1f8);
  if (plVar8 != (long *)0x0) {
    iVar7 = (int)plVar8[1] + -1;
    *(int *)(plVar8 + 1) = iVar7;
    if (iVar7 == 0) {
      uVar18 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      FUN_005b9b10(uVar18,plVar8);
    }
    param_1[0x1f8] = '\0';
    param_1[0x1f9] = '\0';
    param_1[0x1fa] = '\0';
    param_1[0x1fb] = '\0';
    param_1[0x1fc] = '\0';
    param_1[0x1fd] = '\0';
    param_1[0x1fe] = '\0';
    param_1[0x1ff] = '\0';
  }
  plVar8 = *(long **)(param_1 + 0x200);
  if (plVar8 != (long *)0x0) {
    iVar7 = (int)plVar8[1] + -1;
    *(int *)(plVar8 + 1) = iVar7;
    if (iVar7 == 0) {
      uVar18 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      FUN_005b9b10(uVar18,plVar8);
    }
    param_1[0x200] = '\0';
    param_1[0x201] = '\0';
    param_1[0x202] = '\0';
    param_1[0x203] = '\0';
    param_1[0x204] = '\0';
    param_1[0x205] = '\0';
    param_1[0x206] = '\0';
    param_1[0x207] = '\0';
  }
  plVar8 = *(long **)(param_1 + 0x208);
  if (plVar8 != (long *)0x0) {
    iVar7 = (int)plVar8[1] + -1;
    *(int *)(plVar8 + 1) = iVar7;
    if (iVar7 == 0) {
      uVar18 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      FUN_005b9b10(uVar18,plVar8);
    }
    param_1[0x208] = '\0';
    param_1[0x209] = '\0';
    param_1[0x20a] = '\0';
    param_1[0x20b] = '\0';
    param_1[0x20c] = '\0';
    param_1[0x20d] = '\0';
    param_1[0x20e] = '\0';
    param_1[0x20f] = '\0';
  }
  plVar8 = *(long **)(param_1 + 0x210);
  if (plVar8 != (long *)0x0) {
    iVar7 = (int)plVar8[1] + -1;
    *(int *)(plVar8 + 1) = iVar7;
    if (iVar7 == 0) {
      uVar18 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      FUN_005b9b10(uVar18,plVar8);
    }
    param_1[0x210] = '\0';
    param_1[0x211] = '\0';
    param_1[0x212] = '\0';
    param_1[0x213] = '\0';
    param_1[0x214] = '\0';
    param_1[0x215] = '\0';
    param_1[0x216] = '\0';
    param_1[0x217] = '\0';
  }
  plVar8 = *(long **)(param_1 + 0x218);
  if (plVar8 != (long *)0x0) {
    iVar7 = (int)plVar8[1] + -1;
    *(int *)(plVar8 + 1) = iVar7;
    if (iVar7 == 0) {
      uVar18 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      FUN_005b9b10(uVar18,plVar8);
    }
    param_1[0x218] = '\0';
    param_1[0x219] = '\0';
    param_1[0x21a] = '\0';
    param_1[0x21b] = '\0';
    param_1[0x21c] = '\0';
    param_1[0x21d] = '\0';
    param_1[0x21e] = '\0';
    param_1[0x21f] = '\0';
  }
  puVar4 = PTR_PTR_02713988;
  uVar12 = *(ulong *)(param_1 + 0x260);
  iVar7 = *(int *)(param_1 + 0x400);
  bVar6 = uVar12 == 0;
  if (0 < iVar7) {
    lVar13 = 0;
    do {
      if ((!bVar6) && (plVar8 = *(long **)(uVar12 + lVar13 * 8), plVar8 != (long *)0x0)) {
        iVar7 = (int)plVar8[1] + -1;
        *(int *)(plVar8 + 1) = iVar7;
        if (iVar7 == 0) {
          uVar18 = *(undefined8 *)puVar4;
          (**(code **)(*plVar8 + 0x20))(plVar8);
          FUN_005b9b10(uVar18,plVar8);
        }
        *(undefined8 *)(*(long *)(param_1 + 0x260) + lVar13 * 8) = 0;
        iVar7 = *(int *)(param_1 + 0x400);
        uVar12 = *(ulong *)(param_1 + 0x260);
      }
      lVar13 = lVar13 + 1;
      bVar6 = uVar12 == 0;
    } while (lVar13 < iVar7);
  }
  if (!bVar6) {
    uVar14 = uVar12 + *(long *)(uVar12 - 8) * 8;
    do {
      uVar14 = uVar14 - 8;
    } while (uVar12 <= uVar14);
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    param_1[0x260] = '\0';
    param_1[0x261] = '\0';
    param_1[0x262] = '\0';
    param_1[0x263] = '\0';
    param_1[0x264] = '\0';
    param_1[0x265] = '\0';
    param_1[0x266] = '\0';
    param_1[0x267] = '\0';
  }
  plVar8 = *(long **)(param_1 + 0x228);
  if (plVar8 != (long *)0x0) {
    iVar7 = (int)plVar8[1] + -1;
    *(int *)(plVar8 + 1) = iVar7;
    if (iVar7 == 0) {
      uVar18 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      FUN_005b9b10(uVar18,plVar8);
    }
    param_1[0x228] = '\0';
    param_1[0x229] = '\0';
    param_1[0x22a] = '\0';
    param_1[0x22b] = '\0';
    param_1[0x22c] = '\0';
    param_1[0x22d] = '\0';
    param_1[0x22e] = '\0';
    param_1[0x22f] = '\0';
  }
  plVar8 = *(long **)(param_1 + 0x230);
  if (plVar8 != (long *)0x0) {
    iVar7 = (int)plVar8[1] + -1;
    *(int *)(plVar8 + 1) = iVar7;
    if (iVar7 == 0) {
      uVar18 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      FUN_005b9b10(uVar18,plVar8);
    }
    param_1[0x230] = '\0';
    param_1[0x231] = '\0';
    param_1[0x232] = '\0';
    param_1[0x233] = '\0';
    param_1[0x234] = '\0';
    param_1[0x235] = '\0';
    param_1[0x236] = '\0';
    param_1[0x237] = '\0';
  }
  puVar4 = PTR_PTR_02713988;
  uVar12 = *(ulong *)(param_1 + 0x238);
  iVar7 = *(int *)(param_1 + 0x400);
  bVar6 = uVar12 == 0;
  if (0 < iVar7) {
    lVar13 = 0;
    do {
      if ((!bVar6) && (plVar8 = *(long **)(uVar12 + lVar13 * 8), plVar8 != (long *)0x0)) {
        iVar7 = (int)plVar8[1] + -1;
        *(int *)(plVar8 + 1) = iVar7;
        if (iVar7 == 0) {
          uVar18 = *(undefined8 *)puVar4;
          (**(code **)(*plVar8 + 0x20))(plVar8);
          FUN_005b9b10(uVar18,plVar8);
        }
        *(undefined8 *)(*(long *)(param_1 + 0x238) + lVar13 * 8) = 0;
        iVar7 = *(int *)(param_1 + 0x400);
        uVar12 = *(ulong *)(param_1 + 0x238);
      }
      lVar13 = lVar13 + 1;
      bVar6 = uVar12 == 0;
    } while (lVar13 < iVar7);
  }
  if (!bVar6) {
    uVar14 = uVar12 + *(long *)(uVar12 - 8) * 8;
    do {
      uVar14 = uVar14 - 8;
    } while (uVar12 <= uVar14);
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    param_1[0x238] = '\0';
    param_1[0x239] = '\0';
    param_1[0x23a] = '\0';
    param_1[0x23b] = '\0';
    param_1[0x23c] = '\0';
    param_1[0x23d] = '\0';
    param_1[0x23e] = '\0';
    param_1[0x23f] = '\0';
  }
  uVar12 = *(ulong *)(param_1 + 0x240);
  if (uVar12 != 0) {
    uVar14 = uVar12 + *(long *)(uVar12 - 8) * 4;
    do {
      uVar14 = uVar14 - 4;
    } while (uVar12 <= uVar14);
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    param_1[0x240] = '\0';
    param_1[0x241] = '\0';
    param_1[0x242] = '\0';
    param_1[0x243] = '\0';
    param_1[0x244] = '\0';
    param_1[0x245] = '\0';
    param_1[0x246] = '\0';
    param_1[0x247] = '\0';
  }
  uVar12 = *(ulong *)(param_1 + 0x248);
  if (uVar12 != 0) {
    uVar14 = uVar12 + *(long *)(uVar12 - 8) * 4;
    do {
      uVar14 = uVar14 - 4;
    } while (uVar12 <= uVar14);
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    param_1[0x248] = '\0';
    param_1[0x249] = '\0';
    param_1[0x24a] = '\0';
    param_1[0x24b] = '\0';
    param_1[0x24c] = '\0';
    param_1[0x24d] = '\0';
    param_1[0x24e] = '\0';
    param_1[0x24f] = '\0';
  }
  uVar12 = *(ulong *)(param_1 + 0x250);
  if (uVar12 != 0) {
    uVar14 = uVar12 + *(long *)(uVar12 - 8) * 4;
    do {
      uVar14 = uVar14 - 4;
    } while (uVar12 <= uVar14);
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    param_1[0x250] = '\0';
    param_1[0x251] = '\0';
    param_1[0x252] = '\0';
    param_1[0x253] = '\0';
    param_1[0x254] = '\0';
    param_1[0x255] = '\0';
    param_1[0x256] = '\0';
    param_1[599] = '\0';
  }
  uVar12 = *(ulong *)(param_1 + 600);
  if (uVar12 != 0) {
    uVar14 = uVar12 + *(long *)(uVar12 - 8) * 0x10;
    do {
      uVar14 = uVar14 - 0x10;
    } while (uVar12 <= uVar14);
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    param_1[600] = '\0';
    param_1[0x259] = '\0';
    param_1[0x25a] = '\0';
    param_1[0x25b] = '\0';
    param_1[0x25c] = '\0';
    param_1[0x25d] = '\0';
    param_1[0x25e] = '\0';
    param_1[0x25f] = '\0';
  }
  puVar4 = PTR_DAT_027139b0;
  if (*(long *)(param_1 + 0x268) != 0) {
    iVar7 = *(int *)PTR_DAT_027139b0;
    if (iVar7 < 1) {
      plVar8 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                    "../src/GPU\\GPUClassUtil.h",0x49,0);
      FUN_0056dc10(plVar8,0);
      *(long **)PTR_DAT_027139b8 = plVar8;
      *(undefined4 *)puVar4 = 1;
      if (plVar8 != (long *)0x0) goto LAB_0051a13c;
LAB_0051a200:
      iVar7 = 0;
    }
    else {
      plVar8 = *(long **)PTR_DAT_027139b8;
      *(int *)PTR_DAT_027139b0 = iVar7 + 1;
      if (iVar7 + 1 < 2) {
        if (plVar8 == (long *)0x0) goto LAB_0051a200;
LAB_0051a13c:
        uVar18 = *(undefined8 *)PTR_PTR_02713988;
        (**(code **)(*plVar8 + 0x20))(plVar8);
        FUN_005b9b10(uVar18,plVar8);
        iVar7 = 0;
        *(undefined8 *)PTR_DAT_027139b8 = 0;
      }
    }
    *(int *)puVar4 = iVar7;
    FUN_0059fe70(plVar8[0x534b],*(undefined8 *)(param_1 + 0x268));
    param_1[0x268] = '\0';
    param_1[0x269] = '\0';
    param_1[0x26a] = '\0';
    param_1[0x26b] = '\0';
    param_1[0x26c] = '\0';
    param_1[0x26d] = '\0';
    param_1[0x26e] = '\0';
    param_1[0x26f] = '\0';
  }
  puVar4 = PTR_DAT_027139b0;
  if (*(long *)(param_1 + 0x278) != 0) {
    iVar7 = *(int *)PTR_DAT_027139b0;
    if (iVar7 < 1) {
      plVar8 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                    "../src/GPU\\GPUClassUtil.h",0x49,0);
      FUN_0056dc10(plVar8,0);
      *(long **)PTR_DAT_027139b8 = plVar8;
      *(undefined4 *)puVar4 = 1;
      if (plVar8 != (long *)0x0) goto LAB_0051a25c;
LAB_0051a2e4:
      iVar7 = 0;
    }
    else {
      plVar8 = *(long **)PTR_DAT_027139b8;
      *(int *)PTR_DAT_027139b0 = iVar7 + 1;
      if (iVar7 + 1 < 2) {
        if (plVar8 == (long *)0x0) goto LAB_0051a2e4;
LAB_0051a25c:
        uVar18 = *(undefined8 *)PTR_PTR_02713988;
        (**(code **)(*plVar8 + 0x20))(plVar8);
        FUN_005b9b10(uVar18,plVar8);
        iVar7 = 0;
        *(undefined8 *)PTR_DAT_027139b8 = 0;
      }
    }
    *(int *)puVar4 = iVar7;
    FUN_0059fe70(plVar8[0x534b],*(undefined8 *)(param_1 + 0x278));
    param_1[0x278] = '\0';
    param_1[0x279] = '\0';
    param_1[0x27a] = '\0';
    param_1[0x27b] = '\0';
    param_1[0x27c] = '\0';
    param_1[0x27d] = '\0';
    param_1[0x27e] = '\0';
    param_1[0x27f] = '\0';
  }
  puVar4 = PTR_DAT_027139b0;
  if (*(long *)(param_1 + 0x288) != 0) {
    iVar7 = *(int *)PTR_DAT_027139b0;
    if (iVar7 < 1) {
      plVar8 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                    "../src/GPU\\GPUClassUtil.h",0x49,0);
      FUN_0056dc10(plVar8,0);
      *(long **)PTR_DAT_027139b8 = plVar8;
      *(undefined4 *)puVar4 = 1;
      if (plVar8 != (long *)0x0) goto LAB_0051a340;
LAB_0051a3c8:
      iVar7 = 0;
    }
    else {
      plVar8 = *(long **)PTR_DAT_027139b8;
      *(int *)PTR_DAT_027139b0 = iVar7 + 1;
      if (iVar7 + 1 < 2) {
        if (plVar8 == (long *)0x0) goto LAB_0051a3c8;
LAB_0051a340:
        uVar18 = *(undefined8 *)PTR_PTR_02713988;
        (**(code **)(*plVar8 + 0x20))(plVar8);
        FUN_005b9b10(uVar18,plVar8);
        iVar7 = 0;
        *(undefined8 *)PTR_DAT_027139b8 = 0;
      }
    }
    *(int *)puVar4 = iVar7;
    FUN_0059fd10(plVar8[0x534b],*(undefined4 *)(param_1 + 0x280),*(undefined8 *)(param_1 + 0x288));
    uVar12 = *(ulong *)(param_1 + 0x288);
    if (uVar12 != 0) {
      uVar14 = uVar12 + *(long *)(uVar12 - 8) * 8;
      do {
        uVar14 = uVar14 - 8;
      } while (uVar12 <= uVar14);
      FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
      param_1[0x288] = '\0';
      param_1[0x289] = '\0';
      param_1[0x28a] = '\0';
      param_1[0x28b] = '\0';
      param_1[0x28c] = '\0';
      param_1[0x28d] = '\0';
      param_1[0x28e] = '\0';
      param_1[0x28f] = '\0';
    }
  }
  puVar4 = PTR_PTR_02713988;
  if (0 < *(int *)(param_1 + 0x400)) {
    lVar13 = 0;
    lVar19 = 0x48;
    lVar15 = 0x70;
    do {
      if ((*(long *)(param_1 + 0x2a0) != 0) &&
         (plVar8 = *(long **)(*(long *)(param_1 + 0x2a0) + lVar15), plVar8 != (long *)0x0)) {
        iVar7 = (int)plVar8[1] + -1;
        *(int *)(plVar8 + 1) = iVar7;
        if (iVar7 == 0) {
          uVar18 = *(undefined8 *)puVar4;
          (**(code **)(*plVar8 + 0x20))(plVar8);
          FUN_005b9b10(uVar18,plVar8);
        }
        *(undefined8 *)(*(long *)(param_1 + 0x2a0) + lVar15) = 0;
      }
      if ((*(long *)(param_1 + 0x2a8) != 0) &&
         (plVar8 = *(long **)(*(long *)(param_1 + 0x2a8) + lVar19), plVar8 != (long *)0x0)) {
        iVar7 = (int)plVar8[1] + -1;
        *(int *)(plVar8 + 1) = iVar7;
        if (iVar7 == 0) {
          uVar18 = *(undefined8 *)puVar4;
          (**(code **)(*plVar8 + 0x20))(plVar8);
          FUN_005b9b10(uVar18,plVar8);
        }
        *(undefined8 *)(*(long *)(param_1 + 0x2a8) + lVar19) = 0;
      }
      lVar13 = lVar13 + 1;
      lVar19 = lVar19 + 0x50;
      lVar15 = lVar15 + 0x78;
    } while (lVar13 < *(int *)(param_1 + 0x400));
  }
  if (!bVar1) {
    uVar12 = *(ulong *)(param_1 + 0x2a0);
    if (uVar12 != 0) {
      uVar14 = uVar12 + *(long *)(uVar12 - 8) * 0x78;
      do {
        uVar14 = uVar14 - 0x78;
      } while (uVar12 <= uVar14);
      FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
      param_1[0x2a0] = '\0';
      param_1[0x2a1] = '\0';
      param_1[0x2a2] = '\0';
      param_1[0x2a3] = '\0';
      param_1[0x2a4] = '\0';
      param_1[0x2a5] = '\0';
      param_1[0x2a6] = '\0';
      param_1[0x2a7] = '\0';
    }
    uVar12 = *(ulong *)(param_1 + 0x2a8);
    if (uVar12 != 0) {
      uVar14 = uVar12 + *(long *)(uVar12 - 8) * 0x50;
      do {
        uVar14 = uVar14 - 0x50;
      } while (uVar12 <= uVar14);
      FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
      param_1[0x2a8] = '\0';
      param_1[0x2a9] = '\0';
      param_1[0x2aa] = '\0';
      param_1[0x2ab] = '\0';
      param_1[0x2ac] = '\0';
      param_1[0x2ad] = '\0';
      param_1[0x2ae] = '\0';
      param_1[0x2af] = '\0';
    }
  }
  puVar4 = PTR_DAT_027139b0;
  if (*(int *)(param_1 + 0x580) != 0) {
    iVar7 = *(int *)PTR_DAT_027139b0;
    if (iVar7 < 1) {
      plVar8 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                    "../src/GPU\\GPUClassUtil.h",0x49,0);
      FUN_0056dc10(plVar8,0);
      *(long **)PTR_DAT_027139b8 = plVar8;
      *(undefined4 *)puVar4 = 1;
      if (plVar8 != (long *)0x0) goto LAB_0051a598;
LAB_0051a630:
      *(undefined4 *)puVar4 = 0;
      iVar7 = *(int *)(param_1 + 0x400);
      puVar16 = (undefined8 *)PTR_PTR_02713988;
    }
    else {
      plVar8 = *(long **)PTR_DAT_027139b8;
      *(int *)PTR_DAT_027139b0 = iVar7 + 1;
      if (iVar7 + 1 < 2) {
        if (plVar8 == (long *)0x0) goto LAB_0051a630;
LAB_0051a598:
        uVar18 = *(undefined8 *)PTR_PTR_02713988;
        (**(code **)(*plVar8 + 0x20))(plVar8);
        FUN_005b9b10(uVar18,plVar8);
        iVar7 = 0;
        *(undefined8 *)PTR_DAT_027139b8 = 0;
      }
      *(int *)puVar4 = iVar7;
      iVar7 = *(int *)(param_1 + 0x400);
      puVar16 = (undefined8 *)PTR_PTR_02713988;
    }
    PTR_PTR_02713988 = (undefined *)puVar16;
    if (0 < iVar7) {
      lVar13 = 0;
      do {
        plVar11 = *(long **)(*(long *)(param_1 + 0x570) + lVar13 * 8);
        if (plVar11 != (long *)0x0) {
          iVar7 = (int)plVar11[1] + -1;
          *(int *)(plVar11 + 1) = iVar7;
          if (iVar7 == 0) {
            uVar18 = *puVar16;
            (**(code **)(*plVar11 + 0x20))(plVar11);
            FUN_005b9b10(uVar18,plVar11);
          }
          *(undefined8 *)(*(long *)(param_1 + 0x570) + lVar13 * 8) = 0;
        }
        plVar11 = *(long **)(*(long *)(param_1 + 0x588) + lVar13 * 8);
        if (plVar11 != (long *)0x0) {
          iVar7 = (int)plVar11[1] + -1;
          *(int *)(plVar11 + 1) = iVar7;
          if (iVar7 == 0) {
            uVar18 = *puVar16;
            (**(code **)(*plVar11 + 0x20))(plVar11);
            FUN_005b9b10(uVar18,plVar11);
          }
          *(undefined8 *)(*(long *)(param_1 + 0x588) + lVar13 * 8) = 0;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)(param_1 + 0x400));
    }
    if (0 < *(int *)(param_1 + 0x580)) {
      lVar13 = 0;
      do {
        FUN_0059fe70(plVar8[0x534b],*(undefined8 *)(*(long *)(param_1 + 0x578) + lVar13 * 8));
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)(param_1 + 0x580));
    }
    uVar12 = *(ulong *)(param_1 + 0x570);
    if (uVar12 != 0) {
      uVar14 = uVar12 + *(long *)(uVar12 - 8) * 8;
      do {
        uVar14 = uVar14 - 8;
      } while (uVar12 <= uVar14);
      FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
      param_1[0x570] = '\0';
      param_1[0x571] = '\0';
      param_1[0x572] = '\0';
      param_1[0x573] = '\0';
      param_1[0x574] = '\0';
      param_1[0x575] = '\0';
      param_1[0x576] = '\0';
      param_1[0x577] = '\0';
    }
    uVar12 = *(ulong *)(param_1 + 0x578);
    if (uVar12 != 0) {
      uVar14 = uVar12 + *(long *)(uVar12 - 8) * 8;
      do {
        uVar14 = uVar14 - 8;
      } while (uVar12 <= uVar14);
      FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
      param_1[0x578] = '\0';
      param_1[0x579] = '\0';
      param_1[0x57a] = '\0';
      param_1[0x57b] = '\0';
      param_1[0x57c] = '\0';
      param_1[0x57d] = '\0';
      param_1[0x57e] = '\0';
      param_1[0x57f] = '\0';
    }
    uVar12 = *(ulong *)(param_1 + 0x588);
    param_1[0x580] = '\0';
    param_1[0x581] = '\0';
    param_1[0x582] = '\0';
    param_1[0x583] = '\0';
    if (uVar12 != 0) {
      uVar14 = uVar12 + *(long *)(uVar12 - 8) * 8;
      do {
        uVar14 = uVar14 - 8;
      } while (uVar12 <= uVar14);
      FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
      param_1[0x588] = '\0';
      param_1[0x589] = '\0';
      param_1[0x58a] = '\0';
      param_1[0x58b] = '\0';
      param_1[0x58c] = '\0';
      param_1[0x58d] = '\0';
      param_1[0x58e] = '\0';
      param_1[0x58f] = '\0';
    }
  }
  uVar12 = *(ulong *)(param_1 + 0x858);
  if (uVar12 != 0) {
    uVar14 = uVar12 + *(long *)(uVar12 - 8) * 0x68;
    do {
      uVar14 = uVar14 - 0x68;
    } while (uVar12 <= uVar14);
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    param_1[0x858] = '\0';
    param_1[0x859] = '\0';
    param_1[0x85a] = '\0';
    param_1[0x85b] = '\0';
    param_1[0x85c] = '\0';
    param_1[0x85d] = '\0';
    param_1[0x85e] = '\0';
    param_1[0x85f] = '\0';
  }
  uVar12 = *(ulong *)(param_1 + 0x868);
  if (uVar12 != 0) {
    uVar14 = uVar12 + *(long *)(uVar12 - 8) * 0x34;
    do {
      uVar14 = uVar14 - 0x34;
    } while (uVar12 <= uVar14);
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    param_1[0x868] = '\0';
    param_1[0x869] = '\0';
    param_1[0x86a] = '\0';
    param_1[0x86b] = '\0';
    param_1[0x86c] = '\0';
    param_1[0x86d] = '\0';
    param_1[0x86e] = '\0';
    param_1[0x86f] = '\0';
  }
  if (*(long *)(param_1 + 0x290) != 0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,*(long *)(param_1 + 0x290) + -8);
    param_1[0x290] = '\0';
    param_1[0x291] = '\0';
    param_1[0x292] = '\0';
    param_1[0x293] = '\0';
    param_1[0x294] = '\0';
    param_1[0x295] = '\0';
    param_1[0x296] = '\0';
    param_1[0x297] = '\0';
  }
  puVar4 = PTR_DAT_027139b0;
  iVar7 = *(int *)PTR_DAT_027139b0;
  if (iVar7 != 0) {
    if (iVar7 < 1) {
      plVar8 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                    "../src/GPU\\GPUClassUtil.h",0x49,0);
      FUN_0056dc10(plVar8,0);
      *(long **)PTR_DAT_027139b8 = plVar8;
      *(undefined4 *)puVar4 = 1;
      if (plVar8 != (long *)0x0) goto LAB_0051a88c;
LAB_0051a990:
      iVar7 = 0;
      *(undefined4 *)puVar4 = 0;
      lVar13 = *(long *)(param_1 + 0x550);
    }
    else {
      plVar8 = *(long **)PTR_DAT_027139b8;
      *(int *)PTR_DAT_027139b0 = iVar7 + 1;
      if (iVar7 + 1 < 2) {
        if (plVar8 == (long *)0x0) goto LAB_0051a990;
LAB_0051a88c:
        uVar18 = *(undefined8 *)PTR_PTR_02713988;
        (**(code **)(*plVar8 + 0x20))(plVar8);
        FUN_005b9b10(uVar18,plVar8);
        iVar7 = 0;
        *(undefined8 *)PTR_DAT_027139b8 = 0;
      }
      *(int *)puVar4 = iVar7;
      lVar13 = *(long *)(param_1 + 0x550);
    }
    if (lVar13 != 0) {
      FUN_0059fd10(plVar8[0x534b],*(undefined4 *)(param_1 + 0x558));
      uVar12 = *(ulong *)(param_1 + 0x550);
      if (uVar12 != 0) {
        uVar14 = uVar12 + *(long *)(uVar12 - 8) * 8;
        do {
          uVar14 = uVar14 - 8;
        } while (uVar12 <= uVar14);
        FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
        param_1[0x550] = '\0';
        param_1[0x551] = '\0';
        param_1[0x552] = '\0';
        param_1[0x553] = '\0';
        param_1[0x554] = '\0';
        param_1[0x555] = '\0';
        param_1[0x556] = '\0';
        param_1[0x557] = '\0';
      }
      param_1[0x558] = '\0';
      param_1[0x559] = '\0';
      param_1[0x55a] = '\0';
      param_1[0x55b] = '\0';
      iVar7 = *(int *)puVar4;
    }
    if (iVar7 != 0) {
      if (iVar7 < 1) {
        plVar8 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                      "../src/GPU\\GPUClassUtil.h",0x49,0);
        FUN_0056dc10(plVar8,0);
        *(long **)PTR_DAT_027139b8 = plVar8;
        *(undefined4 *)puVar4 = 1;
        if (plVar8 != (long *)0x0) goto LAB_0051a8fc;
LAB_0051aa44:
        iVar7 = 0;
        *(undefined4 *)puVar4 = 0;
        lVar13 = *(long *)(param_1 + 0x560);
      }
      else {
        plVar8 = *(long **)PTR_DAT_027139b8;
        *(int *)puVar4 = iVar7 + 1;
        if (iVar7 + 1 < 2) {
          if (plVar8 == (long *)0x0) goto LAB_0051aa44;
LAB_0051a8fc:
          uVar18 = *(undefined8 *)PTR_PTR_02713988;
          (**(code **)(*plVar8 + 0x20))(plVar8);
          FUN_005b9b10(uVar18,plVar8);
          iVar7 = 0;
          *(undefined8 *)PTR_DAT_027139b8 = 0;
        }
        *(int *)puVar4 = iVar7;
        lVar13 = *(long *)(param_1 + 0x560);
      }
      if (lVar13 != 0) {
        FUN_0059fd10(plVar8[0x534b],*(int *)(param_1 + 0x568) << 1);
        if (*(long *)(param_1 + 0x560) != 0) {
          FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,*(long *)(param_1 + 0x560) + -8);
          param_1[0x560] = '\0';
          param_1[0x561] = '\0';
          param_1[0x562] = '\0';
          param_1[0x563] = '\0';
          param_1[0x564] = '\0';
          param_1[0x565] = '\0';
          param_1[0x566] = '\0';
          param_1[0x567] = '\0';
        }
        param_1[0x568] = '\0';
        param_1[0x569] = '\0';
        param_1[0x56a] = '\0';
        param_1[0x56b] = '\0';
        iVar7 = *(int *)puVar4;
      }
    }
  }
  puVar5 = PTR_DAT_027139b8;
  if (bVar1) {
    if (iVar7 == 0) {
      bVar1 = true;
      plVar8 = (long *)*plVar9;
    }
    else {
      FUN_00570960(*(undefined8 *)PTR_DAT_027139b8,*plVar9);
      bVar1 = true;
      plVar8 = (long *)*plVar9;
    }
  }
  else if (iVar7 == 0) {
    bVar1 = false;
    plVar8 = (long *)*plVar9;
  }
  else {
    iVar10 = iVar7 + -1;
    if (iVar10 == 0 || iVar7 < 1) {
      plVar8 = *(long **)PTR_DAT_027139b8;
      if (plVar8 != (long *)0x0) {
        uVar18 = *(undefined8 *)PTR_PTR_02713988;
        (**(code **)(*plVar8 + 0x20))(plVar8);
        FUN_005b9b10(uVar18,plVar8);
        *(undefined8 *)puVar5 = 0;
        bVar1 = false;
        *(undefined4 *)puVar4 = 0;
        plVar8 = (long *)*plVar9;
        goto joined_r0x0051ab54;
      }
      iVar10 = 0;
    }
    bVar1 = false;
    *(int *)puVar4 = iVar10;
    plVar8 = (long *)*plVar9;
  }
joined_r0x0051ab54:
  if (plVar8 != (long *)0x0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*plVar8 + 0x38))(plVar8,0,*(long *)(param_1 + 0x20),0);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)*plVar9 + 0x40))();
    }
  }
  param_1[0x1168] = '\0';
  param_1[0x1169] = '\0';
  param_1[0x116a] = '\0';
  param_1[0x116b] = '\0';
  param_1[0x116c] = '\0';
  param_1[0x116d] = '\0';
  param_1[0x116e] = '\0';
  param_1[0x116f] = '\0';
  param_1[0x120] = '\0';
  param_1[0x121] = '\0';
  param_1[0x122] = '\0';
  param_1[0x123] = '\0';
  param_1[0x124] = '\0';
  param_1[0x125] = '\0';
  param_1[0x126] = '\0';
  param_1[0x127] = '\0';
  param_1[0x128] = '\0';
  param_1[0x129] = '\0';
  param_1[0x12a] = '\0';
  param_1[299] = '\0';
  param_1[300] = '\0';
  param_1[0x12d] = '\0';
  param_1[0x12e] = '\0';
  param_1[0x12f] = '\0';
  param_1[0x130] = '\0';
  param_1[0x131] = '\0';
  param_1[0x132] = '\0';
  param_1[0x133] = '\0';
  param_1[0x134] = '\0';
  param_1[0x135] = '\0';
  param_1[0x136] = '\0';
  param_1[0x137] = '\0';
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    param_1[0x30] = '\0';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    param_1[0x34] = '\0';
    param_1[0x35] = '\0';
    param_1[0x36] = '\0';
    param_1[0x37] = '\0';
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
  }
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 8))();
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = '\0';
    param_1[0x2f] = '\0';
  }
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 8))();
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
  }
  if (*plVar9 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    iVar7 = FUN_0059ebc0();
    if (iVar7 != 0) {
      FUN_0059ebd0(2);
    }
    plVar8 = (long *)*plVar9;
  }
  if (bVar1) {
    if (plVar8 != (long *)0x0) {
      FUN_0053e360();
    }
  }
  else if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
    *plVar9 = 0;
  }
  plVar8 = *(long **)(param_1 + 0x11d0);
  while (plVar8 != (long *)(param_1 + 0x11d8)) {
    if (*(long **)((long)plVar8 + 0x30) != (long *)0x0) {
      (**(code **)(**(long **)((long)plVar8 + 0x30) + 0x18))();
      *(long *)((long)plVar8 + 0x30) = 0;
    }
    if (*(long *)((long)plVar8 + 0x38) != 0) {
      plVar9 = (long *)FUN_005cbff0();
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))();
      if (plVar9 != (long *)0x0 && *(long *)((long)plVar8 + 0x38) != 0) {
        (**(code **)(*plVar9 + 0x48))
                  (plVar9,*(long *)((long)plVar8 + 0x38),
                   "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0xa577);
      }
      *(long *)((long)plVar8 + 0x38) = 0;
    }
    plVar9 = *(long **)((long)plVar8 + 8);
    if (*(long **)((long)plVar8 + 8) == (long *)0x0) {
      plVar9 = (long *)((long)plVar8 + 0x10);
      bVar6 = *(long **)*plVar9 != plVar8;
      plVar8 = (long *)*plVar9;
      if (bVar6) {
        do {
          lVar13 = *plVar9;
          plVar9 = (long *)(lVar13 + 0x10);
          plVar8 = (long *)*plVar9;
        } while (*plVar8 != lVar13);
      }
    }
    else {
      do {
        plVar8 = plVar9;
        plVar9 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
  }
  FUN_0053c4a0(param_1 + 0x11d0,*(undefined8 *)(param_1 + 0x11d8));
  param_1[0x11e0] = '\0';
  param_1[0x11e1] = '\0';
  param_1[0x11e2] = '\0';
  param_1[0x11e3] = '\0';
  param_1[0x11e4] = '\0';
  param_1[0x11e5] = '\0';
  param_1[0x11e6] = '\0';
  param_1[0x11e7] = '\0';
  *(char **)(param_1 + 0x11d0) = param_1 + 0x11d8;
  param_1[0x11d8] = '\0';
  param_1[0x11d9] = '\0';
  param_1[0x11da] = '\0';
  param_1[0x11db] = '\0';
  param_1[0x11dc] = '\0';
  param_1[0x11dd] = '\0';
  param_1[0x11de] = '\0';
  param_1[0x11df] = '\0';
  plVar8 = *(long **)(param_1 + 0x11e8);
  while (plVar8 != (long *)(param_1 + 0x11f0)) {
    if ((long *)plVar8[6] != (long *)0x0) {
      (**(code **)(*(long *)plVar8[6] + 0x18))();
      plVar8[6] = 0;
    }
    if ((long *)plVar8[7] != (long *)0x0) {
      (**(code **)(*(long *)plVar8[7] + 0x18))();
      plVar8[7] = 0;
    }
    plVar9 = (long *)plVar8[1];
    if ((long *)plVar8[1] == (long *)0x0) {
      plVar9 = plVar8 + 2;
      if (*(long **)*plVar9 == plVar8) {
        plVar8 = (long *)*plVar9;
      }
      else {
        do {
          lVar13 = *plVar9;
          plVar9 = (long *)(lVar13 + 0x10);
          plVar8 = (long *)*plVar9;
        } while (*plVar8 != lVar13);
      }
    }
    else {
      do {
        plVar8 = plVar9;
        plVar9 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
  }
  FUN_0053c450(param_1 + 0x11e8,*(undefined8 *)(param_1 + 0x11f0));
  param_1[0x11f8] = '\0';
  param_1[0x11f9] = '\0';
  param_1[0x11fa] = '\0';
  param_1[0x11fb] = '\0';
  param_1[0x11fc] = '\0';
  param_1[0x11fd] = '\0';
  param_1[0x11fe] = '\0';
  param_1[0x11ff] = '\0';
  *(char **)(param_1 + 0x11e8) = param_1 + 0x11f0;
  param_1[0x11f0] = '\0';
  param_1[0x11f1] = '\0';
  param_1[0x11f2] = '\0';
  param_1[0x11f3] = '\0';
  param_1[0x11f4] = '\0';
  param_1[0x11f5] = '\0';
  param_1[0x11f6] = '\0';
  param_1[0x11f7] = '\0';
  if ((!bVar1) && (param_1[0x1170] != '\0')) {
    if (*(long **)(param_1 + 0x1198) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1198) + 0x18))();
      param_1[0x1198] = '\0';
      param_1[0x1199] = '\0';
      param_1[0x119a] = '\0';
      param_1[0x119b] = '\0';
      param_1[0x119c] = '\0';
      param_1[0x119d] = '\0';
      param_1[0x119e] = '\0';
      param_1[0x119f] = '\0';
    }
    if (*(long **)(param_1 + 0x11c0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x11c0) + 0x18))();
      param_1[0x11c0] = '\0';
      param_1[0x11c1] = '\0';
      param_1[0x11c2] = '\0';
      param_1[0x11c3] = '\0';
      param_1[0x11c4] = '\0';
      param_1[0x11c5] = '\0';
      param_1[0x11c6] = '\0';
      param_1[0x11c7] = '\0';
    }
    if (*(long **)(param_1 + 0x11a8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x11a8) + 0x18))();
      param_1[0x11a8] = '\0';
      param_1[0x11a9] = '\0';
      param_1[0x11aa] = '\0';
      param_1[0x11ab] = '\0';
      param_1[0x11ac] = '\0';
      param_1[0x11ad] = '\0';
      param_1[0x11ae] = '\0';
      param_1[0x11af] = '\0';
    }
    if (*(long **)(param_1 + 0x11a0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x11a0) + 0x18))();
      param_1[0x11a0] = '\0';
      param_1[0x11a1] = '\0';
      param_1[0x11a2] = '\0';
      param_1[0x11a3] = '\0';
      param_1[0x11a4] = '\0';
      param_1[0x11a5] = '\0';
      param_1[0x11a6] = '\0';
      param_1[0x11a7] = '\0';
    }
    if (*(long *)(param_1 + 0x1220) != 0) {
      plVar8 = *(long **)(param_1 + 0x1218);
      lVar13 = *(long *)(param_1 + 0x1210);
      *(undefined8 *)(*plVar8 + 8) = *(undefined8 *)(lVar13 + 8);
      **(long **)(lVar13 + 8) = *plVar8;
      param_1[0x1220] = '\0';
      puVar4 = PTR_PTR_02713988;
      param_1[0x1221] = '\0';
      param_1[0x1222] = '\0';
      param_1[0x1223] = '\0';
      param_1[0x1224] = '\0';
      param_1[0x1225] = '\0';
      param_1[0x1226] = '\0';
      param_1[0x1227] = '\0';
      while (plVar8 != (long *)(param_1 + 0x1210)) {
        plVar8 = (long *)plVar8[1];
        FUN_005b9b10(*(undefined8 *)puVar4);
      }
    }
    if (*(long *)(param_1 + 0x1238) != 0) {
      plVar8 = *(long **)(param_1 + 0x1230);
      lVar13 = *(long *)(param_1 + 0x1228);
      *(undefined8 *)(*plVar8 + 8) = *(undefined8 *)(lVar13 + 8);
      **(long **)(lVar13 + 8) = *plVar8;
      param_1[0x1238] = '\0';
      puVar4 = PTR_PTR_02713988;
      param_1[0x1239] = '\0';
      param_1[0x123a] = '\0';
      param_1[0x123b] = '\0';
      param_1[0x123c] = '\0';
      param_1[0x123d] = '\0';
      param_1[0x123e] = '\0';
      param_1[0x123f] = '\0';
      while (plVar8 != (long *)(param_1 + 0x1228)) {
        plVar8 = (long *)plVar8[1];
        FUN_005b9b10(*(undefined8 *)puVar4);
      }
    }
    FUN_005cbe80();
    if (*(long **)(param_1 + 0x1208) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1208) + 0xb8))();
      puVar16 = *(undefined8 **)(param_1 + 0x1208);
      if (puVar16 != (undefined8 *)0x0) {
        (**(code **)*puVar16)(puVar16);
        (**(code **)(*(long *)(param_1 + 0x1178) + 0x48))
                  (param_1 + 0x1178,puVar16,"C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",
                   0x2b01);
        param_1[0x1208] = '\0';
        param_1[0x1209] = '\0';
        param_1[0x120a] = '\0';
        param_1[0x120b] = '\0';
        param_1[0x120c] = '\0';
        param_1[0x120d] = '\0';
        param_1[0x120e] = '\0';
        param_1[0x120f] = '\0';
      }
    }
    if ((*(int *)puVar2 != 0) && (*(int *)puVar3 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x2b05);
      FUN_00517ae0("CPostEffect::~CPostEffect(): SiGfxDeinit succeeded.\n");
    }
    param_1[0x1170] = '\0';
  }
  if (*(int *)puVar2 == 0) {
    return 0;
  }
  if (*(int *)puVar3 == 0) {
    return 0;
  }
  FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x2b0c);
  FUN_00517ae0("==== CPostEffect::Uninitialize() succeeded. ====\n");
  return 0;
}


