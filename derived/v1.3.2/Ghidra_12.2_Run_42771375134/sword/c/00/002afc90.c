/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002afc90; name: FUN_002afc90
 */


bool FUN_002afc90(float param_1,long param_2,undefined8 param_3,float *param_4,uint param_5,
                 long param_6)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  undefined1 uVar11;
  ulong uVar12;
  uint uVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  ushort *puVar18;
  long lVar19;
  float *pfVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  bool bVar24;
  uint uVar25;
  long lVar26;
  float fVar27;
  byte bVar28;
  int iVar29;
  undefined4 uVar30;
  byte bVar35;
  undefined1 auVar31 [12];
  byte bVar33;
  byte bVar34;
  undefined1 auVar32 [16];
  float fVar36;
  float fVar38;
  undefined8 uVar37;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
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
  undefined1 local_1690 [20];
  float local_167c [315];
  undefined1 auStack_1190 [64];
  undefined8 local_1150;
  undefined4 local_1148;
  undefined8 local_1144;
  undefined4 local_113c;
  float local_1138;
  undefined8 local_1130;
  uint local_1124;
  undefined8 local_1120;
  ulong uStack_1118;
  undefined8 local_1110;
  undefined8 uStack_1108;
  undefined8 local_1100;
  undefined8 uStack_10f8;
  long local_10f0;
  undefined8 local_10e8;
  float local_10e0;
  float local_10dc;
  float local_10d8;
  float local_10d4;
  float local_10d0;
  float local_10cc;
  float local_10c8;
  float local_10c4;
  float local_10c0;
  float local_10bc;
  float local_10b8;
  float local_10b4;
  undefined8 local_10b0;
  undefined4 local_10a4;
  undefined1 auStack_10a0 [4104];
  undefined *local_98;
  undefined4 local_90;
  long *local_88;
  
  pfVar20 = (float *)(param_2 + 4);
  fVar46 = *pfVar20;
  lVar26 = *(long *)(*(long *)(param_2 + 0x28) + 0x50);
  fVar48 = *(float *)(param_2 + 8);
  fVar47 = *(float *)(param_2 + 0xc);
  local_10a4 = 0;
  local_10b0 = CONCAT44(param_1 * DAT_01d4c70c,param_1 * DAT_01d4c70c);
  FUN_001ae520(&local_10e0,param_3,pfVar20);
  local_10f0 = 0;
  local_10e8 = 0;
                    /* try { // try from 002afd18 to 002afd27 has its CatchHandler @ 002b02ac */
  FUN_001ed4d0(&local_10f0,0x80);
  fVar42 = 0.0;
  fVar43 = 0.0;
  fVar44 = 0.0;
  fVar45 = 0.0;
  uStack_10f8 = 0;
  local_1100 = 0;
  uStack_1108 = 0;
  local_1110 = 0;
  uStack_1118 = 0;
  local_1120 = 0;
  puVar1 = PTR_DAT_02711fe8 + 0x10;
  bVar24 = false;
  uVar22 = 0;
  local_1124 = 0xfffffff;
  do {
    local_10e8 = local_10e8 & 0xffffffff00000000;
    local_1148 = (undefined4)*(undefined8 *)(param_4 + 0xe);
    local_1150 = *(undefined8 *)(param_4 + 0xc);
    local_113c = (undefined4)*(undefined8 *)(param_4 + 0x12);
    local_1144 = *(undefined8 *)(param_4 + 0x10);
                    /* try { // try from 002afdb8 to 002afdc3 has its CatchHandler @ 002b02dc */
    local_1138 = param_1;
    FUN_002b5a20(&local_1150,auStack_1190);
    lVar23 = *(long *)(param_2 + 0x28);
                    /* try { // try from 002afdd0 to 002afde3 has its CatchHandler @ 002b02cc */
    FUN_002321a0(local_1690,auStack_1190,param_3,pfVar20);
    local_90 = 2;
                    /* try { // try from 002afe0c to 002afe23 has its CatchHandler @ 002b02bc */
    local_98 = puVar1;
    local_88 = &local_10f0;
    (*(code *)(&PTR_LAB_025e55c0)[*(ushort *)(lVar23 + 8) - 3])(lVar23,local_1690,&local_98,1,1);
    lVar23 = local_10f0;
    iVar29 = (int)local_10e8;
    if ((int)local_10e8 == 0) break;
    uVar3 = (int)local_10e8 + 0x1fU >> 5;
    local_1130 = 0x7f7fffff7f7fffff;
    if (uVar3 == 0) break;
    uVar21 = 0;
    uVar25 = 0;
    lVar19 = local_10f0;
    do {
      uVar6 = iVar29 + (int)uVar21 * -0x20;
      if (0x1f < uVar6) {
        uVar6 = 0x20;
      }
      if (uVar6 != 0) {
        lVar9 = *(long *)(param_2 + 0x28);
        uVar8 = 0;
        bVar28 = *(byte *)(lVar9 + 0x5c);
        lVar2 = *(long *)(lVar9 + 0x28);
        lVar9 = *(long *)(lVar9 + 0x30);
        pfVar10 = local_167c;
        do {
          uVar12 = (ulong)*(uint *)(lVar19 + uVar8 * 4);
          if ((bVar28 >> 1 & 1) == 0) {
            puVar17 = (uint *)(lVar9 + uVar12 * 0xc);
            uVar13 = *puVar17;
            uVar15 = puVar17[1];
            uVar16 = puVar17[2];
          }
          else {
            puVar18 = (ushort *)(lVar9 + uVar12 * 6);
            uVar13 = (uint)*puVar18;
            uVar15 = (uint)puVar18[1];
            uVar16 = (uint)puVar18[2];
          }
          pfVar14 = (float *)(lVar2 + (ulong)uVar13 * 0xc);
          fVar49 = *pfVar14;
          fVar50 = pfVar14[1];
          fVar51 = pfVar14[2];
          uVar13 = uVar16;
          if (0.0 <= fVar46 * fVar48 * fVar47) {
            uVar13 = uVar15;
            uVar15 = uVar16;
          }
          pfVar14 = (float *)(lVar2 + (ulong)uVar13 * 0xc);
          pfVar10[-5] = fVar49 * local_10e0 + fVar50 * local_10d4 + fVar51 * local_10c8 + local_10bc
          ;
          pfVar10[-4] = fVar49 * local_10dc + fVar50 * local_10d0 + fVar51 * local_10c4 + local_10b8
          ;
          pfVar10[-3] = fVar49 * local_10d8 + fVar50 * local_10cc + fVar51 * local_10c0 + local_10b4
          ;
          fVar49 = *pfVar14;
          fVar50 = pfVar14[1];
          fVar51 = pfVar14[2];
          pfVar14 = (float *)(lVar2 + (ulong)uVar15 * 0xc);
          pfVar10[-2] = local_10bc + local_10e0 * fVar49 + local_10d4 * fVar50 + local_10c8 * fVar51
          ;
          pfVar10[-1] = local_10b8 + local_10dc * fVar49 + local_10d0 * fVar50 + local_10c4 * fVar51
          ;
          *pfVar10 = local_10b4 + local_10d8 * fVar49 + local_10cc * fVar50 + local_10c0 * fVar51;
          fVar49 = *pfVar14;
          fVar50 = pfVar14[1];
          fVar51 = pfVar14[2];
          pfVar10[1] = local_10bc + local_10e0 * fVar49 + local_10d4 * fVar50 + local_10c8 * fVar51;
          pfVar10[2] = local_10b8 + local_10dc * fVar49 + local_10d0 * fVar50 + local_10c4 * fVar51;
          pfVar10[3] = local_10b4 + local_10d8 * fVar49 + local_10cc * fVar50 + local_10c0 * fVar51;
          if (lVar26 == 0) {
            uVar11 = 0x38;
          }
          else {
            uVar11 = *(undefined1 *)(lVar26 + uVar12);
          }
          uVar8 = uVar8 + 1;
          *(undefined1 *)(pfVar10 + 4) = uVar11;
          pfVar10 = pfVar10 + 10;
        } while (uVar8 < uVar6);
      }
                    /* try { // try from 002b0024 to 002b0067 has its CatchHandler @ 002b02ec */
      uVar6 = FUN_002b0330(param_4,&local_10b0,param_5 & 1,local_1690,uVar6,(int)uVar21 * 0x20,
                           auStack_10a0,&local_10a4,&local_1120,&local_1100,&local_1110,&local_1124,
                           &local_1130);
      uVar21 = uVar21 + 1;
      uVar25 = uVar25 | uVar6;
      lVar19 = lVar19 + 0x80;
    } while (uVar21 < uVar3);
    if ((uVar25 & 1) == 0) break;
    local_1124 = *(uint *)(lVar23 + (ulong)local_1124 * 4);
    fVar49 = (float)local_1130 - (float)*(undefined8 *)(param_4 + 0x14);
    if (0.0 < fVar49) {
      if (uVar22 == 0) {
        *(undefined4 *)(param_6 + 0x30) = 0;
        *(undefined8 *)(param_6 + 0x18) = local_1100;
        *(int *)(param_6 + 0x20) = (int)uStack_10f8;
        *(undefined8 *)(param_6 + 0x24) = local_1120;
        *(float *)(param_6 + 0x2c) = (float)uStack_1118;
        *(uint *)(param_6 + 0x10) = local_1124;
        bVar24 = true;
        lVar26 = local_10f0;
        goto joined_r0x002b02a0;
      }
      bVar24 = true;
      break;
    }
    fVar36 = *param_4 - (float)local_1120 * fVar49;
    fVar38 = param_4[1] - local_1120._4_4_ * fVar49;
    fVar39 = param_4[2] - (float)uStack_1118 * fVar49;
    fVar40 = param_4[3] - 0.0;
    fVar42 = fVar42 - (float)local_1120 * fVar49;
    fVar43 = fVar43 - local_1120._4_4_ * fVar49;
    fVar44 = fVar44 - (float)uStack_1118 * fVar49;
    fVar45 = fVar45 - 0.0;
    bVar24 = true;
    fVar49 = fVar36 - *param_4;
    fVar50 = fVar38 - param_4[1];
    fVar51 = fVar39 - param_4[2];
    fVar27 = fVar40 - param_4[3];
    *(ulong *)(param_4 + 2) = CONCAT44(fVar40,fVar39);
    *(ulong *)param_4 = CONCAT44(fVar38,fVar36);
    auVar32._0_8_ = CONCAT44(fVar50 + param_4[0x11],fVar49 + param_4[0x10]);
    auVar32._8_4_ = fVar51 + param_4[0x12];
    auVar32._12_4_ = fVar27 + param_4[0x13];
    *(ulong *)(param_4 + 0xe) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0xe) >> 0x20) + fVar27,
                  (float)*(undefined8 *)(param_4 + 0xe) + fVar51);
    *(ulong *)(param_4 + 0xc) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0xc) >> 0x20) + fVar50,
                  (float)*(undefined8 *)(param_4 + 0xc) + fVar49);
    *(long *)(param_4 + 0x12) = auVar32._8_8_;
    *(undefined8 *)(param_4 + 0x10) = auVar32._0_8_;
    uVar22 = uVar22 + 1;
  } while (uVar22 < 4);
  fVar47 = fVar42 * fVar42;
  fVar48 = fVar43 * fVar43;
  auVar4._4_4_ = fVar48;
  auVar4._0_4_ = fVar47;
  auVar4._8_4_ = fVar44 * fVar44;
  auVar4._12_4_ = fVar45 * fVar45;
  auVar5._4_4_ = fVar48;
  auVar5._0_4_ = fVar47;
  auVar5._8_4_ = fVar44 * fVar44;
  auVar5._12_4_ = fVar45 * fVar45;
  auVar32 = NEON_ext(auVar4,auVar5,8,1);
  fVar46 = auVar32._0_4_ + auVar32._4_4_;
  fVar45 = fVar47 + fVar48 + fVar46;
  fVar46 = fVar47 + fVar48 + fVar46;
  uVar8 = CONCAT44(fVar46,fVar45);
  uVar37 = NEON_frsqrte(uVar8,4);
  fVar47 = (float)uVar37;
  fVar48 = (float)((ulong)uVar37 >> 0x20);
  uVar37 = NEON_frsqrts(CONCAT44(fVar48 * fVar48,fVar47 * fVar47),uVar8,4);
  fVar47 = fVar47 * (float)uVar37;
  fVar48 = fVar48 * (float)((ulong)uVar37 >> 0x20);
  uVar37 = NEON_frsqrts(CONCAT44(fVar48 * fVar48,fVar47 * fVar47),uVar8,4);
  fVar47 = fVar47 * (float)uVar37;
  fVar48 = fVar48 * (float)((ulong)uVar37 >> 0x20);
  uVar37 = NEON_frsqrts(CONCAT44(fVar48 * fVar48,fVar47 * fVar47),uVar8,4);
  fVar47 = fVar47 * (float)uVar37;
  fVar48 = fVar48 * (float)((ulong)uVar37 >> 0x20);
  uVar37 = NEON_frsqrts(CONCAT44(fVar48 * fVar48,fVar47 * fVar47),uVar8,4);
  uVar21 = CONCAT44(fVar46 * fVar48 * (float)((ulong)uVar37 >> 0x20),fVar45 * fVar47 * (float)uVar37
                   );
  uVar21 = uVar21 ^ (uVar21 ^ uVar8) & CONCAT44(-(uint)(fVar45 == 0.0),-(uint)(fVar45 == 0.0));
  uVar37 = NEON_frecpe(uVar21,4);
  uVar41 = NEON_frecps(uVar21,uVar37,4);
  fVar45 = (float)uVar37 * (float)uVar41;
  fVar46 = (float)((ulong)uVar37 >> 0x20) * (float)((ulong)uVar41 >> 0x20);
  uVar37 = NEON_frecps(uVar21,CONCAT44(fVar46,fVar45),4);
  fVar45 = fVar45 * (float)uVar37;
  fVar46 = fVar46 * (float)((ulong)uVar37 >> 0x20);
  uVar37 = NEON_frecps(uVar21,CONCAT44(fVar46,fVar45),4);
  fVar45 = fVar45 * (float)uVar37;
  fVar46 = fVar46 * (float)((ulong)uVar37 >> 0x20);
  uVar37 = NEON_frecps(uVar21,CONCAT44(fVar46,fVar45),4);
  fVar45 = fVar45 * (float)uVar37;
  uVar37 = NEON_frecps(uVar21,CONCAT44(fVar46 * (float)((ulong)uVar37 >> 0x20),fVar45),4);
  fVar45 = fVar45 * (float)uVar37;
  fVar42 = fVar42 * fVar45;
  fVar43 = fVar43 * fVar45;
  fVar44 = fVar44 * fVar45;
  iVar29 = -(uint)(0.0 < (float)uVar21);
  bVar28 = (byte)iVar29;
  bVar33 = (byte)((uint)iVar29 >> 8);
  bVar34 = (byte)((uint)iVar29 >> 0x10);
  bVar35 = (byte)((uint)iVar29 >> 0x18);
  uVar30 = CONCAT13(bVar35 & (byte)((uint)fVar42 >> 0x18),
                    CONCAT12(bVar34 & (byte)((uint)fVar42 >> 0x10),
                             CONCAT11(bVar33 & (byte)((uint)fVar42 >> 8),bVar28 & SUB41(fVar42,0))))
  ;
  auVar31._0_8_ =
       CONCAT17(bVar35 & (byte)((uint)fVar43 >> 0x18),
                CONCAT16(bVar34 & (byte)((uint)fVar43 >> 0x10),
                         CONCAT15(bVar33 & (byte)((uint)fVar43 >> 8),
                                  CONCAT14(bVar28 & SUB41(fVar43,0),uVar30))));
  auVar31[8] = bVar28 & SUB41(fVar44,0);
  auVar31[9] = bVar33 & (byte)((uint)fVar44 >> 8);
  auVar31[10] = bVar34 & (byte)((uint)fVar44 >> 0x10);
  auVar31[0xb] = bVar35 & (byte)((uint)fVar44 >> 0x18);
  uStack_1118 = (ulong)auVar31._8_4_;
  local_1120 = auVar31._0_8_;
  lVar26 = local_10f0;
  if (bVar24) {
    *(float *)(param_6 + 0x30) = -(float)uVar21;
    *(undefined8 *)(param_6 + 0x18) = local_1100;
    *(ulong *)(param_6 + 0x20) = CONCAT44(uVar30,(int)uStack_10f8);
    *(long *)(param_6 + 0x28) = auVar31._4_8_;
    *(uint *)(param_6 + 0x10) = local_1124;
  }
joined_r0x002b02a0:
  if (((-1 < (long)local_10e8) && ((local_10e8._4_4_ & 0x7fffffff) != 0)) && (lVar26 != 0)) {
    local_10f0 = lVar26;
                    /* try { // try from 002b0218 to 002b022b has its CatchHandler @ 002b02a8 */
    plVar7 = (long *)FUN_00400d30();
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar26);
  }
  return bVar24;
}


