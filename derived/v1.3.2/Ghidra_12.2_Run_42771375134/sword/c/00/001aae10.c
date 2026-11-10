/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001aae10; name: FUN_001aae10
 */


void FUN_001aae10(undefined8 param_1,long param_2,uint param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  long local_250 [4];
  float local_230 [16];
  float local_1f0 [16];
  undefined4 local_1b0 [4];
  uint local_1a0 [4];
  undefined4 local_190 [4];
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  float local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  float local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  float local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  float local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  float local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  float local_a4;
  
  fVar15 = *(float *)(param_4 + 0xc);
  local_f8 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_e4 = -*(float *)(param_4 + 4);
  local_b4 = -fVar15;
  local_d4 = -*(float *)(param_4 + 8);
  local_e0 = 0x3f80000000000000;
  local_100 = 0x3f800000;
  local_b8 = 0x3f800000;
  local_a8 = 0xbf800000;
  local_f4 = local_e4;
  local_f0 = 0xbf800000;
  local_d0 = 0xbf80000000000000;
  local_c4 = local_d4;
  local_c0 = 0;
  local_b0 = 0;
  local_a4 = local_b4;
  if (param_3 != 0) {
    fVar23 = (float)param_1;
    fVar24 = local_e4 - fVar23;
    fVar25 = local_b4 - fVar23;
    fVar26 = *(float *)(param_4 + 8) + fVar23;
    fVar27 = local_d4 - fVar23;
    fVar28 = *(float *)(param_4 + 4) + fVar23;
    uVar10 = 0;
    uVar11 = 0;
    do {
      while( true ) {
        lVar7 = param_2 + uVar10 * 200;
        fVar16 = *(float *)(lVar7 + 0x78);
        fVar17 = *(float *)(lVar7 + 0x7c);
        fVar20 = *(float *)(lVar7 + 0x88);
        fVar14 = *(float *)(lVar7 + 0x8c);
        fVar19 = *(float *)(lVar7 + 0x80);
        fVar18 = *(float *)(lVar7 + 0x90);
        fVar21 = fVar16;
        if (fVar20 <= fVar16) {
          fVar21 = fVar20;
        }
        fVar22 = fVar16;
        if (fVar16 <= fVar20) {
          fVar22 = fVar20;
        }
        fVar29 = fVar17;
        if (fVar14 <= fVar17) {
          fVar29 = fVar14;
        }
        fVar30 = fVar17;
        if (fVar17 <= fVar14) {
          fVar30 = fVar14;
        }
        fVar31 = fVar19;
        if (fVar18 <= fVar19) {
          fVar31 = fVar18;
        }
        fVar32 = fVar19;
        if (fVar19 <= fVar18) {
          fVar32 = fVar18;
        }
        bVar1 = false;
        bVar3 = false;
        bVar5 = false;
        if (fVar31 <= fVar15 + fVar23) {
          bVar1 = false;
          bVar3 = false;
          bVar5 = true;
          if (!NAN(fVar29) && !NAN(fVar26)) {
            bVar1 = fVar29 < fVar26;
            bVar3 = fVar29 == fVar26;
            bVar5 = false;
          }
        }
        bVar2 = false;
        bVar4 = false;
        bVar6 = false;
        if (bVar3 || bVar1 != bVar5) {
          bVar2 = false;
          bVar4 = false;
          bVar6 = true;
          if (!NAN(fVar24) && !NAN(fVar22)) {
            bVar2 = fVar24 < fVar22;
            bVar4 = fVar24 == fVar22;
            bVar6 = false;
          }
        }
        bVar1 = false;
        bVar3 = false;
        bVar5 = false;
        if (bVar4 || bVar2 != bVar6) {
          bVar1 = false;
          bVar3 = false;
          bVar5 = true;
          if (!NAN(fVar21) && !NAN(fVar28)) {
            bVar1 = fVar21 < fVar28;
            bVar3 = fVar21 == fVar28;
            bVar5 = false;
          }
        }
        bVar2 = false;
        bVar4 = false;
        bVar6 = false;
        if (bVar3 || bVar1 != bVar5) {
          bVar2 = false;
          bVar4 = false;
          bVar6 = true;
          if (!NAN(fVar27) && !NAN(fVar30)) {
            bVar2 = fVar27 < fVar30;
            bVar4 = fVar27 == fVar30;
            bVar6 = false;
          }
        }
        bVar1 = false;
        bVar3 = false;
        bVar5 = false;
        if (bVar4 || bVar2 != bVar6) {
          bVar1 = false;
          bVar3 = false;
          bVar5 = true;
          if (!NAN(fVar25) && !NAN(fVar32)) {
            bVar1 = fVar25 < fVar32;
            bVar3 = fVar25 == fVar32;
            bVar5 = false;
          }
        }
        if (bVar3 || bVar1 != bVar5) {
          pfVar8 = local_1f0 + uVar11 * 4;
          *pfVar8 = fVar20;
          pfVar9 = local_230 + uVar11 * 4;
          *pfVar9 = fVar16;
          *(float *)((ulong)pfVar9 | 4) = fVar17;
          *(float *)((ulong)pfVar9 | 8) = fVar19;
          *(undefined4 *)((ulong)pfVar9 | 0xc) = 0;
          lVar7 = param_2 + uVar10 * 200;
          *(float *)((ulong)pfVar8 | 4) = fVar14;
          *(float *)((ulong)pfVar8 | 8) = fVar18;
          *(undefined4 *)((ulong)pfVar8 | 0xc) = 0;
          local_1a0[uVar11] = *(uint *)(lVar7 + 0x84);
          local_1b0[uVar11] = *(undefined4 *)(lVar7 + 0x5c);
          local_190[uVar11] = *(undefined4 *)(lVar7 + 0x2c);
          local_250[uVar11] = lVar7;
          uVar11 = (ulong)((int)uVar11 + 1);
        }
        if ((int)uVar11 == 4) break;
        if (((int)uVar11 != 0) && (uVar10 == param_3 - 1)) {
          uVar12 = uVar11;
          plVar13 = local_250;
          do {
            FUN_001ab1a0(param_1,*plVar13,&local_100,6);
            uVar12 = uVar12 - 1;
            plVar13 = plVar13 + 1;
          } while (uVar12 != 0);
        }
joined_r0x001ab14c:
        uVar10 = uVar10 + 1;
        if (uVar10 == param_3) {
          return;
        }
      }
      FUN_001ab480(param_1,local_250,&local_100,6);
      if (local_1a0[0] != 0) {
        *(uint *)(local_250[0] + 0x84) = *(uint *)(local_250[0] + 0x84) | local_1a0[0];
        *(undefined4 *)(local_250[0] + 0x2c) = local_190[0];
        *(undefined4 *)(local_250[0] + 0xa0) = local_180;
        *(undefined4 *)(local_250[0] + 0xa4) = local_17c;
        *(undefined4 *)(local_250[0] + 0xa8) = local_178;
        *(undefined4 *)(local_250[0] + 0xb8) = local_140;
        *(undefined4 *)(local_250[0] + 0xbc) = local_13c;
        *(undefined4 *)(local_250[0] + 0xc0) = local_138;
      }
      if (local_1a0[1] != 0) {
        *(uint *)(local_250[1] + 0x84) = *(uint *)(local_250[1] + 0x84) | local_1a0[1];
        *(undefined4 *)(local_250[1] + 0x2c) = local_190[1];
        *(undefined4 *)(local_250[1] + 0xa0) = local_170;
        *(undefined4 *)(local_250[1] + 0xa4) = local_16c;
        *(undefined4 *)(local_250[1] + 0xa8) = local_168;
        *(undefined4 *)(local_250[1] + 0xb8) = local_130;
        *(undefined4 *)(local_250[1] + 0xbc) = local_12c;
        *(undefined4 *)(local_250[1] + 0xc0) = local_128;
      }
      if (local_1a0[2] != 0) {
        *(uint *)(local_250[2] + 0x84) = *(uint *)(local_250[2] + 0x84) | local_1a0[2];
        *(undefined4 *)(local_250[2] + 0x2c) = local_190[2];
        *(undefined4 *)(local_250[2] + 0xa0) = local_160;
        *(undefined4 *)(local_250[2] + 0xa4) = local_15c;
        *(undefined4 *)(local_250[2] + 0xa8) = local_158;
        *(undefined4 *)(local_250[2] + 0xb8) = local_120;
        *(undefined4 *)(local_250[2] + 0xbc) = local_11c;
        *(undefined4 *)(local_250[2] + 0xc0) = local_118;
      }
      if (local_1a0[3] != 0) {
        *(uint *)(local_250[3] + 0x84) = *(uint *)(local_250[3] + 0x84) | local_1a0[3];
        *(undefined4 *)(local_250[3] + 0x2c) = local_190[3];
        *(undefined4 *)(local_250[3] + 0xa0) = local_150;
        *(undefined4 *)(local_250[3] + 0xa4) = local_14c;
        *(undefined4 *)(local_250[3] + 0xa8) = local_148;
        *(undefined4 *)(local_250[3] + 0xb8) = local_110;
        *(undefined4 *)(local_250[3] + 0xbc) = local_10c;
        uVar11 = 0;
        *(undefined4 *)(local_250[3] + 0xc0) = local_108;
        goto joined_r0x001ab14c;
      }
      uVar11 = 0;
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_3);
  }
  return;
}


