/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ab3b0; name: FUN_003ab3b0
 */


void FUN_003ab3b0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  float *pfVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_198;
  float local_194;
  float fStack_190;
  float local_188;
  float fStack_184;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_168;
  float fStack_164;
  float local_160;
  float local_158;
  float fStack_154;
  float local_150;
  float local_148;
  float fStack_144;
  float local_140;
  long local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  float local_f4;
  ushort local_f0 [4];
  undefined1 auStack_e8 [4];
  int local_e4;
  long *local_d8;
  long local_d0;
  int local_c8;
  long local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  ushort local_88 [4];
  
  fVar17 = *(float *)(*(long *)(param_1 + 0x48) + 0x7b8);
  local_c8 = 0xc;
  local_b8 = 0xc;
  local_d0 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 4;
  local_98 = 4;
  plVar5 = (long *)(**(code **)**(undefined8 **)(param_1 + 0x58))();
  (**(code **)(*plVar5 + 0x28))(plVar5,auStack_e8,0,0);
  if (local_e4 == 0) {
    return;
  }
  FUN_003a9c10(local_88,*(undefined8 *)(param_1 + 0x50));
  FUN_003a9c10(local_f0,*(undefined8 *)(param_1 + 0x50));
  fVar13 = (float)FUN_003e6620(*(undefined8 *)(param_1 + 0x48),0x1d);
  if (((local_88[0] & 1) != 0) && (0.0 < fVar13)) {
    fVar13 = (float)FUN_003a9c70(*(undefined8 *)(param_1 + 0x50));
    fVar14 = sqrtf(0.5);
    fVar15 = sqrtf(0.5);
    plVar5 = local_d8;
    uVar9 = *(uint *)(local_d8 + 1) & 0x7fffffff;
    if (uVar9 != 0) {
      uVar7 = 0;
      uVar11 = 0;
      do {
        uVar12 = *(uint *)(*local_d8 + uVar11 * 4);
        if (uVar12 != 0) {
          uVar7 = *(uint *)(PTR_DAT_02710c28 + (ulong)((uVar12 & -uVar12) * 0x77cb531 >> 0x1b) * 4)
                  | uVar7;
          uVar12 = uVar12 - 1 & uVar12;
          if (uVar12 != 0) goto LAB_003ab538;
          uVar10 = uVar11 + 1;
          goto LAB_003ab518;
        }
        uVar11 = uVar11 + 1;
        uVar7 = uVar7 + 0x20;
      } while (uVar11 < uVar9);
    }
  }
  goto LAB_003ab6e8;
  while( true ) {
    uVar12 = *(uint *)(*local_d8 + (uVar10 & 0xffffffff) * 4);
    uVar10 = (ulong)((uint)uVar10 + 1);
    if (uVar12 != 0) break;
LAB_003ab7cc:
    uVar11 = uVar10 & 0xffffffff;
    if (uVar9 <= (uint)uVar10) {
      uVar12 = 0;
      break;
    }
  }
joined_r0x003ab7f0:
  if (uVar7 != 0xffffffff) {
    while( true ) {
      pfVar2 = (float *)(local_d0 + (ulong)(local_c8 * uVar7));
      fStack_144 = pfVar2[1] + 0.0;
      local_148 = *pfVar2 + 0.0;
      local_140 = fVar13 + pfVar2[2];
      uVar6 = FUN_002186d0(param_2,&local_148);
      local_150 = pfVar2[2] - fVar13;
      local_158 = *pfVar2;
      fStack_154 = pfVar2[1];
      FUN_002186d0(uVar6,&local_158);
      local_168 = *pfVar2 + 0.0;
      fStack_164 = fVar13 + pfVar2[1];
      local_160 = pfVar2[2] + 0.0;
      uVar6 = FUN_002186d0(param_2,&local_168);
      local_174 = pfVar2[1] - fVar13;
      local_178 = *pfVar2;
      local_170 = pfVar2[2];
      FUN_002186d0(uVar6,&local_178);
      local_188 = fVar13 + *pfVar2;
      fStack_184 = pfVar2[1] + 0.0;
      local_180 = pfVar2[2] + 0.0;
      uVar6 = FUN_002186d0(param_2,&local_188);
      local_198 = *pfVar2 - fVar13;
      local_194 = pfVar2[1];
      fStack_190 = pfVar2[2];
      FUN_002186d0(uVar6,&local_198);
      if (uVar12 == 0) goto LAB_003ab944;
      uVar9 = (uint)uVar11;
      uVar7 = *(uint *)(puVar4 + (ulong)((uVar12 & -uVar12) * 0x77cb531 >> 0x1b) * 4) | uVar9 << 5;
      uVar12 = uVar12 - 1 & uVar12;
      if (uVar12 != 0) break;
      while( true ) {
        uVar9 = uVar9 + 1;
        uVar11 = (ulong)uVar9;
        if ((*(uint *)(plVar5 + 1) & 0x7fffffff) <= uVar9) break;
        uVar12 = *(uint *)(*plVar5 + (ulong)uVar9 * 4);
        if (uVar12 != 0) goto joined_r0x003ab7f0;
      }
      uVar12 = 0;
      if (uVar7 == 0xffffffff) goto LAB_003ab944;
    }
    goto joined_r0x003ab7f0;
  }
  goto LAB_003ab944;
  while( true ) {
    uVar12 = *(uint *)(*local_d8 + (uVar10 & 0xffffffff) * 4);
    uVar10 = (ulong)((uint)uVar10 + 1);
    if (uVar12 != 0) break;
LAB_003aba1c:
    uVar11 = uVar10 & 0xffffffff;
    if (uVar9 <= (uint)uVar10) {
      uVar12 = 0;
      break;
    }
  }
LAB_003aba44:
  do {
    do {
      if (uVar7 == 0xffffffff) {
        return;
      }
      pfVar2 = (float *)(local_d0 + (ulong)(local_c8 * uVar7));
      pfVar3 = (float *)(local_c0 + (ulong)(local_b8 * uVar7));
      local_138 = *(long *)pfVar2;
      local_130 = CONCAT44(fVar17 * *pfVar3 + *pfVar2,pfVar2[2]);
      local_128 = CONCAT44(fVar17 * pfVar3[2] + pfVar2[2],fVar17 * pfVar3[1] + pfVar2[1]);
      local_120 = CONCAT44(local_120._4_4_,fVar13 * fVar14);
      FUN_00218e10(param_2,&local_138);
      if (uVar12 == 0) {
        return;
      }
      uVar9 = (uint)uVar11;
      uVar7 = *(uint *)(puVar4 + (ulong)((uVar12 & -uVar12) * 0x77cb531 >> 0x1b) * 4) | uVar9 << 5;
      uVar12 = uVar12 - 1 & uVar12;
    } while (uVar12 != 0);
    do {
      uVar9 = uVar9 + 1;
      uVar11 = (ulong)uVar9;
      if ((*(uint *)(local_d8 + 1) & 0x7fffffff) <= uVar9) {
        uVar12 = 0;
        break;
      }
      uVar12 = *(uint *)(*local_d8 + (ulong)uVar9 * 4);
    } while (uVar12 == 0);
  } while( true );
  while( true ) {
    uVar12 = *(uint *)(*local_d8 + (uVar10 & 0xffffffff) * 4);
    uVar10 = (ulong)((uint)uVar10 + 1);
    if (uVar12 != 0) break;
LAB_003ab518:
    uVar11 = uVar10 & 0xffffffff;
    if (uVar9 <= (uint)uVar10) {
      uVar12 = 0;
      break;
    }
  }
LAB_003ab538:
  if (uVar7 != 0xffffffff) {
    fVar18 = fVar13 * DAT_01d4bdf0;
    do {
      puVar1 = (undefined8 *)(local_d0 + (ulong)(local_c8 * uVar7));
      if ((local_f0[0] >> 1 & 1) == 0) {
LAB_003ab5a4:
        uVar6 = 0xff00ff00;
      }
      else {
        pfVar2 = (float *)(local_c0 + (ulong)(local_b8 * uVar7));
        fVar16 = sqrtf(*pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1] + pfVar2[2] * pfVar2[2]);
        if (fVar17 * fVar16 < fVar18) goto LAB_003ab5a4;
        uVar6 = 0xffff0000;
      }
      FUN_00218580(param_2,uVar6);
      local_138 = 0;
      local_130 = 0x3f80000000000000;
      local_128 = *puVar1;
      local_120._0_4_ = *(undefined4 *)(puVar1 + 1);
      uVar6 = FUN_00218620(param_2,&local_138);
      local_f8 = 0xc;
      local_f4 = fVar13;
      FUN_002191b0(uVar6,&local_f8);
      local_138 = (ulong)(uint)fVar14 << 0x20;
      local_130 = (ulong)(uint)fVar15 << 0x20;
      local_128 = *puVar1;
      local_120._0_4_ = *(undefined4 *)(puVar1 + 1);
      uVar6 = FUN_00218620(param_2,&local_138);
      local_f8 = 0xc;
      local_f4 = fVar13;
      FUN_002191b0(uVar6,&local_f8);
      local_138 = 0x3f0000003f000000;
      local_130 = 0x3f0000003f000000;
      local_128 = *puVar1;
      local_120 = CONCAT44(local_120._4_4_,*(undefined4 *)(puVar1 + 1));
      uVar6 = FUN_00218620(param_2,&local_138);
      local_f8 = 0xc;
      local_f4 = fVar13;
      FUN_002191b0(uVar6,&local_f8);
      if (uVar12 == 0) break;
      uVar9 = uVar12 & -uVar12;
      uVar12 = uVar12 - 1 & uVar12;
      uVar8 = (uint)uVar11;
      uVar7 = *(uint *)(PTR_DAT_02710c28 + (ulong)(uVar9 * 0x77cb531 >> 0x1b) * 4) | uVar8 << 5;
      if (uVar12 == 0) {
        do {
          uVar8 = uVar8 + 1;
          uVar11 = (ulong)uVar8;
          if ((*(uint *)(plVar5 + 1) & 0x7fffffff) <= uVar8) {
            uVar12 = 0;
            break;
          }
          uVar12 = *(uint *)(*plVar5 + (ulong)uVar8 * 4);
        } while (uVar12 == 0);
      }
    } while (uVar7 != 0xffffffff);
  }
LAB_003ab6e8:
  fVar13 = (float)FUN_003e6620(*(undefined8 *)(param_1 + 0x48),0x17);
  if (((local_88[0] & 1) != 0) && (0.0 < fVar13)) {
    fVar13 = (float)FUN_003e6620(*(undefined8 *)(param_1 + 0x48),0x17);
    fVar14 = *(float *)(*(long *)(param_1 + 0x48) + 0x1288);
    uVar6 = FUN_00218580(param_2,0xff0000ff);
    uVar6 = FUN_00218570(uVar6,1);
    local_138 = 0x3f800000;
    local_130 = 0;
    local_128 = 0x3f80000000000000;
    local_120 = 0;
    local_118 = 0;
    uStack_110 = 0x3f800000;
    local_108 = 0;
    uStack_100 = 0x3f80000000000000;
    FUN_00218590(uVar6,&local_138);
    plVar5 = local_d8;
    puVar4 = PTR_DAT_02710c28;
    uVar9 = *(uint *)(local_d8 + 1) & 0x7fffffff;
    if (uVar9 != 0) {
      fVar13 = fVar13 * fVar14 * 0.5;
      uVar7 = 0;
      uVar11 = 0;
      do {
        uVar12 = *(uint *)(*local_d8 + uVar11 * 4);
        if (uVar12 != 0) {
          uVar7 = *(uint *)(PTR_DAT_02710c28 + (ulong)((uVar12 & -uVar12) * 0x77cb531 >> 0x1b) * 4)
                  | uVar7;
          uVar12 = uVar12 - 1 & uVar12;
          if (uVar12 != 0) goto joined_r0x003ab7f0;
          uVar10 = uVar11 + 1;
          goto LAB_003ab7cc;
        }
        uVar11 = uVar11 + 1;
        uVar7 = uVar7 + 0x20;
      } while (uVar11 < uVar9);
    }
  }
LAB_003ab944:
  fVar13 = (float)FUN_003e6620(*(undefined8 *)(param_1 + 0x48),0x18);
  if ((((local_88[0] & 1) != 0) && (0.0 < fVar13)) && ((local_f0[0] >> 1 & 1) != 0)) {
    fVar13 = (float)FUN_003e6620(*(undefined8 *)(param_1 + 0x48),0x18);
    fVar14 = *(float *)(*(long *)(param_1 + 0x48) + 0x1288);
    uVar6 = FUN_00218580(param_2,0xffff0000);
    local_138 = 0x3f800000;
    local_130 = 0;
    local_128 = 0x3f80000000000000;
    local_120 = 0;
    local_118 = 0;
    uStack_110 = 0x3f800000;
    local_108 = 0;
    uStack_100 = 0x3f80000000000000;
    FUN_00218590(uVar6,&local_138);
    puVar4 = PTR_DAT_02710c28;
    uVar9 = *(uint *)(local_d8 + 1) & 0x7fffffff;
    if (uVar9 != 0) {
      uVar7 = 0;
      uVar11 = 0;
      do {
        uVar12 = *(uint *)(*local_d8 + uVar11 * 4);
        if (uVar12 != 0) {
          uVar7 = *(uint *)(PTR_DAT_02710c28 + (ulong)((uVar12 & -uVar12) * 0x77cb531 >> 0x1b) * 4)
                  | uVar7;
          uVar12 = uVar12 - 1 & uVar12;
          if (uVar12 != 0) goto LAB_003aba44;
          uVar10 = uVar11 + 1;
          goto LAB_003aba1c;
        }
        uVar11 = uVar11 + 1;
        uVar7 = uVar7 + 0x20;
      } while (uVar11 < uVar9);
    }
  }
  return;
}


