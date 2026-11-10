/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001675c0; name: FUN_001675c0
 */


void FUN_001675c0(long *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  char cVar4;
  short sVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  uint uVar37;
  float *pfVar38;
  long lVar39;
  undefined8 *puVar40;
  long lVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined4 uVar59;
  undefined4 uVar60;
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar41 = param_1[4];
  if ((short)param_1[2] == -1) {
    fVar65 = 0.0;
    pfVar38 = (float *)*param_1;
    fVar69 = 0.0;
    fVar66 = *pfVar38;
    fVar67 = pfVar38[1];
    fVar68 = pfVar38[2];
    fVar62 = pfVar38[4];
    fVar63 = pfVar38[5];
    fVar64 = pfVar38[6];
    sVar5 = *(short *)((long)param_1 + 0x12);
  }
  else {
    FUN_001637d0(&local_40,*param_1);
    fVar68 = (float)uStack_38;
    fVar69 = (float)((ulong)uStack_38 >> 0x20);
    fVar66 = (float)local_40;
    fVar67 = (float)((ulong)local_40 >> 0x20);
    fVar64 = (float)uStack_28;
    fVar65 = (float)((ulong)uStack_28 >> 0x20);
    fVar62 = (float)uStack_30;
    fVar63 = (float)((ulong)uStack_30 >> 0x20);
    sVar5 = *(short *)((long)param_1 + 0x12);
  }
  if (sVar5 == -1) {
    fVar73 = 0.0;
    pfVar38 = (float *)param_1[1];
    fVar77 = 0.0;
    fVar74 = *pfVar38;
    fVar75 = pfVar38[1];
    fVar76 = pfVar38[2];
    fVar70 = pfVar38[4];
    fVar71 = pfVar38[5];
    fVar72 = pfVar38[6];
    cVar4 = *(char *)(lVar41 + 1);
  }
  else {
    FUN_001637d0(&local_40,param_1[1]);
    fVar76 = (float)uStack_38;
    fVar77 = (float)((ulong)uStack_38 >> 0x20);
    fVar74 = (float)local_40;
    fVar75 = (float)((ulong)local_40 >> 0x20);
    fVar72 = (float)uStack_28;
    fVar73 = (float)((ulong)uStack_28 >> 0x20);
    fVar70 = (float)uStack_30;
    fVar71 = (float)((ulong)uStack_30 >> 0x20);
    cVar4 = *(char *)(lVar41 + 1);
  }
  if (cVar4 == '\0') {
    fVar78 = 0.0;
    fVar46 = 0.0;
    fVar81 = 0.0;
    fVar43 = 0.0;
    sVar5 = (short)param_1[2];
  }
  else {
    fVar43 = 0.0;
    fVar44 = 0.0;
    fVar45 = 0.0;
    fVar83 = 0.0;
    fVar81 = 0.0;
    fVar82 = 0.0;
    fVar48 = 0.0;
    fVar46 = 0.0;
    fVar47 = 0.0;
    fVar80 = 0.0;
    fVar78 = 0.0;
    fVar79 = 0.0;
    uVar37 = 0;
    puVar40 = (undefined8 *)(lVar41 + 0x80);
    do {
      Hint_Prefetch(puVar40 + 10,0,0,0);
      uVar37 = uVar37 + 1;
      pfVar38 = (float *)(puVar40 + -6);
      pfVar22 = (float *)((long)puVar40 + -0x2c);
      pfVar23 = (float *)(puVar40 + -5);
      pfVar6 = (float *)(puVar40 + -4);
      pfVar20 = (float *)((long)puVar40 + -0x1c);
      pfVar21 = (float *)(puVar40 + -3);
      pfVar1 = (float *)(puVar40 + -10);
      pfVar24 = (float *)((long)puVar40 + -0x4c);
      pfVar25 = (float *)(puVar40 + -9);
      pfVar7 = (float *)(puVar40 + -8);
      pfVar26 = (float *)((long)puVar40 + -0x3c);
      pfVar27 = (float *)(puVar40 + -7);
      auVar57._0_4_ = (fVar66 * *pfVar1 + fVar62 * *pfVar38) - (fVar74 * *pfVar7 + fVar70 * *pfVar6)
      ;
      auVar57._4_4_ =
           (fVar67 * *pfVar24 + fVar63 * *pfVar22) - (fVar75 * *pfVar26 + fVar71 * *pfVar20);
      auVar57._8_4_ =
           (fVar68 * *pfVar25 + fVar64 * *pfVar23) - (fVar76 * *pfVar27 + fVar72 * *pfVar21);
      auVar57._12_4_ = (fVar69 * 0.0 + fVar65 * 0.0) - (fVar77 * 0.0 + fVar73 * 0.0);
      uVar60 = (undefined4)((ulong)*puVar40 >> 0x20);
      auVar61 = NEON_ext(auVar57,auVar57,8,1);
      fVar42 = auVar61._0_4_ + auVar61._4_4_;
      fVar50 = (float)puVar40[1];
      uVar59 = (undefined4)*puVar40;
      uVar51 = NEON_fmax(CONCAT44(uVar59,uVar59),
                         CONCAT44(*(float *)((long)puVar40 + -0x14) * fVar50 +
                                  *(float *)((long)puVar40 + -0x44) +
                                  (auVar57._0_4_ + auVar57._4_4_ + fVar42) *
                                  *(float *)((long)puVar40 + -0x24),
                                  *(float *)((long)puVar40 + -0x14) * fVar50 +
                                  *(float *)((long)puVar40 + -0x44) +
                                  (auVar57._0_4_ + auVar57._4_4_ + fVar42) *
                                  *(float *)((long)puVar40 + -0x24)),4);
      uVar51 = NEON_fmin(CONCAT44(uVar60,uVar60),uVar51,4);
      fVar50 = (float)uVar51 - fVar50;
      *(float *)(puVar40 + 1) = (float)uVar51;
      pfVar2 = (float *)(puVar40 + 2);
      pfVar28 = (float *)((long)puVar40 + 0x14);
      pfVar29 = (float *)(puVar40 + 3);
      pfVar30 = (float *)((long)puVar40 + 0x1c);
      pfVar8 = (float *)(puVar40 + 4);
      pfVar31 = (float *)((long)puVar40 + 0x24);
      pfVar32 = (float *)(puVar40 + 5);
      pfVar33 = (float *)((long)puVar40 + 0x2c);
      pfVar3 = (float *)(puVar40 + 6);
      pfVar34 = (float *)((long)puVar40 + 0x34);
      pfVar35 = (float *)(puVar40 + 7);
      pfVar36 = (float *)((long)puVar40 + 0x3c);
      puVar9 = puVar40 + 8;
      puVar10 = puVar40 + 9;
      puVar40 = puVar40 + 0x14;
      fVar43 = fVar43 + *pfVar1 * fVar50;
      fVar44 = fVar44 + *pfVar24 * fVar50;
      fVar45 = fVar45 + *pfVar25 * fVar50;
      fVar42 = fVar50 * 0.0 + 0.0;
      fVar81 = fVar81 + *pfVar7 * fVar50;
      fVar82 = fVar82 + *pfVar26 * fVar50;
      fVar83 = fVar83 + *pfVar27 * fVar50;
      fVar84 = fVar50 * 0.0 + 0.0;
      fVar46 = fVar46 + *pfVar38 * fVar50;
      fVar47 = fVar47 + *pfVar22 * fVar50;
      fVar48 = fVar48 + *pfVar23 * fVar50;
      fVar49 = fVar50 * 0.0 + 0.0;
      auVar52._4_4_ = fVar47;
      auVar52._0_4_ = fVar46;
      auVar52._8_4_ = fVar48;
      auVar52._12_4_ = fVar49;
      auVar53._4_4_ = fVar47;
      auVar53._0_4_ = fVar46;
      auVar53._8_4_ = fVar48;
      auVar53._12_4_ = fVar49;
      auVar52 = NEON_ext(auVar52,auVar53,8,1);
      fVar78 = fVar78 + *pfVar6 * fVar50;
      fVar79 = fVar79 + *pfVar20 * fVar50;
      fVar80 = fVar80 + *pfVar21 * fVar50;
      fVar48 = fVar50 * 0.0 + 0.0;
      auVar18._4_4_ = fVar82;
      auVar18._0_4_ = fVar81;
      auVar18._8_4_ = fVar83;
      auVar18._12_4_ = fVar84;
      auVar19._4_4_ = fVar82;
      auVar19._0_4_ = fVar81;
      auVar19._8_4_ = fVar83;
      auVar19._12_4_ = fVar84;
      auVar53 = NEON_ext(auVar18,auVar19,8,1);
      fVar62 = fVar62 + *pfVar8 * fVar50;
      fVar63 = fVar63 + *pfVar31 * fVar50;
      fVar64 = fVar64 + *pfVar32 * fVar50;
      fVar65 = fVar65 + *pfVar33 * fVar50;
      auVar54._4_4_ = fVar79;
      auVar54._0_4_ = fVar78;
      auVar54._8_4_ = fVar80;
      auVar54._12_4_ = fVar48;
      auVar17._4_4_ = fVar79;
      auVar17._0_4_ = fVar78;
      auVar17._8_4_ = fVar80;
      auVar17._12_4_ = fVar48;
      auVar54 = NEON_ext(auVar54,auVar17,8,1);
      fVar74 = fVar74 + *pfVar3 * fVar50;
      fVar75 = fVar75 + *pfVar34 * fVar50;
      fVar76 = fVar76 + *pfVar35 * fVar50;
      fVar77 = fVar77 + *pfVar36 * fVar50;
      auVar56._4_4_ = fVar75;
      auVar56._0_4_ = fVar74;
      auVar56._8_4_ = fVar76;
      auVar56._12_4_ = fVar77;
      auVar16._4_4_ = fVar75;
      auVar16._0_4_ = fVar74;
      auVar16._8_4_ = fVar76;
      auVar16._12_4_ = fVar77;
      auVar56 = NEON_ext(auVar56,auVar16,8,1);
      fVar66 = fVar66 + *pfVar2 * fVar50;
      fVar67 = fVar67 + *pfVar28 * fVar50;
      fVar68 = fVar68 + *pfVar29 * fVar50;
      fVar69 = fVar69 + *pfVar30 * fVar50;
      auVar55._4_4_ = fVar63;
      auVar55._0_4_ = fVar62;
      auVar55._8_4_ = fVar64;
      auVar55._12_4_ = fVar65;
      auVar11._4_4_ = fVar63;
      auVar11._0_4_ = fVar62;
      auVar11._8_4_ = fVar64;
      auVar11._12_4_ = fVar65;
      auVar55 = NEON_ext(auVar55,auVar11,8,1);
      fVar70 = fVar70 + (float)*puVar9 * fVar50;
      fVar71 = fVar71 + (float)((ulong)*puVar9 >> 0x20) * fVar50;
      fVar72 = fVar72 + (float)*puVar10 * fVar50;
      fVar73 = fVar73 + (float)((ulong)*puVar10 >> 0x20) * fVar50;
      auVar61._4_4_ = fVar44;
      auVar61._0_4_ = fVar43;
      auVar61._8_4_ = fVar45;
      auVar61._12_4_ = fVar42;
      auVar58._4_4_ = fVar44;
      auVar58._0_4_ = fVar43;
      auVar58._8_4_ = fVar45;
      auVar58._12_4_ = fVar42;
      auVar61 = NEON_ext(auVar61,auVar58,8,1);
      fVar45 = auVar61._0_4_;
      auVar12._4_4_ = fVar67;
      auVar12._0_4_ = fVar66;
      auVar12._8_4_ = fVar68;
      auVar12._12_4_ = fVar69;
      auVar13._4_4_ = fVar67;
      auVar13._0_4_ = fVar66;
      auVar13._8_4_ = fVar68;
      auVar13._12_4_ = fVar69;
      auVar61 = NEON_ext(auVar12,auVar13,8,1);
      auVar14._4_4_ = fVar71;
      auVar14._0_4_ = fVar70;
      auVar14._8_4_ = fVar72;
      auVar14._12_4_ = fVar73;
      auVar15._4_4_ = fVar71;
      auVar15._0_4_ = fVar70;
      auVar15._8_4_ = fVar72;
      auVar15._12_4_ = fVar73;
      auVar58 = NEON_ext(auVar14,auVar15,8,1);
      fVar48 = auVar52._0_4_;
      fVar83 = auVar53._0_4_;
      fVar80 = auVar54._0_4_;
      fVar76 = auVar56._0_4_;
      fVar64 = auVar55._0_4_;
      fVar68 = auVar61._0_4_;
      fVar72 = auVar58._0_4_;
      fVar77 = 0.0;
      fVar65 = 0.0;
      fVar69 = 0.0;
      fVar73 = 0.0;
    } while (uVar37 < *(byte *)(lVar41 + 1));
    sVar5 = (short)param_1[2];
  }
  if (sVar5 == -1) {
    puVar40 = (undefined8 *)*param_1;
    *puVar40 = CONCAT44(fVar67,fVar66);
    *(float *)(puVar40 + 1) = fVar68;
    lVar39 = *param_1;
    *(ulong *)(lVar39 + 0x10) = CONCAT44(fVar63,fVar62);
    *(float *)(lVar39 + 0x18) = fVar64;
    sVar5 = *(short *)((long)param_1 + 0x12);
  }
  else {
    FUN_00163630(fVar43 * *(float *)(lVar41 + 0x20),fVar46 * *(float *)(lVar41 + 0x24),0,*param_1);
    sVar5 = *(short *)((long)param_1 + 0x12);
  }
  if (sVar5 == -1) {
    puVar40 = (undefined8 *)param_1[1];
    *puVar40 = CONCAT44(fVar75,fVar74);
    *(float *)(puVar40 + 1) = fVar76;
    lVar41 = param_1[1];
    *(ulong *)(lVar41 + 0x10) = CONCAT44(fVar71,fVar70);
    *(float *)(lVar41 + 0x18) = fVar72;
    return;
  }
  FUN_00163630(fVar81 * *(float *)(lVar41 + 0x28),fVar78 * *(float *)(lVar41 + 0x2c),0,param_1[1]);
  return;
}


