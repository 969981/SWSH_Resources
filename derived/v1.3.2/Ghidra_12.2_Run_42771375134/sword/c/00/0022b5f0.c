/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0022b5f0; name: FUN_0022b5f0
 */


undefined8
FUN_0022b5f0(float param_1,float param_2,float param_3,float param_4,long param_5,float *param_6,
            undefined8 param_7,float *param_8,undefined4 param_9)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
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
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_1f0 [8];
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  undefined1 auStack_1d0 [40];
  undefined1 auStack_1a8 [36];
  undefined2 local_184;
  undefined1 local_182;
  undefined8 local_180;
  undefined8 uStack_178;
  float local_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float local_160;
  float local_15c;
  float local_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float fStack_120;
  float local_11c;
  float fStack_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  puVar6 = auStack_1f0;
  pfVar8 = *(float **)(param_5 + 0x898);
  fVar18 = *param_8;
  fVar16 = param_8[1];
  fVar17 = param_8[2];
  if ((*(float *)(param_5 + 0x87c) -
      (*pfVar8 * param_1 + pfVar8[3] * param_2 + pfVar8[6] * param_3 + pfVar8[9])) * fVar18 +
      (*(float *)(param_5 + 0x880) -
      (pfVar8[1] * param_1 + pfVar8[4] * param_2 + pfVar8[7] * param_3 + pfVar8[10])) * fVar16 +
      (*(float *)(param_5 + 0x884) -
      (pfVar8[2] * param_1 + pfVar8[5] * param_2 + pfVar8[8] * param_3 + pfVar8[0xb])) * fVar17 <
      0.0) {
    fVar18 = -fVar18;
    fVar16 = -fVar16;
    fVar17 = -fVar17;
    *param_8 = fVar18;
    param_8[1] = fVar16;
    param_8[2] = fVar17;
  }
  pfVar8 = *(float **)(param_5 + 0x890);
  fVar18 = -fVar18;
  local_110 = (*pfVar8 * fVar18 - pfVar8[1] * fVar16) - pfVar8[2] * fVar17;
  local_10c = (pfVar8[3] * fVar18 - pfVar8[4] * fVar16) - pfVar8[5] * fVar17;
  local_108 = (pfVar8[6] * fVar18 - pfVar8[7] * fVar16) - pfVar8[8] * fVar17;
  uVar4 = (**(code **)(*(long *)(param_5 + 0x888) + 0x60))
                    (*(long *)(param_5 + 0x888),*(undefined8 *)(param_5 + 0x8a0),&local_110);
  lVar14 = *(long *)(*(long *)(param_5 + 0x888) + 0x18);
  uVar15 = uVar4 & 0xffffffff;
  pfVar8 = (float *)(lVar14 + (uVar4 & 0xffffffff) * 0x14);
  if (*(char *)(param_5 + 0x8b1) == '\0') {
    lVar12 = lVar14 + uVar15 * 0x14;
    lVar11 = *(long *)(param_5 + 0x8a0);
    fVar16 = *pfVar8;
    fVar17 = *(float *)(lVar12 + 4);
    fVar19 = *(float *)(lVar12 + 8);
    fVar21 = *(float *)(lVar12 + 0xc);
    fVar20 = *(float *)(lVar11 + 0x24) * fVar16 + *(float *)(lVar11 + 0x28) * fVar17 +
             *(float *)(lVar11 + 0x2c) * fVar19;
    fVar18 = fVar16 * *(float *)(lVar11 + 0x30) + fVar17 * *(float *)(lVar11 + 0x34) +
             fVar19 * *(float *)(lVar11 + 0x38);
    fVar17 = fVar16 * *(float *)(lVar11 + 0x3c) + fVar17 * *(float *)(lVar11 + 0x40) +
             fVar19 * *(float *)(lVar11 + 0x44);
    fVar16 = sqrtf(fVar20 * fVar20 + fVar18 * fVar18 + fVar17 * fVar17);
    fVar16 = 1.0 / fVar16;
    uVar4 = (ulong)(uint)(fVar20 * fVar16);
    fVar18 = fVar18 * fVar16;
    fVar17 = fVar17 * fVar16;
    local_b0 = CONCAT44(fVar18,fVar20 * fVar16);
    uStack_a8 = CONCAT44(fVar21 * fVar16,fVar17);
  }
  else {
    uStack_a8 = *(undefined8 *)(pfVar8 + 2);
    uVar4 = *(ulong *)pfVar8;
    fVar18 = (float)(uVar4 >> 0x20);
    fVar17 = (float)uStack_a8;
    local_b0 = uVar4;
  }
  pfVar8 = *(float **)(param_5 + 0x890);
  fVar16 = (float)uVar4;
  local_c0 = fVar16 * *pfVar8 + fVar18 * pfVar8[3] + fVar17 * pfVar8[6];
  local_bc = fVar16 * pfVar8[1] + fVar18 * pfVar8[4] + fVar17 * pfVar8[7];
  local_b8 = fVar16 * pfVar8[2] + fVar18 * pfVar8[5] + fVar17 * pfVar8[8];
  local_1d4 = fabsf(local_c0 * *param_8 + local_bc * param_8[1] + local_b8 * param_8[2]);
  pfVar8 = *(float **)(param_5 + 0x898);
  fVar16 = *param_6;
  fVar17 = param_6[1];
  fVar18 = param_6[2];
  local_d0 = fVar16 * *pfVar8 + fVar17 * pfVar8[3] + fVar18 * pfVar8[6];
  local_cc = fVar16 * pfVar8[1] + fVar17 * pfVar8[4] + fVar18 * pfVar8[7];
  local_c8 = fVar16 * pfVar8[2] + fVar17 * pfVar8[5] + fVar18 * pfVar8[8];
  local_1dc = fabsf(local_d0 * *param_8 + local_cc * param_8[1] + local_c8 * param_8[2]);
  local_1d8 = -param_4;
  if (DAT_01d4bc1c < param_4) {
    local_1d8 = 0.0;
  }
  local_1d8 = local_1d8 + *(float *)(param_5 + 0x8b4);
  local_e0 = local_1d8 * *param_8;
  local_dc = local_1d8 * param_8[1];
  local_d8 = local_1d8 * param_8[2];
  pfVar8 = *(float **)(param_5 + 0x890);
  local_110 = *pfVar8;
  local_10c = pfVar8[1];
  local_108 = pfVar8[2];
  local_104 = pfVar8[3];
  local_100 = pfVar8[4];
  local_fc = pfVar8[5];
  local_f8 = pfVar8[6];
  local_f4 = pfVar8[7];
  local_f0 = pfVar8[8];
  local_e8 = pfVar8[10] - local_dc;
  local_ec = pfVar8[9] - local_e0;
  pfVar9 = *(float **)(param_5 + 0x8b8);
  local_e4 = pfVar8[0xb] - local_d8;
  fVar16 = pfVar9[2];
  fVar17 = pfVar9[3];
  local_1e0 = fVar17 * fVar17 + -0.5;
  fVar20 = *pfVar9;
  fVar19 = pfVar9[1];
  pfVar8 = *(float **)(param_5 + 0x8c0);
  fVar34 = local_ec - pfVar8[4];
  fVar21 = *pfVar8;
  fVar22 = pfVar8[1];
  fVar35 = local_e8 - pfVar8[5];
  fVar23 = pfVar8[2];
  fVar26 = pfVar8[3];
  fVar38 = local_e4 - pfVar8[6];
  fVar28 = pfVar8[4] - local_ec;
  fVar30 = pfVar8[6] - local_e4;
  fVar38 = fVar38 + fVar38;
  fVar34 = fVar34 + fVar34;
  fVar35 = fVar35 + fVar35;
  fVar29 = pfVar8[5] - local_e8;
  fVar18 = fVar26 * fVar26 + -0.5;
  fVar28 = fVar28 + fVar28;
  fVar29 = fVar29 + fVar29;
  fVar30 = fVar30 + fVar30;
  local_1e8 = fVar34 * -fVar21 - fVar35 * fVar22;
  local_1e4 = ((fVar20 * fVar26 - fVar17 * fVar21) - fVar22 * fVar16) + fVar23 * fVar19;
  fVar39 = ((fVar19 * fVar26 - fVar17 * fVar22) - fVar23 * fVar20) + fVar21 * fVar16;
  fVar25 = ((fVar17 * fVar23 - fVar16 * fVar26) - fVar22 * fVar20) + fVar21 * fVar19;
  fVar41 = ((fVar16 * fVar26 - fVar17 * fVar23) - fVar21 * fVar19) + fVar22 * fVar20;
  fVar40 = ((fVar17 * fVar21 - fVar20 * fVar26) - fVar23 * fVar19) + fVar22 * fVar16;
  fVar32 = local_1e8 - fVar38 * fVar23;
  fVar27 = fVar39 + fVar39;
  fStack_118 = (fVar18 * fVar35 + fVar26 * (fVar38 * fVar21 - fVar34 * fVar23)) - fVar32 * fVar22;
  fVar24 = ((fVar17 * fVar22 - fVar19 * fVar26) - fVar21 * fVar16) + fVar23 * fVar20;
  fVar31 = (fVar28 * -fVar20 - fVar29 * fVar19) - fVar30 * fVar16;
  fVar33 = fVar17 * fVar26 + fVar21 * fVar20 + fVar22 * fVar19 + fVar23 * fVar16;
  fVar36 = local_1e4 + local_1e4;
  local_130 = fVar41 * (fVar41 + fVar41);
  fStack_134 = fVar33 * (fVar41 + fVar41);
  fStack_13c = fVar39 * fVar36 + fStack_134;
  fStack_134 = fVar39 * fVar36 - fStack_134;
  fStack_120 = 1.0 - local_1e4 * fVar36;
  fStack_144 = (local_1e0 * fVar30 + fVar17 * (fVar28 * fVar19 - fVar29 * fVar20)) - fVar31 * fVar16
  ;
  local_11c = (fVar18 * fVar34 + fVar26 * (fVar35 * fVar23 - fVar38 * fVar22)) - fVar32 * fVar21;
  local_148 = (local_1e0 * fVar29 + fVar17 * (fVar30 * fVar20 - fVar28 * fVar16)) - fVar31 * fVar19;
  local_140 = (1.0 - fVar39 * fVar27) - local_130;
  local_130 = fStack_120 - local_130;
  local_138 = fVar41 * fVar36 - fVar33 * fVar27;
  local_124 = fVar41 * fVar27 - fVar33 * fVar36;
  fVar42 = fVar24 + fVar24;
  local_12c = fVar41 * fVar27 + fVar33 * fVar36;
  fVar37 = fVar40 + fVar40;
  local_128 = fVar41 * fVar36 + fVar33 * fVar27;
  local_114 = (fVar18 * fVar38 + fVar26 * (fVar34 * fVar22 - fVar35 * fVar21)) - fVar32 * fVar23;
  local_160 = fVar25 * (fVar25 + fVar25);
  fStack_164 = fVar33 * (fVar25 + fVar25);
  fStack_14c = (local_1e0 * fVar28 + fVar17 * (fVar29 * fVar16 - fVar30 * fVar19)) - fVar31 * fVar20
  ;
  fStack_16c = fVar24 * fVar37 + fStack_164;
  fStack_120 = fStack_120 - fVar39 * fVar27;
  local_150 = 1.0 - fVar40 * fVar37;
  local_170 = (1.0 - fVar24 * fVar42) - local_160;
  fStack_164 = fVar24 * fVar37 - fStack_164;
  fStack_154 = fVar25 * fVar42 - fVar33 * fVar37;
  local_168 = fVar25 * fVar37 - fVar33 * fVar42;
  local_160 = local_150 - local_160;
  local_150 = local_150 - fVar24 * fVar42;
  local_15c = fVar25 * fVar42 + fVar33 * fVar37;
  local_158 = fVar25 * fVar37 + fVar33 * fVar42;
  cVar1 = *(char *)(param_5 + 0x8b1);
  pbVar13 = (byte *)(lVar14 + uVar15 * 0x14 + 0x12);
  if (cVar1 == '\0') {
    puVar5 = auStack_1f0 + -((ulong)((uint)*pbVar13 * 0xc + 0xf) & 0x1ff0);
    puVar6 = puVar5 + -((ulong)(*pbVar13 + 0xf) & 0x1f0);
    puVar7 = puVar6;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    puVar7 = (undefined1 *)0x0;
  }
  uVar10 = *(undefined8 *)(*(long *)(param_5 + 0x888) + 0x20);
  lVar11 = *(long *)(*(long *)(param_5 + 0x888) + 0x28);
  uVar3 = *(ushort *)(lVar14 + uVar15 * 0x14 + 0x10);
  *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(param_5 + 0x8a0);
  FUN_00231b90(&uStack_178,&local_180,puVar5,puVar7,cVar1 != '\0',uVar10,lVar11 + (ulong)uVar3);
  local_182 = 2;
  local_184 = 0x100;
  FUN_0022d580(auStack_1a8,&local_b0);
  FUN_0022d580(auStack_1d0,param_6);
  fVar16 = local_1d8;
  if (local_1d4 <= local_1dc) {
    uVar10 = *(undefined8 *)(param_5 + 0x898);
    bVar2 = *pbVar13;
    *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(param_5 + 0x8c8);
    *(undefined4 *)(puVar6 + -0x28) = 0xffffffff;
    *(float **)(puVar6 + -8) = &local_e0;
    *(float **)(puVar6 + -0x30) = &local_140;
    *(float **)(puVar6 + -0x40) = &local_d0;
    *(float **)(puVar6 + -0x38) = &local_170;
    *(undefined4 *)(puVar6 + -0x20) = param_9;
    puVar6[-0x10] = 0;
    *(undefined8 **)(puVar6 + -0x50) = &local_b0;
    *(undefined1 **)(puVar6 + -0x48) = auStack_1a8;
    *(undefined8 *)(puVar6 + -0x60) = local_180;
    *(float **)(puVar6 + -0x58) = &local_110;
    uVar4 = FUN_0022d730(fVar16,3,param_7,&local_184,uVar10,param_6,auStack_1d0,bVar2,uStack_178);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
  }
  else {
    bVar2 = *pbVar13;
    uVar10 = *(undefined8 *)(param_5 + 0x898);
    *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(param_5 + 0x8c8);
    *(undefined4 *)(puVar6 + -0x28) = 0xffffffff;
    *(float **)(puVar6 + -8) = &local_e0;
    *(float **)(puVar6 + -0x30) = &local_170;
    *(float **)(puVar6 + -0x40) = &local_c0;
    *(float **)(puVar6 + -0x38) = &local_140;
    *(undefined4 *)(puVar6 + -0x20) = param_9;
    puVar6[-0x10] = 1;
    *(float **)(puVar6 + -0x50) = param_6;
    *(undefined1 **)(puVar6 + -0x48) = auStack_1d0;
    *(undefined2 **)(puVar6 + -0x60) = &local_184;
    *(undefined8 *)(puVar6 + -0x58) = uVar10;
    uVar4 = FUN_0022d730(fVar16,bVar2,uStack_178,local_180,&local_110,&local_b0,auStack_1a8,3,
                         param_7);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}


