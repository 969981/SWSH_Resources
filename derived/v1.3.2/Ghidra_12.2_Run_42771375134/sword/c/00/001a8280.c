/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001a8280; name: FUN_001a8280
 */


/* WARNING: Removing unreachable block (ram,0x001a93ec) */

void FUN_001a8280(float *param_1,long param_2,long param_3,long param_4,long param_5,long *param_6,
                 long param_7,float *param_8,long param_9,long param_10,long param_11,long *param_12
                 )

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  ushort uVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  float *pfVar18;
  uint uVar19;
  uint *puVar20;
  undefined4 *puVar21;
  float *pfVar22;
  undefined4 *puVar23;
  undefined8 uVar24;
  undefined4 *puVar25;
  uint *puVar26;
  ushort uVar27;
  undefined8 uVar28;
  int iVar29;
  float *pfVar30;
  short *psVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined2 uVar40;
  undefined2 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float *local_320;
  float local_2f8;
  float fStack_2f4;
  float local_2f0;
  undefined4 local_2e8 [2];
  long local_2e0;
  undefined4 local_2d8;
  long local_2d0;
  undefined1 local_2c8;
  long local_2c0;
  char local_2b8;
  float local_2b0 [128];
  long local_b0;
  char local_a8;
  
  psVar31 = *(short **)(*param_12 + 0x38);
  uVar3 = *(uint *)(psVar31 + 4);
  uVar19 = *(uint *)(psVar31 + 6);
  local_a8 = '\x01';
                    /* try { // try from 001a82f0 to 001a8307 has its CatchHandler @ 001a9670 */
  local_b0 = FUN_00401b30(local_2b0,0x1000,
                          "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtCollision.cpp"
                          ,0x10b);
  local_2b8 = '\x01';
                    /* try { // try from 001a8310 to 001a832b has its CatchHandler @ 001a9660 */
  local_2c0 = FUN_00401b30(local_2e8,0x1400,
                           "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtCollision.cpp"
                           ,0x112);
  local_2e8[0] = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  lVar6 = local_2c0;
  if (param_7 == 0) {
    local_2d0 = local_2c0 + 0x200;
    local_2f0 = param_1[0xb];
    local_2f8 = local_2f0 * (float)(int)*psVar31;
    fStack_2f4 = local_2f0 * (float)(int)psVar31[1];
    local_2f0 = local_2f0 * (float)(int)psVar31[2];
    lVar6 = 0;
    local_2e0 = local_2c0;
  }
  if (uVar3 != 0) {
    param_9 = param_9 + (ulong)uVar19 * 4;
    uVar12 = 0;
    uVar19 = (uVar3 + 0x7f & 0x7f) + 1;
    do {
      lVar7 = local_b0;
      local_2c8 = 0;
      uVar16 = 0;
      uVar35 = (ulong)uVar19;
      puVar26 = (uint *)(param_9 + uVar12 * 4);
      local_320 = (float *)(local_b0 + 0x10);
      pfVar14 = local_320;
      do {
        puVar20 = puVar26 + uVar16;
        uVar16 = uVar16 + 1;
        pfVar18 = (float *)(param_2 + (ulong)*puVar20 * 0x20);
        pfVar14[-4] = *pfVar18;
        pfVar14[-3] = pfVar18[1];
        pfVar14[-2] = pfVar18[2];
        pfVar14[-1] = pfVar18[3];
        *pfVar14 = pfVar18[4];
        pfVar14[1] = pfVar18[5];
        pfVar14[2] = pfVar18[6];
        pfVar14[3] = pfVar18[7];
        pfVar14 = pfVar14 + 8;
      } while (uVar16 < uVar35);
      uVar16 = 0;
      if (param_10 == 0) {
        fVar36 = param_1[0xc];
        do {
          local_2b0[uVar16] = fVar36;
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar35);
      }
      else {
        do {
          uVar13 = uVar16 + 1;
          local_2b0[uVar16] =
               *(float *)(param_10 + (ulong)*(uint *)(param_9 + uVar12 * 4 + uVar16 * 4) * 4);
          uVar16 = uVar13;
        } while (uVar13 < uVar35);
      }
      lVar17 = param_12[2];
      uVar4 = *(uint *)(param_12 + 1);
      uVar13 = (ulong)uVar4;
                    /* try { // try from 001a84c0 to 001a84f3 has its CatchHandler @ 001a96b0 */
      plVar9 = (long *)FUN_00400d30();
      lVar10 = (**(code **)(*plVar9 + 0x10))
                         (plVar9,uVar35 * 200,"NonTrackedAlloc",
                          "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtCollision.cpp"
                          ,0x164);
      lVar32 = 0;
      pfVar14 = local_2b0;
      puVar20 = puVar26;
      pfVar18 = local_320;
      uVar16 = uVar35;
      do {
        uVar5 = *puVar20;
        uVar34 = (ulong)uVar5;
        puVar15 = (undefined8 *)(lVar10 + lVar32);
        Hint_Prefetch(puVar15,0,0,0);
        lVar33 = *param_6 + uVar34 * 0x10;
        puVar15[0x13] = lVar33;
        lVar2 = param_6[1] + uVar34 * 0x10;
        puVar15[0x16] = lVar2;
        Hint_Prefetch(lVar33,0,0,0);
        Hint_Prefetch(lVar2,0,0,0);
        fVar48 = pfVar18[2];
        fVar55 = *pfVar18;
        fVar51 = pfVar18[1];
        fVar37 = param_1[2];
        fVar36 = *param_1;
        fVar49 = param_1[1];
        if ((*(byte *)((long)param_1 + 0x5a) & 1) != 0) {
          pfVar22 = (float *)(param_4 + uVar34 * 0xc);
          fVar36 = *pfVar22 + fVar36;
          fVar49 = pfVar22[1] + fVar49;
          fVar37 = pfVar22[2] + fVar37;
        }
        fVar52 = param_1[0x10];
        fVar38 = param_1[3];
        fVar36 = fVar38 * (fVar55 + fVar52 * fVar36);
        fVar42 = fVar38 * (fVar51 + fVar52 * fVar49);
        fVar49 = param_1[0xe];
        *pfVar18 = fVar36;
        pfVar18[1] = fVar42;
        fVar38 = fVar38 * (fVar48 + fVar52 * fVar37);
        pfVar18[2] = fVar38;
                    /* try { // try from 001a8600 to 001a8dfb has its CatchHandler @ 001a96e0 */
        fVar36 = sqrtf(fVar38 * fVar38 + fVar36 * fVar36 + fVar42 * fVar42);
        if (fVar49 < fVar52 * fVar36) {
          fVar49 = fVar49 / (fVar52 * fVar36);
          *pfVar18 = fVar49 * *pfVar18;
          pfVar18[1] = fVar49 * pfVar18[1];
          pfVar18[2] = fVar49 * pfVar18[2];
        }
        uVar11 = *(ushort *)((long)pfVar18 + 0xe);
        if ((uVar11 >> 2 & 1) == 0) {
          fVar36 = 0.0;
          fVar49 = 0.0;
          fVar37 = 0.0;
joined_r0x001a89ac:
          uVar24 = 0;
          if ((uVar11 >> 3 & 1) != 0) goto LAB_001a868c;
LAB_001a8650:
          fVar42 = 0.0;
          fVar38 = 0.0;
          fVar52 = 0.0;
          uVar28 = 0;
        }
        else {
          pfVar22 = (float *)(param_6[2] + uVar34 * 0x18);
          fVar36 = *pfVar22;
          fVar49 = pfVar22[1];
          fVar37 = pfVar22[2];
          if (param_3 == 0) goto joined_r0x001a89ac;
          uVar24 = *(undefined8 *)(param_6[2] + uVar34 * 0x18 + 0x10);
          if ((uVar11 >> 3 & 1) == 0) goto LAB_001a8650;
LAB_001a868c:
          pfVar22 = (float *)(param_6[3] + uVar34 * 0x18);
          fVar38 = *pfVar22;
          fVar42 = pfVar22[1];
          fVar52 = pfVar22[2];
          uVar28 = 0;
          if (param_3 != 0) {
            uVar28 = *(undefined8 *)(param_6[3] + uVar34 * 0x18 + 0x10);
          }
        }
        fVar53 = *pfVar14;
        fVar39 = pfVar18[3];
        *puVar15 = 0;
        puVar15[1] = 0;
        *(float *)((long)puVar15 + 0x5c) = fVar53;
        puVar15[2] = 0;
        puVar15[3] = 0;
        puVar15[4] = 0;
        puVar15[5] = 0x3f80000000000000;
        fVar53 = pfVar18[-4];
        *(float *)(puVar15 + 6) = fVar53;
        fVar54 = pfVar18[-3];
        *(float *)((long)puVar15 + 0x34) = fVar54;
        fVar50 = pfVar18[-2];
        *(ushort *)((long)puVar15 + 0x3c) = SUB42(fVar39,0) & 0xfff9;
        uVar27 = (ushort)((uint)fVar39 >> 0x10);
        uVar27 = uVar27 & 0xffcf | uVar27 >> 1 & 0x10;
        *(ushort *)((long)puVar15 + 0x3e) = uVar27;
        *(float *)(puVar15 + 7) = fVar50;
        *(uint *)((long)puVar15 + 0x4c) = uVar5;
        puVar15[0xe] = 0;
        puVar15[0xc] = 0;
        *(undefined4 *)(puVar15 + 0xd) = 0;
        fVar39 = param_1[0x10];
        fVar62 = fVar39 * *pfVar18;
        fVar61 = fVar39 * pfVar18[1];
        fVar60 = fVar39 * pfVar18[2];
        if ((uVar11 & 3) != 0) {
          pfVar22 = (float *)puVar15[0x13];
          fVar45 = *pfVar22;
          fVar43 = pfVar22[1];
          fVar44 = pfVar22[2];
          fVar47 = (fVar62 + fVar53) * fVar45 + (fVar61 + fVar54) * fVar43 +
                   (fVar60 + fVar50) * fVar44;
          if ((uVar11 >> 1 & 1) == 0) {
            fVar38 = pfVar22[3];
            if (fVar38 <= fVar47) goto LAB_001a8e7c;
            puVar15[0xe] = uVar24;
            *(float *)(lVar10 + lVar32) = fVar45;
            *(float *)((long)puVar15 + 4) = fVar43;
            *(float *)(puVar15 + 1) = fVar44;
            *(float *)(puVar15 + 4) = fVar36;
            *(float *)((long)puVar15 + 0x24) = fVar49;
            *(float *)(puVar15 + 5) = fVar37;
            fVar42 = param_1[0x11];
            fVar44 = fVar62 * fVar42;
            fVar43 = fVar61 * fVar42;
            fVar42 = fVar60 * fVar42;
            fVar52 = *pfVar22;
            fVar45 = pfVar22[1];
            fVar47 = pfVar22[2];
            fVar58 = fVar52 * (fVar44 - fVar36) + (fVar43 - fVar49) * fVar45 +
                     (fVar42 - fVar37) * fVar47;
            if (fVar58 < 0.0) {
              fVar56 = param_1[4];
              fVar59 = (fVar55 - fVar36) * fVar52 + (fVar51 - fVar49) * fVar45 +
                       (fVar48 - fVar37) * fVar47;
              fVar51 = (fVar43 - fVar49) - fVar45 * fVar58;
              fVar55 = (fVar42 - fVar37) - fVar47 * fVar58;
              fVar48 = (fVar44 - fVar36) - fVar52 * fVar58;
              fVar43 = fVar52 * fVar58 - fVar52 * fVar59;
              fVar44 = fVar45 * fVar58 - fVar45 * fVar59;
              fVar42 = fVar47 * fVar58 - fVar47 * fVar59;
              bVar8 = (fVar55 * fVar55 + fVar48 * fVar48 + fVar51 * fVar51) -
                      (fVar42 * fVar42 + fVar43 * fVar43 + fVar44 * fVar44) * param_1[6] < 0.0;
              if (bVar8) {
                fVar48 = 0.0;
              }
              if (bVar8) {
                fVar51 = 0.0;
              }
              if (bVar8) {
                fVar55 = 0.0;
              }
              fVar58 = 1.0 - param_1[5];
              fVar42 = fVar58 * fVar55;
              fVar43 = fVar58 * fVar51;
              fVar44 = fVar58 * fVar48;
              if (fVar59 < 0.0) {
                fVar42 = fVar58 * fVar55 - fVar47 * fVar59 * fVar56;
                fVar43 = fVar58 * fVar51 - fVar45 * fVar59 * fVar56;
                fVar44 = fVar58 * fVar48 - fVar52 * fVar59 * fVar56;
              }
              fVar44 = fVar44 + fVar36;
              fVar43 = fVar43 + fVar49;
              fVar42 = fVar42 + fVar37;
            }
            fVar44 = fVar39 * fVar44;
            fVar43 = fVar39 * fVar43;
            fVar39 = fVar39 * fVar42;
            fVar36 = fVar52 * (fVar44 + fVar53) + fVar45 * (fVar43 + fVar54) +
                     fVar47 * (fVar39 + fVar50);
            if (fVar36 < fVar38) {
              fVar36 = (fVar38 - fVar36) * DAT_01d4be58;
              fVar44 = (fVar44 + fVar53 + fVar52 * fVar36) - fVar53;
              fVar43 = (fVar43 + fVar54 + fVar45 * fVar36) - fVar54;
              fVar39 = (fVar39 + fVar50 + fVar47 * fVar36) - fVar50;
              goto LAB_001a8db0;
            }
          }
          else {
            pfVar30 = (float *)puVar15[0x16];
            fVar58 = *pfVar30;
            fVar59 = pfVar30[1];
            fVar56 = pfVar30[2];
            fVar57 = pfVar30[3];
            fVar46 = (fVar62 + fVar53) * fVar58 + (fVar61 + fVar54) * fVar59 +
                     (fVar60 + fVar50) * fVar56;
            if (pfVar22[3] <= fVar47) {
              if (fVar57 <= fVar46) goto LAB_001a8e7c;
              puVar15[0xe] = uVar28;
              *(float *)(lVar10 + lVar32) = fVar58;
              *(float *)((long)puVar15 + 4) = fVar59;
              *(float *)(puVar15 + 1) = fVar56;
              *(float *)(puVar15 + 4) = fVar38;
              *(float *)((long)puVar15 + 0x24) = fVar42;
              *(float *)(puVar15 + 5) = fVar52;
LAB_001a89ec:
              fVar36 = param_1[0x11];
              fVar44 = fVar62 * fVar36;
              fVar43 = fVar61 * fVar36;
              fVar36 = fVar60 * fVar36;
              fVar49 = fVar56 * (fVar36 - fVar52) +
                       fVar58 * (fVar44 - fVar38) + fVar59 * (fVar43 - fVar42);
              if (fVar49 < 0.0) {
                fVar45 = param_1[4];
                fVar47 = fVar56 * (fVar48 - fVar52) +
                         fVar59 * (fVar51 - fVar42) + fVar58 * (fVar55 - fVar38);
                fVar37 = (fVar44 - fVar38) - fVar58 * fVar49;
                fVar48 = (fVar43 - fVar42) - fVar59 * fVar49;
                fVar55 = fVar58 * fVar49 - fVar58 * fVar47;
                fVar43 = fVar59 * fVar49 - fVar59 * fVar47;
                fVar51 = (fVar36 - fVar52) - fVar56 * fVar49;
                fVar36 = fVar56 * fVar49 - fVar56 * fVar47;
                bVar8 = (fVar51 * fVar51 + fVar37 * fVar37 + fVar48 * fVar48) -
                        (fVar36 * fVar36 + fVar55 * fVar55 + fVar43 * fVar43) * param_1[6] < 0.0;
                if (bVar8) {
                  fVar37 = 0.0;
                }
                if (bVar8) {
                  fVar48 = 0.0;
                }
                if (bVar8) {
                  fVar51 = 0.0;
                }
                fVar49 = 1.0 - param_1[5];
                fVar36 = fVar49 * fVar51;
                fVar43 = fVar49 * fVar48;
                fVar44 = fVar49 * fVar37;
                if (fVar47 < 0.0) {
                  fVar36 = fVar49 * fVar51 - fVar56 * fVar47 * fVar45;
                  fVar43 = fVar49 * fVar48 - fVar59 * fVar47 * fVar45;
                  fVar44 = fVar49 * fVar37 - fVar58 * fVar47 * fVar45;
                }
                fVar44 = fVar44 + fVar38;
                fVar43 = fVar43 + fVar42;
                fVar36 = fVar36 + fVar52;
              }
              fVar44 = fVar39 * fVar44;
              fVar43 = fVar39 * fVar43;
              fVar39 = fVar39 * fVar36;
            }
            else {
              puVar15[0xe] = uVar24;
              *(float *)(lVar10 + lVar32) = fVar45;
              *(float *)((long)puVar15 + 4) = fVar43;
              *(float *)(puVar15 + 1) = fVar44;
              *(float *)(puVar15 + 4) = fVar36;
              *(float *)((long)puVar15 + 0x24) = fVar49;
              *(float *)(puVar15 + 5) = fVar37;
              fVar38 = fVar36;
              fVar42 = fVar49;
              fVar52 = fVar37;
              fVar56 = fVar44;
              fVar59 = fVar43;
              fVar58 = fVar45;
              if (fVar57 <= fVar46) goto LAB_001a89ec;
              fVar39 = 1.0 - param_1[5];
              fVar44 = fVar62 * fVar39;
              fVar43 = fVar61 * fVar39;
              fVar39 = fVar60 * fVar39;
            }
            fVar37 = *pfVar22;
            fVar48 = pfVar22[1];
            fVar51 = pfVar22[2];
            fVar49 = fVar37 * *pfVar30 + fVar48 * pfVar30[1] + fVar51 * pfVar30[2];
            fVar36 = fabsf(fVar49);
            fVar53 = fVar44 + fVar53;
            fVar54 = fVar43 + fVar54;
            fVar50 = fVar39 + fVar50;
            fVar37 = fVar53 * fVar37 + fVar54 * fVar48 + fVar50 * fVar51;
            if (fVar36 <= DAT_01d4c0c4) {
              fVar48 = *pfVar30;
              fVar55 = pfVar30[1];
              fVar42 = pfVar30[2];
              fVar47 = pfVar30[3];
              fVar45 = fVar53 * fVar48 + fVar54 * fVar55 + fVar50 * fVar42;
              fVar52 = pfVar22[2];
              fVar36 = pfVar22[3];
              fVar51 = *pfVar22;
              fVar38 = pfVar22[1];
              if ((fVar37 < fVar36) || (fVar45 < fVar47)) {
                fVar45 = fVar47 - fVar45;
                if (fVar36 <= fVar52 * (fVar50 + fVar42 * fVar45) +
                              fVar51 * (fVar53 + fVar48 * fVar45) +
                              fVar38 * (fVar54 + fVar55 * fVar45)) {
                  fVar45 = fVar45 * DAT_01d4c4e0;
                  fVar44 = (fVar53 + fVar48 * fVar45) - *(float *)(puVar15 + 6);
                  fVar43 = (fVar54 + fVar55 * fVar45) - *(float *)((long)puVar15 + 0x34);
                  fVar39 = (fVar50 + fVar42 * fVar45) - *(float *)(puVar15 + 7);
                }
                else {
                  fVar36 = fVar36 - fVar37;
                  if (fVar47 <= fVar48 * (fVar53 + fVar51 * fVar36) +
                                fVar55 * (fVar54 + fVar36 * fVar38) +
                                fVar42 * (fVar50 + fVar36 * fVar52)) {
                    fVar36 = fVar36 * DAT_01d4c4e0;
                    fVar51 = fVar51 * fVar36;
                    fVar38 = fVar38 * fVar36;
                    goto LAB_001a8bc8;
                  }
                  fVar37 = 1.0 / (1.0 - fVar49 * fVar49);
                  fVar39 = fVar37 * (fVar36 - fVar49 * fVar45);
                  fVar37 = fVar37 * (fVar45 - fVar49 * fVar36);
                  fVar44 = (fVar53 + fVar48 * fVar37 + fVar51 * fVar39) - *(float *)(puVar15 + 6);
                  fVar43 = (fVar54 + fVar55 * fVar37 + fVar38 * fVar39) -
                           *(float *)((long)puVar15 + 0x34);
                  fVar39 = (fVar50 + fVar42 * fVar37 + fVar52 * fVar39) - *(float *)(puVar15 + 7);
                  fVar36 = fVar44 * fVar44 + fVar43 * fVar43 + fVar39 * fVar39;
                  fVar44 = fVar44 + (fVar48 + fVar51) * 0.5 * DAT_01d4bac8 * fVar36;
                  fVar43 = fVar43 + (fVar55 + fVar38) * 0.5 * DAT_01d4bac8 * fVar36;
                  fVar39 = fVar39 + (fVar42 + fVar52) * 0.5 * DAT_01d4bac8 * fVar36;
                }
                goto LAB_001a8db0;
              }
            }
            else if (fVar37 < pfVar22[3]) {
              fVar52 = pfVar22[2];
              fVar36 = (pfVar22[3] - fVar37) * DAT_01d4be58;
              fVar51 = fVar36 * *pfVar22;
              fVar38 = fVar36 * pfVar22[1];
LAB_001a8bc8:
              fVar43 = (fVar54 + fVar38) - *(float *)((long)puVar15 + 0x34);
              fVar44 = (fVar53 + fVar51) - *(float *)(puVar15 + 6);
              fVar39 = (fVar50 + fVar36 * fVar52) - *(float *)(puVar15 + 7);
LAB_001a8db0:
              fVar36 = fVar62 * fVar62 + fVar61 * fVar61 + fVar60 * fVar60;
              fVar49 = fVar39 * fVar39 + fVar43 * fVar43 + fVar44 * fVar44;
              if (fVar36 < fVar49) {
                fVar37 = sqrtf(fVar36);
                fVar36 = sqrtf(fVar49);
                fVar37 = fVar37 * (1.0 / fVar36);
                fVar44 = fVar44 * fVar37;
                fVar43 = fVar43 * fVar37;
                fVar39 = fVar39 * fVar37;
              }
            }
          }
          if (puVar15[0xe] == 0) {
            uVar11 = 2;
          }
          else {
            fVar36 = param_1[0x11];
            uVar11 = 4;
            *(float *)(puVar15 + 0xc) = (fVar62 - fVar44) * fVar36;
            *(float *)((long)puVar15 + 100) = (fVar61 - fVar43) * fVar36;
            *(float *)(puVar15 + 0xd) = (fVar60 - fVar39) * fVar36;
          }
          fVar53 = *(float *)(puVar15 + 6);
          fVar54 = *(float *)((long)puVar15 + 0x34);
          fVar50 = *(float *)(puVar15 + 7);
          uVar27 = *(ushort *)((long)puVar15 + 0x3e);
          *(ushort *)((long)puVar15 + 0x3c) = *(ushort *)((long)puVar15 + 0x3c) | uVar11;
          *(uint *)((long)puVar15 + 0xc) = *(uint *)((long)puVar15 + 0xc) | 4;
          fVar61 = fVar43;
          fVar60 = fVar39;
          fVar62 = fVar44;
        }
LAB_001a8e7c:
        *(float *)(puVar15 + 9) = fVar50 + fVar60;
        *(float *)(puVar15 + 8) = fVar53 + fVar62;
        *(float *)((long)puVar15 + 0x44) = fVar54 + fVar61;
        fVar36 = param_1[0x11];
        pfVar14 = pfVar14 + 1;
        uVar16 = uVar16 - 1;
        lVar32 = lVar32 + 200;
        puVar20 = puVar20 + 1;
        pfVar18 = pfVar18 + 8;
        *(ushort *)((long)puVar15 + 0x3e) = uVar27 & 0xfff0;
        *(float *)(puVar15 + 10) = fVar62 * fVar36;
        *(float *)((long)puVar15 + 0x54) = fVar61 * fVar36;
        *(float *)(puVar15 + 0xb) = fVar60 * fVar36;
      } while (uVar16 != 0);
      if (uVar4 == 0) {
        fVar36 = param_1[0xe] * param_1[0xe];
      }
      else {
        iVar29 = 0;
        lVar33 = lVar17;
        lVar32 = param_11;
        uVar16 = uVar13;
        do {
          if (*(char *)(lVar33 + 0x19) != '\0') {
                    /* try { // try from 001a8ef8 to 001a8f17 has its CatchHandler @ 001a96c0 */
            FUN_001a99f0(param_1,lVar7,uVar35,lVar10,param_6,lVar6,local_2e8,&local_2f8,lVar33,
                         lVar32);
            iVar29 = iVar29 + 1;
          }
          uVar16 = uVar16 - 1;
          lVar32 = lVar32 + 0x38;
          lVar33 = lVar33 + 0x20;
        } while (uVar16 != 0);
        fVar36 = param_1[0xe] * param_1[0xe];
        if (iVar29 != 0) {
          fVar49 = param_1[0x16];
          lVar32 = lVar10;
          uVar16 = uVar35;
          do {
                    /* try { // try from 001a8f50 to 001a8f9f has its CatchHandler @ 001a96a0 */
            FUN_001a7050(lVar32,(uint)fVar49 & 1,0,param_1);
            fVar51 = *(float *)(lVar32 + 0x44) - *(float *)(lVar32 + 0x34);
            fVar48 = *(float *)(lVar32 + 0x40) - *(float *)(lVar32 + 0x30);
            fVar55 = *(float *)(lVar32 + 0x48) - *(float *)(lVar32 + 0x38);
            fVar37 = fVar48 * fVar48 + fVar51 * fVar51 + fVar55 * fVar55;
            if (fVar36 < fVar37) {
              fVar38 = param_1[0xe];
              fVar37 = sqrtf(fVar37);
              fVar37 = 1.0 / fVar37;
              *(float *)(lVar32 + 0x40) = fVar38 * fVar48 * fVar37 + *(float *)(lVar32 + 0x30);
              *(float *)(lVar32 + 0x44) = fVar38 * fVar51 * fVar37 + *(float *)(lVar32 + 0x34);
              *(float *)(lVar32 + 0x48) = fVar38 * fVar55 * fVar37 + *(float *)(lVar32 + 0x38);
            }
            *(uint *)(lVar32 + 0xc) = *(uint *)(lVar32 + 0xc) & 0xfffffff8 | 4;
            *(undefined8 *)(lVar32 + 0x10) = 0;
            *(undefined4 *)(lVar32 + 0x18) = 0;
            *(undefined4 *)(lVar32 + 0x2c) = 0x3f800000;
            uVar16 = uVar16 - 1;
            lVar32 = lVar32 + 200;
          } while (uVar16 != 0);
        }
        if (lVar6 == 0) {
          lVar32 = param_11;
          do {
            if (*(char *)(lVar17 + 0x19) == '\0') {
                    /* try { // try from 001a9404 to 001a9427 has its CatchHandler @ 001a9680 */
              FUN_001a99f0(param_1,lVar7,uVar35,lVar10,param_6,0,local_2e8,&local_2f8,lVar17,lVar32)
              ;
            }
            lVar32 = lVar32 + 0x38;
            lVar17 = lVar17 + 0x20;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        else {
          uVar16 = 0;
          bVar8 = false;
          do {
            lVar32 = lVar17 + uVar16 * 0x20;
            if (*(char *)(lVar32 + 0x19) == '\0') {
              if (bVar8) {
LAB_001a90b8:
                bVar8 = true;
              }
              else {
                if (*(int *)(*(long *)(lVar32 + 8) + 0x28) == 5) {
                  puVar23 = (undefined4 *)(lVar6 + 0x14);
                  puVar20 = puVar26;
                  uVar34 = uVar35;
                  do {
                    puVar25 = (undefined4 *)(param_7 + (ulong)*puVar20 * 0x28);
                    puVar23[-5] = *puVar25;
                    puVar23[-4] = puVar25[1];
                    puVar23[-3] = puVar25[2];
                    puVar23[-2] = puVar25[3];
                    puVar23[-1] = puVar25[4];
                    *puVar23 = puVar25[5];
                    puVar23[1] = puVar25[6];
                    puVar23[2] = puVar25[7];
                    puVar23[3] = puVar25[8];
                    puVar23[4] = puVar25[9];
                    uVar34 = uVar34 - 1;
                    puVar23 = puVar23 + 10;
                    puVar20 = puVar20 + 1;
                  } while (uVar34 != 0);
                  goto LAB_001a90b8;
                }
                bVar8 = false;
              }
                    /* try { // try from 001a90cc to 001a90ef has its CatchHandler @ 001a9690 */
              FUN_001a99f0(param_1,lVar7,uVar35,lVar10,param_6,lVar6,local_2e8,&local_2f8,lVar32,
                           param_11 + uVar16 * 0x38);
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar13);
          if (bVar8) {
            puVar23 = (undefined4 *)(lVar6 + 0x14);
            uVar16 = uVar35;
            do {
              puVar21 = (undefined4 *)(param_7 + (ulong)*puVar26 * 0x28);
              *puVar21 = puVar23[-5];
              puVar21[1] = puVar23[-4];
              puVar21[2] = puVar23[-3];
              puVar21[3] = puVar23[-2];
              puVar21[4] = puVar23[-1];
              puVar21[5] = *puVar23;
              puVar21[6] = puVar23[1];
              puVar21[7] = puVar23[2];
              puVar21[8] = puVar23[3];
              puVar25 = puVar23 + 4;
              uVar16 = uVar16 - 1;
              puVar23 = puVar23 + 10;
              puVar21[9] = *puVar25;
              puVar26 = puVar26 + 1;
            } while (uVar16 != 0);
          }
        }
      }
      lVar32 = 0;
      uVar16 = uVar35;
      do {
        lVar17 = lVar10 + lVar32;
                    /* try { // try from 001a91a4 to 001a91f7 has its CatchHandler @ 001a96d0 */
        FUN_001a7050(lVar17,0,1,param_1);
        fVar48 = *(float *)(lVar17 + 0x44) - *(float *)(lVar17 + 0x34);
        fVar37 = *(float *)(lVar17 + 0x40) - *(float *)(lVar17 + 0x30);
        fVar51 = *(float *)(lVar17 + 0x48) - *(float *)(lVar17 + 0x38);
        fVar49 = fVar37 * fVar37 + fVar48 * fVar48 + fVar51 * fVar51;
        if (fVar36 < fVar49) {
          fVar55 = param_1[0xe];
          fVar49 = sqrtf(fVar49);
          fVar49 = 1.0 / fVar49;
          *(float *)(lVar17 + 0x40) = fVar55 * fVar37 * fVar49 + *(float *)(lVar17 + 0x30);
          *(float *)(lVar17 + 0x44) = fVar55 * fVar48 * fVar49 + *(float *)(lVar17 + 0x34);
          *(float *)(lVar17 + 0x48) = fVar55 * fVar51 * fVar49 + *(float *)(lVar17 + 0x38);
        }
        if ((*(byte *)(param_1 + 0x16) >> 3 & 1) == 0) {
          *local_320 = *(float *)(lVar17 + 0x50);
          local_320[1] = *(float *)(lVar17 + 0x54);
          local_320[2] = *(float *)(lVar17 + 0x58);
          local_320[-4] = *(float *)(lVar17 + 0x40);
          local_320[-3] = *(float *)(lVar17 + 0x44);
          local_320[-2] = *(float *)(lVar17 + 0x48);
          fVar49 = param_8[1];
          uVar40 = SUB42(fVar49,0);
          uVar41 = (undefined2)((uint)fVar49 >> 0x10);
          fVar48 = *(float *)(lVar17 + 0x44);
          fVar37 = *param_8;
          if (*(float *)(lVar17 + 0x40) <= *param_8) {
            fVar37 = *(float *)(lVar17 + 0x40);
          }
          if (fVar48 <= fVar49) {
            uVar40 = SUB42(fVar48,0);
            uVar41 = (undefined2)((uint)fVar48 >> 0x10);
          }
          fVar49 = param_8[2];
          if (*(float *)(lVar17 + 0x48) <= param_8[2]) {
            fVar49 = *(float *)(lVar17 + 0x48);
          }
          *param_8 = fVar37;
          param_8[1] = (float)CONCAT22(uVar41,uVar40);
          param_8[2] = fVar49;
          fVar49 = *(float *)(lVar17 + 0x44);
          fVar37 = param_8[4];
          fVar55 = param_8[3];
          if (param_8[3] <= *(float *)(lVar17 + 0x40)) {
            fVar55 = *(float *)(lVar17 + 0x40);
          }
          uVar40 = SUB42(fVar37,0);
          uVar41 = (short)((uint)fVar37 >> 0x10);
          if (fVar37 <= fVar49) {
            uVar40 = SUB42(fVar49,0);
            uVar41 = (short)((uint)fVar49 >> 0x10);
          }
          fVar48 = (float)CONCAT22(uVar41,uVar40);
          fVar49 = param_8[5];
          if (param_8[5] <= *(float *)(lVar17 + 0x48)) {
            fVar49 = *(float *)(lVar17 + 0x48);
          }
        }
        else {
          fVar49 = param_1[0x13];
          fVar55 = *(float *)(lVar17 + 0x58);
          fVar37 = *(float *)(lVar17 + 0x54);
          fVar51 = param_1[0x14];
          fVar48 = param_1[0x12] * *(float *)(lVar17 + 0x50) + fVar49 * fVar37 + fVar51 * fVar55;
          *local_320 = *(float *)(lVar17 + 0x50) - param_1[0x12] * fVar48;
          local_320[1] = fVar37 - fVar49 * fVar48;
          local_320[2] = fVar55 - fVar51 * fVar48;
          fVar37 = param_1[0x15] +
                   *(float *)(lVar17 + 0x40) * param_1[0x12] +
                   *(float *)(lVar17 + 0x44) * param_1[0x13] +
                   *(float *)(lVar17 + 0x48) * param_1[0x14];
          fVar48 = *(float *)(lVar17 + 0x40) - param_1[0x12] * fVar37;
          fVar49 = *(float *)(lVar17 + 0x44) - param_1[0x13] * fVar37;
          fVar51 = *(float *)(lVar17 + 0x48) - param_1[0x14] * fVar37;
          local_320[-4] = fVar48;
          local_320[-3] = fVar49;
          local_320[-2] = fVar51;
          fVar37 = *param_8;
          if (fVar48 <= *param_8) {
            fVar37 = fVar48;
          }
          fVar55 = param_8[1];
          if (fVar49 <= param_8[1]) {
            fVar55 = fVar49;
          }
          *param_8 = fVar37;
          param_8[1] = fVar55;
          fVar37 = param_8[2];
          if (fVar51 <= param_8[2]) {
            fVar37 = fVar51;
          }
          fVar55 = param_8[3];
          if (param_8[3] <= fVar48) {
            fVar55 = fVar48;
          }
          fVar48 = param_8[4];
          if (param_8[4] <= fVar49) {
            fVar48 = fVar49;
          }
          fVar49 = param_8[5];
          if (param_8[5] <= fVar51) {
            fVar49 = fVar51;
          }
          param_8[2] = fVar37;
        }
        param_8[3] = fVar55;
        param_8[4] = fVar48;
        param_8[5] = fVar49;
        local_320[3] = *(float *)(lVar17 + 0x3c);
        lVar32 = lVar32 + 200;
        local_320 = local_320 + 8;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
      if (param_4 != 0) {
        if (uVar19 == 1) {
          lVar32 = 0;
        }
        else {
          lVar32 = 0;
          puVar23 = (undefined4 *)(lVar10 + 200);
          do {
            puVar25 = (undefined4 *)(param_4 + (ulong)(uint)puVar23[-0x1f] * 0xc);
            *puVar25 = puVar23[-0x32];
            puVar25[1] = puVar23[-0x31];
            puVar25[2] = puVar23[-0x30];
            puVar21 = (undefined4 *)(param_4 + (ulong)(uint)puVar23[0x13] * 0xc);
            *puVar21 = *puVar23;
            puVar21[1] = puVar23[1];
            puVar25 = puVar23 + 2;
            lVar32 = lVar32 + 2;
            puVar23 = puVar23 + 100;
            puVar21[2] = *puVar25;
          } while (uVar35 - (uVar35 & 1) != lVar32);
          if ((uVar19 & 1) == 0) goto LAB_001a94cc;
        }
        puVar23 = (undefined4 *)(lVar10 + lVar32 * 200);
        puVar25 = (undefined4 *)(param_4 + (ulong)(uint)puVar23[0x13] * 0xc);
        *puVar25 = *puVar23;
        puVar25[1] = puVar23[1];
        puVar25[2] = puVar23[2];
      }
LAB_001a94cc:
      if (param_5 != 0) {
        pfVar14 = (float *)(lVar10 + 0x28);
        pfVar18 = (float *)(lVar7 + 0x18);
        uVar16 = uVar35;
        do {
          fVar36 = pfVar18[-2];
          pfVar22 = pfVar14 + 9;
          fVar49 = pfVar14[-2];
          pfVar30 = pfVar14 + -1;
          fVar48 = *pfVar14;
          pfVar14 = pfVar14 + 0x32;
          fVar37 = *pfVar18;
          pfVar22 = (float *)(param_5 + (ulong)(uint)*pfVar22 * 0xc);
          uVar16 = uVar16 - 1;
          pfVar22[1] = pfVar18[-1] - *pfVar30;
          *pfVar22 = fVar36 - fVar49;
          pfVar22[2] = fVar37 - fVar48;
          pfVar18 = pfVar18 + 8;
        } while (uVar16 != 0);
      }
      if (param_3 != 0) {
        puVar15 = (undefined8 *)(lVar10 + 0x70);
        uVar16 = uVar35;
        do {
          puVar23 = (undefined4 *)(param_3 + (ulong)*(uint *)((long)puVar15 + -0x24) * 0x18);
          *(undefined8 *)(puVar23 + 4) = *puVar15;
          *puVar23 = *(undefined4 *)(puVar15 + -2);
          puVar23[1] = *(undefined4 *)((long)puVar15 + -0xc);
          puVar1 = puVar15 + -1;
          uVar16 = uVar16 - 1;
          puVar15 = puVar15 + 0x19;
          puVar23[2] = *(undefined4 *)puVar1;
        } while (uVar16 != 0);
      }
                    /* try { // try from 001a9564 to 001a9577 has its CatchHandler @ 001a96b0 */
      plVar9 = (long *)FUN_00400d30();
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar10);
      uVar16 = 0;
      puVar23 = (undefined4 *)(local_b0 + 0x10);
      do {
        puVar21 = (undefined4 *)
                  (param_2 + (ulong)*(uint *)(param_9 + uVar12 * 4 + uVar16 * 4) * 0x20);
        *puVar21 = puVar23[-4];
        puVar21[1] = puVar23[-3];
        puVar21[2] = puVar23[-2];
        puVar21[3] = puVar23[-1];
        puVar21[4] = *puVar23;
        puVar21[5] = puVar23[1];
        puVar21[6] = puVar23[2];
        puVar25 = puVar23 + 3;
        uVar16 = uVar16 + 1;
        puVar23 = puVar23 + 8;
        puVar21[7] = *puVar25;
      } while (uVar16 < uVar35);
      uVar4 = (int)uVar12 + uVar19;
      uVar12 = (ulong)uVar4;
      uVar19 = 0x80;
    } while (uVar4 < uVar3);
  }
  local_2c8 = 0;
  if (local_2b8 != '\0') {
                    /* try { // try from 001a960c to 001a9613 has its CatchHandler @ 001a965c */
    FUN_00401ce0(&local_2c0,local_2c0);
  }
  if (local_a8 != '\0') {
                    /* try { // try from 001a9620 to 001a9627 has its CatchHandler @ 001a9658 */
    FUN_00401ce0(&local_b0,local_b0);
  }
  return;
}


