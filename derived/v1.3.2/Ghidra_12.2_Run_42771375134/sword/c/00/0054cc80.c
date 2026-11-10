/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054cc80; name: FUN_0054cc80
 */


undefined8 FUN_0054cc80(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  long *plVar17;
  char *pcVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int *piVar28;
  uint uVar29;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [8];
  undefined8 local_110;
  undefined1 auStack_108 [8];
  undefined8 local_100;
  undefined1 auStack_f8 [8];
  undefined8 local_f0;
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  undefined1 auStack_d8 [8];
  undefined8 local_d0;
  undefined1 auStack_c8 [8];
  undefined8 local_c0;
  undefined1 auStack_b8 [8];
  char *local_b0;
  undefined1 auStack_a8 [8];
  char *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  char *local_80;
  int local_78 [2];
  undefined8 local_70;
  
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713be8 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",0x1abf
                );
    FUN_00517ae0("CTinyEffect::BuildEffect(): \n\n%s\n\n",*(undefined8 *)(param_1 + 0x38));
  }
  lVar25 = *(long *)(param_1 + 0x348);
  *(undefined1 *)(param_1 + 0x2f0) = 1;
  *(undefined4 *)(param_1 + 0x368) = 0;
  if (lVar25 == 0) goto LAB_0054cf58;
  iVar8 = atoi((char *)(lVar25 + 0x20));
  iVar9 = atoi((char *)(lVar25 + 0x30));
  *(int *)(param_1 + 0x350) = iVar9;
  FUN_00551100(local_78,lVar25 + 0x38,8,8);
  lVar25 = param_1 + 0x358;
  FUN_00551670(lVar25,local_78);
  FUN_00551380(local_78);
  FUN_00552be0(lVar25);
  iVar9 = FUN_00552890(lVar25,&DAT_01d09d45);
  if (iVar9 == 0) {
    iVar9 = FUN_00552890(lVar25,"glsl_bin");
    if (iVar9 != 0) {
      iVar9 = 2;
      goto LAB_0054cdac;
    }
    iVar9 = FUN_00552890(lVar25,"glsl_mrg");
    if ((iVar9 != 0) || (iVar9 = FUN_00552890(lVar25,"glsl_kgr"), iVar9 != 0)) {
      iVar9 = 3;
      goto LAB_0054cdac;
    }
    iVar9 = FUN_00552890(lVar25,"cgsrc");
    if (iVar9 != 0) {
      iVar9 = 4;
      goto LAB_0054cdac;
    }
    iVar9 = FUN_00552890(lVar25,"cgnv1");
    if (iVar9 != 0) {
      iVar9 = 5;
      goto LAB_0054cdac;
    }
    iVar9 = FUN_00552890(lVar25,"cgnv2");
    if (iVar9 != 0) {
      iVar9 = 6;
      goto LAB_0054cdac;
    }
    iVar9 = FUN_00552890(lVar25,"cgstrip");
    if (iVar9 != 0) {
      iVar9 = 7;
      goto LAB_0054cdac;
    }
    iVar9 = *(int *)(param_1 + 0x368);
  }
  else {
    iVar9 = 1;
LAB_0054cdac:
    *(int *)(param_1 + 0x368) = iVar9;
  }
  uVar12 = iVar8 + 0x40 + *(int *)(param_1 + 0x350) * 0x100;
  uVar29 = uVar12 + 0xf & 0xfffffff0;
  if (1 < iVar9 - 5U) {
    uVar29 = uVar12;
  }
  FUN_00550fe0(local_78,*(long *)(param_1 + 0x348) + 0x40);
  piVar28 = (int *)(param_1 + 0x30);
  FUN_00551670(piVar28,local_78);
  FUN_00551380(local_78);
  FUN_00550fe0(local_78,"GlobalParameter:\n");
  iVar10 = FUN_00552180(piVar28,local_70,0,local_78[0]);
  FUN_00550fe0(local_88,"Effect:\n");
  iVar11 = FUN_00552180(piVar28,local_80,iVar10,local_88[0]);
  iVar9 = 0;
  if (iVar10 != 0) {
    iVar9 = FUN_00552180(piVar28,&DAT_01d245b7,iVar10,0xffffffff);
    FUN_005523f0(&local_98,piVar28,iVar9,iVar11 + -1);
    FUN_00551670(param_1 + 0x50,&local_98);
    FUN_00551380(&local_98);
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  iVar10 = 0;
  if (iVar11 != 0) {
    iVar10 = FUN_00552180(piVar28,&DAT_01d245b7,iVar11,0xffffffff);
    iVar10 = FUN_00552180(piVar28,&DAT_01d245b7,iVar10 + 1,0xffffffff);
    FUN_00552380(&local_98,piVar28,iVar10,*(undefined4 *)(param_1 + 0x30));
    FUN_00551670(param_1 + 0x60,&local_98);
    FUN_00551380(&local_98);
  }
  if (iVar10 != 0 || iVar9 != 0) {
    if (iVar10 == 0) {
      iVar10 = *piVar28;
      if (iVar9 == 0) goto LAB_0054cf20;
LAB_0054cf10:
      iVar9 = iVar9 + -1;
    }
    else {
      iVar10 = iVar10 + -1;
      if (iVar9 != 0) goto LAB_0054cf10;
LAB_0054cf20:
      iVar9 = *piVar28;
    }
    if (iVar9 <= iVar10) {
      iVar10 = iVar9;
    }
    FUN_005515e0(piVar28,iVar10);
  }
  *(long *)(param_1 + 0x370) = *(long *)(param_1 + 0x348) + (long)(iVar8 + 0x40);
  *(long *)(param_1 + 0x378) = *(long *)(param_1 + 0x348) + (long)(int)uVar29;
  FUN_00551380(local_88);
  FUN_00551380(local_78);
LAB_0054cf58:
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(undefined1 *)(param_1 + 0x2f1) = 0;
  if (*(char *)(param_1 + 0x70) != '\0') {
    FUN_00551290(local_78,param_1 + 0x50);
    FUN_005519b0(local_88,local_78,&DAT_01d47193,&DAT_01ce7c90,&DAT_01d47198,0xffffffff,0xffffffff,
                 0xffffffff);
    iVar8 = atoi(local_80);
    if (iVar8 < 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      do {
        FUN_005519b0(&local_98,local_78,", \t\n\r",&DAT_01ce7c90,&DAT_01d47198,0xffffffff,0xffffffff
                     ,0xffffffff);
        FUN_005519b0(auStack_a8,local_78,", \t\n\r",&DAT_01ce7c90,&DAT_01d47198,0xffffffff,
                     0xffffffff,0xffffffff);
        FUN_005519b0(auStack_b8,local_78,", \t\n\r",&DAT_01ce7c90,&DAT_01d47198,0xffffffff,
                     0xffffffff,0xffffffff);
        iVar11 = atoi(local_a0);
        iVar9 = atoi(local_b0);
        FUN_0054bc80(param_1,&local_98,iVar11,iVar9,0);
        iVar10 = 0;
        if (iVar9 < 2) {
          iVar9 = 1;
        }
        if (iVar11 - 1U < 4) {
          iVar10 = *(int *)(&DAT_01d4ae70 + (long)(int)(iVar11 - 1U) * 4);
        }
        if ((int)uVar12 <= iVar10 * iVar9) {
          uVar12 = iVar10 * iVar9;
        }
        FUN_00551380(auStack_b8);
        FUN_00551380(auStack_a8);
        FUN_00551380(&local_98);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    *(uint *)(param_1 + 0x3c0) = uVar12;
    puVar14 = (ulong *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,(ulong)uVar12 + 8,
                                    "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp",
                                    0x1ba4,0);
    puVar15 = puVar14;
    if (puVar14 != (ulong *)0x0) {
      puVar15 = puVar14 + 1;
      *puVar14 = (ulong)uVar12;
    }
    *(ulong **)(param_1 + 0x3c8) = puVar15;
    FUN_00551380(local_88);
    FUN_00551380(local_78);
  }
  FUN_00551290(local_78,param_1 + 0x30);
  FUN_005519b0(local_88,local_78,&DAT_01d47193,&DAT_01ce7c90,&DAT_01d47198,0xffffffff,0xffffffff,
               0xffffffff);
  FUN_00551670(param_1 + 0x40,local_88);
  FUN_00551380(local_88);
  FUN_005519b0(local_88,local_78,&DAT_01d47193,&DAT_01ce7c90,&DAT_01d47198,0xffffffff,0xffffffff,
               0xffffffff);
  uVar12 = atoi(local_80);
  puVar7 = PTR_PTR_02713988;
  plVar1 = (long *)(param_1 + 0x2f8);
  lVar25 = *(long *)(param_1 + 0x300) - *(long *)(param_1 + 0x2f8);
  lVar27 = lVar25 >> 3;
  uVar22 = lVar27 + (int)uVar12;
  if ((ulong)(*(long *)(param_1 + 0x308) - *(long *)(param_1 + 0x2f8) >> 3) < uVar22) {
    lVar26 = uVar22 * 8;
    lVar16 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,lVar26,"../src/GPU/GPUMemoryAllocator.h",
                          0x1b8,0);
    puVar19 = *(undefined8 **)(param_1 + 0x2f8);
    puVar21 = *(undefined8 **)(param_1 + 0x300);
    puVar2 = (undefined8 *)(lVar16 + lVar27 * 8);
    lVar26 = lVar16 + lVar26;
    if (puVar21 == puVar19) {
      *(undefined8 **)(param_1 + 0x2f8) = puVar2;
      *(undefined8 **)(param_1 + 0x300) = puVar2;
      *(long *)(param_1 + 0x308) = lVar26;
    }
    else {
      uVar22 = (long)puVar21 + (-8 - (long)puVar19);
      uVar29 = ((uint)(uVar22 >> 3) & 0x1fffffff) + 1;
      puVar23 = puVar2;
      if ((uVar29 & 3) != 0) {
        lVar27 = -((ulong)uVar29 & 3);
        do {
          puVar21 = puVar21 + -1;
          lVar27 = lVar27 + 1;
          puVar23 = puVar23 + -1;
          *puVar23 = *puVar21;
        } while (lVar27 != 0);
      }
      if (0x17 < uVar22) {
        puVar23 = puVar23 + -2;
        do {
          puVar23[1] = puVar21[-1];
          *puVar23 = puVar21[-2];
          puVar23[-1] = puVar21[-3];
          puVar21 = puVar21 + -4;
          puVar23[-2] = *puVar21;
          puVar23 = puVar23 + -4;
        } while (puVar19 != puVar21);
      }
      puVar19 = (undefined8 *)*plVar1;
      *(ulong *)(param_1 + 0x2f8) = lVar16 + ((lVar25 + -8) - (uVar22 & 0xfffffffffffffff8));
      *(undefined8 **)(param_1 + 0x300) = puVar2;
      *(long *)(param_1 + 0x308) = lVar26;
    }
    if (puVar19 != (undefined8 *)0x0) {
      FUN_005b9b10(*(undefined8 *)puVar7);
    }
  }
  puVar7 = PTR_PTR_02713988;
  if (0 < (int)uVar12) {
    uVar29 = uVar12;
    do {
      while( true ) {
        plVar17 = (long *)FUN_005b9a50(*(undefined8 *)puVar7,0x20,
                                       "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp",
                                       0x1c05,0);
        *plVar17 = param_1;
        FUN_00550fe0(plVar17 + 1,&DAT_01d38550);
        *(undefined1 *)(plVar17 + 3) = 0;
        local_98 = plVar17;
        if (*(undefined8 **)(param_1 + 0x300) == *(undefined8 **)(param_1 + 0x308)) break;
        **(undefined8 **)(param_1 + 0x300) = plVar17;
        *(long *)(param_1 + 0x300) = *(long *)(param_1 + 0x300) + 8;
        uVar29 = uVar29 - 1;
        if (uVar29 == 0) goto LAB_0054d370;
      }
      FUN_005509e0(plVar1,&local_98);
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
  }
LAB_0054d370:
  FUN_00552dd0(local_78,&DAT_01d1dd8d,0xffffffff);
  FUN_00550fe0(&local_98,&DAT_01cf9003);
  FUN_00550fe0(auStack_a8,&DAT_01d1dd8d);
  if (0 < (int)uVar12) {
    uVar22 = 0;
    iVar8 = 1;
    do {
      lVar25 = *(long *)(*plVar1 + uVar22 * 8);
      iVar10 = FUN_00551e70(local_78,10,iVar8);
      iVar9 = local_78[0];
      if (iVar10 != 0) {
        iVar9 = iVar10;
      }
      FUN_005523f0(auStack_b8,local_78,iVar8,iVar9 + -1);
      FUN_00552dd0(auStack_b8,&DAT_01d1dd8d,0xffffffff);
      FUN_005519b0(auStack_c8,auStack_b8,&DAT_01cf9003,0,&DAT_01d47198,0xffffffff,0xffffffff,
                   0xffffffff);
      FUN_00551670(lVar25 + 8,auStack_c8);
      FUN_00551380(auStack_c8);
      local_c0 = 0;
      FUN_00550f60(auStack_c8);
      local_d0 = 0;
      FUN_00550f60(auStack_d8);
      FUN_005519b0(auStack_e8,auStack_b8,local_90,&DAT_01ce7c90,&DAT_01d47198,0xffffffff,0xffffffff,
                   0xffffffff);
      FUN_005519b0(auStack_f8,auStack_b8,local_90,&DAT_01ce7c90,&DAT_01d47198,0xffffffff,0xffffffff,
                   0xffffffff);
      FUN_005519b0(auStack_108,auStack_b8,local_90,&DAT_01ce7c90,&DAT_01d47198,0xffffffff,0xffffffff
                   ,0xffffffff);
      FUN_005519b0(auStack_118,auStack_b8,local_90,&DAT_01ce7c90,&DAT_01d47198,0xffffffff,0xffffffff
                   ,0xffffffff);
      FUN_00552cb0(auStack_c8,auStack_a8);
      FUN_00552be0(auStack_c8);
      FUN_00552cb0(auStack_d8,auStack_a8);
      FUN_00552be0(auStack_d8);
      FUN_00552cb0(auStack_e8,auStack_a8);
      FUN_00552be0(auStack_e8);
      FUN_00552cb0(auStack_f8,auStack_a8);
      FUN_00552be0(auStack_f8);
      FUN_00552cb0(auStack_108,auStack_a8);
      FUN_00552be0(auStack_108);
      FUN_00552cb0(auStack_118,auStack_a8);
      FUN_00552be0(auStack_118);
      puVar7 = PTR_DAT_02713be8;
      iVar10 = *(int *)PTR_DAT_02713970;
      iVar11 = *(int *)PTR_DAT_02713be8;
      if ((iVar10 != 0) && (iVar11 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                     0x1c7a);
        FUN_00517ae0("pTechnique->m_strName: %s\n",*(undefined8 *)(lVar25 + 0x10));
        iVar10 = *(int *)PTR_DAT_02713970;
        iVar11 = *(int *)puVar7;
      }
      puVar6 = PTR_DAT_02713970;
      iVar8 = iVar9 + 1;
      if (*(int *)(param_1 + 0x368) == 3) {
        if (iVar10 != 0 && iVar11 != 0) {
          FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                       0x1c7d);
          FUN_00517ae0("strLinkedProgramName: %s\n",local_c0);
          iVar10 = *(int *)puVar6;
          iVar11 = *(int *)puVar7;
        }
        if ((iVar10 != 0) && (iVar11 != 0)) {
          FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                       0x1c7e);
          FUN_00517ae0("strLinkedProgramFile: %s\n",local_d0);
          iVar10 = *(int *)puVar6;
          iVar11 = *(int *)puVar7;
        }
        if ((iVar10 != 0) && (iVar11 != 0)) {
          FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                       0x1c7f);
          FUN_00517ae0("strVertexProgramName: %s\n",local_e0);
          iVar10 = *(int *)puVar6;
          iVar11 = *(int *)puVar7;
        }
        if ((iVar10 != 0) && (iVar11 != 0)) {
          FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                       0x1c80);
          pcVar18 = "strFragmentProgramName: %s\n";
          uVar20 = local_100;
LAB_0054d770:
          FUN_00517ae0(pcVar18,uVar20);
        }
      }
      else {
        if (iVar10 != 0 && iVar11 != 0) {
          FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                       0x1c84);
          FUN_00517ae0("strVertexProgramName: %s\n",local_e0);
          iVar10 = *(int *)puVar6;
          iVar11 = *(int *)puVar7;
        }
        if ((iVar10 != 0) && (iVar11 != 0)) {
          FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                       0x1c85);
          FUN_00517ae0("strVertexProgramFile: %s\n",local_f0);
          iVar10 = *(int *)puVar6;
          iVar11 = *(int *)puVar7;
        }
        if ((iVar10 != 0) && (iVar11 != 0)) {
          FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                       0x1c86);
          FUN_00517ae0("strFragmentProgramName: %s\n",local_100);
          iVar10 = *(int *)puVar6;
          iVar11 = *(int *)puVar7;
        }
        if ((iVar10 != 0) && (iVar11 != 0)) {
          FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                       0x1c87);
          pcVar18 = "strFragmentProgramFile: %s\n";
          uVar20 = local_110;
          goto LAB_0054d770;
        }
      }
      uVar5 = DAT_0275e818;
      uVar4 = DAT_0275e810;
      uVar20 = DAT_0275e808;
      if (*(char *)(param_1 + 0x70) == '\0' &&
          ((uVar22 == 0 || uVar12 - 1 == uVar22) || uVar12 >> 1 == uVar22)) {
        uVar20 = 0;
        uVar4 = 0;
        uVar5 = 0;
      }
      FUN_005528d0(auStack_138,auStack_e8,&DAT_01ce77a5);
      FUN_005516e0(auStack_128,auStack_138,auStack_108);
      FUN_00551380(auStack_138);
      FUN_005528d0(auStack_148,auStack_f8,&DAT_01ce77a5);
      FUN_005516e0(auStack_138,auStack_148,auStack_118);
      FUN_00551380(auStack_148);
      local_160 = uVar20;
      uStack_158 = uVar4;
      local_150 = uVar5;
      uVar13 = FUN_0054c9d0(param_1,auStack_128,auStack_138,3,&local_160);
      *(undefined4 *)(lVar25 + 0x1c) = uVar13;
      FUN_00551380(auStack_138);
      FUN_00551380(auStack_128);
      FUN_00551380(auStack_118);
      FUN_00551380(auStack_108);
      FUN_00551380(auStack_f8);
      FUN_00551380(auStack_e8);
      FUN_00551380(auStack_d8);
      FUN_00551380(auStack_c8);
      FUN_00551380(auStack_b8);
      uVar22 = uVar22 + 1;
    } while (uVar12 != uVar22);
  }
  piVar28 = (int *)PTR_DAT_02713be8;
  uVar22 = *(long *)(param_1 + 0x318) - (long)*(undefined8 **)(param_1 + 0x310);
  if (0 < (int)(uVar22 >> 3)) {
    uVar22 = uVar22 >> 3 & 0xffffffff;
    FUN_0054b580(param_1,**(undefined8 **)(param_1 + 0x310),0);
    if (uVar22 != 1) {
      uVar24 = 1;
      do {
        FUN_0054b580(param_1,*(undefined8 *)(*(long *)(param_1 + 0x310) + uVar24 * 8),
                     uVar24 & 0xffffffff);
        uVar24 = uVar24 + 1;
      } while (uVar22 != uVar24);
    }
  }
  puVar7 = PTR_DAT_02713970;
  iVar8 = *(int *)PTR_DAT_02713970;
  iVar9 = *piVar28;
  if (iVar8 != 0 && iVar9 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",0x1d01
                );
    FUN_00517ae0("\nm_apGlobalParameter.size(): %d\n",
                 *(long *)(param_1 + 0x330) - *(long *)(param_1 + 0x328) >> 3);
    iVar8 = *(int *)puVar7;
    iVar9 = *piVar28;
  }
  if (iVar8 != 0 && iVar9 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",0x1d02
                );
    FUN_00517ae0(&DAT_01d245b7);
  }
  uVar22 = *(long *)(param_1 + 0x330) - *(long *)(param_1 + 0x328);
  if ((int)(uVar22 >> 3) != 0) {
    uVar24 = 0;
    do {
      iVar8 = *(int *)puVar7;
      iVar9 = *piVar28;
      if (iVar8 != 0 && iVar9 != 0) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                     0x1d06);
        FUN_00517ae0(&DAT_01d245b7);
        iVar8 = *(int *)puVar7;
        iVar9 = *piVar28;
      }
      lVar25 = *(long *)(*(long *)(param_1 + 0x328) + uVar24 * 8);
      if (iVar8 == 0 || iVar9 == 0) {
        if (iVar8 != 0 && iVar9 != 0) {
LAB_0054da0c:
          FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                       0x1d09);
          FUN_00517ae0("m_apGlobalParameter[%d]->m_sizeOfElement: %d\n",uVar24 & 0xffffffff,
                       *(undefined4 *)(lVar25 + 0x20));
          iVar8 = *(int *)puVar7;
          iVar9 = *(int *)PTR_DAT_02713be8;
        }
      }
      else {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                     0x1d08);
        uVar12 = *(uint *)(lVar25 + 0x1c);
        pcVar18 = "invalid ETFXPARAMETERTYPE";
        if (uVar12 < 5) {
          pcVar18 = (&PTR_s_ETFXPT_FLOAT_025faf40)[(int)uVar12];
        }
        FUN_00517ae0("m_apGlobalParameter[%d]->m_eType: %d: %s\n",uVar24 & 0xffffffff,
                     (long)(int)uVar12,pcVar18);
        iVar8 = *(int *)puVar7;
        iVar9 = *(int *)PTR_DAT_02713be8;
        if (iVar8 != 0 && iVar9 != 0) goto LAB_0054da0c;
      }
      if ((iVar8 != 0) && (bVar3 = iVar9 != 0, iVar9 = 0, bVar3)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                     0x1d0a);
        FUN_00517ae0("m_apGlobalParameter[%d]->m_nElements: %d\n",uVar24 & 0xffffffff,
                     *(undefined4 *)(lVar25 + 0x2c));
        iVar8 = *(int *)puVar7;
        iVar9 = *(int *)PTR_DAT_02713be8;
      }
      if ((iVar8 != 0) && (iVar9 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                     0x1d0b);
        FUN_00517ae0("m_apGlobalParameter[%d]->m_sizeOfElement: %d\n",uVar24 & 0xffffffff,
                     *(undefined4 *)(lVar25 + 0x20));
        iVar8 = *(int *)puVar7;
        iVar9 = *(int *)PTR_DAT_02713be8;
      }
      if ((iVar8 != 0) && (iVar9 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                     0x1d0c);
        FUN_00517ae0("m_apGlobalParameter[%d]->m_strName: %s\n",uVar24 & 0xffffffff,
                     *(undefined8 *)(lVar25 + 0x10));
        iVar8 = *(int *)puVar7;
        iVar9 = *(int *)PTR_DAT_02713be8;
      }
      if ((iVar8 != 0) && (iVar9 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                     0x1d0d);
        FUN_00517ae0("m_apGlobalParameter[%d]->m_strElementName: %s\n",uVar24 & 0xffffffff,
                     *(undefined8 *)(lVar25 + 0x38));
        iVar8 = *(int *)puVar7;
        iVar9 = *(int *)PTR_DAT_02713be8;
      }
      if ((iVar8 != 0) && (iVar9 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                     0x1d0e);
        FUN_00517ae0("m_apGlobalParameter[%d]->m_pData: 0x%0x\n",uVar24 & 0xffffffff,
                     *(undefined8 *)(lVar25 + 0x48));
      }
      uVar24 = uVar24 + 1;
      piVar28 = (int *)PTR_DAT_02713be8;
    } while ((uVar22 >> 3 & 0xffffffff) != uVar24);
  }
  FUN_00551380(auStack_a8);
  FUN_00551380(&local_98);
  FUN_00551380(local_88);
  FUN_00551380(local_78);
  return 0;
}


