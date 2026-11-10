/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f7d40; name: FUN_004f7d40
 */


void FUN_004f7d40(float param_1,float param_2,float param_3,float param_4,float *param_5,
                 float *param_6,uint param_7)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if ((param_2 == param_1) && (param_4 == param_3)) {
    if (param_7 != 0) {
      pfVar2 = param_5 + param_7;
      do {
        pfVar3 = param_6 + 2;
        uVar5 = *(undefined8 *)param_6;
        uVar13 = *(undefined8 *)(param_6 + 6);
        uVar10 = *(undefined8 *)(param_6 + 4);
        uVar17 = *(undefined8 *)(param_6 + 10);
        uVar16 = *(undefined8 *)(param_6 + 8);
        uVar19 = *(undefined8 *)(param_6 + 0xe);
        uVar18 = *(undefined8 *)(param_6 + 0xc);
        uVar8 = *(undefined8 *)(param_6 + 0x12);
        uVar6 = *(undefined8 *)(param_6 + 0x10);
        uVar14 = *(undefined8 *)(param_6 + 0x16);
        uVar11 = *(undefined8 *)(param_6 + 0x14);
        uVar9 = *(undefined8 *)(param_6 + 0x1a);
        uVar7 = *(undefined8 *)(param_6 + 0x18);
        uVar15 = *(undefined8 *)(param_6 + 0x1e);
        uVar12 = *(undefined8 *)(param_6 + 0x1c);
        param_6 = param_6 + 0x20;
        *(ulong *)(param_5 + 2) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20) * param_2 +
                      (float)((ulong)*(undefined8 *)pfVar3 >> 0x20) * param_4,
                      (float)*(undefined8 *)(param_5 + 2) * param_2 +
                      (float)*(undefined8 *)pfVar3 * param_4);
        *(ulong *)param_5 =
             CONCAT44((float)((ulong)*(undefined8 *)param_5 >> 0x20) * param_2 +
                      (float)((ulong)uVar5 >> 0x20) * param_4,
                      (float)*(undefined8 *)param_5 * param_2 + (float)uVar5 * param_4);
        *(ulong *)(param_5 + 6) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 6) >> 0x20) * param_2 +
                      (float)((ulong)uVar13 >> 0x20) * param_4,
                      (float)*(undefined8 *)(param_5 + 6) * param_2 + (float)uVar13 * param_4);
        *(ulong *)(param_5 + 4) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 4) >> 0x20) * param_2 +
                      (float)((ulong)uVar10 >> 0x20) * param_4,
                      (float)*(undefined8 *)(param_5 + 4) * param_2 + (float)uVar10 * param_4);
        *(ulong *)(param_5 + 10) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 10) >> 0x20) * param_2 +
                      (float)((ulong)uVar17 >> 0x20) * param_4,
                      (float)*(undefined8 *)(param_5 + 10) * param_2 + (float)uVar17 * param_4);
        *(ulong *)(param_5 + 8) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 8) >> 0x20) * param_2 +
                      (float)((ulong)uVar16 >> 0x20) * param_4,
                      (float)*(undefined8 *)(param_5 + 8) * param_2 + (float)uVar16 * param_4);
        *(ulong *)(param_5 + 0xe) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0xe) >> 0x20) * param_2 +
                      (float)((ulong)uVar19 >> 0x20) * param_4,
                      (float)*(undefined8 *)(param_5 + 0xe) * param_2 + (float)uVar19 * param_4);
        *(ulong *)(param_5 + 0xc) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0xc) >> 0x20) * param_2 +
                      (float)((ulong)uVar18 >> 0x20) * param_4,
                      (float)*(undefined8 *)(param_5 + 0xc) * param_2 + (float)uVar18 * param_4);
        *(ulong *)(param_5 + 0x12) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x12) >> 0x20) * param_2 +
                      (float)((ulong)uVar8 >> 0x20) * param_4,
                      (float)*(undefined8 *)(param_5 + 0x12) * param_2 + (float)uVar8 * param_4);
        *(ulong *)(param_5 + 0x10) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x10) >> 0x20) * param_2 +
                      (float)((ulong)uVar6 >> 0x20) * param_4,
                      (float)*(undefined8 *)(param_5 + 0x10) * param_2 + (float)uVar6 * param_4);
        *(ulong *)(param_5 + 0x16) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x16) >> 0x20) * param_2 +
                      (float)((ulong)uVar14 >> 0x20) * param_4,
                      (float)*(undefined8 *)(param_5 + 0x16) * param_2 + (float)uVar14 * param_4);
        *(ulong *)(param_5 + 0x14) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x14) >> 0x20) * param_2 +
                      (float)((ulong)uVar11 >> 0x20) * param_4,
                      (float)*(undefined8 *)(param_5 + 0x14) * param_2 + (float)uVar11 * param_4);
        *(ulong *)(param_5 + 0x1a) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x1a) >> 0x20) * param_2 +
                      (float)((ulong)uVar9 >> 0x20) * param_4,
                      (float)*(undefined8 *)(param_5 + 0x1a) * param_2 + (float)uVar9 * param_4);
        *(ulong *)(param_5 + 0x18) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x18) >> 0x20) * param_2 +
                      (float)((ulong)uVar7 >> 0x20) * param_4,
                      (float)*(undefined8 *)(param_5 + 0x18) * param_2 + (float)uVar7 * param_4);
        *(ulong *)(param_5 + 0x1e) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x1e) >> 0x20) * param_2 +
                      (float)((ulong)uVar15 >> 0x20) * param_4,
                      (float)*(undefined8 *)(param_5 + 0x1e) * param_2 + (float)uVar15 * param_4);
        *(ulong *)(param_5 + 0x1c) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x1c) >> 0x20) * param_2 +
                      (float)((ulong)uVar12 >> 0x20) * param_4,
                      (float)*(undefined8 *)(param_5 + 0x1c) * param_2 + (float)uVar12 * param_4);
        param_5 = param_5 + 0x20;
      } while (param_5 < pfVar2);
    }
  }
  else if (param_7 != 0) {
    param_2 = param_2 - param_1;
    param_4 = param_4 - param_3;
    pfVar2 = param_5;
    do {
      fVar4 = *pfVar2 * param_1;
      param_1 = param_1 + param_2 / (float)param_7;
      fVar1 = param_3 * *param_6;
      param_3 = param_3 + param_4 / (float)param_7;
      pfVar3 = pfVar2 + 1;
      *pfVar2 = fVar4 + fVar1;
      pfVar2 = pfVar3;
      param_6 = param_6 + 1;
    } while (pfVar3 < param_5 + param_7);
  }
  return;
}


