/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00128bb0; name: FUN_00128bb0
 */


uint FUN_00128bb0(float *param_1,uint param_2,long param_3,undefined1 *param_4,float *param_5,
                 long *param_6,undefined2 *param_7,float *param_8,int param_9,long *param_10,
                 byte param_11,byte param_12,ushort *param_13,long *param_14,uint param_15,
                 long param_16,undefined8 *param_17,byte param_18,long *param_19,long *param_20,
                 long *param_21,byte param_22)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  byte *pbVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  float *pfVar19;
  byte *pbVar20;
  int iVar21;
  uint uVar22;
  byte *pbVar23;
  float *pfVar24;
  ushort uVar25;
  uint uVar26;
  ulong uVar27;
  long *plVar28;
  float *pfVar29;
  byte bVar30;
  int iVar31;
  ulong uVar32;
  float *pfVar33;
  int iVar34;
  long *plVar35;
  ushort *puVar36;
  byte *pbVar37;
  ulong uVar38;
  ulong uVar39;
  uint uVar40;
  long lVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  long lVar44;
  long lVar45;
  float *pfVar46;
  char cVar47;
  float *pfVar48;
  float *pfVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar59 [16];
  byte abStack_120 [8];
  uint local_118;
  int local_114;
  uint local_110;
  int local_10c;
  uint local_108;
  uint local_104;
  undefined1 *local_100;
  long local_f8;
  float *local_f0;
  float *local_e8;
  long *local_e0;
  undefined8 local_d8;
  byte *local_d0;
  long *local_c8;
  uint local_bc;
  long *local_b8;
  long *local_b0;
  ushort *local_a8;
  uint local_9c;
  byte *local_98;
  bool local_90;
  undefined1 auStack_78 [8];
  
  if (param_2 == 0) {
    *param_4 = 0;
    param_5[0] = 0.0;
    param_5[1] = 0.0;
    *param_6 = 0;
    param_8[0] = 0.0;
    param_8[1] = 0.0;
    *param_7 = 0;
    *(undefined1 *)param_14 = 0;
    return 0;
  }
  uVar22 = param_2 * 5;
  local_f8 = param_3;
  local_b8 = param_14;
  local_e8 = param_5;
  local_e0 = param_6;
  local_d8 = param_7;
  local_90 = 0x400 < uVar22;
  if (uVar22 < 0x401) {
    pbVar15 = abStack_120 + -((ulong)uVar22 + 0xf & 0x1fffffff0);
  }
  else {
                    /* try { // try from 00128c28 to 00128c3f has its CatchHandler @ 00129a08 */
    pbVar15 = (byte *)FUN_00401b30(auStack_78,uVar22,
                                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevel/common/src/pipeline/PxcNpContactPrepShared.cpp"
                                   ,0x57);
  }
  plVar16 = local_b8;
  local_98 = pbVar15;
  plVar18 = (long *)(ulong)*param_13;
  pbVar20 = (byte *)(ulong)param_13[1];
  uVar22 = (uint)param_18;
  if (1 < param_2) {
    fVar56 = param_1[1];
    fVar54 = param_1[2];
    fVar57 = *param_1;
    iVar34 = 0;
    pbVar23 = (byte *)0x0;
    uVar27 = 1;
    uVar40 = 1;
    iVar21 = 1;
    iVar31 = 1;
    plVar35 = plVar18;
    pbVar37 = pbVar20;
    uVar26 = param_2;
LAB_00128d08:
    pfVar24 = param_1 + uVar27 * 0x10;
    fVar50 = *pfVar24;
    fVar51 = pfVar24[1];
    fVar53 = pfVar24[2];
    if ((fVar57 * fVar50 + fVar56 * fVar51 + fVar54 * fVar53 < DAT_01d4c5a4) ||
       ((uint)param_13[uVar27 * 2] != (uint)plVar35)) {
LAB_00128d50:
      pbVar37 = pbVar15 + (ulong)(uVar40 - 1) * 5;
      *pbVar37 = (byte)iVar34;
      uVar7 = (int)uVar27 - iVar34;
      pbVar37[1] = (byte)uVar27;
      pbVar37[2] = 0xff;
      pbVar37[4] = (byte)iVar31;
      bVar30 = (byte)uVar7;
      pbVar37[3] = bVar30;
      if (pbVar23 != (byte *)0x0) {
        pbVar23[3] = bVar30 + pbVar23[3];
      }
      puVar36 = param_13 + uVar27 * 2;
      if (1 < uVar40) {
        uVar32 = 0;
        pbVar23 = pbVar15;
        do {
          if (pbVar23[4] != 0) {
            uVar39 = (ulong)*pbVar23;
            pfVar24 = param_1 + uVar39 * 0x10;
            if (((DAT_01d4c5a4 <= fVar50 * *pfVar24 + fVar51 * pfVar24[1] + fVar53 * pfVar24[2]) &&
                (*puVar36 == param_13[uVar39 * 2])) && (puVar36[1] == param_13[uVar39 * 2 + 1]))
            goto LAB_00128ce4;
          }
          uVar39 = uVar32 + 2;
          uVar32 = uVar32 + 1;
          pbVar23 = pbVar23 + 5;
        } while (uVar39 < uVar40);
      }
      pbVar23 = (byte *)0x0;
      iVar31 = 1;
      goto LAB_00128e1c;
    }
    if ((uint)param_13[uVar27 * 2 + 1] != (uint)pbVar37) goto LAB_00128d50;
    goto LAB_00128e4c;
  }
  pbVar23 = (byte *)0x0;
  iVar34 = 0;
  bVar30 = 1;
  uVar26 = 1;
  iVar21 = 1;
  uVar40 = 1;
LAB_00128e74:
  local_110 = (uint)param_12;
  iVar31 = uVar26 + (1 < param_2 - iVar34 & param_18);
  if ((param_9 != 0) && ((param_18 & 1) != 0)) {
    param_9 = param_9 + (iVar31 - param_2) * 4;
  }
  pbVar37 = pbVar15 + (ulong)(uVar40 - 1) * 5;
  *pbVar37 = (byte)iVar34;
  uVar26 = (param_12 ^ 1) & (uint)param_11;
  pbVar37[2] = 0xff;
  pbVar37[1] = (byte)param_2;
  bVar4 = (byte)(param_2 - iVar34);
  pbVar37[3] = bVar4;
  pbVar37[4] = bVar30;
  if (pbVar23 != (byte *)0x0) {
    pbVar23[3] = bVar4 + pbVar23[3];
  }
  bVar14 = (uVar26 & 1) == 0;
  local_a8 = param_13;
  local_b0 = (long *)CONCAT44(local_b0._4_4_,(uint)param_22);
  *(char *)plVar16 = (char)iVar21;
  iVar34 = iVar31;
  if (bVar14) {
    iVar34 = iVar21;
  }
  uVar7 = param_15 + iVar34 * 0x30;
  iVar21 = 0x40;
  if (bVar14) {
    iVar21 = 0x10;
  }
  iVar21 = iVar31 * iVar21;
  local_108 = param_15;
  local_10c = iVar31;
  local_104 = uVar26;
  local_100 = param_4;
  local_f0 = param_8;
  local_d0 = pbVar20;
  local_c8 = plVar18;
  local_9c = uVar22;
  if (((param_19 == (long *)0x0) || (param_15 != 0)) || (((uVar26 ^ 1) & 1) == 0)) {
    local_bc = uVar7 + iVar21 + 0xf & 0xfffffff0;
    uVar22 = param_9 << (ulong)(param_22 & 1);
    if (param_16 != 0) {
      uVar26 = uVar22 + local_bc + 0xf & 0xfffffff0;
      if (uVar26 < 0x4001) {
        if (param_17[1] != 0) {
          uVar2 = *(uint *)(param_17 + 2) + uVar26;
          if (uVar2 < 0x4001) {
            lVar41 = param_17[1] + (ulong)*(uint *)(param_17 + 2);
            *(uint *)(param_17 + 2) = uVar2;
            pfVar24 = (float *)(lVar41 + (ulong)uVar7);
            goto joined_r0x001299c4;
          }
        }
                    /* try { // try from 00129894 to 001298ef has its CatchHandler @ 00129a5c */
        lVar41 = FUN_00112210(*param_17);
        param_17[1] = lVar41;
        *(uint *)(param_17 + 2) = uVar26;
        pfVar24 = (float *)(lVar41 + (ulong)uVar7);
        param_4 = local_100;
        plVar16 = local_b8;
        goto joined_r0x00129908;
      }
                    /* try { // try from 0012906c to 0012910b has its CatchHandler @ 00129a5c */
      lVar41 = FUN_00112050(*param_17,uVar26);
      pfVar24 = (float *)(lVar41 + (ulong)uVar7);
      plVar16 = local_b8;
joined_r0x001299c4:
      if (uVar22 != 0) goto LAB_001290e0;
LAB_0012908c:
      pfVar49 = (float *)0x0;
      lVar44 = 0;
      Hint_Prefetch(lVar41,0,0,0);
      Hint_Prefetch(pfVar24,0,0,0);
      pfVar46 = pfVar24;
      uVar26 = local_bc;
      uVar22 = local_bc;
      goto joined_r0x001290a0;
    }
    uVar26 = uVar22 + local_bc + 0xf & 0xfffffff0;
    if (0x4000 < uVar26) {
      lVar41 = FUN_00112050(*(undefined8 *)(local_f8 + 0x200),uVar26);
      pfVar24 = (float *)(lVar41 + (ulong)uVar7);
      plVar16 = local_b8;
      goto joined_r0x001299c4;
    }
    if (*(long *)(local_f8 + 0x208) != 0) {
      uVar2 = *(uint *)(local_f8 + 0x210) + uVar26;
      if (uVar2 < 0x4001) {
        lVar41 = *(long *)(local_f8 + 0x208) + (ulong)*(uint *)(local_f8 + 0x210);
        *(uint *)(local_f8 + 0x210) = uVar2;
        pfVar24 = (float *)(lVar41 + (ulong)uVar7);
        goto joined_r0x001299c4;
      }
    }
    lVar41 = FUN_00112220(*(undefined8 *)(local_f8 + 0x200));
    *(long *)(local_f8 + 0x208) = lVar41;
    *(uint *)(local_f8 + 0x210) = uVar26;
    pfVar24 = (float *)(lVar41 + (ulong)uVar7);
    plVar16 = local_b8;
joined_r0x00129908:
    local_b8 = plVar16;
    if (uVar22 == 0) goto LAB_0012908c;
LAB_001290e0:
    if (lVar41 != 0) {
                    /* WARNING: Subroutine does not return */
      memset((void *)(lVar41 + (ulong)local_bc),0,(ulong)uVar22);
    }
LAB_00129928:
    Hint_Prefetch(0,0,0,0);
    Hint_Prefetch(pfVar24,0,0,0);
    uVar22 = local_bc;
  }
  else {
    local_114 = param_9;
    local_bc = uVar7;
                    /* try { // try from 00128f50 to 00128f5f has its CatchHandler @ 001299f8 */
    local_118 = FUN_003ff4b0(param_19 + 1,iVar21);
    uVar22 = *(uint *)((long)param_19 + 0xc);
    lVar41 = param_19[2];
    lVar44 = param_19[1];
    lVar45 = *param_19;
                    /* try { // try from 00128f74 to 00128fdf has its CatchHandler @ 00129a18 */
    uVar27 = FUN_003ff4b0(param_20 + 1,local_bc);
    uVar26 = *(uint *)((long)param_20 + 0xc);
    bVar11 = uVar22 <= (uint)((int)lVar41 + (int)lVar44);
    pfVar46 = (float *)((lVar45 + (ulong)uVar22) - (ulong)local_118);
    bVar12 = uVar26 <= (uint)((int)param_20[2] + (int)param_20[1]);
    bVar14 = bVar11 || bVar12;
    lVar41 = (*param_20 + (ulong)uVar26) - (uVar27 & 0xffffffff);
    if (local_114 == 0) {
      lVar44 = 0;
LAB_0012991c:
      pfVar24 = (float *)0x0;
      plVar16 = local_b8;
      param_4 = local_100;
      if (bVar14) goto LAB_00129928;
      pfVar49 = (float *)0x0;
      Hint_Prefetch(lVar41,0,0,0);
      Hint_Prefetch(pfVar46,0,0,0);
    }
    else {
      uVar27 = FUN_003ff4b0(param_21 + 1,local_114 << (ulong)((uint)local_b0 & 1));
      uVar22 = *(uint *)((long)param_21 + 0xc);
      bVar13 = uVar22 <= (uint)((int)param_21[2] + (int)param_21[1]);
      bVar14 = bVar14 || bVar13;
      lVar44 = (*param_21 + (ulong)uVar22) - (uVar27 & 0xffffffff);
      if (((ulong)local_b0 & 1) == 0) goto LAB_0012991c;
      if ((bVar11 || bVar12) || bVar13) {
        pfVar24 = (float *)0x0;
        plVar16 = local_b8;
        param_4 = local_100;
        goto LAB_00129928;
      }
      pfVar49 = (float *)(lVar44 + (ulong)param_2 * 4);
      Hint_Prefetch(lVar41,0,0,0);
      Hint_Prefetch(pfVar46,0,0,0);
    }
    plVar16 = local_b8;
    param_4 = local_100;
    uVar26 = local_bc + iVar21;
    uVar22 = local_bc;
joined_r0x001290a0:
    local_bc = uVar26;
    if (lVar41 != 0) {
      local_b8 = param_10;
      if (local_f8 != 0) {
        *(uint *)(local_f8 + 0x1c14) = *(int *)(local_f8 + 0x1c14) + local_bc;
        *(uint *)(local_f8 + 0x1c30) = *(int *)(local_f8 + 0x1c30) + local_bc;
      }
      *local_d8 = (short)local_bc;
      lVar45 = *param_10 + (long)local_c8 * 0x20;
      lVar3 = *param_10 + (long)local_d0 * 0x20;
                    /* try { // try from 00129168 to 00129177 has its CatchHandler @ 00129a4c */
      fVar56 = (float)FUN_00128a30(lVar45,lVar3);
                    /* try { // try from 00129178 to 0012918b has its CatchHandler @ 00129a3c */
      FUN_00128a20(0x3f800000,0x3f800000,auStack_78);
                    /* try { // try from 0012918c to 0012919b has its CatchHandler @ 00129a2c */
      auVar59 = FUN_00128ab0(auStack_78,lVar45,lVar3);
      uVar17 = auVar59._8_8_;
      uVar27 = auVar59._0_8_ >> 0x20;
      *(long *)local_e8 = lVar41;
      uVar32 = auVar59._0_8_ & 0xffffffff;
      *local_e0 = (long)pfVar46;
      *(long *)local_f0 = lVar44;
      if ((local_104 & 1) == 0) {
        if (uVar40 != 0) {
          plVar16 = (long *)0x0;
          cVar47 = '\0';
          plVar18 = (long *)(ulong)uVar40;
          pfVar24 = param_1 + 0x13;
          pfVar19 = param_1 + 0xd;
          local_f0 = pfVar19;
          local_e8 = pfVar24;
          local_e0 = plVar18;
          uVar22 = (uint)local_b0 & 1;
          local_d8 = (undefined2 *)(CONCAT44(local_d8._4_4_,(uint)local_b0) & 0xffffffff00000001);
          puVar36 = local_a8;
          plVar35 = local_c8;
          pbVar20 = local_d0;
          puVar42 = (undefined8 *)(lVar41 + (ulong)local_108);
          uVar40 = local_9c;
          do {
            pbVar23 = pbVar15 + (long)plVar16 * 5;
            puVar43 = puVar42;
            pfVar33 = pfVar49;
            if (pbVar23[4] != 0) {
              uVar39 = (ulong)*pbVar23;
              uVar6 = puVar36[uVar39 * 2];
              uVar25 = (puVar36 + uVar39 * 2)[1];
              if ((uint)uVar6 == ((uint)plVar35 & 0xffff)) {
                if ((uint)uVar25 != ((uint)pbVar20 & 0xffff)) goto LAB_001295c0;
              }
              else {
LAB_001295c0:
                lVar41 = *local_b8 + (ulong)uVar6 * 0x20;
                lVar44 = *local_b8 + (long)(ulong)uVar25 * 0x20;
                local_c8 = (long *)(ulong)uVar25;
                local_b0 = plVar16;
                    /* try { // try from 001295d8 to 001295e7 has its CatchHandler @ 00129aac */
                fVar56 = (float)FUN_00128a30(lVar41,lVar44);
                    /* try { // try from 001295e8 to 001295f7 has its CatchHandler @ 00129a8c */
                FUN_00128a20(0x3f800000,0x3f800000,auStack_78);
                    /* try { // try from 001295f8 to 00129607 has its CatchHandler @ 00129a6c */
                auVar59 = FUN_00128ab0(auStack_78,lVar41,lVar44);
                uVar17 = auVar59._8_8_;
                uVar32 = auVar59._0_8_ & 0xffffffff;
                uVar25 = (ushort)local_c8;
                uVar27 = auVar59._0_8_ >> 0x20;
                pbVar20 = (byte *)((ulong)local_c8 & 0xffffffff);
                uVar39 = (ulong)*pbVar23;
                plVar35 = (long *)(ulong)(uint)uVar6;
                plVar18 = local_e0;
                pfVar24 = local_e8;
                pfVar19 = local_f0;
                puVar36 = local_a8;
                plVar16 = local_b0;
                uVar40 = local_9c;
                uVar22 = (uint)local_d8;
              }
              pfVar29 = param_1 + uVar39 * 0x10;
              *(float *)(puVar42 + 2) = *pfVar29;
              *(float *)((long)puVar42 + 0x14) = pfVar29[1];
              *(float *)(puVar42 + 3) = pfVar29[2];
              bVar30 = pbVar23[3];
              puVar43 = puVar42 + 6;
              *(int *)((long)puVar42 + 0x24) = (int)uVar32;
              *(int *)(puVar42 + 4) = (int)uVar27;
              *(float *)((long)puVar42 + 0x1c) = fVar56;
              *(ushort *)((long)puVar42 + 0x2c) = uVar6;
              *puVar42 = 0x3f8000003f800000;
              puVar42[1] = 0x3f8000003f800000;
              *(byte *)((long)puVar42 + 0x29) = bVar30;
              *(char *)(puVar42 + 5) = cVar47;
              *(ushort *)((long)puVar42 + 0x2e) = uVar25;
              *(char *)((long)puVar42 + 0x2a) = (char)uVar17;
              *(char *)((long)puVar42 + 0x2b) = (char)uVar22;
              if ((1 < bVar30) && ((uVar40 & 1) != 0)) {
                fVar50 = 0.0;
                fVar51 = 0.0;
                fVar57 = 0.0;
                fVar54 = 0.0;
                *(byte *)((long)puVar42 + 0x29) = bVar30 + 1;
                if (plVar16 != (long *)0xff) {
                  fVar54 = 0.0;
                  fVar57 = 0.0;
                  fVar51 = 0.0;
                  fVar50 = 0.0;
                  plVar28 = plVar16;
                  do {
                    bVar4 = pbVar15[((ulong)plVar28 & 0xffffffff) +
                                    ((ulong)plVar28 & 0xffffffff) * 4];
                    uVar39 = (ulong)bVar4;
                    bVar5 = (pbVar15 +
                            ((ulong)plVar28 & 0xffffffff) + ((ulong)plVar28 & 0xffffffff) * 4)[1];
                    if (bVar4 < bVar5) {
                      uVar38 = uVar39;
                      if ((bVar5 - bVar4 & 1) != 0) {
                        fVar57 = fVar57 + param_1[uVar39 * 0x10 + 4];
                        fVar54 = fVar54 + param_1[uVar39 * 0x10 + 3];
                        fVar50 = fVar50 + param_1[uVar39 * 0x10 + 6];
                        fVar51 = fVar51 + param_1[uVar39 * 0x10 + 5];
                        uVar38 = uVar39 + 1;
                      }
                      if ((ulong)bVar5 - 1 != uVar39) {
                        pfVar29 = pfVar24 + uVar38 * 0x10;
                        do {
                          pfVar48 = pfVar29 + -0x10;
                          pfVar1 = pfVar29 + -0xe;
                          pfVar9 = pfVar29 + -0xd;
                          uVar38 = uVar38 + 2;
                          fVar53 = *pfVar29;
                          fVar57 = fVar57 + pfVar29[-0xf] + pfVar29[1];
                          pfVar8 = pfVar29 + 2;
                          pfVar10 = pfVar29 + 3;
                          pfVar29 = pfVar29 + 0x20;
                          fVar54 = fVar54 + *pfVar48 + fVar53;
                          fVar50 = fVar50 + *pfVar9 + *pfVar10;
                          fVar51 = fVar51 + *pfVar1 + *pfVar8;
                        } while (uVar38 < bVar5);
                      }
                    }
                    plVar28 = (long *)(ulong)pbVar15[((ulong)plVar28 & 0xffffffff) * 5 + 2];
                  } while (plVar28 != (long *)0xff);
                }
                fVar53 = 1.0 / (float)bVar30;
                if (pfVar49 != (float *)0x0) {
                  pfVar33 = pfVar49 + 1;
                  *pfVar49 = param_1[(ulong)pbVar15[0x4fb] * 0x10 + 0xd];
                }
                *pfVar46 = fVar53 * fVar57;
                pfVar46[1] = fVar53 * fVar51;
                pfVar46[2] = fVar53 * fVar50;
                pfVar46[3] = fVar53 * fVar54;
                Hint_Prefetch(pfVar46 + 0x24,0,0,0);
                pfVar46 = pfVar46 + 4;
                cVar47 = cVar47 + '\x01';
              }
              if (plVar16 != (long *)0xff) {
                plVar28 = plVar16;
                do {
                  bVar30 = pbVar15[((ulong)plVar28 & 0xffffffff) + ((ulong)plVar28 & 0xffffffff) * 4
                                  ];
                  uVar39 = (ulong)bVar30;
                  bVar4 = (pbVar15 +
                          ((ulong)plVar28 & 0xffffffff) + ((ulong)plVar28 & 0xffffffff) * 4)[1];
                  if (bVar30 < bVar4) {
                    pfVar49 = pfVar19 + uVar39 * 0x10;
                    pfVar29 = pfVar46;
                    pfVar48 = pfVar33;
                    do {
                      uVar52 = *(undefined8 *)(pfVar49 + -7);
                      *(undefined8 *)pfVar29 = *(undefined8 *)(pfVar49 + -9);
                      pfVar29[2] = (float)uVar52;
                      pfVar29[3] = pfVar49[-10];
                      pfVar33 = pfVar48;
                      if (pfVar48 != (float *)0x0) {
                        pfVar33 = pfVar48 + 1;
                        *pfVar48 = *pfVar49;
                      }
                      pfVar46 = pfVar29 + 4;
                      uVar39 = uVar39 + 1;
                      cVar47 = cVar47 + '\x01';
                      Hint_Prefetch(pfVar29 + 0x24,0,0,0);
                      pfVar49 = pfVar49 + 0x10;
                      pfVar29 = pfVar46;
                      pfVar48 = pfVar33;
                    } while (uVar39 < bVar4);
                  }
                  plVar28 = (long *)(ulong)pbVar15[((ulong)plVar28 & 0xffffffff) * 5 + 2];
                } while (plVar28 != (long *)0xff);
              }
            }
            plVar16 = (long *)((long)plVar16 + 1);
            puVar42 = puVar43;
            pfVar49 = pfVar33;
          } while (plVar16 < plVar18);
        }
      }
      else if (uVar40 != 0) {
        uVar22 = 6;
        if ((local_110 & 1) == 0) {
          uVar22 = 2;
        }
        plVar18 = (long *)(ulong)uVar40;
        pfVar24 = param_1 + 0x13;
        local_e8 = pfVar24;
        local_e0 = plVar18;
        uVar22 = uVar22 | (uint)local_b0 & 1;
        plVar16 = (long *)0x0;
        cVar47 = '\0';
        local_d8 = (undefined2 *)CONCAT44(local_d8._4_4_,uVar22);
        puVar36 = local_a8;
        plVar35 = local_c8;
        pbVar20 = local_d0;
        puVar42 = (undefined8 *)(lVar41 + (ulong)local_108);
        uVar40 = local_9c;
        do {
          pbVar23 = pbVar15 + (long)plVar16 * 5;
          puVar43 = puVar42;
          pfVar19 = pfVar49;
          if (pbVar23[4] != 0) {
            uVar6 = puVar36[(ulong)pbVar15[(long)plVar16 * 5] * 2];
            uVar25 = (puVar36 + (ulong)pbVar15[(long)plVar16 * 5] * 2)[1];
            if ((uint)uVar6 == ((uint)plVar35 & 0xffff)) {
              if ((uint)uVar25 != ((uint)pbVar20 & 0xffff)) goto LAB_00129258;
            }
            else {
LAB_00129258:
              local_b0 = (long *)(*local_b8 + (ulong)uVar6 * 0x20);
              lVar41 = *local_b8 + (long)(ulong)uVar25 * 0x20;
              local_d0 = pbVar23;
              local_c8 = plVar16;
                    /* try { // try from 0012926c to 0012927b has its CatchHandler @ 00129abc */
              fVar56 = (float)FUN_00128a30(local_b0,lVar41);
                    /* try { // try from 0012927c to 0012928b has its CatchHandler @ 00129a9c */
              FUN_00128a20(0x3f800000,0x3f800000,auStack_78);
                    /* try { // try from 0012928c to 0012929b has its CatchHandler @ 00129a7c */
              auVar59 = FUN_00128ab0(auStack_78,local_b0,lVar41);
              uVar17 = auVar59._8_8_;
              uVar32 = auVar59._0_8_ & 0xffffffff;
              uVar27 = auVar59._0_8_ >> 0x20;
              plVar35 = (long *)(ulong)(uint)uVar6;
              plVar16 = local_c8;
              plVar18 = local_e0;
              pfVar24 = local_e8;
              pbVar23 = local_d0;
              puVar36 = local_a8;
              pbVar20 = (byte *)(ulong)uVar25;
              uVar40 = local_9c;
              uVar22 = (uint)local_d8;
            }
            bVar30 = pbVar23[3];
            *(char *)(puVar42 + 5) = cVar47;
            *(char *)((long)puVar42 + 0x2a) = (char)uVar17;
            fVar54 = (float)uVar27;
            *(float *)(puVar42 + 4) = fVar54;
            fVar57 = (float)uVar32;
            *(float *)((long)puVar42 + 0x24) = fVar57;
            puVar43 = puVar42 + 6;
            *(float *)((long)puVar42 + 0x1c) = fVar56;
            *(ushort *)((long)puVar42 + 0x2c) = uVar6;
            *(ushort *)((long)puVar42 + 0x2e) = uVar25;
            *(byte *)((long)puVar42 + 0x29) = bVar30;
            *(float *)(puVar42 + 2) = *param_1;
            *(float *)((long)puVar42 + 0x14) = param_1[1];
            *(float *)(puVar42 + 3) = param_1[2];
            *puVar42 = 0x3f8000003f800000;
            puVar42[1] = 0x3f8000003f800000;
            *(char *)((long)puVar42 + 0x2b) = (char)uVar22;
            if ((1 < bVar30) && ((uVar40 & 1) != 0)) {
              fVar50 = 0.0;
              fVar55 = 0.0;
              fVar53 = 0.0;
              fVar51 = 0.0;
              if (plVar16 != (long *)0xff) {
                fVar51 = 0.0;
                fVar53 = 0.0;
                fVar55 = 0.0;
                fVar50 = 0.0;
                plVar28 = plVar16;
                do {
                  bVar4 = pbVar15[((ulong)plVar28 & 0xffffffff) + ((ulong)plVar28 & 0xffffffff) * 4]
                  ;
                  uVar39 = (ulong)bVar4;
                  bVar5 = (pbVar15 +
                          ((ulong)plVar28 & 0xffffffff) + ((ulong)plVar28 & 0xffffffff) * 4)[1];
                  if (bVar4 < bVar5) {
                    uVar38 = uVar39;
                    if ((bVar5 - bVar4 & 1) != 0) {
                      fVar50 = fVar50 + param_1[uVar39 * 0x10 + 4];
                      fVar51 = fVar51 + param_1[uVar39 * 0x10 + 3];
                      fVar53 = fVar53 + param_1[uVar39 * 0x10 + 6];
                      fVar55 = fVar55 + param_1[uVar39 * 0x10 + 5];
                      uVar38 = uVar39 + 1;
                    }
                    if ((ulong)bVar5 - 1 != uVar39) {
                      pfVar33 = pfVar24 + uVar38 * 0x10;
                      do {
                        pfVar29 = pfVar33 + -0x10;
                        pfVar48 = pfVar33 + -0xe;
                        pfVar8 = pfVar33 + -0xd;
                        uVar38 = uVar38 + 2;
                        fVar58 = *pfVar33;
                        fVar50 = fVar50 + pfVar33[-0xf] + pfVar33[1];
                        pfVar1 = pfVar33 + 2;
                        pfVar9 = pfVar33 + 3;
                        pfVar33 = pfVar33 + 0x20;
                        fVar51 = fVar51 + *pfVar29 + fVar58;
                        fVar53 = fVar53 + *pfVar8 + *pfVar9;
                        fVar55 = fVar55 + *pfVar48 + *pfVar1;
                      } while (uVar38 < bVar5);
                    }
                  }
                  plVar28 = (long *)(ulong)pbVar15[((ulong)plVar28 & 0xffffffff) * 5 + 2];
                } while (plVar28 != (long *)0xff);
              }
              fVar58 = 1.0 / (float)bVar30;
              if (pfVar49 != (float *)0x0) {
                pfVar19 = pfVar49 + 1;
                *pfVar49 = param_1[(ulong)pbVar15[0x4fb] * 0x10 + 0xd];
              }
              *(byte *)((long)puVar42 + 0x29) = bVar30 + 1;
              *pfVar46 = fVar58 * fVar50;
              pfVar46[1] = fVar58 * fVar55;
              pfVar46[2] = fVar58 * fVar53;
              pfVar46[3] = fVar58 * fVar51;
              pfVar46[8] = *param_1;
              pfVar46[9] = param_1[1];
              fVar50 = param_1[2];
              pfVar46[4] = 0.0;
              pfVar46[5] = 0.0;
              *(undefined1 **)(pfVar46 + 6) = &DAT_7f7fffff00000000;
              pfVar46[0xe] = fVar57;
              pfVar46[0xf] = fVar54;
              pfVar46[0xb] = fVar56;
              pfVar46[0xc] = (float)uVar17;
              pfVar46[10] = fVar50;
              *(ushort *)(pfVar46 + 0xd) = uVar6;
              *(ushort *)((long)pfVar46 + 0x36) = uVar25;
              Hint_Prefetch(pfVar46 + 0x30,0,0,0);
              pfVar46 = pfVar46 + 0x10;
              cVar47 = cVar47 + '\x01';
            }
            if (plVar16 != (long *)0xff) {
              plVar28 = plVar16;
              do {
                bVar30 = pbVar15[((ulong)plVar28 & 0xffffffff) + ((ulong)plVar28 & 0xffffffff) * 4];
                uVar39 = (ulong)bVar30;
                bVar4 = (pbVar15 + ((ulong)plVar28 & 0xffffffff) + ((ulong)plVar28 & 0xffffffff) * 4
                        )[1];
                if (bVar30 < bVar4) {
                  pfVar49 = param_1 + uVar39 * 0x10;
                  pfVar33 = pfVar46;
                  pfVar29 = pfVar19;
                  do {
                    uVar52 = *(undefined8 *)(pfVar49 + 6);
                    *(undefined8 *)pfVar33 = *(undefined8 *)(pfVar49 + 4);
                    pfVar33[2] = (float)uVar52;
                    pfVar33[3] = pfVar49[3];
                    pfVar33[8] = *pfVar49;
                    pfVar33[9] = pfVar49[1];
                    fVar50 = pfVar49[2];
                    pfVar33[0xe] = fVar57;
                    pfVar33[4] = 0.0;
                    pfVar33[5] = 0.0;
                    *(undefined1 **)(pfVar33 + 6) = &DAT_7f7fffff00000000;
                    pfVar33[0xf] = fVar54;
                    pfVar33[0xb] = fVar56;
                    pfVar33[10] = fVar50;
                    pfVar33[0xc] = (float)uVar17;
                    *(ushort *)(pfVar33 + 0xd) = uVar6;
                    *(ushort *)((long)pfVar33 + 0x36) = uVar25;
                    pfVar19 = pfVar29;
                    if (pfVar29 != (float *)0x0) {
                      pfVar19 = pfVar29 + 1;
                      *pfVar29 = pfVar49[0xd];
                    }
                    pfVar46 = pfVar33 + 0x10;
                    uVar39 = uVar39 + 1;
                    cVar47 = cVar47 + '\x01';
                    Hint_Prefetch(pfVar33 + 0x30,0,0,0);
                    pfVar49 = pfVar49 + 0x10;
                    pfVar33 = pfVar46;
                    pfVar29 = pfVar19;
                  } while (uVar39 < bVar4);
                }
                plVar28 = (long *)(ulong)pbVar15[((ulong)plVar28 & 0xffffffff) * 5 + 2];
              } while (plVar28 != (long *)0xff);
            }
          }
          plVar16 = (long *)((long)plVar16 + 1);
          puVar42 = puVar43;
          pfVar49 = pfVar19;
        } while (plVar16 < plVar18);
      }
      *local_100 = (char)local_10c;
      uVar22 = local_bc;
      goto joined_r0x0012986c;
    }
  }
  local_bc = uVar22;
  *param_4 = 0;
  local_e8[0] = 0.0;
  local_e8[1] = 0.0;
  *local_e0 = 0;
  local_f0[0] = 0.0;
  local_f0[1] = 0.0;
  uVar22 = 0;
  *local_d8 = 0;
  *(undefined1 *)plVar16 = 0;
joined_r0x0012986c:
  if (local_90 != false) {
                    /* try { // try from 0012996c to 00129973 has its CatchHandler @ 00129a28 */
    FUN_00401ce0(&local_98,local_98);
  }
  return uVar22;
LAB_00128ce4:
  do {
    uVar38 = uVar32 & 0xffffffff;
    uVar39 = uVar32 & 0xffffffff;
    uVar32 = (ulong)pbVar15[uVar38 + uVar39 * 4 + 2];
  } while (uVar32 != 0xff);
  iVar31 = 0;
  pbVar15[uVar38 + uVar39 * 4 + 2] = (byte)uVar40;
LAB_00128e1c:
  plVar35 = (long *)(ulong)*puVar36;
  pbVar37 = (byte *)(ulong)puVar36[1];
  uVar40 = uVar40 + 1;
  iVar21 = iVar21 + iVar31;
  uVar26 = uVar26 + (1 < uVar7 & param_18);
  fVar56 = fVar51;
  fVar57 = fVar50;
  fVar54 = fVar53;
  iVar34 = (int)uVar27;
LAB_00128e4c:
  bVar30 = (byte)iVar31;
  uVar27 = uVar27 + 1;
  if (uVar27 == param_2) goto LAB_00128e74;
  goto LAB_00128d08;
}


