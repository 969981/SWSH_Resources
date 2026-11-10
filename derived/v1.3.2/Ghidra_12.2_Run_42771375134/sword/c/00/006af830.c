/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006af830; name: FUN_006af830
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006af830(float param_1,float param_2,long param_3,long param_4)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 uVar43;
  undefined8 uVar44;
  long lVar45;
  ulong uVar46;
  long lVar47;
  long lVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined4 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  float fVar66;
  float fVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 local_80;
  undefined8 uStack_78;
  
  param_1 = param_1 * 0.5;
  if (*(uint *)(param_3 + 0x20) < 9 &&
      (1 << (ulong)(*(uint *)(param_3 + 0x20) & 0x1f) & 0x146U) != 0) {
    fVar49 = cosf(param_1);
    fVar50 = sinf(param_1);
    uVar44 = DAT_01cd5418;
    uVar43 = DAT_01cd5270;
    uVar69 = DAT_01cd5120;
    uVar65 = DAT_01cd50f8;
    uVar64 = DAT_01cd50b0;
    uVar62 = DAT_01cd4f90;
    fVar51 = fVar50 * 0.0;
    lVar45 = *(long *)(param_3 + 8);
    pauVar1 = (undefined1 (*) [12])(lVar45 + 0x40);
    uVar54 = (undefined4)((ulong)*(undefined8 *)(lVar45 + 0x48) >> 0x20);
    fVar52 = (float)*(undefined8 *)*pauVar1;
    fVar53 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    auVar18._12_4_ = uVar54;
    auVar18._0_12_ = *pauVar1;
    uVar60 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd4f90);
    auVar28._4_4_ = fVar51;
    auVar28._0_4_ = fVar51;
    auVar28._8_4_ = fVar50;
    auVar28._12_4_ = fVar49;
    uVar7 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd4f90);
    auVar29._4_4_ = fVar51;
    auVar29._0_4_ = fVar51;
    auVar29._8_4_ = fVar50;
    auVar29._12_4_ = fVar49;
    uVar68 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd5120);
    auVar12._4_4_ = fVar51;
    auVar12._0_4_ = fVar51;
    auVar12._8_4_ = fVar51;
    auVar12._12_4_ = fVar51;
    uVar16 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd50b0);
    fVar55 = (float)((ulong)uVar60 >> 0x20);
    auVar19._12_4_ = uVar54;
    auVar19._0_12_ = *pauVar1;
    uVar61 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd50f8);
    fVar57 = (float)((ulong)uVar61 >> 0x20);
    auVar20._12_4_ = uVar54;
    auVar20._0_12_ = *pauVar1;
    uVar63 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd5418);
    lVar48 = (long)*(int *)(*(long *)(lVar45 + 0x128) + 0x40);
    auVar30._4_4_ = fVar51;
    auVar30._0_4_ = fVar51;
    auVar30._8_4_ = fVar50;
    auVar30._12_4_ = fVar49;
    uVar27 = a64_TBL(ZEXT816(0),auVar30,DAT_01cd50f8);
    fVar58 = (float)_DAT_01d4ae90;
    fVar59 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar66 = (float)_UNK_01d4ae98;
    fVar67 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    fVar56 = (float)((ulong)uVar63 >> 0x20);
    auVar31._4_4_ = fVar51;
    auVar31._0_4_ = fVar51;
    auVar31._8_4_ = fVar50;
    auVar31._12_4_ = fVar49;
    uVar8 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd5418);
    auVar32._4_4_ = fVar51;
    auVar32._0_4_ = fVar51;
    auVar32._8_4_ = fVar50;
    auVar32._12_4_ = fVar49;
    uVar17 = a64_TBL(ZEXT816(0),auVar32,DAT_01cd5270);
    uStack_78 = CONCAT44((fVar49 * fVar55 + fVar67 * fVar57 * (float)((ulong)uVar68 >> 0x20) +
                         fVar67 * fVar53 * (float)((ulong)uVar16 >> 0x20)) -
                         fVar56 * (float)((ulong)uVar17 >> 0x20),
                         (fVar50 * (float)uVar60 + fVar66 * (float)uVar61 * (float)uVar68 +
                         fVar66 * fVar52 * (float)uVar16) - (float)uVar63 * (float)uVar17);
    local_80 = CONCAT44((fVar51 * fVar55 + fVar59 * fVar53 * (float)((ulong)uVar7 >> 0x20) +
                        fVar59 * fVar56 * (float)((ulong)uVar27 >> 0x20)) -
                        fVar57 * (float)((ulong)uVar8 >> 0x20),
                        (fVar51 * (float)uVar60 + fVar58 * fVar52 * (float)uVar7 +
                        fVar58 * (float)uVar63 * (float)uVar27) - (float)uVar61 * (float)uVar8);
    FUN_0075e320(*(long *)(param_4 + 0x1b8) + lVar48 * 0x130 + 0x30,&local_80);
    lVar45 = *(long *)(param_4 + 0x1e8);
    if (*(long *)(param_4 + 0x1f0) != lVar45) {
      lVar48 = *(long *)(*(long *)(param_4 + 0x1b8) + lVar48 * 0x130 + 0x128);
      uVar46 = 0;
      do {
        lVar47 = uVar46 * 4;
        uVar46 = uVar46 + 1;
        *(uint *)(lVar45 + lVar47) =
             *(uint *)(lVar45 + lVar47) | *(uint *)(*(long *)(lVar48 + 200) + lVar47);
        lVar45 = *(long *)(param_4 + 0x1e8);
      } while (uVar46 < (ulong)(*(long *)(param_4 + 0x1f0) - lVar45 >> 2));
    }
    fVar49 = cosf(param_2 * 0.5);
    fVar50 = sinf(param_2 * 0.5);
    fVar51 = fVar50 * 0.0;
    lVar45 = *(long *)(param_3 + 8);
    pauVar1 = (undefined1 (*) [12])(lVar45 + 0x40);
    uVar54 = (undefined4)((ulong)*(undefined8 *)(lVar45 + 0x48) >> 0x20);
    fVar52 = (float)*(undefined8 *)*pauVar1;
    fVar53 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    auVar33._4_4_ = fVar51;
    auVar33._0_4_ = fVar50;
    auVar33._8_4_ = fVar51;
    auVar33._12_4_ = fVar49;
    uVar7 = a64_TBL(ZEXT816(0),auVar33,uVar62);
    auVar21._12_4_ = uVar54;
    auVar21._0_12_ = *pauVar1;
    uVar62 = a64_TBL(ZEXT816(0),auVar21,uVar62);
    fVar55 = (float)((ulong)uVar62 >> 0x20);
    auVar22._12_4_ = uVar54;
    auVar22._0_12_ = *pauVar1;
    uVar60 = a64_TBL(ZEXT816(0),auVar22,uVar65);
    auVar34._4_4_ = fVar51;
    auVar34._0_4_ = fVar50;
    auVar34._8_4_ = fVar51;
    auVar34._12_4_ = fVar49;
    uVar69 = a64_TBL(ZEXT816(0),auVar34,uVar69);
    auVar13._4_4_ = fVar51;
    auVar13._0_4_ = fVar50;
    auVar13._8_4_ = fVar50;
    auVar13._12_4_ = fVar51;
    uVar16 = a64_TBL(ZEXT816(0),auVar13,uVar64);
    lVar48 = (long)*(int *)(*(long *)(lVar45 + 0x128) + 0x40);
    fVar57 = (float)((ulong)uVar60 >> 0x20);
    auVar23._12_4_ = uVar54;
    auVar23._0_12_ = *pauVar1;
    uVar64 = a64_TBL(ZEXT816(0),auVar23,uVar44);
    auVar35._4_4_ = fVar51;
    auVar35._0_4_ = fVar50;
    auVar35._8_4_ = fVar51;
    auVar35._12_4_ = fVar49;
    uVar27 = a64_TBL(ZEXT816(0),auVar35,uVar65);
    fVar56 = (float)((ulong)uVar64 >> 0x20);
    auVar36._4_4_ = fVar51;
    auVar36._0_4_ = fVar50;
    auVar36._8_4_ = fVar51;
    auVar36._12_4_ = fVar49;
    uVar8 = a64_TBL(ZEXT816(0),auVar36,uVar44);
    auVar37._4_4_ = fVar51;
    auVar37._0_4_ = fVar50;
    auVar37._8_4_ = fVar51;
    auVar37._12_4_ = fVar49;
    uVar17 = a64_TBL(ZEXT816(0),auVar37,uVar43);
    uStack_78 = CONCAT44((fVar49 * fVar55 + fVar67 * fVar57 * (float)((ulong)uVar69 >> 0x20) +
                         fVar67 * fVar53 * (float)((ulong)uVar16 >> 0x20)) -
                         fVar56 * (float)((ulong)uVar17 >> 0x20),
                         (fVar51 * (float)uVar62 + fVar66 * (float)uVar60 * (float)uVar69 +
                         fVar66 * fVar52 * (float)uVar16) - (float)uVar64 * (float)uVar17);
    local_80 = CONCAT44((fVar51 * fVar55 + fVar59 * fVar53 * (float)((ulong)uVar7 >> 0x20) +
                        fVar59 * fVar56 * (float)((ulong)uVar27 >> 0x20)) -
                        fVar57 * (float)((ulong)uVar8 >> 0x20),
                        (fVar50 * (float)uVar62 + fVar58 * fVar52 * (float)uVar7 +
                        fVar58 * (float)uVar64 * (float)uVar27) - (float)uVar60 * (float)uVar8);
    FUN_0075e320(*(long *)(param_4 + 0x1b8) + lVar48 * 0x130 + 0x30,&local_80);
    lVar45 = *(long *)(param_4 + 0x1e8);
    if (*(long *)(param_4 + 0x1f0) != lVar45) {
      lVar48 = *(long *)(*(long *)(param_4 + 0x1b8) + lVar48 * 0x130 + 0x128);
      uVar46 = 0;
      do {
        lVar47 = uVar46 * 4;
        uVar46 = uVar46 + 1;
        *(uint *)(lVar45 + lVar47) =
             *(uint *)(lVar45 + lVar47) | *(uint *)(*(long *)(lVar48 + 200) + lVar47);
        lVar45 = *(long *)(param_4 + 0x1e8);
      } while (uVar46 < (ulong)(*(long *)(param_4 + 0x1f0) - lVar45 >> 2));
    }
  }
  else {
    fVar49 = cosf(param_1);
    fVar50 = sinf(param_1);
    uVar61 = DAT_01cd5418;
    uVar60 = DAT_01cd5270;
    uVar44 = DAT_01cd5120;
    uVar43 = DAT_01cd50f8;
    uVar69 = DAT_01cd50b0;
    uVar65 = DAT_01cd4f90;
    fVar51 = fVar50 * 0.0;
    lVar45 = *(long *)(param_3 + 8);
    pauVar1 = (undefined1 (*) [12])(lVar45 + 0x40);
    uVar54 = (undefined4)((ulong)*(undefined8 *)(lVar45 + 0x48) >> 0x20);
    fVar52 = (float)*(undefined8 *)*pauVar1;
    fVar53 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    auVar2._4_4_ = fVar50;
    auVar2._0_4_ = fVar51;
    auVar2._8_4_ = fVar51;
    auVar2._12_4_ = fVar49;
    uVar68 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd5120);
    auVar9._12_4_ = uVar54;
    auVar9._0_12_ = *pauVar1;
    uVar63 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd50f8);
    auVar3._4_4_ = fVar50;
    auVar3._0_4_ = fVar51;
    auVar3._8_4_ = fVar51;
    auVar3._12_4_ = fVar49;
    uVar62 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd4f90);
    auVar10._12_4_ = uVar54;
    auVar10._0_12_ = *pauVar1;
    uVar27 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd4f90);
    fVar59 = (float)((ulong)uVar27 >> 0x20);
    auVar14._4_4_ = fVar50;
    auVar14._0_4_ = fVar51;
    auVar14._8_4_ = fVar51;
    auVar14._12_4_ = fVar50;
    uVar17 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd50b0);
    fVar66 = (float)((ulong)uVar63 >> 0x20);
    auVar11._12_4_ = uVar54;
    auVar11._0_12_ = *pauVar1;
    uVar64 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5418);
    fVar67 = (float)((ulong)uVar64 >> 0x20);
    auVar4._4_4_ = fVar50;
    auVar4._0_4_ = fVar51;
    auVar4._8_4_ = fVar51;
    auVar4._12_4_ = fVar49;
    uVar8 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd50f8);
    lVar48 = (long)*(int *)(*(long *)(lVar45 + 0x128) + 0x40);
    fVar57 = (float)_UNK_01d4ae98;
    fVar58 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    fVar55 = (float)_DAT_01d4ae90;
    fVar56 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    auVar5._4_4_ = fVar50;
    auVar5._0_4_ = fVar51;
    auVar5._8_4_ = fVar51;
    auVar5._12_4_ = fVar49;
    uVar16 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5418);
    auVar6._4_4_ = fVar50;
    auVar6._0_4_ = fVar51;
    auVar6._8_4_ = fVar51;
    auVar6._12_4_ = fVar49;
    uVar7 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5270);
    uStack_78 = CONCAT44((fVar49 * fVar59 + fVar58 * fVar66 * (float)((ulong)uVar68 >> 0x20) +
                         fVar58 * fVar53 * (float)((ulong)uVar17 >> 0x20)) -
                         fVar67 * (float)((ulong)uVar7 >> 0x20),
                         (fVar51 * (float)uVar27 + fVar57 * (float)uVar63 * (float)uVar68 +
                         fVar57 * fVar52 * (float)uVar17) - (float)uVar64 * (float)uVar7);
    local_80 = CONCAT44((fVar50 * fVar59 + fVar56 * fVar53 * (float)((ulong)uVar62 >> 0x20) +
                        fVar56 * fVar67 * (float)((ulong)uVar8 >> 0x20)) -
                        fVar66 * (float)((ulong)uVar16 >> 0x20),
                        (fVar51 * (float)uVar27 + fVar55 * fVar52 * (float)uVar62 +
                        fVar55 * (float)uVar64 * (float)uVar8) - (float)uVar63 * (float)uVar16);
    FUN_0075e320(*(long *)(param_4 + 0x1b8) + lVar48 * 0x130 + 0x30,&local_80);
    lVar45 = *(long *)(param_4 + 0x1e8);
    if (*(long *)(param_4 + 0x1f0) != lVar45) {
      lVar48 = *(long *)(*(long *)(param_4 + 0x1b8) + lVar48 * 0x130 + 0x128);
      uVar46 = 0;
      do {
        lVar47 = uVar46 * 4;
        uVar46 = uVar46 + 1;
        *(uint *)(lVar45 + lVar47) =
             *(uint *)(lVar45 + lVar47) | *(uint *)(*(long *)(lVar48 + 200) + lVar47);
        lVar45 = *(long *)(param_4 + 0x1e8);
      } while (uVar46 < (ulong)(*(long *)(param_4 + 0x1f0) - lVar45 >> 2));
    }
    fVar49 = cosf(param_2 * 0.5);
    fVar50 = sinf(param_2 * 0.5);
    fVar51 = fVar50 * 0.0;
    lVar45 = *(long *)(param_3 + 8);
    auVar15._4_4_ = fVar51;
    auVar15._0_4_ = fVar51;
    auVar15._8_4_ = fVar51;
    auVar15._12_4_ = fVar51;
    uVar16 = a64_TBL(ZEXT816(0),auVar15,uVar69);
    pauVar1 = (undefined1 (*) [12])(lVar45 + 0x40);
    uVar54 = (undefined4)((ulong)*(undefined8 *)(lVar45 + 0x48) >> 0x20);
    fVar52 = (float)*(undefined8 *)*pauVar1;
    fVar53 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    auVar38._4_4_ = fVar51;
    auVar38._0_4_ = fVar51;
    auVar38._8_4_ = fVar50;
    auVar38._12_4_ = fVar49;
    uVar7 = a64_TBL(ZEXT816(0),auVar38,uVar65);
    auVar24._12_4_ = uVar54;
    auVar24._0_12_ = *pauVar1;
    uVar62 = a64_TBL(ZEXT816(0),auVar24,uVar65);
    fVar59 = (float)((ulong)uVar62 >> 0x20);
    auVar25._12_4_ = uVar54;
    auVar25._0_12_ = *pauVar1;
    uVar64 = a64_TBL(ZEXT816(0),auVar25,uVar43);
    auVar39._4_4_ = fVar51;
    auVar39._0_4_ = fVar51;
    auVar39._8_4_ = fVar50;
    auVar39._12_4_ = fVar49;
    uVar69 = a64_TBL(ZEXT816(0),auVar39,uVar44);
    lVar48 = (long)*(int *)(*(long *)(lVar45 + 0x128) + 0x40);
    fVar67 = (float)((ulong)uVar64 >> 0x20);
    auVar26._12_4_ = uVar54;
    auVar26._0_12_ = *pauVar1;
    uVar65 = a64_TBL(ZEXT816(0),auVar26,uVar61);
    auVar40._4_4_ = fVar51;
    auVar40._0_4_ = fVar51;
    auVar40._8_4_ = fVar50;
    auVar40._12_4_ = fVar49;
    uVar27 = a64_TBL(ZEXT816(0),auVar40,uVar43);
    fVar66 = (float)((ulong)uVar65 >> 0x20);
    auVar41._4_4_ = fVar51;
    auVar41._0_4_ = fVar51;
    auVar41._8_4_ = fVar50;
    auVar41._12_4_ = fVar49;
    uVar8 = a64_TBL(ZEXT816(0),auVar41,uVar61);
    auVar42._4_4_ = fVar51;
    auVar42._0_4_ = fVar51;
    auVar42._8_4_ = fVar50;
    auVar42._12_4_ = fVar49;
    uVar17 = a64_TBL(ZEXT816(0),auVar42,uVar60);
    uStack_78 = CONCAT44((fVar49 * fVar59 + fVar58 * fVar67 * (float)((ulong)uVar69 >> 0x20) +
                         fVar58 * fVar53 * (float)((ulong)uVar16 >> 0x20)) -
                         fVar66 * (float)((ulong)uVar17 >> 0x20),
                         (fVar50 * (float)uVar62 + fVar57 * (float)uVar64 * (float)uVar69 +
                         fVar57 * fVar52 * (float)uVar16) - (float)uVar65 * (float)uVar17);
    local_80 = CONCAT44((fVar51 * fVar59 + fVar56 * fVar53 * (float)((ulong)uVar7 >> 0x20) +
                        fVar56 * fVar66 * (float)((ulong)uVar27 >> 0x20)) -
                        fVar67 * (float)((ulong)uVar8 >> 0x20),
                        (fVar51 * (float)uVar62 + fVar55 * fVar52 * (float)uVar7 +
                        fVar55 * (float)uVar65 * (float)uVar27) - (float)uVar64 * (float)uVar8);
    FUN_0075e320(*(long *)(param_4 + 0x1b8) + lVar48 * 0x130 + 0x30,&local_80);
    lVar45 = *(long *)(param_4 + 0x1e8);
    if (*(long *)(param_4 + 0x1f0) != lVar45) {
      lVar48 = *(long *)(*(long *)(param_4 + 0x1b8) + lVar48 * 0x130 + 0x128);
      uVar46 = 0;
      do {
        lVar47 = uVar46 * 4;
        uVar46 = uVar46 + 1;
        *(uint *)(lVar45 + lVar47) =
             *(uint *)(lVar45 + lVar47) | *(uint *)(*(long *)(lVar48 + 200) + lVar47);
        lVar45 = *(long *)(param_4 + 0x1e8);
      } while (uVar46 < (ulong)(*(long *)(param_4 + 0x1f0) - lVar45 >> 2));
    }
  }
  return;
}


