/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002b0700; name: FUN_002b0700
 */


undefined8
FUN_002b0700(float param_1,long param_2,undefined8 param_3,float *param_4,uint param_5,
            undefined4 param_6,long param_7)

{
  undefined *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  uint uVar11;
  undefined **ppuVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  byte bVar22;
  byte bVar28;
  byte bVar29;
  float fVar23;
  int iVar24;
  undefined4 uVar25;
  byte bVar30;
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  float fVar31;
  float fVar33;
  undefined8 uVar32;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined *local_1698;
  long *plStack_1690;
  float local_1198;
  float local_1194;
  float local_1190;
  float local_118c;
  float local_1188;
  float local_1184;
  float local_1180;
  float local_117c;
  float local_1178;
  float local_1174;
  float local_1170;
  float local_116c;
  float local_1168;
  float local_1164;
  float local_1160;
  float local_115c;
  float local_1158;
  float local_1154;
  float local_1150;
  float local_114c;
  float local_1148;
  undefined8 local_1140;
  undefined4 local_1138;
  undefined8 local_1134;
  undefined4 local_112c;
  float local_1128;
  undefined8 local_1120;
  uint local_1114;
  undefined8 local_1110;
  ulong uStack_1108;
  undefined8 local_1100;
  undefined8 uStack_10f8;
  undefined8 local_10f0;
  undefined8 uStack_10e8;
  float local_10e0;
  float local_10dc;
  float local_10d8;
  undefined8 local_10d0;
  long local_10c8;
  long local_10c0;
  undefined8 local_10b8;
  undefined8 local_10b0;
  undefined4 local_10a4;
  undefined1 auStack_10a0 [4096];
  
  local_10a4 = 0;
  local_10c0 = 0;
  local_10b8 = 0;
  local_10b0 = CONCAT44(param_1 * DAT_01d4be58,param_1 * DAT_01d4be58);
                    /* try { // try from 002b0770 to 002b077b has its CatchHandler @ 002b0ea4 */
  FUN_001ed4d0(&local_10c0,0x80);
  local_10d0 = *(undefined8 *)(param_2 + 8);
  local_10c8 = param_2;
                    /* try { // try from 002b078c to 002b079b has its CatchHandler @ 002b0eb4 */
  fabsf(*(float *)(param_2 + 0x14));
  fabsf(*(float *)(local_10c8 + 0x18));
  local_10dc = 1.0 / *(float *)(local_10c8 + 0x10);
  local_10e0 = 1.0 / *(float *)(local_10c8 + 0x14);
  local_10d8 = 1.0 / *(float *)(local_10c8 + 0x18);
  local_1114 = 0xfffffff;
  fVar35 = 0.0;
  fVar36 = 0.0;
  fVar37 = 0.0;
  fVar38 = 0.0;
  bVar10 = false;
  uVar11 = 0;
  puVar1 = PTR_DAT_02711ff0 + 0x10;
  uStack_10f8 = 0;
  local_1100 = 0;
  uStack_10e8 = 0;
  local_10f0 = 0;
  uStack_1108 = 0;
  local_1110 = 0;
  do {
    local_1138 = (undefined4)*(undefined8 *)(param_4 + 0xe);
    local_1140 = *(undefined8 *)(param_4 + 0xc);
    local_112c = (undefined4)*(undefined8 *)(param_4 + 0x12);
    local_1134 = *(undefined8 *)(param_4 + 0x10);
                    /* try { // try from 002b0830 to 002b083b has its CatchHandler @ 002b0ee4 */
    local_1128 = param_1;
    FUN_002b5a20(&local_1140,&local_1180);
    fVar33 = local_1164;
    fVar31 = local_1168;
    fVar18 = local_116c;
    fVar21 = local_1174;
    fVar20 = local_1178;
    fVar19 = local_117c;
    if (0.0 <= local_1160) {
      if (local_1180 < -local_1170) {
        fVar15 = local_1160 + ((1.0 - local_1180) - local_1170);
        fVar14 = sqrtf(fVar15);
        fVar14 = 0.5 / fVar14;
        fVar40 = (fVar31 + fVar20) * fVar14;
        fVar23 = fVar19 - fVar21;
        fVar43 = (fVar18 + fVar33) * fVar14;
        fVar31 = fVar15 * fVar14;
        goto LAB_002b0960;
      }
      fVar23 = local_1160 + local_1180 + 1.0 + local_1170;
      fVar14 = sqrtf(fVar23);
      fVar14 = 0.5 / fVar14;
      fVar40 = (fVar18 - fVar33) * fVar14;
      fVar43 = (fVar31 - fVar20) * fVar14;
      fVar31 = (fVar19 - fVar21) * fVar14;
      fVar23 = fVar23 * fVar14;
    }
    else {
      if (local_1180 <= local_1170) {
        fVar43 = ((1.0 - local_1180) + local_1170) - local_1160;
        fVar14 = sqrtf(fVar43);
        fVar14 = 0.5 / fVar14;
        fVar40 = (fVar19 + fVar21) * fVar14;
        fVar23 = fVar31 - fVar20;
        fVar31 = fVar18 + fVar33;
        fVar43 = fVar43 * fVar14;
      }
      else {
        fVar40 = ((local_1180 + 1.0) - local_1170) - local_1160;
                    /* try { // try from 002b0880 to 002b099b has its CatchHandler @ 002b0ed4 */
        fVar14 = sqrtf(fVar40);
        fVar14 = 0.5 / fVar14;
        fVar23 = fVar18 - fVar33;
        fVar31 = fVar31 + fVar20;
        fVar40 = fVar40 * fVar14;
        fVar43 = (fVar19 + fVar21) * fVar14;
      }
      fVar31 = fVar31 * fVar14;
LAB_002b0960:
      fVar23 = fVar23 * fVar14;
    }
    fVar14 = local_1148;
    fVar33 = local_114c;
    fVar18 = local_1150;
    fVar21 = local_1154;
    fVar20 = local_1158;
    fVar19 = local_115c;
    fVar45 = fVar43 + fVar43;
    fVar44 = fVar31 * (fVar31 + fVar31);
                    /* try { // try from 002b0a1c to 002b0aff has its CatchHandler @ 002b0f04 */
    fVar15 = fabsf(((1.0 - fVar43 * fVar45) - fVar44) * local_1150);
    fVar39 = fVar40 + fVar40;
    fVar42 = (fVar31 + fVar31) * fVar23;
    fVar16 = fabsf((fVar39 * fVar43 - fVar42) * fVar33);
    fVar17 = fabsf((fVar39 * fVar31 + fVar45 * fVar23) * fVar14);
    fVar42 = fabsf((fVar39 * fVar43 + fVar42) * fVar18);
    fVar41 = 1.0 - fVar40 * fVar39;
    fVar40 = fabsf((fVar41 - fVar44) * fVar33);
    fVar44 = fabsf((fVar45 * fVar31 - fVar39 * fVar23) * fVar14);
    fVar18 = fabsf((fVar39 * fVar31 - fVar45 * fVar23) * fVar18);
    fVar31 = fabsf((fVar45 * fVar31 + fVar39 * fVar23) * fVar33);
    local_1184 = fabsf((fVar41 - fVar43 * fVar45) * fVar14);
    local_1184 = fVar18 + fVar31 + local_1184;
    fVar17 = fVar15 + fVar16 + fVar17;
    fVar44 = fVar42 + fVar40 + fVar44;
    local_1198 = fVar19 - fVar17;
    local_1194 = fVar20 - fVar44;
    local_1190 = fVar21 - local_1184;
    local_118c = fVar19 + fVar17;
    local_1188 = fVar20 + fVar44;
    local_1184 = fVar21 + local_1184;
                    /* try { // try from 002b0b5c to 002b0b73 has its CatchHandler @ 002b0ec4 */
    local_1698 = puVar1;
    plStack_1690 = &local_10c0;
    FUN_00251d90(&local_10e0,param_3,&local_1198,param_6,&local_1698);
    iVar24 = (int)local_10b8;
    if ((int)local_10b8 == 0) goto LAB_002b0d24;
    uVar2 = (int)local_10b8 + 0x1fU >> 5;
    local_1120 = 0x7f7fffff7f7fffff;
    if (uVar2 == 0) goto LAB_002b0d24;
    lVar13 = 0;
    uVar9 = 0;
    uVar7 = 0;
    do {
      uVar5 = iVar24 + (int)uVar9 * -0x20;
      if (0x1f < uVar5) {
        uVar5 = 0x20;
      }
      if (uVar5 != 0) {
        uVar8 = 0;
        ppuVar12 = &local_1698;
        do {
                    /* try { // try from 002b0bec to 002b0c0b has its CatchHandler @ 002b0f3c */
          FUN_002523d0(&local_10e0,param_3,ppuVar12,0,0,
                       *(undefined4 *)(local_10c0 + lVar13 + uVar8 * 4),1,1);
          uVar8 = uVar8 + 1;
          *(undefined1 *)((long)ppuVar12 + 0x24) = 0x38;
          ppuVar12 = ppuVar12 + 5;
        } while (uVar8 < uVar5);
      }
                    /* try { // try from 002b0c24 to 002b0c6f has its CatchHandler @ 002b0ef4 */
      uVar5 = FUN_002b0330(param_4,&local_10b0,param_5 & 1,&local_1698,uVar5,(int)uVar9 * 0x20,
                           auStack_10a0,&local_10a4,&local_1110,&local_10f0,&local_1100,&local_1114,
                           &local_1120);
      uVar9 = uVar9 + 1;
      uVar7 = uVar7 | uVar5;
      lVar13 = lVar13 + 0x80;
    } while (uVar9 < uVar2);
    if ((uVar7 & 1) == 0) goto LAB_002b0d24;
    local_1114 = *(uint *)(local_10c0 + (ulong)local_1114 * 4);
    fVar19 = (float)local_1120 - (float)*(undefined8 *)(param_4 + 0x14);
    if (0.0 < fVar19) {
      if (uVar11 == 0) {
        *(undefined4 *)(param_7 + 0x30) = 0;
        *(undefined8 *)(param_7 + 0x18) = local_10f0;
        *(int *)(param_7 + 0x20) = (int)uStack_10e8;
        *(undefined8 *)(param_7 + 0x24) = local_1110;
        *(float *)(param_7 + 0x2c) = (float)uStack_1108;
        goto LAB_002b0dec;
      }
      bVar10 = true;
      goto LAB_002b0d24;
    }
    fVar31 = *param_4 - (float)local_1110 * fVar19;
    fVar33 = param_4[1] - local_1110._4_4_ * fVar19;
    fVar40 = param_4[2] - (float)uStack_1108 * fVar19;
    fVar23 = param_4[3] - 0.0;
    fVar35 = fVar35 - (float)local_1110 * fVar19;
    fVar36 = fVar36 - local_1110._4_4_ * fVar19;
    fVar37 = fVar37 - (float)uStack_1108 * fVar19;
    fVar38 = fVar38 - 0.0;
    bVar10 = true;
    fVar19 = fVar31 - *param_4;
    fVar20 = fVar33 - param_4[1];
    fVar21 = fVar40 - param_4[2];
    fVar18 = fVar23 - param_4[3];
    *(ulong *)(param_4 + 2) = CONCAT44(fVar23,fVar40);
    *(ulong *)param_4 = CONCAT44(fVar33,fVar31);
    auVar27._0_8_ = CONCAT44(fVar20 + param_4[0x11],fVar19 + param_4[0x10]);
    auVar27._8_4_ = fVar21 + param_4[0x12];
    auVar27._12_4_ = fVar18 + param_4[0x13];
    *(ulong *)(param_4 + 0xe) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0xe) >> 0x20) + fVar18,
                  (float)*(undefined8 *)(param_4 + 0xe) + fVar21);
    *(ulong *)(param_4 + 0xc) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0xc) >> 0x20) + fVar20,
                  (float)*(undefined8 *)(param_4 + 0xc) + fVar19);
    *(long *)(param_4 + 0x12) = auVar27._8_8_;
    *(undefined8 *)(param_4 + 0x10) = auVar27._0_8_;
    uVar11 = uVar11 + 1;
    if (3 < uVar11) {
LAB_002b0d24:
      fVar20 = fVar35 * fVar35;
      fVar21 = fVar36 * fVar36;
      auVar3._4_4_ = fVar21;
      auVar3._0_4_ = fVar20;
      auVar3._8_4_ = fVar37 * fVar37;
      auVar3._12_4_ = fVar38 * fVar38;
      auVar4._4_4_ = fVar21;
      auVar4._0_4_ = fVar20;
      auVar4._8_4_ = fVar37 * fVar37;
      auVar4._12_4_ = fVar38 * fVar38;
      auVar27 = NEON_ext(auVar3,auVar4,8,1);
      fVar19 = auVar27._0_4_ + auVar27._4_4_;
      fVar38 = fVar20 + fVar21 + fVar19;
      fVar19 = fVar20 + fVar21 + fVar19;
      uVar8 = CONCAT44(fVar19,fVar38);
      uVar32 = NEON_frsqrte(uVar8,4);
      fVar20 = (float)uVar32;
      fVar21 = (float)((ulong)uVar32 >> 0x20);
      uVar32 = NEON_frsqrts(CONCAT44(fVar21 * fVar21,fVar20 * fVar20),uVar8,4);
      fVar20 = fVar20 * (float)uVar32;
      fVar21 = fVar21 * (float)((ulong)uVar32 >> 0x20);
      uVar32 = NEON_frsqrts(CONCAT44(fVar21 * fVar21,fVar20 * fVar20),uVar8,4);
      fVar20 = fVar20 * (float)uVar32;
      fVar21 = fVar21 * (float)((ulong)uVar32 >> 0x20);
      uVar32 = NEON_frsqrts(CONCAT44(fVar21 * fVar21,fVar20 * fVar20),uVar8,4);
      fVar20 = fVar20 * (float)uVar32;
      fVar21 = fVar21 * (float)((ulong)uVar32 >> 0x20);
      uVar32 = NEON_frsqrts(CONCAT44(fVar21 * fVar21,fVar20 * fVar20),uVar8,4);
      uVar9 = CONCAT44(fVar19 * fVar21 * (float)((ulong)uVar32 >> 0x20),
                       fVar38 * fVar20 * (float)uVar32);
      uVar9 = uVar9 ^ (uVar9 ^ uVar8) & CONCAT44(-(uint)(fVar38 == 0.0),-(uint)(fVar38 == 0.0));
      uVar32 = NEON_frecpe(uVar9,4);
      uVar34 = NEON_frecps(uVar9,uVar32,4);
      fVar38 = (float)uVar32 * (float)uVar34;
      fVar19 = (float)((ulong)uVar32 >> 0x20) * (float)((ulong)uVar34 >> 0x20);
      uVar32 = NEON_frecps(uVar9,CONCAT44(fVar19,fVar38),4);
      fVar38 = fVar38 * (float)uVar32;
      fVar19 = fVar19 * (float)((ulong)uVar32 >> 0x20);
      uVar32 = NEON_frecps(uVar9,CONCAT44(fVar19,fVar38),4);
      fVar38 = fVar38 * (float)uVar32;
      fVar19 = fVar19 * (float)((ulong)uVar32 >> 0x20);
      uVar32 = NEON_frecps(uVar9,CONCAT44(fVar19,fVar38),4);
      fVar38 = fVar38 * (float)uVar32;
      uVar32 = NEON_frecps(uVar9,CONCAT44(fVar19 * (float)((ulong)uVar32 >> 0x20),fVar38),4);
      fVar38 = fVar38 * (float)uVar32;
      fVar35 = fVar35 * fVar38;
      fVar36 = fVar36 * fVar38;
      fVar37 = fVar37 * fVar38;
      iVar24 = -(uint)(0.0 < (float)uVar9);
      bVar22 = (byte)iVar24;
      bVar28 = (byte)((uint)iVar24 >> 8);
      bVar29 = (byte)((uint)iVar24 >> 0x10);
      bVar30 = (byte)((uint)iVar24 >> 0x18);
      uVar25 = CONCAT13(bVar30 & (byte)((uint)fVar35 >> 0x18),
                        CONCAT12(bVar29 & (byte)((uint)fVar35 >> 0x10),
                                 CONCAT11(bVar28 & (byte)((uint)fVar35 >> 8),
                                          bVar22 & SUB41(fVar35,0))));
      auVar26._0_8_ =
           CONCAT17(bVar30 & (byte)((uint)fVar36 >> 0x18),
                    CONCAT16(bVar29 & (byte)((uint)fVar36 >> 0x10),
                             CONCAT15(bVar28 & (byte)((uint)fVar36 >> 8),
                                      CONCAT14(bVar22 & SUB41(fVar36,0),uVar25))));
      auVar26[8] = bVar22 & SUB41(fVar37,0);
      auVar26[9] = bVar28 & (byte)((uint)fVar37 >> 8);
      auVar26[10] = bVar29 & (byte)((uint)fVar37 >> 0x10);
      auVar26[0xb] = bVar30 & (byte)((uint)fVar37 >> 0x18);
      uStack_1108 = (ulong)auVar26._8_4_;
      local_1110 = auVar26._0_8_;
      if (bVar10) {
        *(float *)(param_7 + 0x30) = -(float)uVar9;
        *(undefined8 *)(param_7 + 0x18) = local_10f0;
        *(ulong *)(param_7 + 0x20) = CONCAT44(uVar25,(int)uStack_10e8);
        *(long *)(param_7 + 0x28) = auVar26._4_8_;
LAB_002b0dec:
        uVar32 = 1;
        *(uint *)(param_7 + 0x10) = local_1114;
        lVar13 = local_10c0;
      }
      else {
        uVar32 = 0;
        lVar13 = local_10c0;
      }
      if (((-1 < local_10b8) && ((local_10b8._4_4_ & 0x7fffffff) != 0)) && (lVar13 != 0)) {
        local_10c0 = lVar13;
                    /* try { // try from 002b0e1c to 002b0e2f has its CatchHandler @ 002b0ea0 */
        plVar6 = (long *)FUN_00400d30();
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar13);
      }
      return uVar32;
    }
  } while( true );
}


