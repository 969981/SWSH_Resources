/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0020c270; name: FUN_0020c270
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_0020c270(undefined8 param_1,long param_2,long param_3,long *param_4,ushort *param_5,
                 uint *param_6,long *param_7)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  byte bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  float *pfVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  ushort uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  long *local_180 [5];
  float local_158;
  uint local_154;
  ulong local_150;
  long *local_148;
  long *local_140;
  uint local_134;
  long local_130;
  ulong local_128;
  long *local_120;
  ushort *local_118;
  ushort local_110 [4];
  undefined *local_108;
  long local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  byte local_b0 [32];
  uint local_90 [4];
  
  *(undefined1 *)(param_4 + 8) = 0;
  *(undefined4 *)((long)param_4 + 0x54) = 0;
  local_118 = param_5;
  uVar4 = (ushort)param_6[4];
  if (*(char *)(param_2 + 0x90) == '\0') {
    if (*(int *)(*(long *)(param_2 + 0x60) + 0x2c) != *(int *)(param_2 + 0x88) && (uVar4 & 1) != 0)
    goto LAB_0020c2f0;
LAB_0020c318:
    if (((*(char *)(param_2 + 0x91) == '\0') &&
        (*(int *)(*(long *)(param_2 + 0x60) + 0x5c) == *(int *)(param_2 + 0x8c))) ||
       ((uVar4 >> 1 & 1) == 0)) {
LAB_0020c370:
      uVar11 = *(uint *)(param_2 + 0x70);
      local_90[0] = uVar11;
      local_90[1] = *(int *)(param_2 + 0x80);
      if (*(int *)(param_2 + 0x80) == 0 && uVar11 == 0) {
        return false;
      }
      local_140 = param_7;
      local_130 = param_3;
      local_158 = *(float *)(param_3 + 0x10);
      lVar19 = *(long *)(*(long *)(param_2 + 0x60) + 0x68);
      uVar1 = *(uint *)(param_2 + 0x58);
      if (*(uint *)(param_2 + 0x58) <= *(uint *)(param_2 + 0x54)) {
        uVar1 = *(uint *)(param_2 + 0x54);
      }
      if (uVar1 < 0x80) {
        plVar10 = (long *)((long)local_180 - ((ulong)uVar1 * 0x38 + 0xf & 0x7ffffffff0));
        local_180[3] = (long *)0x0;
        local_180[4] = (long *)0x0;
      }
      else {
                    /* try { // try from 0020c4a8 to 0020c4bf has its CatchHandler @ 0020cd84 */
        plVar10 = (long *)FUN_00401b30(&local_108,(ulong)uVar1 * 0x38,
                                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpVolumeCache.cpp"
                                       ,0x268);
        local_180[3] = plVar10;
        local_180[4] = plVar10;
      }
      local_148 = (long *)(lVar19 + -0x10);
      local_134 = (uint)(local_140 == (long *)0x0 || (uVar4 & 4) == 0);
      local_154 = (uint)(local_140 == (long *)0x0 || (uVar4 & 8) == 0);
      local_180[2] = param_4 + 1;
      local_180[0] = &local_100;
      local_180[1] = (long *)(PTR_DAT_02711218 + 0x10);
      local_150 = 0;
      local_180[3] = local_180[4];
      fVar23 = local_158;
      do {
        if (uVar11 != 0) {
          local_120 = (long *)(param_2 + local_150 * 0x10 + 0x68);
          uVar12 = 0;
          local_128 = (ulong)uVar11;
          do {
            uVar21 = 1;
            plVar13 = (long *)(*local_120 + uVar12 * 0x10);
            plVar20 = (long *)*plVar13;
            if ((short)plVar20[1] == 6 && plVar20 != (long *)0x0) {
              uVar21 = 2;
            }
            if ((uVar21 & uVar4) != 0) {
              iVar8 = 1;
              if ((int)param_4[10] == 0) {
                iVar8 = 2;
              }
              uVar21 = *local_118;
              cVar3 = *(char *)((long)param_6 + 0x12);
                    /* try { // try from 0020c768 to 0020c83f has its CatchHandler @ 0020cdf4 */
              cVar7 = (**(code **)(*plVar20 + 0x88))(plVar20);
              if (cVar3 != cVar7) {
                (**(code **)(*local_148 + 0x118))
                          (&local_108,local_148,*(undefined1 *)((long)param_6 + 0x12));
                bVar5 = (byte)local_108;
                (**(code **)(*plVar20 + 0x98))(local_b0,plVar20);
                if (((bVar5 & local_b0[0]) >> 3 & 1) == 0) goto LAB_0020cb48;
              }
              plVar20 = plVar13 + 1;
              lVar19 = *plVar20;
              if ((((param_6[1] == 0 && *param_6 == 0) && param_6[2] == 0) && param_6[3] == 0) ||
                 ((((*(uint *)(lVar19 + 0x54) & param_6[1]) != 0 ||
                   (*(uint *)(lVar19 + 0x50) & *param_6) != 0) ||
                  (*(uint *)(lVar19 + 0x58) & param_6[2]) != 0) ||
                  (*(uint *)(lVar19 + 0x5c) & param_6[3]) != 0)) {
                if ((local_134 & 1) == 0) {
                  local_108 = (undefined *)CONCAT62(local_108._2_6_,*local_118);
                  iVar8 = (**(code **)*local_140)(local_140,param_6,lVar19,*plVar13,&local_108);
                  *local_118 = (ushort)local_108 & 0x1b0 | *local_118 & 0xfe4f;
                  if (iVar8 == 0) goto LAB_0020cb48;
                }
                lVar19 = *plVar20;
                    /* try { // try from 0020c874 to 0020c87f has its CatchHandler @ 0020cde0 */
                FUN_001e1900(local_b0,lVar19,*plVar13);
                if ((*(byte *)(lVar19 + 0x38) & 1) == 0) {
                  lVar19 = lVar19 + 0x98;
                }
                else {
                  lVar19 = *(long *)(lVar19 + 0x40) + 0x38;
                }
                local_108 = (undefined *)CONCAT62(local_108._2_6_,uVar21);
                    /* try { // try from 0020c8b0 to 0020c8c3 has its CatchHandler @ 0020cdcc */
                uVar15 = FUN_0029a050(*(undefined4 *)(local_130 + 0x10),0,
                                      *(undefined8 *)(local_130 + 8),
                                      *(undefined8 *)(local_130 + 0x18),
                                      *(undefined8 *)(local_130 + 0x20),lVar19,local_b0,plVar10,
                                      &local_108);
                if ((uVar15 & 1) != 0) {
                  *plVar10 = *plVar13;
                  plVar10[1] = *plVar20;
                  uVar21 = *(ushort *)((long)plVar10 + 0x14);
                  if ((uVar21 >> 2 & 1) == 0) {
                    *(undefined4 *)(plVar10 + 6) = 0;
                    if ((uVar21 & 1) != 0) goto LAB_0020c8e8;
LAB_0020c5b4:
                    plVar10[3] = 0;
                    *(undefined4 *)(plVar10 + 4) = 0;
                    if ((uVar21 >> 1 & 1) != 0) goto LAB_0020c8ec;
LAB_0020c5c0:
                    *(undefined8 *)((long)plVar10 + 0x24) = 0;
                    *(undefined4 *)((long)plVar10 + 0x2c) = 0;
                    fVar22 = *(float *)(plVar10 + 6);
                  }
                  else {
                    if ((uVar21 & 1) == 0) goto LAB_0020c5b4;
LAB_0020c8e8:
                    if ((uVar21 >> 1 & 1) == 0) goto LAB_0020c5c0;
LAB_0020c8ec:
                    fVar22 = *(float *)(plVar10 + 6);
                  }
                  if (fVar22 == 0.0) {
                    pfVar16 = *(float **)(local_130 + 8);
                    fVar22 = pfVar16[1];
                    fVar24 = pfVar16[2];
                    *(float *)((long)plVar10 + 0x24) = -*pfVar16;
                    *(float *)(plVar10 + 5) = -fVar22;
                    *(float *)((long)plVar10 + 0x2c) = -fVar24;
                  }
                  if ((local_154 & 1) == 0) {
                    /* try { // try from 0020c93c to 0020c94b has its CatchHandler @ 0020cdb8 */
                    iVar8 = (**(code **)(*local_140 + 8))(local_140,param_6,plVar10);
                  }
                  if (((uVar4 >> 4 & 1) != 0) && (iVar8 != 0)) {
                    *(int *)(local_180[2] + 2) = (int)plVar10[2];
                    local_180[2][1] = plVar10[1];
                    *local_180[2] = *plVar10;
                    *(undefined2 *)((long)param_4 + 0x1c) = *(undefined2 *)((long)plVar10 + 0x14);
                    *(int *)(param_4 + 4) = (int)plVar10[3];
                    *(undefined4 *)((long)param_4 + 0x24) = *(undefined4 *)((long)plVar10 + 0x1c);
                    *(int *)(param_4 + 5) = (int)plVar10[4];
                    *(undefined4 *)((long)param_4 + 0x2c) = *(undefined4 *)((long)plVar10 + 0x24);
                    *(int *)(param_4 + 6) = (int)plVar10[5];
                    *(undefined4 *)((long)param_4 + 0x34) = *(undefined4 *)((long)plVar10 + 0x2c);
                    *(int *)(param_4 + 7) = (int)plVar10[6];
                    *(undefined4 *)((long)param_4 + 0x3c) = *(undefined4 *)((long)plVar10 + 0x34);
                    /* try { // try from 0020ccac to 0020ccb3 has its CatchHandler @ 0020cd6c */
                    (**(code **)(*param_4 + 8))(param_4);
                    bVar6 = true;
                    *(undefined1 *)(param_4 + 8) = 1;
                    plVar13 = local_180[4];
                    goto joined_r0x0020ccc4;
                  }
                  if ((uVar4 & 0x20) != 0) {
                    iVar8 = 1;
                  }
                  if (iVar8 == 2) {
                    fVar22 = *(float *)(plVar10 + 6);
                    if (fVar22 <= fVar23) {
                      local_158 = fVar22;
                      *(int *)(local_180[2] + 2) = (int)plVar10[2];
                      local_180[2][1] = plVar10[1];
                      *local_180[2] = *plVar10;
                      *(undefined2 *)((long)param_4 + 0x1c) = *(undefined2 *)((long)plVar10 + 0x14);
                      *(int *)(param_4 + 4) = (int)plVar10[3];
                      *(undefined4 *)((long)param_4 + 0x24) = *(undefined4 *)((long)plVar10 + 0x1c);
                      *(int *)(param_4 + 5) = (int)plVar10[4];
                      *(undefined4 *)((long)param_4 + 0x2c) = *(undefined4 *)((long)plVar10 + 0x24);
                      *(int *)(param_4 + 6) = (int)plVar10[5];
                      *(undefined4 *)((long)param_4 + 0x34) = *(undefined4 *)((long)plVar10 + 0x2c);
                      *(int *)(param_4 + 7) = (int)plVar10[6];
                      uVar2 = *(undefined4 *)((long)plVar10 + 0x34);
                      *(undefined1 *)(param_4 + 8) = 1;
                      *(undefined4 *)((long)param_4 + 0x3c) = uVar2;
                      fVar23 = fVar22;
                    }
                  }
                  else if (((iVar8 == 1) && (*(uint *)(param_4 + 10) != 0)) &&
                          (*(float *)(plVar10 + 6) <= local_158)) {
                    uVar15 = (ulong)*(uint *)((long)param_4 + 0x54);
                    if (*(uint *)((long)param_4 + 0x54) == *(uint *)(param_4 + 10)) {
                      local_f0 = 0xffffffff;
                      local_100 = 0;
                      local_f8 = 0;
                      local_d0 = 3.4028235e+38;
                      local_108 = (undefined *)local_180[1];
                      local_ec = 0;
                      local_e8 = 0;
                      local_e0 = 0;
                      local_d8 = 0;
                      local_c8 = 0;
                      local_c0 = 0;
                      uStack_b8 = 0;
                      local_110[0] = *local_118;
                    /* try { // try from 0020c9e0 to 0020ca07 has its CatchHandler @ 0020cda4 */
                      uVar15 = FUN_0020c270(param_1,param_2,local_130,&local_108,local_110,param_6,
                                            local_140);
                      if ((uVar15 & 1) == 0) {
                        uVar15 = (ulong)*(uint *)((long)param_4 + 0x54);
                        if (*(uint *)((long)param_4 + 0x54) == *(uint *)(param_4 + 10))
                        goto LAB_0020c678;
                      }
                      else {
                        *(int *)(local_180[2] + 2) = (int)local_180[0][2];
                        local_180[2][1] = local_180[0][1];
                        *local_180[2] = *local_180[0];
                        *(undefined2 *)((long)param_4 + 0x1c) = local_ec;
                        *(undefined4 *)(param_4 + 4) = (undefined4)local_e8;
                        *(undefined4 *)((long)param_4 + 0x24) = local_e8._4_4_;
                        *(undefined4 *)(param_4 + 5) = (undefined4)local_e0;
                        *(undefined4 *)((long)param_4 + 0x2c) = local_e0._4_4_;
                        *(undefined4 *)(param_4 + 6) = (undefined4)local_d8;
                        *(undefined4 *)((long)param_4 + 0x34) = local_d8._4_4_;
                        *(float *)(param_4 + 7) = local_d0;
                        uVar15 = (ulong)*(uint *)((long)param_4 + 0x54);
                        *(undefined1 *)(param_4 + 8) = 1;
                        *(undefined4 *)((long)param_4 + 0x3c) = local_cc;
                        if (*(uint *)((long)param_4 + 0x54) != 0) {
                          lVar19 = param_4[9];
                          uVar14 = 0;
                          do {
                            while( true ) {
                              pfVar16 = (float *)(lVar19 + uVar14 * 0x38 + 0x30);
                              if (*pfVar16 <= local_d0) break;
                              uVar11 = (uint)uVar15 - 1;
                              uVar15 = (ulong)uVar11;
                              puVar17 = (undefined8 *)(lVar19 + uVar14 * 0x38);
                              puVar18 = (undefined8 *)(lVar19 + uVar15 * 0x38);
                              *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(puVar18 + 2);
                              puVar17[1] = puVar18[1];
                              *puVar17 = *puVar18;
                              *(undefined2 *)((long)puVar17 + 0x14) =
                                   *(undefined2 *)((long)puVar18 + 0x14);
                              *(undefined4 *)(puVar17 + 3) = *(undefined4 *)(puVar18 + 3);
                              *(undefined4 *)((long)puVar17 + 0x1c) =
                                   *(undefined4 *)((long)puVar18 + 0x1c);
                              *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(puVar18 + 4);
                              *(undefined4 *)((long)puVar17 + 0x24) =
                                   *(undefined4 *)((long)puVar18 + 0x24);
                              *(undefined4 *)(puVar17 + 5) = *(undefined4 *)(puVar18 + 5);
                              *(undefined4 *)((long)puVar17 + 0x2c) =
                                   *(undefined4 *)((long)puVar18 + 0x2c);
                              *pfVar16 = *(float *)(puVar18 + 6);
                              *(undefined4 *)((long)puVar17 + 0x34) =
                                   *(undefined4 *)((long)puVar18 + 0x34);
                              if ((uint)uVar14 == uVar11) goto LAB_0020cb28;
                            }
                            uVar11 = (uint)uVar14 + 1;
                            uVar14 = (ulong)uVar11;
                          } while (uVar11 != (uint)uVar15);
                        }
LAB_0020cb28:
                        *(int *)((long)param_4 + 0x54) = (int)uVar15;
                        if ((int)uVar15 == (int)param_4[10]) {
LAB_0020c678:
                    /* try { // try from 0020c684 to 0020c68b has its CatchHandler @ 0020cd90 */
                          uVar15 = (**(code **)*param_4)(param_4,param_4[9]);
                          if ((uVar15 & 1) == 0) {
                    /* try { // try from 0020cd30 to 0020cd37 has its CatchHandler @ 0020cd48 */
                            (**(code **)(*param_4 + 8))(param_4);
                            bVar6 = (char)param_4[8] != '\0';
                            plVar13 = local_180[4];
                            goto joined_r0x0020ccc4;
                          }
                          uVar15 = 0;
                          *(undefined4 *)((long)param_4 + 0x54) = 0;
                        }
                      }
                    }
                    *(int *)((long)param_4 + 0x54) = (int)uVar15 + 1;
                    plVar13 = (long *)(param_4[9] + uVar15 * 0x38);
                    *(int *)(plVar13 + 2) = (int)plVar10[2];
                    plVar13[1] = plVar10[1];
                    *plVar13 = *plVar10;
                    *(undefined2 *)((long)plVar13 + 0x14) = *(undefined2 *)((long)plVar10 + 0x14);
                    *(int *)(plVar13 + 3) = (int)plVar10[3];
                    *(undefined4 *)((long)plVar13 + 0x1c) = *(undefined4 *)((long)plVar10 + 0x1c);
                    *(int *)(plVar13 + 4) = (int)plVar10[4];
                    *(undefined4 *)((long)plVar13 + 0x24) = *(undefined4 *)((long)plVar10 + 0x24);
                    *(int *)(plVar13 + 5) = (int)plVar10[5];
                    *(undefined4 *)((long)plVar13 + 0x2c) = *(undefined4 *)((long)plVar10 + 0x2c);
                    *(int *)(plVar13 + 6) = (int)plVar10[6];
                    *(undefined4 *)((long)plVar13 + 0x34) = *(undefined4 *)((long)plVar10 + 0x34);
                  }
                }
              }
            }
LAB_0020cb48:
            uVar12 = uVar12 + 1;
          } while (uVar12 < local_128);
        }
        plVar13 = local_180[4];
        uVar12 = local_150 + 1;
        if (1 < uVar12) goto code_r0x0020cb70;
        uVar11 = local_90[uVar12];
        local_150 = uVar12;
      } while( true );
    }
    iVar8 = FUN_0020adc0(param_2,1,0,0);
    if (iVar8 == 1) {
LAB_0020c354:
      if (*(int *)(param_2 + 8) != -1) goto LAB_0020c410;
    }
    else if (*(int *)(param_2 + 8) != -1) goto LAB_0020c370;
  }
  else {
    if ((uVar4 & 1) == 0) goto LAB_0020c318;
LAB_0020c2f0:
    iVar8 = FUN_0020adc0(param_2,0,0,0);
    if (iVar8 == 1) goto LAB_0020c354;
    if (*(int *)(param_2 + 8) != -1) goto LAB_0020c318;
  }
  uVar9 = FUN_00400880();
  FUN_00400890(uVar9,0x80,
               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpVolumeCache.cpp"
               ,0x247,
               "PxVolumeCache: unspecified volume geometry. Reverting to uncached scene query.");
LAB_0020c410:
  plVar10 = (long *)(*(long *)(*(long *)(param_2 + 0x60) + 0x68) + -0x10);
  local_108 = (undefined *)CONCAT62(local_108._2_6_,*local_118);
  (**(code **)(*plVar10 + 0x300))
            (*(undefined4 *)(param_3 + 0x10),0,plVar10,*(undefined8 *)(param_3 + 0x18),
             *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 8),param_4,&local_108,param_6
             ,param_7,0);
  return (char)param_4[8] != '\0' || *(int *)((long)param_4 + 0x54) != 0;
code_r0x0020cb70:
  uVar11 = *(uint *)((long)param_4 + 0x54);
  uVar12 = (ulong)uVar11;
  if ((char)param_4[8] != '\0') {
    if (uVar11 == 0) goto LAB_0020ccf4;
    fVar23 = *(float *)(param_4 + 7);
    lVar19 = param_4[9];
    uVar15 = 0;
    do {
      while( true ) {
        uVar11 = (uint)uVar12;
        pfVar16 = (float *)(lVar19 + uVar15 * 0x38 + 0x30);
        if (*pfVar16 <= fVar23) break;
        uVar11 = uVar11 - 1;
        uVar12 = (ulong)uVar11;
        puVar18 = (undefined8 *)(lVar19 + uVar12 * 0x38);
        puVar17 = (undefined8 *)(lVar19 + uVar15 * 0x38);
        *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(puVar18 + 2);
        puVar17[1] = puVar18[1];
        *puVar17 = *puVar18;
        *(undefined2 *)((long)puVar17 + 0x14) = *(undefined2 *)((long)puVar18 + 0x14);
        *(undefined4 *)(puVar17 + 3) = *(undefined4 *)(puVar18 + 3);
        *(undefined4 *)((long)puVar17 + 0x1c) = *(undefined4 *)((long)puVar18 + 0x1c);
        *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(puVar18 + 4);
        *(undefined4 *)((long)puVar17 + 0x24) = *(undefined4 *)((long)puVar18 + 0x24);
        *(undefined4 *)(puVar17 + 5) = *(undefined4 *)(puVar18 + 5);
        *(undefined4 *)((long)puVar17 + 0x2c) = *(undefined4 *)((long)puVar18 + 0x2c);
        *pfVar16 = *(float *)(puVar18 + 6);
        *(undefined4 *)((long)puVar17 + 0x34) = *(undefined4 *)((long)puVar18 + 0x34);
        if ((uint)uVar15 == uVar11) goto LAB_0020cc30;
      }
      uVar1 = (uint)uVar15 + 1;
      uVar15 = (ulong)uVar1;
    } while (uVar1 != uVar11);
LAB_0020cc30:
    *(uint *)((long)param_4 + 0x54) = uVar11;
  }
                    /* try { // try from 0020cce4 to 0020cceb has its CatchHandler @ 0020cd5c */
  if ((uVar11 != 0) && (uVar12 = (**(code **)*param_4)(param_4,param_4[9]), (uVar12 & 1) != 0)) {
    *(undefined4 *)((long)param_4 + 0x54) = 0;
  }
LAB_0020ccf4:
                    /* try { // try from 0020ccfc to 0020cd03 has its CatchHandler @ 0020cd60 */
  (**(code **)(*param_4 + 8))(param_4);
  bVar6 = (char)param_4[8] != '\0';
joined_r0x0020ccc4:
  if (plVar13 != (long *)0x0) {
                    /* try { // try from 0020cd14 to 0020cd23 has its CatchHandler @ 0020cd80 */
    FUN_00401ce0(&local_108,local_180[3]);
  }
  return bVar6;
}


