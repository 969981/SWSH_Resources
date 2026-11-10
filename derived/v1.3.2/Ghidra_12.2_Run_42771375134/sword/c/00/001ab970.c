/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ab970; name: FUN_001ab970
 */


void FUN_001ab970(float param_1,float *param_2,long param_3,uint param_4,long param_5)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  float *pfVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  uint uVar17;
  undefined1 *puVar18;
  bool bVar19;
  float *pfVar20;
  int iVar21;
  long *plVar22;
  float *pfVar23;
  ulong uVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulong uVar30;
  undefined1 auVar31 [13];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined4 uVar55;
  float fVar56;
  undefined1 auVar57 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float local_4cc;
  float local_4c4;
  ulong local_4c0 [64];
  undefined1 auStack_2c0 [120];
  undefined8 local_248;
  undefined4 uStack_240;
  undefined8 local_238;
  undefined4 uStack_230;
  long local_1f0 [4];
  undefined4 local_1d0 [16];
  undefined4 local_190 [16];
  undefined4 local_150 [4];
  undefined4 local_140 [4];
  undefined4 local_130 [22];
  undefined4 local_d8 [14];
  
  pfVar9 = *(float **)(param_5 + 0x30);
  fVar42 = *(float *)(param_5 + 0x1c);
  fVar37 = *(float *)(param_5 + 0x14);
  fVar40 = *(float *)(param_5 + 0x18);
  fVar26 = *(float *)(param_5 + 0xc);
  fVar33 = *(float *)(param_5 + 0x10);
  fVar46 = fVar33 + fVar33;
  fVar48 = fVar37 + fVar37;
  fVar52 = fVar40 * (fVar40 + fVar40);
  fVar43 = (fVar40 + fVar40) * fVar42;
  fVar33 = 1.0 - fVar33 * fVar46;
  local_4cc = 1.0;
  fVar56 = fVar46 * fVar37 + fVar43;
  fVar58 = fVar46 * fVar40 - fVar48 * fVar42;
  fVar43 = fVar46 * fVar37 - fVar43;
  fVar44 = fVar33 - fVar52;
  fVar49 = fVar46 * fVar40 + fVar48 * fVar42;
  fVar33 = fVar33 - fVar37 * fVar48;
  fVar63 = fVar58 * fVar26;
  fVar52 = (1.0 - fVar37 * fVar48) - fVar52;
  fVar53 = fVar48 * fVar40 + fVar46 * fVar42;
  fVar37 = fVar48 * fVar40 - fVar46 * fVar42;
  fVar40 = *(float *)(param_5 + 4);
  fVar46 = *(float *)(param_5 + 8);
  fVar61 = fVar56 * fVar46;
  fVar62 = fVar44 * fVar46;
  fVar48 = fVar40 * fVar52;
  fVar60 = fVar40 * fVar43;
  fVar40 = fVar40 * fVar49;
  fVar46 = fVar37 * fVar46;
  fVar64 = fVar53 * fVar26;
  fVar26 = fVar33 * fVar26;
  fVar66 = fVar52 * fVar48 + fVar56 * fVar61 + fVar58 * fVar63;
  fVar42 = fVar52 * fVar40 + fVar56 * fVar46 + fVar58 * fVar26;
  fVar65 = fVar43 * fVar48 + fVar44 * fVar61 + fVar53 * fVar63;
  fVar59 = fVar43 * fVar60 + fVar44 * fVar62 + fVar53 * fVar64;
  fVar44 = fVar43 * fVar40 + fVar44 * fVar46 + fVar53 * fVar26;
  fVar43 = fVar49 * fVar60 + fVar37 * fVar62 + fVar33 * fVar64;
  fVar48 = fVar49 * fVar48 + fVar37 * fVar61 + fVar33 * fVar63;
  fVar40 = fVar49 * fVar40 + fVar37 * fVar46 + fVar33 * fVar26;
  fVar46 = fVar52 * fVar60 + fVar56 * fVar62 + fVar58 * fVar64;
  fVar26 = fVar59 * fVar40 - fVar44 * fVar43;
  fVar33 = fVar43 * fVar65 - fVar59 * fVar48;
  fVar37 = fVar42 * fVar33 + fVar66 * fVar26 + fVar46 * (fVar44 * fVar48 - fVar40 * fVar65);
  if (fVar37 == 0.0) {
    fVar52 = 0.0;
    fVar26 = 1.0;
    local_4c4 = 0.0;
    fVar53 = 0.0;
    fVar56 = 0.0;
    fVar33 = 0.0;
    fVar49 = 0.0;
    fVar37 = 1.0;
  }
  else {
    fVar37 = 1.0 / fVar37;
    local_4cc = fVar26 * fVar37;
    fVar53 = -((fVar40 * fVar65 - fVar44 * fVar48) * fVar37);
    fVar33 = fVar33 * fVar37;
    fVar52 = -((fVar40 * fVar46 - fVar43 * fVar42) * fVar37);
    local_4c4 = (fVar44 * fVar46 - fVar59 * fVar42) * fVar37;
    fVar26 = (fVar40 * fVar66 - fVar48 * fVar42) * fVar37;
    fVar56 = -((fVar44 * fVar66 - fVar65 * fVar42) * fVar37);
    fVar49 = -((fVar43 * fVar66 - fVar48 * fVar46) * fVar37);
    fVar37 = (fVar59 * fVar66 - fVar65 * fVar46) * fVar37;
  }
  fVar58 = *pfVar9;
  fVar60 = pfVar9[1];
  fVar61 = pfVar9[2];
  fVar34 = pfVar9[3];
  fVar35 = pfVar9[4];
  fVar38 = pfVar9[5];
  fVar62 = fabsf(fVar66 * fVar34);
  fVar63 = fabsf(fVar65 * fVar35);
  fVar64 = fabsf(fVar48 * fVar38);
  fVar27 = fabsf(fVar46 * fVar34);
  fVar28 = fabsf(fVar59 * fVar35);
  fVar29 = fabsf(fVar43 * fVar38);
  fVar34 = fabsf(fVar42 * fVar34);
  fVar35 = fabsf(fVar44 * fVar35);
  fVar38 = fabsf(fVar40 * fVar38);
  uStack_240 = 0x7f7fffff;
  uStack_230 = 0x7f7fffff;
  local_248 = 0x7f7fffff7f7fffff;
  local_238 = 0x7f7fffff7f7fffff;
  if (param_4 != 0) {
    uVar24 = (ulong)param_4;
    fVar64 = fVar62 + fVar63 + fVar64;
    fVar48 = fVar66 * fVar58 + fVar65 * fVar60 + fVar48 * fVar61;
    fVar38 = fVar34 + fVar35 + fVar38;
    fVar29 = fVar27 + fVar28 + fVar29;
    fVar43 = fVar46 * fVar58 + fVar59 * fVar60 + fVar43 * fVar61;
    fVar58 = fVar42 * fVar58 + fVar44 * fVar60 + fVar40 * fVar61;
    fVar40 = fVar48 + fVar64 + param_1;
    fVar44 = (fVar48 - fVar64) - param_1;
    fVar46 = fVar43 + fVar29 + param_1;
    fVar42 = (fVar43 - fVar29) - param_1;
    fVar43 = fVar58 + fVar38 + param_1;
    param_1 = (fVar58 - fVar38) - param_1;
    bVar19 = false;
    uVar17 = 0;
    do {
      uVar11 = param_4 - uVar17;
      if (0x7f < uVar11) {
        uVar11 = 0x80;
      }
      if (uVar11 != 0) {
        puVar18 = (undefined1 *)(param_3 + (ulong)uVar17 * 200);
        uVar12 = 1;
        puVar10 = local_4c0;
        puVar14 = puVar18;
        do {
          puVar3 = puVar14 + 400;
          if (uVar24 <= uVar12) {
            puVar3 = puVar14 + 200;
          }
          pauVar1 = (undefined1 (*) [16])(puVar14 + 0x78);
          puVar4 = puVar14 + 200;
          if (uVar24 <= uVar12) {
            puVar4 = auStack_2c0;
          }
          pauVar2 = (undefined1 (*) [16])(puVar14 + 0x88);
          puVar5 = puVar3 + 200;
          if (uVar24 <= uVar12 + 1) {
            puVar5 = puVar3;
            puVar3 = auStack_2c0;
          }
          bVar8 = uVar24 <= uVar12 + 2;
          puVar6 = puVar5;
          if (bVar8) {
            puVar6 = auStack_2c0;
          }
          uVar45 = (undefined4)((ulong)*(undefined8 *)(puVar3 + 0x80) >> 0x20);
          uVar50 = (undefined4)((ulong)*(undefined8 *)(puVar3 + 0x90) >> 0x20);
          uVar55 = (undefined4)((ulong)*(undefined8 *)(puVar6 + 0x90) >> 0x20);
          auVar47 = NEON_fmin(*pauVar1,*pauVar2,4);
          auVar51 = NEON_fmin(*(undefined1 (*) [16])(puVar4 + 0x78),
                              *(undefined1 (*) [16])(puVar4 + 0x88),4);
          uVar25 = uVar12 + 3;
          auVar54._12_4_ = uVar45;
          auVar54._0_12_ = *(undefined1 (*) [12])(puVar3 + 0x78);
          auVar32._12_4_ = uVar50;
          auVar32._0_12_ = *(undefined1 (*) [12])(puVar3 + 0x88);
          auVar54 = NEON_fmin(auVar54,auVar32,4);
          puVar14 = puVar5 + 200;
          if (bVar8) {
            puVar14 = puVar5;
          }
          auVar36._12_4_ = uVar55;
          auVar36._0_12_ = *(undefined1 (*) [12])(puVar6 + 0x88);
          auVar57 = NEON_fmin(*(undefined1 (*) [16])(puVar6 + 0x78),auVar36,4);
          uVar12 = uVar12 + 4;
          auVar32 = NEON_fmax(*pauVar1,*pauVar2,4);
          auVar36 = NEON_fmax(*(undefined1 (*) [16])(puVar4 + 0x78),
                              *(undefined1 (*) [16])(puVar4 + 0x88),4);
          auVar39._12_4_ = uVar45;
          auVar39._0_12_ = *(undefined1 (*) [12])(puVar3 + 0x78);
          auVar41._12_4_ = uVar50;
          auVar41._0_12_ = *(undefined1 (*) [12])(puVar3 + 0x88);
          auVar39 = NEON_fmax(auVar39,auVar41,4);
          auVar7._12_4_ = uVar55;
          auVar7._0_12_ = *(undefined1 (*) [12])(puVar6 + 0x88);
          auVar41 = NEON_fmax(*(undefined1 (*) [16])(puVar6 + 0x78),auVar7,4);
          uVar30 = CONCAT26(-(ushort)(auVar57._0_4_ < fVar40),
                            CONCAT24(-(ushort)(auVar54._0_4_ < fVar40),
                                     CONCAT22(-(ushort)(auVar51._0_4_ < fVar40),
                                              -(ushort)(auVar47._0_4_ < fVar40)))) &
                   CONCAT26(-(ushort)(auVar57._4_4_ < fVar46),
                            CONCAT24(-(ushort)(auVar54._4_4_ < fVar46),
                                     CONCAT22(-(ushort)(auVar51._4_4_ < fVar46),
                                              -(ushort)(auVar47._4_4_ < fVar46)))) &
                   CONCAT26(-(ushort)(auVar57._8_4_ < fVar43),
                            CONCAT24(-(ushort)(auVar54._8_4_ < fVar43),
                                     CONCAT22(-(ushort)(auVar51._8_4_ < fVar43),
                                              -(ushort)(auVar47._8_4_ < fVar43)))) &
                   CONCAT26(-(ushort)(fVar44 < auVar41._0_4_),
                            CONCAT24(-(ushort)(fVar44 < auVar39._0_4_),
                                     CONCAT22(-(ushort)(fVar44 < auVar36._0_4_),
                                              -(ushort)(fVar44 < auVar32._0_4_)))) &
                   CONCAT26(-(ushort)(fVar42 < auVar41._4_4_),
                            CONCAT24(-(ushort)(fVar42 < auVar39._4_4_),
                                     CONCAT22(-(ushort)(fVar42 < auVar36._4_4_),
                                              -(ushort)(fVar42 < auVar32._4_4_)))) &
                   CONCAT26(-(ushort)(param_1 < auVar41._8_4_),
                            CONCAT24(-(ushort)(param_1 < auVar39._8_4_),
                                     CONCAT22(-(ushort)(param_1 < auVar36._8_4_),
                                              -(ushort)(param_1 < auVar32._8_4_))));
          auVar31._0_8_ =
               CONCAT35(0,CONCAT14((char)(uVar30 >> 0x10),(uint)((byte)uVar30 & 1)) & 0x1ffffffff);
          auVar31[8] = (byte)(uVar30 >> 0x20) & 1;
          auVar31._9_3_ = 0;
          auVar31[0xc] = (byte)(uVar30 >> 0x30) & 1;
          puVar10[1] = (ulong)auVar31._8_5_;
          *puVar10 = auVar31._0_8_;
          puVar10 = puVar10 + 2;
        } while (uVar25 < uVar11);
        if (uVar11 != 0) {
          uVar12 = 0;
          uVar25 = 0;
          do {
            if (*(int *)((long)local_4c0 + uVar12 * 4) != 0) {
              if ((!bVar19) && (*(byte *)((long)pfVar9 + 0x27) != 0)) {
                pfVar20 = *(float **)(pfVar9 + 10);
                iVar21 = -(uint)*(byte *)((long)pfVar9 + 0x27);
                pfVar23 = param_2;
                do {
                  fVar61 = pfVar20[2];
                  fVar62 = pfVar20[3];
                  fVar58 = *pfVar20;
                  fVar60 = pfVar20[1];
                  fVar59 = local_4cc * fVar58 + fVar52 * fVar60 + local_4c4 * fVar61;
                  fVar48 = fVar53 * fVar58 + fVar26 * fVar60 + fVar56 * fVar61;
                  fVar58 = fVar33 * fVar58 + fVar49 * fVar60 + fVar37 * fVar61;
                  fVar60 = sqrtf(fVar58 * fVar58 + fVar59 * fVar59 + fVar48 * fVar48);
                  fVar61 = 1.0 / fVar60;
                  if (0.0 < fVar60) {
                    fVar48 = fVar48 * fVar61;
                    fVar59 = fVar59 * fVar61;
                  }
                  *pfVar23 = fVar59;
                  pfVar23[1] = fVar48;
                  if (0.0 < fVar60) {
                    fVar58 = fVar58 * fVar61;
                  }
                  iVar21 = iVar21 + 1;
                  pfVar23[2] = fVar58;
                  pfVar23[3] = fVar62 / fVar60;
                  pfVar20 = pfVar20 + 5;
                  pfVar23 = pfVar23 + 4;
                } while (iVar21 != 0);
              }
              bVar19 = true;
              puVar15 = local_1d0 + uVar25 * 4;
              *puVar15 = *(undefined4 *)(puVar18 + 0x78);
              *(undefined4 *)((ulong)puVar15 | 4) = *(undefined4 *)(puVar18 + 0x7c);
              *(undefined4 *)((ulong)puVar15 | 8) = *(undefined4 *)(puVar18 + 0x80);
              puVar15 = local_190 + uVar25 * 4;
              *puVar15 = *(undefined4 *)(puVar18 + 0x88);
              *(undefined4 *)((ulong)puVar15 | 4) = *(undefined4 *)(puVar18 + 0x8c);
              *(undefined4 *)((ulong)puVar15 | 8) = *(undefined4 *)(puVar18 + 0x90);
              local_140[uVar25] = *(undefined4 *)(puVar18 + 0x84);
              local_150[uVar25] = *(undefined4 *)(puVar18 + 0x5c);
              local_130[uVar25] = *(undefined4 *)(puVar18 + 0x2c);
              local_1f0[uVar25] = (long)puVar18;
              uVar25 = (ulong)((int)uVar25 + 1);
            }
            if (((int)uVar25 != 0) && (((int)uVar25 == 4 || (uVar12 == uVar11 - 1)))) {
              plVar22 = local_1f0;
              FUN_001ab480(local_1f0,param_2,*(undefined1 *)((long)pfVar9 + 0x27));
              puVar13 = local_d8;
              puVar15 = local_130;
              do {
                if (puVar15[-4] != 0) {
                  lVar16 = *plVar22;
                  *(uint *)(lVar16 + 0x84) = *(uint *)(lVar16 + 0x84) | puVar15[-4];
                  *(undefined4 *)(lVar16 + 0x2c) = *puVar15;
                  *(undefined4 *)(lVar16 + 0xa0) = puVar13[-0x12];
                  *(undefined4 *)(lVar16 + 0xa4) = puVar13[-0x11];
                  *(undefined4 *)(lVar16 + 0xa8) = puVar13[-0x10];
                  *(undefined4 *)(lVar16 + 0xb8) = puVar13[-2];
                  *(undefined4 *)(lVar16 + 0xbc) = puVar13[-1];
                  *(undefined4 *)(lVar16 + 0xc0) = *puVar13;
                }
                plVar22 = plVar22 + 1;
                uVar25 = uVar25 - 1;
                puVar15 = puVar15 + 1;
                puVar13 = puVar13 + 4;
              } while (uVar25 != 0);
              uVar25 = 0;
            }
            uVar12 = uVar12 + 1;
            puVar18 = puVar18 + 200;
          } while (uVar12 < uVar11);
        }
      }
      uVar17 = uVar11 + uVar17;
    } while (uVar17 < param_4);
  }
  return;
}


