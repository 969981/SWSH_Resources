/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014cbf0; name: FUN_0014cbf0
 */


void FUN_0014cbf0(long param_1)

{
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  iVar1 = *(int *)(param_1 + 800);
  while (iVar1 != 0) {
    FUN_0014e210(param_1);
    if (*(char *)(param_1 + 0x32c) == '\0') {
      uVar12 = *(undefined8 *)(param_1 + 600);
      uVar9 = *(undefined8 *)(param_1 + 0x250);
      uVar6 = *(undefined8 *)(param_1 + 0x268);
      uVar3 = *(undefined8 *)(param_1 + 0x260);
      uVar19 = *(undefined8 *)(param_1 + 0x278);
      uVar16 = *(undefined8 *)(param_1 + 0x270);
    }
    else {
      uVar12 = *(undefined8 *)(param_1 + 600);
      uVar9 = *(undefined8 *)(param_1 + 0x250);
      uVar6 = *(undefined8 *)(param_1 + 0x268);
      uVar3 = *(undefined8 *)(param_1 + 0x260);
      fVar14 = *(float *)(param_1 + 0x280);
      fVar8 = (float)uVar9;
      fVar10 = (float)((ulong)uVar9 >> 0x20);
      fVar11 = (float)uVar12;
      fVar13 = (float)((ulong)uVar12 >> 0x20);
      fVar22 = *(float *)(param_1 + 0x284);
      fVar2 = (float)uVar3;
      fVar4 = (float)((ulong)uVar3 >> 0x20);
      fVar5 = (float)uVar6;
      fVar7 = (float)((ulong)uVar6 >> 0x20);
      fVar23 = *(float *)(param_1 + 0x290);
      fVar24 = *(float *)(param_1 + 0x294);
      fVar27 = *(float *)(param_1 + 0x2a0);
      fVar15 = *(float *)(param_1 + 0x2a4);
      fVar25 = *(float *)(param_1 + 0x288);
      uVar19 = *(undefined8 *)(param_1 + 0x278);
      uVar16 = *(undefined8 *)(param_1 + 0x270);
      fVar18 = (float)uVar16;
      fVar21 = (float)((ulong)uVar16 >> 0x20);
      fVar17 = (float)uVar19;
      fVar20 = (float)((ulong)uVar19 >> 0x20);
      fVar26 = *(float *)(param_1 + 0x298);
      *(ulong *)(param_1 + 0x288) =
           CONCAT44(fVar13 * fVar14 + fVar7 * fVar22 + fVar20 * fVar25,
                    fVar11 * fVar14 + fVar5 * fVar22 + fVar17 * fVar25);
      *(ulong *)(param_1 + 0x280) =
           CONCAT44(fVar10 * fVar14 + fVar4 * fVar22 + fVar21 * fVar25,
                    fVar8 * fVar14 + fVar2 * fVar22 + fVar18 * fVar25);
      *(ulong *)(param_1 + 0x298) =
           CONCAT44(fVar13 * fVar23 + fVar7 * fVar24 + fVar20 * fVar26,
                    fVar11 * fVar23 + fVar5 * fVar24 + fVar17 * fVar26);
      *(ulong *)(param_1 + 0x290) =
           CONCAT44(fVar10 * fVar23 + fVar4 * fVar24 + fVar21 * fVar26,
                    fVar8 * fVar23 + fVar2 * fVar24 + fVar18 * fVar26);
      fVar14 = *(float *)(param_1 + 0x2a8);
      *(ulong *)(param_1 + 0x2a8) =
           CONCAT44(fVar13 * fVar27 + fVar7 * fVar15 + fVar20 * fVar14,
                    fVar11 * fVar27 + fVar5 * fVar15 + fVar17 * fVar14);
      *(ulong *)(param_1 + 0x2a0) =
           CONCAT44(fVar10 * fVar27 + fVar4 * fVar15 + fVar21 * fVar14,
                    fVar8 * fVar27 + fVar2 * fVar15 + fVar18 * fVar14);
    }
    fVar14 = (float)*(undefined8 *)(param_1 + 0x310);
    fVar8 = (float)uVar9 * fVar14;
    fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x310) >> 0x20);
    fVar10 = (float)((ulong)uVar9 >> 0x20) * fVar15;
    fVar18 = (float)*(undefined8 *)(param_1 + 0x318);
    fVar11 = (float)uVar12 * fVar18;
    fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x318) >> 0x20);
    fVar13 = (float)((ulong)uVar12 >> 0x20) * fVar21;
    fVar2 = (float)uVar3 * fVar14;
    fVar4 = (float)((ulong)uVar3 >> 0x20) * fVar15;
    fVar5 = (float)uVar6 * fVar18;
    fVar7 = (float)((ulong)uVar6 >> 0x20) * fVar21;
    iVar1 = *(int *)(param_1 + 800) + -1;
    fVar14 = (float)uVar16 * fVar14;
    fVar15 = (float)((ulong)uVar16 >> 0x20) * fVar15;
    fVar18 = (float)uVar19 * fVar18;
    fVar21 = (float)((ulong)uVar19 >> 0x20) * fVar21;
    *(int *)(param_1 + 800) = iVar1;
    *(ulong *)(param_1 + 0x2b8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x2b8) >> 0x20) - fVar13,
                  (float)*(undefined8 *)(param_1 + 0x2b8) - fVar11);
    *(ulong *)(param_1 + 0x2b0) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x2b0) >> 0x20) - fVar10,
                  (float)*(undefined8 *)(param_1 + 0x2b0) - fVar8);
    *(ulong *)(param_1 + 0x2e8) =
         CONCAT44(fVar13 + (float)((ulong)*(undefined8 *)(param_1 + 0x2e8) >> 0x20),
                  fVar11 + (float)*(undefined8 *)(param_1 + 0x2e8));
    *(ulong *)(param_1 + 0x2e0) =
         CONCAT44(fVar10 + (float)((ulong)*(undefined8 *)(param_1 + 0x2e0) >> 0x20),
                  fVar8 + (float)*(undefined8 *)(param_1 + 0x2e0));
    *(ulong *)(param_1 + 0x2f8) =
         CONCAT44(fVar7 + (float)((ulong)*(undefined8 *)(param_1 + 0x2f8) >> 0x20),
                  fVar5 + (float)*(undefined8 *)(param_1 + 0x2f8));
    *(ulong *)(param_1 + 0x2f0) =
         CONCAT44(fVar4 + (float)((ulong)*(undefined8 *)(param_1 + 0x2f0) >> 0x20),
                  fVar2 + (float)*(undefined8 *)(param_1 + 0x2f0));
    *(ulong *)(param_1 + 0x2c8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x2c8) >> 0x20) - fVar7,
                  (float)*(undefined8 *)(param_1 + 0x2c8) - fVar5);
    *(ulong *)(param_1 + 0x2c0) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x2c0) >> 0x20) - fVar4,
                  (float)*(undefined8 *)(param_1 + 0x2c0) - fVar2);
    *(ulong *)(param_1 + 0x2d8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x2d8) >> 0x20) - fVar21,
                  (float)*(undefined8 *)(param_1 + 0x2d8) - fVar18);
    *(ulong *)(param_1 + 0x2d0) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x2d0) >> 0x20) - fVar15,
                  (float)*(undefined8 *)(param_1 + 0x2d0) - fVar14);
    *(ulong *)(param_1 + 0x308) =
         CONCAT44(fVar21 + (float)((ulong)*(undefined8 *)(param_1 + 0x308) >> 0x20),
                  fVar18 + (float)*(undefined8 *)(param_1 + 0x308));
    *(ulong *)(param_1 + 0x300) =
         CONCAT44(fVar15 + (float)((ulong)*(undefined8 *)(param_1 + 0x300) >> 0x20),
                  fVar14 + (float)*(undefined8 *)(param_1 + 0x300));
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
  }
  return;
}


