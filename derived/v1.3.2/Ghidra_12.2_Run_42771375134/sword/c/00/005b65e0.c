/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b65e0; name: FUN_005b65e0
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_005b65e0(long param_1,long param_2,long param_3,long param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint local_238;
  undefined8 local_218;
  undefined8 local_210 [15];
  long local_198 [31];
  
  if (param_4 == 0) {
    param_4 = *(long *)(param_1 + 0x228);
    if (param_2 == 0) goto LAB_005b6718;
LAB_005b6628:
    cVar9 = *(char *)(param_1 + 0x12d);
  }
  else {
    if (param_2 != 0) goto LAB_005b6628;
LAB_005b6718:
    param_2 = *(long *)(param_1 + 0x228);
    cVar9 = *(char *)(param_1 + 0x12d);
  }
  if (cVar9 != '\0') {
    if (0 < *(int *)(param_1 + 0x130)) {
      fVar25 = *(float *)(*(long *)(param_1 + 0x4a8) + 0x30) * 0.5;
      local_198[0xf] = 0x3f8000003f800000;
      local_198[0x10] = 0x3f8000003f800000;
      FUN_005b0700(0,fVar25 + fVar25,param_1,2,2,param_2,param_3,0,local_198 + 0xf,1,
                   *(int *)(param_1 + 0x130) == 1,0xffffffff);
      param_2 = param_3;
    }
    FUN_005b5bf0(param_1);
  }
  puVar10 = PTR_DAT_027139b0;
  iVar12 = *(int *)PTR_DAT_027139b0;
  if (iVar12 < 1) {
    plVar23 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar23,0);
    *(long **)PTR_DAT_027139b8 = plVar23;
    *(undefined4 *)puVar10 = 1;
  }
  else {
    plVar23 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar12 + 1;
    if (1 < iVar12 + 1) goto LAB_005b6778;
  }
  if (plVar23 == (long *)0x0) {
    iVar12 = 0;
  }
  else {
    uVar20 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar23 + 0x20))(plVar23);
    FUN_005b9b10(uVar20,plVar23);
    iVar12 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
LAB_005b6778:
  *(int *)puVar10 = iVar12;
  local_198[0xd] = 0;
  local_198[0xe] = 0;
  local_198[0xb] = 0;
  local_198[0xc] = 0;
  local_198[9] = 0;
  local_198[10] = 0;
  local_198[7] = 0;
  local_198[8] = 0;
  local_198[5] = 0;
  local_198[6] = 0;
  local_198[3] = 0;
  local_198[4] = 0;
  local_198[1] = 0;
  local_198[2] = 0;
  uVar4 = *(uint *)(param_1 + 0x154);
  if ((uVar4 & 0xc) == 0) {
    if ((uVar4 >> 1 & 1) == 0) {
      local_238 = *(int *)(param_1 + 0x208) + 1;
      uVar21 = 0;
      uVar5 = local_238;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x20c);
      uVar21 = (ulong)*(uint *)(param_1 + 0x210);
      local_238 = uVar5 + *(uint *)(param_1 + 0x210) + 1;
    }
    uVar22 = (ulong)uVar5;
    local_198[0] = param_2;
    lVar17 = param_2;
    do {
      lVar16 = lVar17;
      lVar17 = *(long *)(lVar16 + 0x120);
    } while (lVar17 != 0);
    local_198[0xf] = *(undefined8 *)(lVar16 + 0xa8);
    local_210[0] = 0;
    lVar17 = 0;
    if (1 < (int)local_238) {
      lVar17 = 0;
      uVar18 = 1;
      do {
        while( true ) {
          lVar16 = *(long *)(param_1 + 0x4a8);
          local_198[uVar18 + 0xf] = plVar23[0x5350];
          local_210[uVar18] = 0;
          if ((long)uVar18 <= (long)*(int *)(param_1 + 0x208)) break;
LAB_005b6a04:
          uVar18 = uVar18 + 1;
          if (uVar18 == local_238) goto LAB_005b6a24;
        }
        plVar24 = (long *)(lVar16 + (uVar18 - 1) * 0x108 + 0xa0);
        lVar19 = *plVar24;
        local_198[uVar18] = lVar19;
        do {
          lVar15 = lVar19;
          lVar19 = *(long *)(lVar15 + 0x120);
        } while (lVar19 != 0);
        local_198[uVar18 + 0xf] = *(long *)(lVar15 + 0xa8);
        local_210[uVar18] = *(undefined8 *)(lVar16 + (uVar18 - 1) * 0x108 + 0xd0);
        if (lVar17 != 0) goto LAB_005b6a04;
        lVar17 = *plVar24;
        uVar18 = uVar18 + 1;
      } while (uVar18 != local_238);
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x210);
    uVar21 = (ulong)uVar5;
    uVar6 = *(uint *)(param_1 + 0x20c);
    uVar22 = (ulong)uVar6;
    local_198[0] = param_2;
    lVar17 = param_2;
    do {
      lVar16 = lVar17;
      lVar17 = *(long *)(lVar16 + 0x120);
    } while (lVar17 != 0);
    local_198[0xf] = *(undefined8 *)(lVar16 + 0xa8);
    local_238 = uVar5 + 1 + uVar6;
    local_210[0] = 0;
    if ((int)uVar5 < 1) {
      lVar17 = 0;
    }
    else {
      lVar16 = 0;
      uVar18 = 0;
      do {
        lVar17 = plVar23[0x5350];
        lVar19 = *(long *)(param_1 + 0x4a8);
        uVar13 = uVar18 + 1;
        iVar12 = uVar5 + ~(uint)uVar18;
        local_210[uVar13] = 0;
        local_198[uVar18 + 0x10] = lVar17;
        lVar17 = lVar16;
        if (iVar12 < (int)uVar5) {
          lVar17 = *(long *)(lVar19 + (long)iVar12 * 0x108 + 0xb8);
          if (lVar17 == 0) {
            lVar17 = *(long *)(lVar19 + (long)iVar12 * 0x108 + 0xa8);
          }
          local_198[uVar13] = lVar17;
          lVar15 = lVar17;
          do {
            lVar14 = lVar15;
            lVar15 = *(long *)(lVar14 + 0x120);
          } while (lVar15 != 0);
          local_198[uVar18 + 0x10] = *(long *)(lVar14 + 0xa8);
          if (lVar16 != 0) {
            lVar17 = lVar16;
          }
          local_210[uVar13] = *(undefined8 *)(lVar19 + (long)iVar12 * 0x108 + 0xd0);
        }
        lVar16 = lVar17;
        uVar18 = uVar13;
      } while (uVar13 != uVar21);
    }
    if (0 < (int)uVar6) {
      uVar18 = 0;
      lVar16 = lVar17;
      do {
        lVar19 = *(long *)(param_1 + 0x4a8);
        uVar6 = uVar5 + 1 + (int)uVar18;
        uVar13 = -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3;
        *(long *)((long)local_198 + uVar13 + 0x78) = plVar23[0x5350];
        *(undefined8 *)((long)local_210 + uVar13) = 0;
        lVar17 = *(long *)(lVar19 + uVar18 * 0x108 + 0xb0);
        if (lVar17 == 0) {
          lVar17 = *(long *)(lVar19 + uVar18 * 0x108 + 0xa0);
        }
        local_198[(int)uVar6] = lVar17;
        lVar15 = lVar17;
        do {
          lVar14 = lVar15;
          lVar15 = *(long *)(lVar14 + 0x120);
        } while (lVar15 != 0);
        lVar15 = uVar18 * 0x108;
        local_198[(long)(int)uVar6 + 0xf] = *(long *)(lVar14 + 0xa8);
        uVar18 = uVar18 + 1;
        if (lVar16 != 0) {
          lVar17 = lVar16;
        }
        local_210[(int)uVar6] = *(undefined8 *)(lVar19 + lVar15 + 0xd8);
        lVar16 = lVar17;
      } while (uVar18 != uVar22);
    }
  }
LAB_005b6a24:
  uVar5 = *(uint *)(param_2 + 0x54);
  uVar6 = *(uint *)(param_2 + 0x58);
  lVar16 = param_2;
  if (lVar17 != 0) {
    lVar16 = lVar17;
  }
  uVar2 = *(uint *)(lVar16 + 0x54);
  uVar3 = *(uint *)(lVar16 + 0x58);
  fVar34 = *(float *)(lVar16 + 0x88);
  fVar31 = *(float *)(lVar16 + 0x8c);
  lVar17 = 0;
  fVar30 = *(float *)(lVar16 + 0x90);
  fVar25 = *(float *)(lVar16 + 0x94);
  uVar7 = *(uint *)(param_4 + 0x54);
  fVar32 = *(float *)(param_2 + 0x88);
  fVar33 = *(float *)(param_2 + 0x8c);
  fVar29 = *(float *)(param_2 + 0x90);
  fVar28 = *(float *)(param_2 + 0x94);
  uVar8 = *(uint *)(param_4 + 0x58);
  do {
    lVar16 = local_198[lVar17];
    if (lVar16 != 0) {
      lVar19 = lVar16;
      do {
        lVar15 = lVar19;
        lVar19 = *(long *)(lVar15 + 0x120);
      } while (lVar19 != 0);
      plVar24 = *(long **)(lVar15 + 0xa8);
      if (*(int *)(lVar16 + 0x54) == *(int *)(param_4 + 0x54)) {
        bVar11 = *(int *)(lVar16 + 0x58) == *(int *)(param_4 + 0x58);
      }
      else {
        bVar11 = false;
      }
      (**(code **)(*plVar24 + 0x88))(plVar24,bVar11);
      (**(code **)(*plVar24 + 0x90))(plVar24,1);
    }
    lVar17 = lVar17 + 1;
  } while (lVar17 != 0xf);
  iVar12 = FUN_0059d300(param_4,0,0,1,0,0);
  FUN_0059d000(0,0);
  if (-1 < iVar12) {
    if (*(int *)(param_2 + 0x54) == *(int *)(param_4 + 0x54)) {
      bVar11 = *(int *)(param_2 + 0x58) == *(int *)(param_4 + 0x58);
    }
    else {
      bVar11 = false;
    }
    bVar11 = (bool)(bVar11 | *(long *)(param_2 + 0xb0) ==
                             *(long *)(param_4 + (long)*(int *)(param_4 + 0xa0) * 8 + 0xb8));
    if (bVar11) {
      lVar17 = param_2;
      do {
        lVar16 = lVar17;
        lVar17 = *(long *)(lVar16 + 0x120);
      } while (lVar17 != 0);
      plVar24 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar24 + 0x88))(plVar24,1);
    }
    fVar26 = (float)uVar7;
    fVar27 = (float)uVar8;
    fVar30 = fVar34 * (float)uVar2 + fVar30;
    fVar25 = fVar31 * (float)uVar3 + fVar25;
    switch(uVar4 - 2 >> 2 | (uVar4 - 2) * 0x40000000) {
    case 0:
      FUN_0057af00(0,0,fVar26,fVar27,0,0,plVar23,uVar21,uVar22,local_198 + 0xf,local_210,
                   *(undefined4 *)(param_1 + 0x16c),0,0,0,0,fVar30,fVar25);
      break;
    case 1:
    case 3:
    case 5:
      local_218 = 0x3f8000003ffeb852;
      bVar1 = false;
      if (*(char *)(param_1 + 0x12d) != '\0') {
        bVar1 = *(int *)(param_1 + 0x130) < 2;
      }
      if ((*(int *)(*(long *)(param_1 + 0x4a8) + 0x10) == 1) || (bVar1)) {
        local_218 = 0x3f6666663ff9999a;
      }
      FUN_0057b0f0(0,0,fVar26,fVar27,0,0,plVar23,uVar21,uVar22,local_198 + 0xf,local_210,&local_218,
                   *(undefined4 *)(param_1 + 0x16c),0,0,0,fVar30,fVar25,0);
      break;
    default:
      if (uVar4 < 2) {
        FUN_0057ad00(0,0,fVar26,fVar27,0,0,fVar32 * (float)uVar5 + fVar29,
                     fVar33 * (float)uVar6 + fVar28,plVar23,local_238,local_198 + 0xf,local_210,0,
                     *(undefined4 *)(param_1 + 0x16c),0,0,0,0,fVar30,fVar25);
      }
    }
    if (bVar11) {
      do {
        lVar17 = param_2;
        param_2 = *(long *)(lVar17 + 0x120);
      } while (param_2 != 0);
      plVar23 = *(long **)(lVar17 + 0xa8);
      (**(code **)(*plVar23 + 0x88))(plVar23,0);
    }
    lVar17 = local_198[0];
    if (local_198[0] != 0) {
      do {
        lVar16 = lVar17;
        lVar17 = *(long *)(lVar16 + 0x120);
      } while (lVar17 != 0);
      plVar23 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar23 + 0x88))(plVar23,0);
    }
    lVar17 = local_198[1];
    if (local_198[1] != 0) {
      do {
        lVar16 = lVar17;
        lVar17 = *(long *)(lVar16 + 0x120);
      } while (lVar17 != 0);
      plVar23 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar23 + 0x88))(plVar23,0);
    }
    lVar17 = local_198[2];
    if (local_198[2] != 0) {
      do {
        lVar16 = lVar17;
        lVar17 = *(long *)(lVar16 + 0x120);
      } while (lVar17 != 0);
      plVar23 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar23 + 0x88))(plVar23,0);
    }
    lVar17 = local_198[3];
    if (local_198[3] != 0) {
      do {
        lVar16 = lVar17;
        lVar17 = *(long *)(lVar16 + 0x120);
      } while (lVar17 != 0);
      plVar23 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar23 + 0x88))(plVar23,0);
    }
    lVar17 = local_198[4];
    if (local_198[4] != 0) {
      do {
        lVar16 = lVar17;
        lVar17 = *(long *)(lVar16 + 0x120);
      } while (lVar17 != 0);
      plVar23 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar23 + 0x88))(plVar23,0);
    }
    lVar17 = local_198[5];
    if (local_198[5] != 0) {
      do {
        lVar16 = lVar17;
        lVar17 = *(long *)(lVar16 + 0x120);
      } while (lVar17 != 0);
      plVar23 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar23 + 0x88))(plVar23,0);
    }
    lVar17 = local_198[6];
    if (local_198[6] != 0) {
      do {
        lVar16 = lVar17;
        lVar17 = *(long *)(lVar16 + 0x120);
      } while (lVar17 != 0);
      plVar23 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar23 + 0x88))(plVar23,0);
    }
    lVar17 = local_198[7];
    if (local_198[7] != 0) {
      do {
        lVar16 = lVar17;
        lVar17 = *(long *)(lVar16 + 0x120);
      } while (lVar17 != 0);
      plVar23 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar23 + 0x88))(plVar23,0);
    }
    lVar17 = local_198[8];
    if (local_198[8] != 0) {
      do {
        lVar16 = lVar17;
        lVar17 = *(long *)(lVar16 + 0x120);
      } while (lVar17 != 0);
      plVar23 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar23 + 0x88))(plVar23,0);
    }
    lVar17 = local_198[9];
    if (local_198[9] != 0) {
      do {
        lVar16 = lVar17;
        lVar17 = *(long *)(lVar16 + 0x120);
      } while (lVar17 != 0);
      plVar23 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar23 + 0x88))(plVar23,0);
    }
    lVar17 = local_198[10];
    if (local_198[10] != 0) {
      do {
        lVar16 = lVar17;
        lVar17 = *(long *)(lVar16 + 0x120);
      } while (lVar17 != 0);
      plVar23 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar23 + 0x88))(plVar23,0);
    }
    lVar17 = local_198[0xb];
    if (local_198[0xb] != 0) {
      do {
        lVar16 = lVar17;
        lVar17 = *(long *)(lVar16 + 0x120);
      } while (lVar17 != 0);
      plVar23 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar23 + 0x88))(plVar23,0);
    }
    lVar17 = local_198[0xc];
    if (local_198[0xc] != 0) {
      do {
        lVar16 = lVar17;
        lVar17 = *(long *)(lVar16 + 0x120);
      } while (lVar17 != 0);
      plVar23 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar23 + 0x88))(plVar23,0);
    }
    lVar17 = local_198[0xd];
    if (local_198[0xd] != 0) {
      do {
        lVar16 = lVar17;
        lVar17 = *(long *)(lVar16 + 0x120);
      } while (lVar17 != 0);
      plVar23 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar23 + 0x88))(plVar23,0);
    }
    lVar17 = local_198[0xe];
    if (local_198[0xe] != 0) {
      do {
        lVar16 = lVar17;
        lVar17 = *(long *)(lVar16 + 0x120);
      } while (lVar17 != 0);
      plVar23 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar23 + 0x88))(plVar23,0);
    }
    iVar12 = 0;
  }
  return iVar12;
}


