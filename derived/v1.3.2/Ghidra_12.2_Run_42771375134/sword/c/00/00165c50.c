/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00165c50; name: FUN_00165c50
 */


void FUN_00165c50(long *param_1,char *param_2)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float *pfVar29;
  ulong uVar30;
  float *pfVar31;
  float *pfVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  float *pfVar38;
  float fVar39;
  float fVar40;
  float fVar41;
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
  undefined8 uVar58;
  uint uVar59;
  ulong uVar60;
  undefined1 auVar61 [16];
  float fVar62;
  int iVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined8 uVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar74;
  float fVar75;
  undefined1 auVar73 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  
  pfVar3 = (float *)*param_1;
  pfVar4 = (float *)param_1[1];
  fVar40 = *pfVar3;
  fVar41 = pfVar3[1];
  fVar42 = pfVar3[2];
  fVar44 = *pfVar4;
  fVar45 = pfVar4[1];
  fVar50 = pfVar4[4];
  fVar47 = pfVar3[4];
  fVar51 = pfVar4[5];
  fVar48 = pfVar3[5];
  fVar46 = pfVar4[2];
  fVar49 = pfVar3[6];
  uVar7 = *(ushort *)((long)param_1 + 0x1e);
  fVar52 = pfVar4[6];
  if ((ulong)uVar7 != 0) {
    uVar33 = param_1[4];
    uVar34 = uVar33;
    do {
      bVar5 = *(byte *)(uVar34 + 2);
      uVar36 = (ulong)bVar5;
      bVar6 = *(byte *)(uVar34 + 3);
      uVar35 = (ulong)bVar6;
      Hint_Prefetch(uVar34 + 0x50,0,0,0);
      fVar8 = *(float *)(uVar34 + 4);
      fVar53 = *(float *)(uVar34 + 0xc);
      fVar9 = *(float *)(uVar34 + 8);
      fVar54 = *(float *)(uVar34 + 0x30);
      lVar37 = (uVar36 + (ulong)(uint)bVar5 * 2) * 0x10;
      uVar30 = (ulong)((uint)bVar5 * 4 + 0xc) & 0x7f0;
      pfVar38 = (float *)(uVar34 + 0x50 + lVar37);
      if (bVar5 == 0) {
        fVar56 = 0.0;
        fVar57 = 0.0;
        lVar1 = uVar35 * 0x40;
      }
      else {
        uVar58 = *(undefined8 *)(uVar34 + 0x28);
        fVar55 = (float)*(undefined8 *)(uVar34 + 0x20);
        fVar39 = (float)((ulong)*(undefined8 *)(uVar34 + 0x20) >> 0x20);
        fVar65 = (float)uVar58;
        fVar56 = 0.0;
        fVar57 = 0.0;
        pfVar31 = (float *)(uVar34 + 0x70);
        pfVar32 = pfVar38;
        do {
          Hint_Prefetch(pfVar31 + 0x18,0,0,0);
          fVar68 = (float)((ulong)uVar58 >> 0x20);
          fVar25 = pfVar31[-8];
          fVar26 = pfVar31[-7];
          fVar27 = pfVar31[-6];
          fVar28 = pfVar31[-5];
          fVar72 = pfVar31[-4];
          fVar74 = pfVar31[-3];
          fVar75 = pfVar31[-2];
          fVar24 = pfVar31[-1];
          uVar36 = uVar36 - 1;
          fVar62 = *pfVar32;
          fVar43 = *pfVar31;
          pfVar29 = pfVar31 + 1;
          fVar64 = (fVar55 * fVar40 + fVar47 * fVar25) - (fVar55 * fVar44 + fVar50 * fVar72);
          fVar66 = (fVar39 * fVar41 + fVar48 * fVar26) - (fVar39 * fVar45 + fVar51 * fVar74);
          fVar67 = (fVar65 * fVar42 + fVar49 * fVar27) - (fVar65 * fVar46 + fVar52 * fVar75);
          fVar68 = (fVar68 * 0.0 + fVar28 * 0.0) - (fVar68 * 0.0 + fVar24 * 0.0);
          auVar22._4_4_ = fVar66;
          auVar22._0_4_ = fVar64;
          auVar22._8_4_ = fVar67;
          auVar22._12_4_ = fVar68;
          auVar23._4_4_ = fVar66;
          auVar23._0_4_ = fVar64;
          auVar23._8_4_ = fVar67;
          auVar23._12_4_ = fVar68;
          auVar70 = NEON_ext(auVar22,auVar23,8,1);
          fVar68 = auVar70._0_4_ + auVar70._4_4_;
          pfVar2 = pfVar31 + 3;
          pfVar31 = pfVar31 + 0xc;
          uVar69 = NEON_fmax(CONCAT44(*pfVar29 - fVar43 * (fVar64 + fVar66 + fVar68),
                                      *pfVar29 - fVar43 * (fVar64 + fVar66 + fVar68)),
                             CONCAT44(-fVar62,-fVar62),4);
          uVar69 = NEON_fmin(CONCAT44(fVar62 + (float)((ulong)uVar69 >> 0x20),fVar62 + (float)uVar69
                                     ),CONCAT44(*pfVar2,*pfVar2),4);
          fVar43 = (float)uVar69;
          fVar62 = fVar43 - fVar62;
          fVar56 = fVar56 + fVar43;
          fVar57 = fVar57 + (float)((ulong)uVar69 >> 0x20);
          *pfVar32 = fVar43;
          fVar40 = fVar40 + fVar55 * fVar53 * fVar62;
          fVar41 = fVar41 + fVar39 * fVar53 * fVar62;
          fVar42 = fVar42 + fVar65 * fVar53 * fVar62;
          fVar43 = fVar62 * 0.0 + 0.0;
          auVar70._4_4_ = fVar41;
          auVar70._0_4_ = fVar40;
          auVar70._8_4_ = fVar42;
          auVar70._12_4_ = fVar43;
          auVar77._4_4_ = fVar41;
          auVar77._0_4_ = fVar40;
          auVar77._8_4_ = fVar42;
          auVar77._12_4_ = fVar43;
          auVar70 = NEON_ext(auVar70,auVar77,8,1);
          fVar44 = fVar44 - fVar55 * fVar54 * fVar62;
          fVar45 = fVar45 - fVar39 * fVar54 * fVar62;
          fVar46 = fVar46 - fVar65 * fVar54 * fVar62;
          fVar43 = 0.0 - fVar62 * 0.0;
          fVar42 = auVar70._0_4_;
          auVar73._4_4_ = fVar45;
          auVar73._0_4_ = fVar44;
          auVar73._8_4_ = fVar46;
          auVar73._12_4_ = fVar43;
          auVar76._4_4_ = fVar45;
          auVar76._0_4_ = fVar44;
          auVar76._8_4_ = fVar46;
          auVar76._12_4_ = fVar43;
          auVar70 = NEON_ext(auVar73,auVar76,8,1);
          fVar46 = auVar70._0_4_;
          fVar43 = fVar8 * fVar62;
          fVar47 = fVar47 + fVar25 * fVar43;
          fVar48 = fVar48 + fVar26 * fVar43;
          fVar49 = fVar49 + fVar27 * fVar43;
          fVar43 = fVar28 * fVar43 + 0.0;
          auVar14._4_4_ = fVar48;
          auVar14._0_4_ = fVar47;
          auVar14._8_4_ = fVar49;
          auVar14._12_4_ = fVar43;
          auVar15._4_4_ = fVar48;
          auVar15._0_4_ = fVar47;
          auVar15._8_4_ = fVar49;
          auVar15._12_4_ = fVar43;
          auVar70 = NEON_ext(auVar14,auVar15,8,1);
          fVar49 = auVar70._0_4_;
          fVar62 = fVar9 * fVar62;
          fVar50 = fVar50 - fVar72 * fVar62;
          fVar51 = fVar51 - fVar74 * fVar62;
          fVar52 = fVar52 - fVar75 * fVar62;
          fVar62 = 0.0 - fVar24 * fVar62;
          auVar18._4_4_ = fVar51;
          auVar18._0_4_ = fVar50;
          auVar18._8_4_ = fVar52;
          auVar18._12_4_ = fVar62;
          auVar19._4_4_ = fVar51;
          auVar19._0_4_ = fVar50;
          auVar19._8_4_ = fVar52;
          auVar19._12_4_ = fVar62;
          auVar70 = NEON_ext(auVar18,auVar19,8,1);
          fVar52 = auVar70._0_4_;
          pfVar32 = pfVar32 + 1;
        } while (uVar36 != 0);
        lVar1 = uVar35 * 0x40 + uVar30;
      }
      uVar36 = (long)pfVar38 + lVar1;
      if ((bVar6 != 0) && (*param_2 != '\0')) {
        uVar58 = *(undefined8 *)(uVar34 + 0x10);
        fVar39 = (float)((ulong)uVar58 >> 0x20);
        fVar55 = fVar56 * fVar39;
        fVar57 = fVar57 * fVar39;
        if (param_2[1] != '\0') {
          Hint_Prefetch(*(undefined8 *)(uVar34 + 0x38),0,0,0);
        }
        uVar60 = 0;
        pfVar38 = (float *)(uVar34 + lVar37 + uVar30 + 0x70);
        do {
          Hint_Prefetch(pfVar38 + 0x18,0,0,0);
          auVar70 = *(undefined1 (*) [16])(pfVar38 + -8);
          uVar35 = uVar35 - 1;
          fVar65 = (float)((ulong)*(undefined8 *)(pfVar38 + -2) >> 0x20);
          fVar72 = auVar70._0_4_;
          fVar74 = auVar70._4_4_;
          fVar75 = auVar70._8_4_;
          fVar62 = auVar70._12_4_;
          auVar71._0_4_ =
               (fVar40 * fVar72 + fVar47 * pfVar38[-4]) - (fVar44 * fVar72 + fVar50 * *pfVar38);
          auVar71._4_4_ =
               (fVar41 * fVar74 + fVar48 * pfVar38[-3]) - (fVar45 * fVar74 + fVar51 * pfVar38[1]);
          auVar71._8_4_ =
               (fVar42 * fVar75 + fVar49 * pfVar38[-2]) - (fVar46 * fVar75 + fVar52 * pfVar38[2]);
          auVar71._12_4_ = 0;
          auVar77 = NEON_ext(auVar71,auVar71,8,1);
          fVar39 = auVar77._0_4_ + auVar77._4_4_;
          fVar43 = (fVar62 - (pfVar38[3] - pfVar38[4]) * fVar65) -
                   (auVar71._0_4_ + auVar71._4_4_ + fVar39) * fVar65;
          fVar39 = (fVar62 - (pfVar38[3] - pfVar38[4]) * fVar65) -
                   (auVar71._0_4_ + auVar71._4_4_ + fVar39) * fVar65;
          uVar69 = NEON_fmax(CONCAT44(-fVar57,-fVar55),CONCAT44(fVar39,fVar43),4);
          iVar63 = -(uint)(fVar56 * (float)uVar58 < ABS(fVar43));
          uVar30 = NEON_fmin(CONCAT44(fVar57,fVar55),uVar69,4);
          uVar30 = CONCAT44(fVar39,fVar43) ^
                   (CONCAT44(fVar39,fVar43) ^ uVar30) & CONCAT44(iVar63,iVar63);
          fVar62 = (float)uVar30 - fVar62;
          fVar40 = fVar40 + fVar53 * fVar72 * fVar62;
          fVar41 = fVar41 + fVar53 * fVar74 * fVar62;
          fVar42 = fVar42 + fVar53 * fVar75 * fVar62;
          fVar39 = fVar62 * 0.0 + 0.0;
          fVar43 = fVar8 * fVar62;
          fVar65 = fVar9 * fVar62;
          fVar50 = fVar50 - *pfVar38 * fVar65;
          fVar51 = fVar51 - pfVar38[1] * fVar65;
          fVar52 = fVar52 - pfVar38[2] * fVar65;
          fVar65 = 0.0 - fVar65 * 0.0;
          auVar20._4_4_ = fVar51;
          auVar20._0_4_ = fVar50;
          auVar20._8_4_ = fVar52;
          auVar20._12_4_ = fVar65;
          auVar21._4_4_ = fVar51;
          auVar21._0_4_ = fVar50;
          auVar21._8_4_ = fVar52;
          auVar21._12_4_ = fVar65;
          auVar77 = NEON_ext(auVar20,auVar21,8,1);
          fVar52 = auVar77._0_4_;
          fVar44 = fVar44 - fVar54 * fVar72 * fVar62;
          fVar45 = fVar45 - fVar54 * fVar74 * fVar62;
          fVar46 = fVar46 - fVar54 * fVar75 * fVar62;
          fVar65 = 0.0 - fVar62 * 0.0;
          auVar12._4_4_ = fVar45;
          auVar12._0_4_ = fVar44;
          auVar12._8_4_ = fVar46;
          auVar12._12_4_ = fVar65;
          auVar13._4_4_ = fVar45;
          auVar13._0_4_ = fVar44;
          auVar13._8_4_ = fVar46;
          auVar13._12_4_ = fVar65;
          auVar73 = NEON_ext(auVar12,auVar13,8,1);
          fVar47 = fVar47 + pfVar38[-4] * fVar43;
          fVar48 = fVar48 + pfVar38[-3] * fVar43;
          fVar49 = fVar49 + pfVar38[-2] * fVar43;
          fVar46 = fVar43 * 0.0 + 0.0;
          auVar10._4_4_ = fVar41;
          auVar10._0_4_ = fVar40;
          auVar10._8_4_ = fVar42;
          auVar10._12_4_ = fVar39;
          auVar11._4_4_ = fVar41;
          auVar11._0_4_ = fVar40;
          auVar11._8_4_ = fVar42;
          auVar11._12_4_ = fVar39;
          auVar77 = NEON_ext(auVar10,auVar11,8,1);
          auVar16._4_4_ = fVar48;
          auVar16._0_4_ = fVar47;
          auVar16._8_4_ = fVar49;
          auVar16._12_4_ = fVar46;
          auVar17._4_4_ = fVar48;
          auVar17._0_4_ = fVar47;
          auVar17._8_4_ = fVar49;
          auVar17._12_4_ = fVar46;
          auVar76 = NEON_ext(auVar16,auVar17,8,1);
          fVar42 = auVar77._0_4_;
          fVar46 = auVar73._0_4_;
          fVar49 = auVar76._0_4_;
          auVar61._12_4_ = (int)(uVar30 >> 0x20);
          auVar61._0_12_ = auVar70._0_12_;
          uVar59 = CONCAT13((byte)((uint)iVar63 >> 0x18) | (byte)(uVar60 >> 0x18),
                            CONCAT12((byte)((uint)iVar63 >> 0x10) | (byte)(uVar60 >> 0x10),
                                     CONCAT11((byte)((uint)iVar63 >> 8) | (byte)(uVar60 >> 8),
                                              (byte)iVar63 | (byte)uVar60)));
          uVar60 = (ulong)uVar59;
          *(long *)(pfVar38 + -6) = auVar61._8_8_;
          *(long *)(pfVar38 + -8) = auVar70._0_8_;
          pfVar38 = pfVar38 + 0x10;
        } while (uVar35 != 0);
        *(uint *)(uVar34 + 0x34) = uVar59;
      }
      uVar34 = uVar36;
    } while (uVar36 < uVar33 + (ulong)uVar7 * 0x10);
  }
  *(ulong *)pfVar3 = CONCAT44(fVar41,fVar40);
  pfVar3[2] = fVar42;
  *(ulong *)pfVar4 = CONCAT44(fVar45,fVar44);
  pfVar4[2] = fVar46;
  *(ulong *)(pfVar3 + 4) = CONCAT44(fVar48,fVar47);
  pfVar3[6] = fVar49;
  *(ulong *)(pfVar4 + 4) = CONCAT44(fVar51,fVar50);
  pfVar4[6] = fVar52;
  return;
}


