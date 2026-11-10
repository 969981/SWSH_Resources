/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001a99f0; name: FUN_001a99f0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_001a99f0(long param_1,undefined8 param_2,uint param_3,float *param_4,long *param_5,
                 long param_6,uint *param_7,undefined8 param_8,long *param_9,float *param_10)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  float *pfVar8;
  ushort uVar9;
  float *pfVar10;
  ulong uVar11;
  float *pfVar12;
  undefined1 **ppuVar13;
  undefined1 **ppuVar14;
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
  float fVar33;
  float fVar34;
  long *local_110;
  float *local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined1 *local_e8;
  char local_e0;
  undefined1 auStack_d0 [8];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  
  lVar6 = param_9[1];
  local_110 = param_9;
  pfVar8 = param_10 + 7;
  fVar15 = *pfVar8;
  local_c8 = -fVar15;
  fVar19 = param_10[0xc];
  fVar20 = param_10[0xd];
  fVar24 = fVar20 * -2.0;
  local_bc = param_10[10];
  fVar18 = param_10[0xb];
  fVar23 = fVar19 * -2.0;
  fVar16 = param_10[8];
  fVar17 = param_10[9];
  fVar22 = fVar18 * -2.0;
  local_c4 = -fVar16;
  local_c0 = -fVar17;
  fVar21 = local_bc * local_bc + -0.5;
  fVar25 = fVar22 * fVar15 + fVar23 * fVar16 + fVar24 * fVar17;
  local_b4 = fVar16 * fVar25 + (fVar23 * fVar21 - local_bc * (fVar22 * fVar17 - fVar24 * fVar15));
  local_b8 = fVar15 * fVar25 + (fVar22 * fVar21 - local_bc * (fVar24 * fVar16 - fVar23 * fVar17));
  local_b0 = (fVar24 * fVar21 - local_bc * (fVar23 * fVar15 - fVar22 * fVar16)) + fVar17 * fVar25;
  puVar1 = (undefined4 *)(lVar6 + 0x28);
  puVar2 = (undefined1 *)0x0;
  if (*(char *)((long)param_9 + 0x19) != '\0') {
    puVar2 = (undefined1 *)*param_9;
  }
  if (param_3 != 0) {
    fVar22 = param_10[2];
    fVar23 = param_10[3];
    uVar11 = (ulong)param_3;
    lVar3 = *param_5;
    lVar4 = param_5[1];
    fVar24 = fVar23 * fVar23 + -0.5;
    fVar25 = *param_10;
    fVar26 = param_10[1];
    pfVar10 = param_4 + 0x1e;
    while( true ) {
      uVar11 = uVar11 - 1;
      fVar28 = pfVar10[-0xd] + pfVar10[-0xd];
      fVar29 = pfVar10[-0xc] + pfVar10[-0xc];
      fVar27 = pfVar10[-0xe] + pfVar10[-0xe];
      fVar32 = pfVar10[-0x11] + pfVar10[-0x11];
      fVar31 = pfVar10[-0x12] + pfVar10[-0x12];
      fVar30 = pfVar10[-0x10] + pfVar10[-0x10];
      fVar34 = fVar31 * fVar25 + fVar32 * fVar26 + fVar30 * fVar22;
      fVar33 = fVar15 * fVar27 + fVar16 * fVar28 + fVar17 * fVar29;
      pfVar10[3] = (float)((uint)pfVar10[-0x1b] & 2);
      pfVar10[4] = fVar18 + fVar15 * fVar33 +
                            fVar21 * fVar27 + local_bc * (fVar16 * fVar29 - fVar17 * fVar28);
      pfVar10[5] = fVar19 + fVar16 * fVar33 +
                            fVar21 * fVar28 + local_bc * (fVar17 * fVar27 - fVar15 * fVar29);
      pfVar10[6] = fVar20 + fVar21 * fVar29 + local_bc * (fVar15 * fVar28 - fVar16 * fVar27) +
                            fVar17 * fVar33;
      fVar18 = param_10[4];
      fVar19 = param_10[5];
      fVar20 = param_10[6];
      pfVar10[0xc] = 0.0;
      pfVar10[0x12] = 0.0;
      *pfVar10 = fVar18 + fVar25 * fVar34 +
                          fVar31 * fVar24 + fVar23 * (fVar30 * fVar26 - fVar32 * fVar22);
      pfVar10[1] = fVar19 + fVar26 * fVar34 +
                            fVar32 * fVar24 + fVar23 * (fVar31 * fVar22 - fVar30 * fVar25);
      *(ulong *)(pfVar10 + 8) = lVar3 + (ulong)(uint)pfVar10[-0xb] * 0x10;
      pfVar10[10] = 0.0;
      pfVar10[0xb] = 0.0;
      *(ulong *)(pfVar10 + 0xe) = lVar4 + (ulong)(uint)pfVar10[-0xb] * 0x10;
      pfVar10[0x10] = 0.0;
      pfVar10[0x11] = 0.0;
      pfVar10[2] = fVar20 + fVar30 * fVar24 + fVar23 * (fVar32 * fVar25 - fVar31 * fVar26) +
                            fVar22 * fVar34;
      if (uVar11 == 0) break;
      fVar18 = param_10[0xb];
      fVar19 = param_10[0xc];
      fVar20 = param_10[0xd];
      pfVar10 = pfVar10 + 0x32;
    }
  }
  local_108 = param_4;
  switch(*puVar1) {
  case 0:
    FUN_001ac390(*(undefined4 *)(param_1 + 0x34),param_4,param_3,puVar1);
    pfVar8 = local_108;
    break;
  case 1:
    FUN_001ac1f0(*(undefined4 *)(param_1 + 0x34),param_4,param_3,puVar1);
    pfVar8 = local_108;
    break;
  case 2:
    FUN_001ac670(*(undefined4 *)(param_1 + 0x34),param_4,param_3,puVar1);
    pfVar8 = local_108;
    break;
  case 3:
    FUN_001aae10(*(undefined4 *)(param_1 + 0x34),param_4,param_3,puVar1);
    pfVar8 = local_108;
    break;
  case 4:
    uVar11 = (ulong)*(byte *)(*(long *)(lVar6 + 0x58) + 0x27);
    local_e0 = 0x40 < uVar11;
    if (uVar11 < 0x41) {
      local_e8 = auStack_d0 + (-0x40 - (uVar11 * 0x10 + 0xf & 0x1fffffff0));
    }
    else {
                    /* try { // try from 001a9d28 to 001a9d3b has its CatchHandler @ 001aab90 */
      local_e8 = (undefined1 *)
                 FUN_00401b30(auStack_d0,uVar11 * 0x10,
                              "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtCollision.cpp"
                              ,0x24b);
    }
                    /* try { // try from 001aa6ec to 001aa6fb has its CatchHandler @ 001aaba4 */
    FUN_001ab970(*(undefined4 *)(param_1 + 0x34),local_e8,local_108,param_3,puVar1);
    if (local_e0 != '\0') {
                    /* try { // try from 001aa708 to 001aa70f has its CatchHandler @ 001aaba0 */
      FUN_00401ce0(&local_e8,local_e8);
    }
  default:
    pfVar8 = local_108;
    break;
  case 5:
    if (param_6 == 0) {
      if ((char)param_7[8] == '\0') {
        uVar7 = param_3 * 4;
        local_e0 = 0x400 < uVar7;
        if (uVar7 < 0x401) {
          local_e8 = auStack_d0 + (-0x40 - ((ulong)uVar7 + 0xf & 0x1fffffff0));
        }
        else {
                    /* try { // try from 001aa73c to 001aa753 has its CatchHandler @ 001aab5c */
          local_e8 = (undefined1 *)
                     FUN_00401b30(auStack_d0,uVar7,
                                  "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtCollision.cpp"
                                  ,0x25b);
        }
        uVar5 = param_3 + 1 | param_3 + 1 >> 1;
        uVar5 = uVar5 | uVar5 >> 2;
        uVar5 = uVar5 | uVar5 >> 4;
        uVar5 = uVar5 | uVar5 >> 8;
        uVar5 = uVar5 | uVar5 >> 0x10;
        uVar7 = 0x100;
        if (uVar5 + 1 < 0x100) {
          uVar7 = uVar5 + 1;
        }
                    /* try { // try from 001aa7a8 to 001aa7bb has its CatchHandler @ 001aab70 */
        FUN_001a67a0(*(undefined4 *)(param_1 + 0x20),param_2,param_3,*(undefined8 *)(param_7 + 6),
                     *(undefined8 *)(param_7 + 2),local_e8,uVar7,param_8);
        param_7[4] = uVar7;
        *param_7 = param_3;
        *(undefined1 *)(param_7 + 8) = 1;
        if (local_e0 != '\0') {
                    /* try { // try from 001aa7d8 to 001aa7df has its CatchHandler @ 001aab6c */
          FUN_00401ce0(&local_e8,local_e8);
        }
      }
      FUN_001adef0(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x3c),
                   *(undefined4 *)(param_1 + 0x34),local_108,param_7,puVar1,pfVar8,&local_c8,param_8
                  );
    }
    else {
      FUN_001ae7d0(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x3c),
                   *(undefined4 *)(param_1 + 0x34),param_3,param_4,param_6,puVar1,pfVar8,&local_c8);
    }
    goto joined_r0x001aa808;
  case 6:
    FUN_001af760(*(undefined4 *)(param_1 + 0x34),param_4,param_3,puVar1,&local_c8);
joined_r0x001aa808:
    if (param_3 == 0) {
      return;
    }
    uVar11 = (ulong)param_3;
    fVar15 = local_bc * local_bc + -0.5;
    pfVar8 = local_108;
    do {
      fVar16 = pfVar8[0x21];
      if (((uint)fVar16 & 0x38) != 0) {
        if (((uint)fVar16 >> 3 & 1) != 0) {
          fVar18 = pfVar8[0x29] + pfVar8[0x29];
          fVar17 = pfVar8[0x28] + pfVar8[0x28];
          fVar19 = pfVar8[0x2a] + pfVar8[0x2a];
          *(undefined8 *)(pfVar8 + 4) = *(undefined8 *)(pfVar8 + 0xc);
          fVar20 = fVar17 * local_c8 + fVar18 * local_c4 + fVar19 * local_c0;
          pfVar8[6] = pfVar8[0xe];
          pfVar8[3] = (float)((uint)pfVar8[3] & 0xfffffffc | 2);
          *(ushort *)(pfVar8 + 0xf) = *(ushort *)(pfVar8 + 0xf) | 2;
          *pfVar8 = local_c8 * fVar20 +
                    fVar17 * fVar15 + local_bc * (fVar19 * local_c4 - fVar18 * local_c0);
          pfVar8[1] = local_c4 * fVar20 +
                      fVar18 * fVar15 + local_bc * (fVar17 * local_c0 - fVar19 * local_c8);
          pfVar8[2] = fVar19 * fVar15 + local_bc * (fVar18 * local_c8 - fVar17 * local_c4) +
                      local_c0 * fVar20;
        }
        if (((uint)fVar16 >> 4 & 1) != 0) {
          fVar16 = pfVar8[0x31];
          fVar17 = 0.5;
          if (fVar16 + -1.5 < 0.0) {
            fVar17 = 1.0;
          }
          fVar18 = 1.0 / fVar16;
          if (fVar16 < 3.0) {
            fVar18 = fVar17;
          }
          fVar19 = fVar18 * pfVar8[0x29] + fVar18 * pfVar8[0x29];
          fVar24 = fVar18 * pfVar8[0x2e] + fVar18 * pfVar8[0x2e];
          fVar25 = fVar18 * pfVar8[0x2f] + fVar18 * pfVar8[0x2f];
          fVar17 = fVar18 * pfVar8[0x2a] + fVar18 * pfVar8[0x2a];
          fVar20 = fVar18 * pfVar8[0x28] + fVar18 * pfVar8[0x28];
          fVar22 = fVar20 * local_c8 + fVar19 * local_c4 + fVar17 * local_c0;
          fVar18 = fVar18 * pfVar8[0x30] + fVar18 * pfVar8[0x30];
          fVar23 = fVar16 * (local_c8 * fVar22 +
                            fVar20 * fVar15 + local_bc * (fVar17 * local_c4 - fVar19 * local_c0));
          fVar21 = fVar16 * (fVar17 * fVar15 + local_bc * (fVar19 * local_c8 - fVar20 * local_c4) +
                            local_c0 * fVar22);
          fVar19 = fVar16 * (local_c4 * fVar22 +
                            fVar19 * fVar15 + local_bc * (fVar20 * local_c0 - fVar17 * local_c8));
          fVar20 = fVar24 * local_c8 + fVar25 * local_c4 + fVar18 * local_c0;
          fVar17 = pfVar8[3];
          pfVar8[3] = (float)((uint)fVar17 | 1);
          if (((uint)fVar17 >> 2 & 1) == 0) {
            *pfVar8 = fVar23 + *pfVar8;
            pfVar8[1] = fVar19 + pfVar8[1];
            pfVar8[2] = fVar21 + pfVar8[2];
          }
          else {
            *pfVar8 = fVar23;
            pfVar8[1] = fVar19;
            pfVar8[2] = fVar21;
            pfVar8[3] = (float)((uint)fVar17 & 0xfffffffb | 1);
          }
          *(ushort *)(pfVar8 + 0xf) = *(ushort *)(pfVar8 + 0xf) | 2;
          pfVar8[4] = fVar16 * (local_b8 +
                               local_c8 * fVar20 +
                               fVar24 * fVar15 + local_bc * (fVar18 * local_c4 - fVar25 * local_c0))
                      + pfVar8[4];
          pfVar8[5] = fVar16 * (local_b4 +
                               local_c4 * fVar20 +
                               fVar25 * fVar15 + local_bc * (fVar24 * local_c0 - fVar18 * local_c8))
                      + pfVar8[5];
          pfVar8[6] = fVar16 * (local_b0 +
                               fVar18 * fVar15 + local_bc * (fVar25 * local_c8 - fVar24 * local_c4)
                               + local_c0 * fVar20) + pfVar8[6];
          pfVar8[7] = fVar16 + pfVar8[7];
        }
      }
      uVar11 = uVar11 - 1;
      pfVar8 = pfVar8 + 0x32;
    } while (uVar11 != 0);
    goto LAB_001aaaec;
  }
  local_108 = pfVar8;
  if (puVar2 == (undefined1 *)0x0) {
    if (param_3 == 0) {
      return;
    }
    fVar15 = local_bc * local_bc + -0.5;
    uVar11 = (ulong)param_3;
    do {
      fVar16 = pfVar8[0x21];
      if (((uint)fVar16 & 0x38) != 0) {
        fVar23 = pfVar8[0x2e] + pfVar8[0x2e];
        fVar21 = pfVar8[0x28] + pfVar8[0x28];
        fVar22 = pfVar8[0x29] + pfVar8[0x29];
        fVar25 = pfVar8[0x30] + pfVar8[0x30];
        fVar17 = pfVar8[0x2a] + pfVar8[0x2a];
        fVar24 = pfVar8[0x2f] + pfVar8[0x2f];
        fVar19 = fVar21 * local_c8 + fVar22 * local_c4 + fVar17 * local_c0;
        fVar20 = local_c4 * fVar19 +
                 fVar22 * fVar15 + local_bc * (fVar21 * local_c0 - fVar17 * local_c8);
        fVar18 = fVar17 * fVar15 + local_bc * (fVar22 * local_c8 - fVar21 * local_c4) +
                 local_c0 * fVar19;
        fVar26 = local_c8 * fVar23 + local_c4 * fVar24 + local_c0 * fVar25;
        fVar17 = local_c8 * fVar19 +
                 fVar21 * fVar15 + local_bc * (fVar17 * local_c4 - fVar22 * local_c0);
        fVar21 = local_b8 +
                 local_c8 * fVar26 +
                 fVar15 * fVar23 + local_bc * (local_c4 * fVar25 - local_c0 * fVar24);
        fVar22 = local_b4 +
                 local_c4 * fVar26 +
                 fVar15 * fVar24 + local_bc * (local_c0 * fVar23 - local_c8 * fVar25);
        fVar19 = local_b0 +
                 fVar15 * fVar25 + local_bc * (local_c8 * fVar24 - local_c4 * fVar23) +
                 local_c0 * fVar26;
        if (((uint)fVar16 >> 3 & 1) != 0) {
          pfVar8[3] = (float)((uint)pfVar8[3] & 0xfffffffc | 2);
          *pfVar8 = fVar17;
          pfVar8[1] = fVar20;
          pfVar8[2] = fVar18;
          pfVar8[4] = fVar21;
          pfVar8[5] = fVar22;
          pfVar8[6] = fVar19;
          *(ushort *)(pfVar8 + 0xf) = *(ushort *)(pfVar8 + 0xf) | 2;
        }
        if (((uint)fVar16 >> 4 & 1) != 0) {
          fVar23 = pfVar8[3];
          pfVar8[3] = (float)((uint)fVar23 | 1);
          if (((uint)fVar23 >> 2 & 1) == 0) {
            pfVar8[1] = fVar20 + pfVar8[1];
            *pfVar8 = fVar17 + *pfVar8;
            pfVar8[2] = fVar18 + pfVar8[2];
          }
          else {
            *pfVar8 = fVar17;
            pfVar8[1] = fVar20;
            pfVar8[2] = fVar18;
            pfVar8[3] = (float)((uint)fVar23 & 0xfffffffb | 1);
          }
          *(ushort *)(pfVar8 + 0xf) = *(ushort *)(pfVar8 + 0xf) | 2;
          pfVar8[5] = fVar22 + pfVar8[5];
          pfVar8[4] = fVar21 + pfVar8[4];
          pfVar8[6] = fVar19 + pfVar8[6];
          pfVar8[7] = pfVar8[7] + 1.0;
        }
        if (((uint)fVar16 & 0x28) != 0) {
          fVar16 = fVar18 * fVar19 + fVar17 * fVar21 + fVar20 * fVar22;
          uVar9 = *(ushort *)((long)pfVar8 + 0x3e);
          if ((uVar9 & 1) == 0) {
            pfVar10 = *(float **)(pfVar8 + 0x26);
            *pfVar10 = fVar17;
            pfVar10[1] = fVar20;
            pfVar10[2] = fVar18;
            pfVar10[3] = fVar16;
LAB_001aa058:
            uVar9 = uVar9 | 1;
          }
          else {
            if ((uVar9 >> 1 & 1) != 0) {
              pfVar10 = *(float **)(pfVar8 + 0x26);
              fVar21 = pfVar8[0xc];
              fVar23 = pfVar8[0xd];
              fVar24 = pfVar8[0xe];
              pfVar12 = *(float **)(pfVar8 + 0x2c);
              fVar19 = (*pfVar10 * fVar21 + pfVar10[1] * fVar23 + pfVar10[2] * fVar24) - pfVar10[3];
              fVar22 = (fVar17 * fVar21 + fVar20 * fVar23 + fVar18 * fVar24) - fVar16;
              fVar21 = (fVar21 * *pfVar12 + fVar23 * pfVar12[1] + fVar24 * pfVar12[2]) - pfVar12[3];
              if (fVar21 <= fVar19) {
                if (fVar22 < fVar19) {
                  uVar9 = uVar9 & 0xfffb;
                  *pfVar10 = fVar17;
                  pfVar10[1] = fVar20;
                  pfVar10[2] = fVar18;
                  pfVar10[3] = fVar16;
                  goto LAB_001aa058;
                }
              }
              else if (fVar22 < fVar21) {
                uVar9 = uVar9 & 0xfff7;
                *pfVar12 = fVar17;
                pfVar12[1] = fVar20;
                pfVar12[2] = fVar18;
                pfVar12[3] = fVar16;
                goto LAB_001aa070;
              }
              goto LAB_001aa078;
            }
            pfVar10 = *(float **)(pfVar8 + 0x2c);
            *pfVar10 = fVar17;
            pfVar10[1] = fVar20;
            pfVar10[2] = fVar18;
            pfVar10[3] = fVar16;
LAB_001aa070:
            uVar9 = uVar9 | 2;
          }
          *(ushort *)((long)pfVar8 + 0x3e) = uVar9;
        }
      }
LAB_001aa078:
      uVar11 = uVar11 - 1;
      pfVar8 = pfVar8 + 0x32;
    } while (uVar11 != 0);
  }
  else {
    if (param_3 == 0) {
      return;
    }
    uVar11 = (ulong)param_3;
    do {
      if (param_5[2] == 0) {
        ppuVar13 = &local_e8;
        lVar6 = param_5[3];
        if (lVar6 != 0) goto LAB_001aa1a4;
LAB_001aa1bc:
        ppuVar14 = &local_e8;
      }
      else {
        ppuVar13 = (undefined1 **)(param_5[2] + (ulong)(uint)pfVar8[0x13] * 0x18);
        lVar6 = param_5[3];
        if (lVar6 == 0) goto LAB_001aa1bc;
LAB_001aa1a4:
        ppuVar14 = (undefined1 **)(lVar6 + (ulong)(uint)pfVar8[0x13] * 0x18);
      }
      *ppuVar13 = (undefined1 *)0x0;
      *(undefined4 *)(ppuVar13 + 1) = 0;
      ppuVar13[2] = (undefined1 *)0x0;
      *ppuVar14 = (undefined1 *)0x0;
      *(undefined4 *)(ppuVar14 + 1) = 0;
      ppuVar14[2] = (undefined1 *)0x0;
      fVar15 = pfVar8[0x21];
      if (((uint)fVar15 & 0x38) != 0) {
        fVar16 = pfVar8[0x29] + pfVar8[0x29];
        fVar18 = pfVar8[0x28] + pfVar8[0x28];
        fVar20 = pfVar8[0x2a] + pfVar8[0x2a];
        fVar22 = local_bc * local_bc + -0.5;
        fVar23 = fVar18 * local_c8 + fVar16 * local_c4 + fVar20 * local_c0;
        local_f8 = local_c8 * fVar23 +
                   fVar18 * fVar22 + local_bc * (fVar20 * local_c4 - fVar16 * local_c0);
        local_100 = fVar20 * fVar22 + local_bc * (fVar16 * local_c8 - fVar18 * local_c4) +
                    local_c0 * fVar23;
        fVar19 = pfVar8[0x2f] + pfVar8[0x2f];
        fVar17 = pfVar8[0x2e] + pfVar8[0x2e];
        fVar21 = pfVar8[0x30] + pfVar8[0x30];
        fStack_fc = local_c4 * fVar23 +
                    fVar16 * fVar22 + local_bc * (fVar18 * local_c0 - fVar20 * local_c8);
        fVar16 = local_c8 * fVar17 + local_c4 * fVar19 + local_c0 * fVar21;
        fVar20 = local_b4 +
                 local_c4 * fVar16 +
                 fVar22 * fVar19 + local_bc * (local_c0 * fVar17 - local_c8 * fVar21);
        fVar18 = local_b8 +
                 local_c8 * fVar16 +
                 fVar22 * fVar17 + local_bc * (local_c4 * fVar21 - local_c0 * fVar19);
        fVar16 = local_b0 +
                 fVar22 * fVar21 + local_bc * (local_c8 * fVar19 - local_c4 * fVar17) +
                 local_c0 * fVar16;
        fVar22 = fVar20 - *(float *)(puVar2 + 0x14);
        fVar19 = fVar18 - *(float *)(puVar2 + 0x10);
        fVar24 = fVar16 - *(float *)(puVar2 + 0x18);
        fVar17 = *(float *)(puVar2 + 0x54) * fVar24 - *(float *)(puVar2 + 0x58) * fVar22;
        fVar21 = fVar22 * *(float *)(puVar2 + 0x50) - *(float *)(puVar2 + 0x54) * fVar19;
        fVar23 = *(float *)(puVar2 + 0x58) * fVar19 - fVar24 * *(float *)(puVar2 + 0x50);
        local_f4 = fVar17 + *(float *)(puVar2 + 0x40);
        fVar25 = *(float *)(param_1 + 0x40);
        local_f0 = fVar23 + *(float *)(puVar2 + 0x44);
        local_ec = fVar21 + *(float *)(puVar2 + 0x48);
        if (((uint)fVar15 >> 3 & 1) != 0) {
          pfVar8[3] = (float)((uint)pfVar8[3] & 0xfffffffc | 2);
          *pfVar8 = local_f8;
          pfVar8[1] = fStack_fc;
          pfVar8[2] = local_100;
          pfVar8[4] = fVar18;
          pfVar8[5] = fVar20;
          pfVar8[6] = fVar16;
          pfVar8[8] = local_f4;
          pfVar8[9] = local_f0;
          pfVar8[10] = local_ec;
          *(undefined1 **)(pfVar8 + 0x1c) = puVar2;
          *(ushort *)(pfVar8 + 0xf) = *(ushort *)(pfVar8 + 0xf) | 4;
        }
        if (((uint)fVar15 >> 4 & 1) != 0) {
          fVar26 = pfVar8[3];
          pfVar8[3] = (float)((uint)fVar26 | 1);
          if (((uint)fVar26 >> 2 & 1) == 0) {
            *pfVar8 = local_f8 + *pfVar8;
            pfVar8[1] = fStack_fc + pfVar8[1];
            pfVar8[2] = local_100 + pfVar8[2];
            pfVar8[8] = local_f4 + pfVar8[8];
            pfVar8[9] = local_f0 + pfVar8[9];
            pfVar8[10] = local_ec + pfVar8[10];
          }
          else {
            *pfVar8 = local_f8;
            pfVar8[1] = fStack_fc;
            pfVar8[2] = local_100;
            pfVar8[8] = local_f4;
            pfVar8[9] = local_f0;
            pfVar8[10] = local_ec;
            pfVar8[3] = (float)((uint)fVar26 & 0xfffffffb | 1);
          }
          *(undefined1 **)(pfVar8 + 0x1c) = puVar2;
          pfVar8[4] = fVar18 + pfVar8[4];
          pfVar8[5] = fVar20 + pfVar8[5];
          pfVar8[6] = fVar16 + pfVar8[6];
          *(ushort *)(pfVar8 + 0xf) = *(ushort *)(pfVar8 + 0xf) | 4;
          pfVar8[7] = pfVar8[7] + 1.0;
        }
        if (((uint)fVar15 & 0x28) != 0) {
          fVar16 = sqrtf(fVar24 * fVar24 + fVar19 * fVar19 + fVar22 * fVar22);
          fVar19 = fVar19 + fVar25 * fVar17;
          fVar22 = fVar22 + fVar25 * fVar23;
          fVar24 = fVar24 + fVar25 * fVar21;
          fVar17 = fVar24 * fVar24 + fVar19 * fVar19 + fVar22 * fVar22;
          fVar18 = 0.0;
          fVar15 = 0.0;
          fVar20 = 0.0;
          if (0.0 < fVar17) {
            fVar15 = sqrtf(fVar17);
            fVar15 = 1.0 / fVar15;
            fVar18 = fVar19 * fVar15;
            fVar20 = fVar22 * fVar15;
            fVar15 = fVar24 * fVar15;
          }
          fVar23 = *(float *)(puVar2 + 0x40);
          fVar24 = *(float *)(puVar2 + 0x44);
          fVar26 = *(float *)(puVar2 + 0x48);
          fVar27 = *(float *)(puVar2 + 0x10);
          fVar29 = *(float *)(puVar2 + 0x14);
          fVar28 = *(float *)(puVar2 + 0x18);
          fVar30 = local_f8 +
                   fVar25 * (local_100 * *(float *)(puVar2 + 0x54) -
                            fStack_fc * *(float *)(puVar2 + 0x58));
          fVar31 = fStack_fc +
                   fVar25 * (local_f8 * *(float *)(puVar2 + 0x58) -
                            local_100 * *(float *)(puVar2 + 0x50));
          fVar32 = local_100 +
                   fVar25 * (fStack_fc * *(float *)(puVar2 + 0x50) -
                            local_f8 * *(float *)(puVar2 + 0x54));
          fVar21 = fVar32 * fVar32 + fVar30 * fVar30 + fVar31 * fVar31;
          fVar22 = 0.0;
          fVar17 = 0.0;
          fVar19 = 0.0;
          if (0.0 < fVar21) {
            fVar22 = sqrtf(fVar21);
            fVar22 = 1.0 / fVar22;
            fVar17 = fVar30 * fVar22;
            fVar19 = fVar31 * fVar22;
            fVar22 = fVar32 * fVar22;
          }
          fVar15 = (fVar16 * fVar18 + fVar25 * fVar23 + fVar27) * fVar17 +
                   (fVar16 * fVar20 + fVar25 * fVar24 + fVar29) * fVar19 +
                   (fVar16 * fVar15 + fVar25 * fVar26 + fVar28) * fVar22;
          uVar9 = *(ushort *)((long)pfVar8 + 0x3e);
          if ((uVar9 & 1) == 0) {
            pfVar10 = *(float **)(pfVar8 + 0x26);
            *pfVar10 = fVar17;
            pfVar10[1] = fVar19;
            pfVar10[2] = fVar22;
            pfVar10[3] = fVar15;
            *(float *)ppuVar13 = local_f4;
            *(float *)((long)ppuVar13 + 4) = local_f0;
            ppuVar13[2] = puVar2;
            uVar9 = uVar9 | 5;
            *(float *)(ppuVar13 + 1) = local_ec;
          }
          else {
            if ((uVar9 >> 1 & 1) != 0) {
              pfVar10 = *(float **)(pfVar8 + 0x26);
              fVar18 = pfVar8[0xc];
              fVar21 = pfVar8[0xd];
              fVar23 = pfVar8[0xe];
              pfVar12 = *(float **)(pfVar8 + 0x2c);
              fVar16 = (*pfVar10 * fVar18 + pfVar10[1] * fVar21 + pfVar10[2] * fVar23) - pfVar10[3];
              fVar20 = (fVar17 * fVar18 + fVar19 * fVar21 + fVar22 * fVar23) - fVar15;
              fVar18 = (fVar18 * *pfVar12 + fVar21 * pfVar12[1] + fVar23 * pfVar12[2]) - pfVar12[3];
              if (fVar18 <= fVar16) {
                if (fVar20 < fVar16) {
                  uVar9 = uVar9 | 4;
                  *pfVar10 = fVar17;
                  pfVar10[1] = fVar19;
                  pfVar10[2] = fVar22;
                  pfVar10[3] = fVar15;
                  *(float *)ppuVar13 = local_f4;
                  *(float *)((long)ppuVar13 + 4) = local_f0;
                  *(float *)(ppuVar13 + 1) = local_ec;
                  ppuVar13[2] = puVar2;
                  goto LAB_001aa64c;
                }
              }
              else if (fVar20 < fVar18) {
                *pfVar12 = fVar17;
                pfVar12[1] = fVar19;
                uVar9 = uVar9 | 8;
                pfVar12[2] = fVar22;
                pfVar12[3] = fVar15;
                *(float *)ppuVar14 = local_f4;
                *(float *)((long)ppuVar14 + 4) = local_f0;
                *(float *)(ppuVar14 + 1) = local_ec;
                ppuVar14[2] = puVar2;
                goto LAB_001aa64c;
              }
              goto LAB_001aa650;
            }
            pfVar10 = *(float **)(pfVar8 + 0x2c);
            *pfVar10 = fVar17;
            pfVar10[1] = fVar19;
            pfVar10[2] = fVar22;
            pfVar10[3] = fVar15;
            *(float *)ppuVar14 = local_f4;
            *(float *)((long)ppuVar14 + 4) = local_f0;
            ppuVar14[2] = puVar2;
            uVar9 = uVar9 | 10;
            *(float *)(ppuVar14 + 1) = local_ec;
          }
LAB_001aa64c:
          *(ushort *)((long)pfVar8 + 0x3e) = uVar9;
        }
      }
LAB_001aa650:
      uVar11 = uVar11 - 1;
      pfVar8 = pfVar8 + 0x32;
    } while (uVar11 != 0);
  }
LAB_001aaaec:
  if (((char)local_110[3] != '\0') && (param_3 != 0)) {
    uVar11 = (ulong)param_3;
    local_108 = local_108 + 0x21;
    do {
      if (((uint)*local_108 & 0x38) != 0) {
        *(ushort *)(local_108 + -0x12) = *(ushort *)(local_108 + -0x12) | 8;
      }
      local_108 = local_108 + 0x32;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}


