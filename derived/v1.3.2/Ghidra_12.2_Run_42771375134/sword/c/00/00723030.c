/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00723030; name: FUN_00723030
 */


void FUN_00723030(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,uint param_6)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [12];
  float fVar13;
  undefined1 auVar12 [16];
  float fVar14;
  float fVar15;
  float fVar17;
  undefined8 uVar16;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar27;
  undefined8 uVar26;
  float fVar28;
  float fVar30;
  undefined8 uVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar29 = param_4._8_8_;
  uVar26 = param_4._0_8_;
  fVar9 = param_3._12_4_;
  fVar23 = param_3._8_4_;
  fVar21 = param_3._4_4_;
  fVar19 = param_3._0_4_;
  uVar18 = param_2._8_8_;
  uVar16 = param_2._0_8_;
  uVar5 = (ulong)(int)param_6;
  uVar3 = 1 << (ulong)(param_6 & 0x1f);
  if ((*(uint *)(*(long *)(param_5 + 0x1e8) + (uVar5 >> 5) * 4) & uVar3) != 0) {
    lVar6 = *(long *)(param_5 + 0x1b8);
    lVar4 = *(long *)(lVar6 + uVar5 * 0x130 + 0x128);
    iVar2 = *(int *)(lVar4 + 0x44);
    if (iVar2 < 0) {
      auVar12 = FUN_0075e360(lVar6 + uVar5 * 0x130 + 0x30);
    }
    else {
      lVar1 = lVar6 + uVar5 * 0x130 + 0x30;
      if (*(char *)(lVar4 + 0xc4) == '\0') {
        auVar11 = FUN_0075e360(lVar1);
        fVar13 = (float)uVar29;
        fVar10 = (float)uVar18;
      }
      else {
        lVar4 = lVar6 + (long)iVar2 * 0x130;
        uStack_48 = *(undefined8 *)(lVar4 + 0x38);
        local_50 = *(undefined8 *)(lVar4 + 0x30);
        auVar11 = FUN_0075e540(lVar1,&local_50);
        fVar13 = (float)uVar29;
        fVar10 = (float)uVar18;
      }
      fVar15 = auVar11._8_4_;
      FUN_00723030(param_5,iVar2);
      lVar4 = *(long *)(param_5 + 0x1b8) + (long)iVar2 * 0x130;
      fVar25 = (float)*(undefined8 *)(lVar4 + 0xa0);
      fVar27 = (float)((ulong)*(undefined8 *)(lVar4 + 0xa0) >> 0x20);
      fVar20 = fVar27 * fVar19;
      fVar28 = (float)*(undefined8 *)(lVar4 + 0xa8);
      fVar22 = fVar28 * fVar19;
      fVar30 = (float)((ulong)*(undefined8 *)(lVar4 + 0xa8) >> 0x20);
      fVar24 = fVar30 * fVar19;
      fVar14 = auVar11._0_4_;
      fVar31 = (float)*(undefined8 *)(lVar4 + 0xb0);
      fVar32 = (float)((ulong)*(undefined8 *)(lVar4 + 0xb0) >> 0x20);
      fVar33 = (float)*(undefined8 *)(lVar4 + 0xb8);
      fVar7 = fVar33 * fVar21;
      fVar34 = (float)((ulong)*(undefined8 *)(lVar4 + 0xb8) >> 0x20);
      fVar8 = fVar34 * fVar21;
      fVar17 = auVar11._4_4_;
      fVar35 = (float)*(undefined8 *)(lVar4 + 0xc0);
      fVar36 = (float)((ulong)*(undefined8 *)(lVar4 + 0xc0) >> 0x20);
      fVar37 = (float)*(undefined8 *)(lVar4 + 200);
      fVar38 = (float)((ulong)*(undefined8 *)(lVar4 + 200) >> 0x20);
      fVar9 = fVar38 * fVar23;
      fVar19 = fVar25 * fVar19 + fVar31 * fVar21 + fVar35 * fVar23;
      fVar21 = fVar20 + fVar32 * fVar21 + fVar36 * fVar23;
      fVar23 = fVar22 + fVar7 + fVar37 * fVar23;
      fVar9 = fVar24 + fVar8 + fVar9;
      auVar12._4_4_ = fVar27 * fVar14 + fVar32 * fVar17 + fVar36 * fVar15;
      auVar12._0_4_ = fVar25 * fVar14 + fVar31 * fVar17 + fVar35 * fVar15;
      auVar12._12_4_ = fVar30 * fVar14 + fVar34 * fVar17 + fVar38 * fVar15;
      auVar12._8_4_ = fVar28 * fVar14 + fVar33 * fVar17 + fVar37 * fVar15;
      fVar15 = (float)uVar16;
      fVar7 = (float)uVar26;
      fVar8 = (float)((ulong)uVar26 >> 0x20);
      fVar14 = (float)((ulong)uVar16 >> 0x20);
      uVar16 = CONCAT44(fVar27 * fVar15 + fVar32 * fVar14 + fVar36 * fVar10,
                        fVar25 * fVar15 + fVar31 * fVar14 + fVar35 * fVar10);
      uVar18 = CONCAT44(fVar30 * fVar15 + fVar34 * fVar14 + fVar38 * fVar10,
                        fVar28 * fVar15 + fVar33 * fVar14 + fVar37 * fVar10);
      uVar26 = CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0xd0) >> 0x20) +
                        fVar27 * fVar7 + fVar32 * fVar8 + fVar36 * fVar13,
                        (float)*(undefined8 *)(lVar4 + 0xd0) +
                        fVar25 * fVar7 + fVar31 * fVar8 + fVar35 * fVar13);
      uVar29 = CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0xd8) >> 0x20) +
                        fVar30 * fVar7 + fVar34 * fVar8 + fVar38 * fVar13,
                        (float)*(undefined8 *)(lVar4 + 0xd8) +
                        fVar28 * fVar7 + fVar33 * fVar8 + fVar37 * fVar13);
    }
    lVar6 = lVar6 + uVar5 * 0x130;
    lVar4 = (uVar5 >> 5) * 4;
    fVar22 = (float)*(undefined8 *)(lVar6 + 0x60);
    fVar10 = auVar12._0_4_;
    fVar13 = auVar12._4_4_;
    fVar7 = auVar12._8_4_;
    fVar8 = auVar12._12_4_;
    fVar24 = (float)((ulong)*(undefined8 *)(lVar6 + 0x60) >> 0x20);
    fVar15 = (float)uVar16;
    fVar14 = (float)((ulong)uVar16 >> 0x20);
    fVar17 = (float)uVar18;
    fVar20 = (float)((ulong)uVar18 >> 0x20);
    *(undefined1 (*) [16])(lVar6 + 0xa0) = auVar12;
    *(undefined8 *)(lVar6 + 0xb8) = uVar18;
    *(undefined8 *)(lVar6 + 0xb0) = uVar16;
    fVar25 = (float)*(undefined8 *)(lVar6 + 0x68);
    fVar27 = (float)*(undefined8 *)(lVar6 + 0x70);
    fVar28 = (float)((ulong)*(undefined8 *)(lVar6 + 0x70) >> 0x20);
    fVar31 = (float)*(undefined8 *)(lVar6 + 0x80);
    fVar32 = (float)((ulong)*(undefined8 *)(lVar6 + 0x80) >> 0x20);
    fVar34 = (float)*(undefined8 *)(lVar6 + 0x90);
    fVar35 = (float)((ulong)*(undefined8 *)(lVar6 + 0x90) >> 0x20);
    *(ulong *)(lVar6 + 200) = CONCAT44(fVar9,fVar23);
    *(ulong *)(lVar6 + 0xc0) = CONCAT44(fVar21,fVar19);
    *(undefined8 *)(lVar6 + 0xd8) = uVar29;
    *(undefined8 *)(lVar6 + 0xd0) = uVar26;
    fVar36 = (float)*(undefined8 *)(lVar6 + 0x98);
    fVar30 = (float)*(undefined8 *)(lVar6 + 0x78);
    fVar33 = (float)*(undefined8 *)(lVar6 + 0x88);
    *(ulong *)(lVar6 + 0xe8) =
         CONCAT44(fVar8 * fVar22 + fVar20 * fVar24 + fVar9 * fVar25,
                  fVar7 * fVar22 + fVar17 * fVar24 + fVar23 * fVar25);
    *(ulong *)(lVar6 + 0xe0) =
         CONCAT44(fVar13 * fVar22 + fVar14 * fVar24 + fVar21 * fVar25,
                  fVar10 * fVar22 + fVar15 * fVar24 + fVar19 * fVar25);
    *(ulong *)(lVar6 + 0xf8) =
         CONCAT44(fVar8 * fVar27 + fVar20 * fVar28 + fVar9 * fVar30,
                  fVar7 * fVar27 + fVar17 * fVar28 + fVar23 * fVar30);
    *(ulong *)(lVar6 + 0xf0) =
         CONCAT44(fVar13 * fVar27 + fVar14 * fVar28 + fVar21 * fVar30,
                  fVar10 * fVar27 + fVar15 * fVar28 + fVar19 * fVar30);
    *(ulong *)(lVar6 + 0x108) =
         CONCAT44(fVar8 * fVar31 + fVar20 * fVar32 + fVar9 * fVar33,
                  fVar7 * fVar31 + fVar17 * fVar32 + fVar23 * fVar33);
    *(ulong *)(lVar6 + 0x100) =
         CONCAT44(fVar13 * fVar31 + fVar14 * fVar32 + fVar21 * fVar33,
                  fVar10 * fVar31 + fVar15 * fVar32 + fVar19 * fVar33);
    *(ulong *)(lVar6 + 0x118) =
         CONCAT44((float)((ulong)uVar29 >> 0x20) + fVar8 * fVar34 + fVar20 * fVar35 + fVar9 * fVar36
                  ,(float)uVar29 + fVar7 * fVar34 + fVar17 * fVar35 + fVar23 * fVar36);
    *(ulong *)(lVar6 + 0x110) =
         CONCAT44((float)((ulong)uVar26 >> 0x20) +
                  fVar13 * fVar34 + fVar14 * fVar35 + fVar21 * fVar36,
                  (float)uVar26 + fVar10 * fVar34 + fVar15 * fVar35 + fVar19 * fVar36);
    *(uint *)(*(long *)(param_5 + 0x1e8) + lVar4) =
         *(uint *)(*(long *)(param_5 + 0x1e8) + lVar4) & (uVar3 ^ 0xffffffff);
  }
  return;
}


