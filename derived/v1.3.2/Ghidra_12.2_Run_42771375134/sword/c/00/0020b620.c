/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0020b620; name: FUN_0020b620
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_0020b620(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4,ushort *param_5,
                 uint *param_6,long *param_7)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  byte bVar9;
  float *pfVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  long *plVar17;
  ulong uVar18;
  int *piVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 *puVar23;
  float *pfVar24;
  long *plVar25;
  long lVar26;
  ushort *puVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_1c0 [8];
  float *local_1b8;
  long *local_1b0;
  undefined1 *local_1a8;
  undefined *local_1a0;
  undefined1 *local_198;
  uint local_18c;
  long local_188;
  long *local_180;
  uint local_174;
  undefined8 *local_170;
  long *local_168;
  long *local_160;
  ulong local_158;
  ulong local_150;
  ushort *local_148;
  undefined1 *local_140;
  float local_134;
  ulong local_130;
  uint local_124;
  long *local_120;
  ushort local_118 [4];
  undefined *local_110;
  long local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  float fStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  byte local_b0 [40];
  uint local_88 [6];
  
  *(undefined1 *)(param_4 + 9) = 0;
  *(undefined4 *)((long)param_4 + 0x5c) = 0;
  local_120 = param_7;
  uVar7 = (ushort)param_6[4];
  if (*(char *)(param_2 + 0x90) == '\0') {
    if (*(int *)(*(long *)(param_2 + 0x60) + 0x2c) == *(int *)(param_2 + 0x88) || (uVar7 & 1) == 0)
    goto LAB_0020b6c4;
LAB_0020b69c:
    iVar13 = FUN_0020adc0(param_2,0,0,0);
    if (iVar13 == 1) goto LAB_0020b700;
    if (*(int *)(param_2 + 8) != -1) goto LAB_0020b6c4;
  }
  else {
    if ((uVar7 & 1) != 0) goto LAB_0020b69c;
LAB_0020b6c4:
    if (((*(char *)(param_2 + 0x91) == '\0') &&
        (*(int *)(*(long *)(param_2 + 0x60) + 0x5c) == *(int *)(param_2 + 0x8c))) ||
       ((uVar7 >> 1 & 1) == 0)) {
LAB_0020b71c:
      uVar15 = *(uint *)(param_2 + 0x70);
      local_88[0] = uVar15;
      local_88[1] = *(int *)(param_2 + 0x80);
      if (*(int *)(param_2 + 0x80) == 0 && uVar15 == 0) {
        return false;
      }
      local_170 = param_3;
      local_134 = *(float *)(param_3 + 2);
      lVar26 = *(long *)(*(long *)(param_2 + 0x60) + 0x68);
      local_18c = *(uint *)(param_2 + 0x58);
      if (*(uint *)(param_2 + 0x58) <= *(uint *)(param_2 + 0x54)) {
        local_18c = *(uint *)(param_2 + 0x54);
      }
      if (local_18c < 0x80) {
        local_140 = auStack_1c0 + (ulong)local_18c * -0x40;
        local_1a8 = (undefined1 *)0x0;
        local_198 = (undefined1 *)0x0;
      }
      else {
                    /* try { // try from 0020b80c to 0020b823 has its CatchHandler @ 0020c174 */
        local_140 = (undefined1 *)
                    FUN_00401b30(&local_110,(ulong)local_18c << 6,
                                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpVolumeCache.cpp"
                                 ,0x268);
        local_1a8 = local_140;
        local_198 = local_140;
      }
      local_158 = 0;
      local_180 = (long *)(lVar26 + -0x10);
      local_174 = (uint)(local_120 == (long *)0x0 || (uVar7 & 4) == 0);
      local_124 = (uint)(local_120 == (long *)0x0 || (uVar7 & 8) == 0);
      local_168 = param_4 + 1;
      local_1b0 = &local_108;
      local_1a0 = PTR_DAT_02711210 + 0x10;
      local_148 = param_5;
      local_188 = param_2;
      local_1a8 = local_198;
      fVar29 = local_134;
      do {
        if (uVar15 != 0) {
          plVar17 = (long *)(local_188 + local_158 * 0x10 + 0x68);
          uVar20 = 0;
          local_150 = (ulong)uVar15;
          local_160 = plVar17;
          do {
            uVar14 = 1;
            plVar2 = (long *)(*plVar17 + uVar20 * 0x10);
            plVar25 = (long *)*plVar2;
            uVar15 = uVar14;
            if ((short)plVar25[1] == 6 && plVar25 != (long *)0x0) {
              uVar15 = 2;
            }
            if ((uVar15 & uVar7) != 0) {
              uVar8 = *param_5;
              cVar6 = *(char *)((long)param_6 + 0x12);
              if ((int)param_4[0xb] == 0) {
                uVar14 = 2;
              }
                    /* try { // try from 0020b960 to 0020ba37 has its CatchHandler @ 0020c1e4 */
              cVar12 = (**(code **)(*plVar25 + 0x88))(plVar25);
              if (cVar6 == cVar12) {
LAB_0020b9b0:
                plVar17 = plVar2 + 1;
                lVar26 = *plVar17;
                if ((((param_6[1] == 0 && *param_6 == 0) && param_6[2] == 0) && param_6[3] == 0) ||
                   ((((*(uint *)(lVar26 + 0x54) & param_6[1]) != 0 ||
                     (*(uint *)(lVar26 + 0x50) & *param_6) != 0) ||
                    (*(uint *)(lVar26 + 0x58) & param_6[2]) != 0) ||
                    (*(uint *)(lVar26 + 0x5c) & param_6[3]) != 0)) {
                  if ((local_174 & 1) == 0) {
                    local_110 = (undefined *)CONCAT62(local_110._2_6_,*local_148);
                    uVar14 = (**(code **)*local_120)(local_120,param_6,lVar26,*plVar2,&local_110);
                    *local_148 = (ushort)local_110 & 0x1b0 | *local_148 & 0xfe4f;
                    if (uVar14 == 0) goto LAB_0020bf08;
                  }
                  puVar27 = local_148;
                  lVar26 = *plVar17;
                    /* try { // try from 0020ba6c to 0020ba77 has its CatchHandler @ 0020c1bc */
                  FUN_001e1900(local_b0,lVar26,*plVar2);
                  if ((*(byte *)(lVar26 + 0x38) & 1) == 0) {
                    piVar19 = (int *)(lVar26 + 0x98);
                  }
                  else {
                    piVar19 = (int *)(*(long *)(lVar26 + 0x40) + 0x38);
                  }
                  if ((*piVar19 == 5) && (((byte)*puVar27 >> 5 & 1) == 0)) {
                    uVar15 = 1;
                  }
                  else {
                    uVar15 = local_18c;
                  }
                  local_110 = (undefined *)CONCAT62(local_110._2_6_,uVar8);
                    /* try { // try from 0020bacc to 0020badb has its CatchHandler @ 0020c1a8 */
                  uVar15 = FUN_0029a3e0(fVar29,*local_170,local_170[1],piVar19,local_b0,&local_110,
                                        uVar15,local_140);
                  if (uVar15 != 0) {
                    local_130 = (ulong)uVar15;
                    uVar22 = 0;
                    puVar23 = local_140;
                    do {
                      plVar25 = (long *)(puVar23 + uVar22 * 0x40);
                      *plVar25 = *plVar2;
                      plVar25[1] = *plVar17;
                      puVar27 = (ushort *)((long)plVar25 + 0x14);
                      uVar8 = *puVar27;
                      if ((uVar8 >> 2 & 1) == 0) {
                        *(undefined4 *)(plVar25 + 6) = 0;
                      }
                      if ((uVar8 & 1) == 0) {
                        plVar25[3] = 0;
                        *(undefined4 *)(plVar25 + 4) = 0;
                      }
                      if ((uVar8 >> 1 & 1) == 0) {
                        *(undefined8 *)((long)plVar25 + 0x24) = 0;
                        *(undefined4 *)((long)plVar25 + 0x2c) = 0;
                      }
                      if ((uVar8 >> 3 & 1) == 0) {
                        *(undefined8 *)((long)plVar25 + 0x34) = 0;
                      }
                      uVar15 = uVar14;
                      pfVar10 = local_1b8;
                      if ((local_124 & 1) == 0) {
                    /* try { // try from 0020bb84 to 0020bb8f has its CatchHandler @ 0020c1d0 */
                        uVar15 = (**(code **)(*local_120 + 8))(local_120,param_6,plVar25);
                        pfVar10 = local_1b8;
                        puVar23 = local_140;
                      }
                      if (((uVar7 >> 4 & 1) != 0) && (bVar11 = uVar15 != 0, uVar15 = 0, bVar11)) {
                        *(int *)(local_168 + 2) = (int)plVar25[2];
                        local_168[1] = plVar25[1];
                        *local_168 = *plVar25;
                        uVar22 = uVar22 & 0xffffffff;
                        *(ushort *)((long)param_4 + 0x1c) = *puVar27;
                        *(undefined4 *)(param_4 + 4) =
                             *(undefined4 *)(puVar23 + uVar22 * 0x40 + 0x18);
                        *(undefined4 *)((long)param_4 + 0x24) =
                             *(undefined4 *)(puVar23 + uVar22 * 0x40 + 0x1c);
                        *(undefined4 *)(param_4 + 5) =
                             *(undefined4 *)(puVar23 + uVar22 * 0x40 + 0x20);
                        *(undefined4 *)((long)param_4 + 0x2c) =
                             *(undefined4 *)(puVar23 + uVar22 * 0x40 + 0x24);
                        *(undefined4 *)(param_4 + 6) =
                             *(undefined4 *)(puVar23 + uVar22 * 0x40 + 0x28);
                        *(undefined4 *)((long)param_4 + 0x34) =
                             *(undefined4 *)(puVar23 + uVar22 * 0x40 + 0x2c);
                        *(undefined4 *)(param_4 + 7) =
                             *(undefined4 *)(puVar23 + uVar22 * 0x40 + 0x30);
                        *(undefined8 *)((long)param_4 + 0x3c) =
                             *(undefined8 *)(puVar23 + uVar22 * 0x40 + 0x34);
                        local_1b8 = pfVar10;
                    /* try { // try from 0020c0a0 to 0020c0a7 has its CatchHandler @ 0020c160 */
                        (**(code **)(*param_4 + 8))(param_4);
                        bVar11 = true;
                        *(undefined1 *)(param_4 + 9) = 1;
                        goto joined_r0x0020c0b8;
                      }
                      if ((uVar7 & 0x20) != 0) {
                        uVar15 = 1;
                      }
                      if (uVar15 == 2) {
                        fVar28 = *(float *)(plVar25 + 6);
                        if (fVar28 <= local_134) {
                          local_134 = fVar28;
                          *(int *)(local_168 + 2) = (int)plVar25[2];
                          local_168[1] = plVar25[1];
                          *local_168 = *plVar25;
                          *(ushort *)((long)param_4 + 0x1c) = *puVar27;
                          *(int *)(param_4 + 4) = (int)plVar25[3];
                          *(undefined4 *)((long)param_4 + 0x24) =
                               *(undefined4 *)((long)plVar25 + 0x1c);
                          *(int *)(param_4 + 5) = (int)plVar25[4];
                          *(undefined4 *)((long)param_4 + 0x2c) =
                               *(undefined4 *)((long)plVar25 + 0x24);
                          *(int *)(param_4 + 6) = (int)plVar25[5];
                          *(undefined4 *)((long)param_4 + 0x34) =
                               *(undefined4 *)((long)plVar25 + 0x2c);
                          *(float *)(param_4 + 7) = *(float *)(plVar25 + 6);
                          *(undefined8 *)((long)param_4 + 0x3c) =
                               *(undefined8 *)((long)plVar25 + 0x34);
                          *(undefined1 *)(param_4 + 9) = 1;
                          fVar29 = fVar28;
                        }
                      }
                      else if (((uVar15 == 1) && (*(uint *)(param_4 + 0xb) != 0)) &&
                              (local_1b8 = (float *)(plVar25 + 6), *local_1b8 <= local_134)) {
                        uVar15 = *(uint *)((long)param_4 + 0x5c);
                        pfVar24 = local_1b8;
                        if (uVar15 == *(uint *)(param_4 + 0xb)) {
                          local_108 = 0;
                          local_100 = 0;
                          local_f8 = 0xffffffff;
                          local_f4 = 0;
                          uStack_d0 = 0;
                          local_c8 = 0;
                          local_e0 = 0;
                          fStack_d8 = 3.4028235e+38;
                          local_d4 = 0;
                          local_f0 = 0;
                          local_e8 = 0;
                          local_c0 = 0;
                          uStack_b8 = 0;
                          local_118[0] = *local_148;
                    /* try { // try from 0020bc30 to 0020bc5b has its CatchHandler @ 0020c194 */
                          local_110 = local_1a0;
                          uVar18 = FUN_0020b620(param_1,local_188,local_170,&local_110,local_118,
                                                param_6,local_120);
                          if ((uVar18 & 1) == 0) {
                            uVar15 = *(uint *)((long)param_4 + 0x5c);
                            if (uVar15 == *(uint *)(param_4 + 0xb)) goto LAB_0020be48;
                          }
                          else {
                            *(int *)(local_168 + 2) = (int)local_1b0[2];
                            local_168[1] = local_1b0[1];
                            *local_168 = *local_1b0;
                            *(undefined2 *)((long)param_4 + 0x1c) = local_f4;
                            *(undefined4 *)(param_4 + 4) = (undefined4)local_f0;
                            *(undefined4 *)((long)param_4 + 0x24) = local_f0._4_4_;
                            *(undefined4 *)(param_4 + 5) = (undefined4)local_e8;
                            *(undefined4 *)((long)param_4 + 0x2c) = local_e8._4_4_;
                            *(undefined4 *)(param_4 + 6) = (undefined4)local_e0;
                            *(undefined4 *)((long)param_4 + 0x34) = local_e0._4_4_;
                            *(float *)(param_4 + 7) = fStack_d8;
                            uVar18 = (ulong)*(uint *)((long)param_4 + 0x5c);
                            *(ulong *)((long)param_4 + 0x3c) = CONCAT44(uStack_d0,local_d4);
                            *(undefined1 *)(param_4 + 9) = 1;
                            uVar15 = 0;
                            if (*(uint *)((long)param_4 + 0x5c) != 0) {
                              lVar26 = param_4[10];
                              uVar21 = 0;
                              do {
                                while( true ) {
                                  uVar15 = (uint)uVar18;
                                  puVar4 = (undefined8 *)(lVar26 + uVar21 * 0x40);
                                  if (*(float *)(puVar4 + 6) <= fStack_d8) break;
                                  uVar15 = uVar15 - 1;
                                  uVar18 = (ulong)uVar15;
                                  puVar5 = (undefined8 *)(lVar26 + uVar18 * 0x40);
                                  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar5 + 2);
                                  puVar4[1] = puVar5[1];
                                  *puVar4 = *puVar5;
                                  *(undefined2 *)((long)puVar4 + 0x14) =
                                       *(undefined2 *)((long)puVar5 + 0x14);
                                  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(puVar5 + 3);
                                  *(undefined4 *)((long)puVar4 + 0x1c) =
                                       *(undefined4 *)((long)puVar5 + 0x1c);
                                  *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar5 + 4);
                                  *(undefined4 *)((long)puVar4 + 0x24) =
                                       *(undefined4 *)((long)puVar5 + 0x24);
                                  *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(puVar5 + 5);
                                  *(undefined4 *)((long)puVar4 + 0x2c) =
                                       *(undefined4 *)((long)puVar5 + 0x2c);
                                  *(float *)(puVar4 + 6) = *(float *)(puVar5 + 6);
                                  *(undefined8 *)((long)puVar4 + 0x34) =
                                       *(undefined8 *)((long)puVar5 + 0x34);
                                  if ((uint)uVar21 == uVar15) goto LAB_0020bd7c;
                                }
                                uVar1 = (uint)uVar21 + 1;
                                uVar21 = (ulong)uVar1;
                              } while (uVar1 != uVar15);
                            }
LAB_0020bd7c:
                            *(uint *)((long)param_4 + 0x5c) = uVar15;
                            if (uVar15 == *(uint *)(param_4 + 0xb)) {
LAB_0020be48:
                    /* try { // try from 0020be54 to 0020be5b has its CatchHandler @ 0020c180 */
                              uVar18 = (**(code **)*param_4)(param_4,param_4[10]);
                              if ((uVar18 & 1) != 0) {
                                uVar15 = 0;
                                *(undefined4 *)((long)param_4 + 0x5c) = 0;
                                puVar23 = local_140;
                                pfVar24 = local_1b8;
                                pfVar10 = local_1b8;
                                goto LAB_0020be78;
                              }
                    /* try { // try from 0020c0fc to 0020c103 has its CatchHandler @ 0020c120 */
                              (**(code **)(*param_4 + 8))(param_4);
                              goto LAB_0020c104;
                            }
                          }
                          puVar23 = local_140;
                          pfVar24 = local_1b8;
                          pfVar10 = local_1b8;
                        }
LAB_0020be78:
                        local_1b8 = pfVar10;
                        *(uint *)((long)param_4 + 0x5c) = uVar15 + 1;
                        plVar3 = (long *)(param_4[10] + (ulong)uVar15 * 0x40);
                        *(int *)(plVar3 + 2) = (int)plVar25[2];
                        plVar3[1] = plVar25[1];
                        *plVar3 = *plVar25;
                        *(ushort *)((long)plVar3 + 0x14) = *puVar27;
                        *(int *)(plVar3 + 3) = (int)plVar25[3];
                        *(undefined4 *)((long)plVar3 + 0x1c) = *(undefined4 *)((long)plVar25 + 0x1c)
                        ;
                        *(int *)(plVar3 + 4) = (int)plVar25[4];
                        *(undefined4 *)((long)plVar3 + 0x24) = *(undefined4 *)((long)plVar25 + 0x24)
                        ;
                        *(int *)(plVar3 + 5) = (int)plVar25[5];
                        *(undefined4 *)((long)plVar3 + 0x2c) = *(undefined4 *)((long)plVar25 + 0x2c)
                        ;
                        *(float *)(plVar3 + 6) = *pfVar24;
                        *(undefined8 *)((long)plVar3 + 0x34) = *(undefined8 *)((long)plVar25 + 0x34)
                        ;
                        pfVar10 = local_1b8;
                      }
                      local_1b8 = pfVar10;
                      uVar22 = uVar22 + 1;
                    } while (uVar22 < local_130);
                  }
                }
              }
              else {
                (**(code **)(*local_180 + 0x118))
                          (&local_110,local_180,*(undefined1 *)((long)param_6 + 0x12));
                bVar9 = (byte)local_110;
                (**(code **)(*plVar25 + 0x98))(local_b0,plVar25);
                if (((bVar9 & local_b0[0]) >> 3 & 1) != 0) goto LAB_0020b9b0;
              }
LAB_0020bf08:
              plVar17 = local_160;
              param_5 = local_148;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < local_150);
        }
        uVar20 = local_158 + 1;
        if (1 < uVar20) goto code_r0x0020bf3c;
        local_158 = uVar20;
        uVar15 = local_88[uVar20];
      } while( true );
    }
    iVar13 = FUN_0020adc0(param_2,1,0,0);
    if (iVar13 == 1) {
LAB_0020b700:
      if (*(int *)(param_2 + 8) != -1) goto LAB_0020b7ac;
    }
    else if (*(int *)(param_2 + 8) != -1) goto LAB_0020b71c;
  }
  uVar16 = FUN_00400880();
  FUN_00400890(uVar16,0x80,
               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpVolumeCache.cpp"
               ,0x247,
               "PxVolumeCache: unspecified volume geometry. Reverting to uncached scene query.");
LAB_0020b7ac:
  plVar17 = (long *)(*(long *)(*(long *)(param_2 + 0x60) + 0x68) + -0x10);
  local_110 = (undefined *)CONCAT62(local_110._2_6_,*param_5);
  (**(code **)(*plVar17 + 0x2f8))
            (*(undefined4 *)(param_3 + 2),plVar17,*param_3,param_3[1],param_4,&local_110,param_6,
             local_120,0);
  return (char)param_4[9] != '\0' || *(int *)((long)param_4 + 0x5c) != 0;
code_r0x0020bf3c:
  uVar15 = *(uint *)((long)param_4 + 0x5c);
  uVar20 = (ulong)uVar15;
  if ((char)param_4[9] != '\0') {
    if (uVar15 == 0) goto LAB_0020c014;
    fVar29 = *(float *)(param_4 + 7);
    lVar26 = param_4[10];
    uVar22 = 0;
    do {
      while( true ) {
        uVar15 = (uint)uVar20;
        puVar4 = (undefined8 *)(lVar26 + uVar22 * 0x40);
        if (*(float *)(puVar4 + 6) <= fVar29) break;
        uVar15 = uVar15 - 1;
        uVar20 = (ulong)uVar15;
        puVar5 = (undefined8 *)(lVar26 + uVar20 * 0x40);
        *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar5 + 2);
        puVar4[1] = puVar5[1];
        *puVar4 = *puVar5;
        *(undefined2 *)((long)puVar4 + 0x14) = *(undefined2 *)((long)puVar5 + 0x14);
        *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(puVar5 + 3);
        *(undefined4 *)((long)puVar4 + 0x1c) = *(undefined4 *)((long)puVar5 + 0x1c);
        *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar5 + 4);
        *(undefined4 *)((long)puVar4 + 0x24) = *(undefined4 *)((long)puVar5 + 0x24);
        *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(puVar5 + 5);
        *(undefined4 *)((long)puVar4 + 0x2c) = *(undefined4 *)((long)puVar5 + 0x2c);
        *(float *)(puVar4 + 6) = *(float *)(puVar5 + 6);
        *(undefined8 *)((long)puVar4 + 0x34) = *(undefined8 *)((long)puVar5 + 0x34);
        if ((uint)uVar22 == uVar15) goto LAB_0020bff0;
      }
      uVar14 = (uint)uVar22 + 1;
      uVar22 = (ulong)uVar14;
    } while (uVar14 != uVar15);
LAB_0020bff0:
    *(uint *)((long)param_4 + 0x5c) = uVar15;
  }
                    /* try { // try from 0020c004 to 0020c00b has its CatchHandler @ 0020c134 */
  if ((uVar15 != 0) && (uVar20 = (**(code **)*param_4)(param_4,param_4[10]), (uVar20 & 1) != 0)) {
    *(undefined4 *)((long)param_4 + 0x5c) = 0;
  }
LAB_0020c014:
                    /* try { // try from 0020c01c to 0020c023 has its CatchHandler @ 0020c148 */
  (**(code **)(*param_4 + 8))(param_4);
LAB_0020c104:
  bVar11 = (char)param_4[9] != '\0';
joined_r0x0020c0b8:
  if (local_198 != (undefined1 *)0x0) {
                    /* try { // try from 0020c0bc to 0020c0cb has its CatchHandler @ 0020c15c */
    FUN_00401ce0(&local_110,local_1a8);
  }
  return bVar11;
}


