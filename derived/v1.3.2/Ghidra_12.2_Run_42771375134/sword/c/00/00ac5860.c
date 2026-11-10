/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ac5860; name: FUN_00ac5860
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ac5860(long param_1)

{
  float *pfVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (*(char *)(param_1 + 0x472) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x473) == '\0') {
    fVar4 = (float)*(undefined8 *)(param_1 + 0x458);
    uVar9 = *(undefined8 *)(param_1 + 0x450);
  }
  else {
    fVar10 = ((float)*(undefined8 *)(param_1 + 0x3d0) + (float)*(undefined8 *)(param_1 + 0x3e0) +
              (float)*(undefined8 *)(param_1 + 0x3f0) + (float)*(undefined8 *)(param_1 + 0x430) +
             (float)*(undefined8 *)(param_1 + 0x440)) - (float)*(undefined8 *)(param_1 + 0x420);
    fVar11 = ((float)((ulong)*(undefined8 *)(param_1 + 0x3d0) >> 0x20) +
              (float)((ulong)*(undefined8 *)(param_1 + 0x3e0) >> 0x20) +
              (float)((ulong)*(undefined8 *)(param_1 + 0x3f0) >> 0x20) +
              (float)((ulong)*(undefined8 *)(param_1 + 0x430) >> 0x20) +
             (float)((ulong)*(undefined8 *)(param_1 + 0x440) >> 0x20)) -
             (float)((ulong)*(undefined8 *)(param_1 + 0x420) >> 0x20);
    fVar12 = ((float)*(undefined8 *)(param_1 + 0x3d8) + (float)*(undefined8 *)(param_1 + 1000) +
              (float)*(undefined8 *)(param_1 + 0x3f8) + (float)*(undefined8 *)(param_1 + 0x438) +
             (float)*(undefined8 *)(param_1 + 0x448)) - (float)*(undefined8 *)(param_1 + 0x428);
    fVar8 = fVar10 * fVar10 + fVar12 * fVar12;
    fVar4 = SQRT(fVar8);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(fVar8);
    }
    uVar5 = FUN_00a81e00(fVar4,fVar11);
    uVar6 = FUN_00a81e00(CONCAT44(fVar11,fVar10),fVar12);
    fVar4 = 0.0;
    uVar9 = CONCAT44(uVar6,uVar5);
    *(undefined8 *)(param_1 + 0x458) = 0;
    *(undefined8 *)(param_1 + 0x450) = uVar9;
  }
  fVar11 = *(float *)PTR_FloatDegree180_027194f0;
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
  uVar3 = (ulong)-((fVar8 / fVar11) * DAT_01d4c2f4);
  pfVar1 = (float *)(PTR_SinCosSampleTable_02715d20 + (uVar3 >> 0x18 & 0xff) * 0x10);
  fVar8 = (float)((uint)uVar3 & 0xffffff) * DAT_01d4bc78;
  fVar13 = (float)*(undefined8 *)(param_1 + 0x3d0) + (float)*(undefined8 *)(param_1 + 0x3e0) +
           (float)*(undefined8 *)(param_1 + 0x3f0) + (float)*(undefined8 *)(param_1 + 0x430) +
           (float)*(undefined8 *)(param_1 + 0x440);
  fVar14 = (float)*(undefined8 *)(param_1 + 0x3d8) + (float)*(undefined8 *)(param_1 + 1000) +
           (float)*(undefined8 *)(param_1 + 0x3f8) + (float)*(undefined8 *)(param_1 + 0x438) +
           (float)*(undefined8 *)(param_1 + 0x448);
  fVar12 = pfVar1[1] + pfVar1[3] * fVar8;
  fVar8 = *pfVar1 + pfVar1[2] * fVar8;
  fVar15 = (float)_DAT_01d4adc0;
  uVar3 = (ulong)_DAT_01d4adc0 >> 0x20;
  fVar16 = (float)_UNK_01d4adc8;
  fVar10 = *(float *)PTR_FloatPi_02715160;
  *(undefined1 *)(param_1 + 0xc0) = 1;
  fVar10 = fVar10 / fVar11;
  fVar11 = (float)_DAT_01d4b100;
  uVar2 = (ulong)_DAT_01d4b100 >> 0x20;
  *(ulong *)(param_1 + 0xb8) =
       CONCAT44((float)((ulong)_UNK_01d4b108 >> 0x20) + 0.0,
                fVar12 * fVar13 + fVar8 * fVar14 + (float)_UNK_01d4b108);
  *(ulong *)(param_1 + 0xb0) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x3d0) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x3e0) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x3f0) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x430) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x440) >> 0x20) + (float)uVar2,
                (fVar8 * fVar13 - fVar12 * fVar14) + fVar11);
  *(ulong *)(param_1 + 0xd8) =
       (ulong)(uint)((float)*(undefined8 *)(param_1 + 0x408) *
                    (float)*(undefined8 *)(param_1 + 0x418));
  *(ulong *)(param_1 + 0xd0) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x400) >> 0x20) *
                (float)((ulong)*(undefined8 *)(param_1 + 0x410) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x400) * (float)*(undefined8 *)(param_1 + 0x410));
  auVar7 = FUN_00a92cd0(fVar10 * ((float)((ulong)uVar9 >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(param_1 + 0x460) >> 0x20) +
                                 (float)uVar3),
                        fVar10 * ((float)uVar9 + (float)*(undefined8 *)(param_1 + 0x460) + fVar15),
                        fVar10 * (fVar4 + (float)*(undefined8 *)(param_1 + 0x468) + fVar16));
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar7;
  *(undefined1 *)(param_1 + 0xc0) = 1;
  *(ulong *)(param_1 + 0x428) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x3d8) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 1000) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x3f8) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x438) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x448) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x3d8) + (float)*(undefined8 *)(param_1 + 1000) +
                (float)*(undefined8 *)(param_1 + 0x3f8) + (float)*(undefined8 *)(param_1 + 0x438) +
                (float)*(undefined8 *)(param_1 + 0x448));
  *(ulong *)(param_1 + 0x420) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x3d0) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x3e0) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x3f0) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x430) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x440) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x3d0) + (float)*(undefined8 *)(param_1 + 0x3e0) +
                (float)*(undefined8 *)(param_1 + 0x3f0) + (float)*(undefined8 *)(param_1 + 0x430) +
                (float)*(undefined8 *)(param_1 + 0x440));
  return;
}


