/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01398ad0; name: FUN_01398ad0
 */


void FUN_01398ad0(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  float fVar6;
  float fVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float local_7c;
  float local_78;
  float local_74;
  long local_48;
  
  puVar5 = PTR_PTR_02718e90;
  uVar4 = DAT_01d4c694;
  uVar3 = DAT_01d4c218;
  if (*(int *)(param_1 + 0xb8) == 0) {
    FUN_01399620(&local_48,param_1);
    if (local_48 != 0) {
      lVar10 = FUN_00794780(*(undefined8 *)(param_1 + 0x98));
      fVar15 = DAT_02a71510;
      fVar14 = DAT_02a71500;
      puVar5 = PTR_PTR_02718e90;
      if ((lVar10 != 0) && (0 < *(int *)(lVar10 + 0x17c))) {
        local_74 = 0.5;
        if (0.0 < *(float *)(local_48 + 0x7c)) {
          local_74 = *(float *)(local_48 + 0xb0) / *(float *)(local_48 + 0x7c) + 0.5;
        }
        local_78 = 0.5;
        local_7c = 1.0;
        pfVar1 = &local_7c;
        if (local_74 <= 1.0) {
          pfVar1 = &local_74;
        }
        pfVar2 = &local_78;
        if (0.5 <= local_74) {
          pfVar2 = pfVar1;
        }
        fVar23 = *pfVar2;
        fVar17 = (float)(**(code **)PTR_PTR_02718e90)(fVar23);
        fVar22 = DAT_02a71514;
        fVar11 = DAT_02a71504;
        fVar18 = (float)(**(code **)puVar5)(fVar23);
        fVar6 = DAT_02a71518;
        fVar13 = DAT_02a71508;
        fVar19 = (float)(**(code **)puVar5)(fVar23);
        fVar7 = DAT_02a7151c;
        fVar12 = DAT_02a7150c;
        fVar23 = (float)(**(code **)puVar5)(fVar23);
        *(ulong *)(lVar10 + 0x108) =
             CONCAT44(fVar12 + (fVar7 - fVar12) * fVar23,fVar13 + (fVar6 - fVar13) * fVar19);
        *(ulong *)(lVar10 + 0x100) =
             CONCAT44(fVar11 + (fVar22 - fVar11) * fVar18,fVar14 + (fVar15 - fVar14) * fVar17);
      }
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))((long *)(local_48 + 0x48));
    }
  }
  else {
    lVar10 = 0;
    do {
      if ((((*(long *)(param_1 + 0x80 + lVar10) != 0) &&
           (lVar8 = FUN_00794780(), fVar15 = DAT_02a71510, fVar14 = DAT_02a71500, lVar8 != 0)) &&
          (*(int *)(lVar8 + 0x17c) != 0)) && (*(int *)(param_1 + 0xa0) != 0)) {
        if (*(int *)(param_1 + 0xa0) == 3) {
          uVar21 = *(undefined8 *)(lVar8 + 0x108);
          uVar20 = *(undefined8 *)(lVar8 + 0x100);
          fVar11 = (float)(**(code **)puVar5)(uVar3);
          fVar14 = DAT_02a71514;
          fVar13 = (float)((ulong)uVar20 >> 0x20);
          fVar12 = (float)uVar20 + (fVar15 - (float)uVar20) * fVar11;
          fVar11 = (float)(**(code **)puVar5)(uVar3);
          fVar15 = DAT_02a71518;
          fVar13 = fVar13 + (fVar14 - fVar13) * fVar11;
          fVar14 = (float)uVar21;
          fVar11 = (float)(**(code **)puVar5)(uVar3,uVar20);
          fVar14 = fVar14 + (fVar15 - fVar14) * fVar11;
          pcVar9 = *(code **)puVar5;
          fVar22 = (float)((ulong)uVar21 >> 0x20);
          fVar15 = DAT_02a7151c;
          uVar16 = uVar3;
        }
        else {
          uVar21 = *(undefined8 *)(lVar8 + 0x108);
          uVar20 = *(undefined8 *)(lVar8 + 0x100);
          fVar11 = (float)(**(code **)puVar5)(uVar4);
          fVar15 = DAT_02a71504;
          fVar13 = (float)((ulong)uVar20 >> 0x20);
          fVar12 = (float)uVar20 + (fVar14 - (float)uVar20) * fVar11;
          fVar14 = (float)(**(code **)puVar5)(uVar4);
          fVar11 = DAT_02a71508;
          fVar13 = fVar13 + (fVar15 - fVar13) * fVar14;
          fVar14 = (float)uVar21;
          fVar15 = (float)(**(code **)puVar5)(uVar4,uVar20);
          fVar22 = (float)((ulong)uVar21 >> 0x20);
          fVar14 = fVar14 + (fVar11 - fVar14) * fVar15;
          pcVar9 = *(code **)puVar5;
          fVar15 = DAT_02a7150c;
          uVar16 = uVar4;
        }
        fVar11 = (float)(*pcVar9)(uVar16,uVar20);
        *(ulong *)(lVar8 + 0x108) = CONCAT44(fVar22 + (fVar15 - fVar22) * fVar11,fVar14);
        *(ulong *)(lVar8 + 0x100) = CONCAT44(fVar13,fVar12);
      }
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x20);
  }
  return;
}


