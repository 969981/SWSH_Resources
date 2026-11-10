/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00573990; name: FUN_00573990
 */


void FUN_00573990(long param_1,uint param_2,float *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar1 = param_2;
  if (param_4 != 0) {
    uVar1 = param_4;
  }
  uVar5 = param_2 - param_5;
  uVar2 = param_2;
  if ((int)param_5 <= (int)param_2) {
    uVar2 = param_5;
  }
  uVar3 = uVar1;
  if ((int)param_5 <= (int)uVar1) {
    uVar3 = param_5;
  }
  if (param_3 == (float *)0x0) {
    if (0 < (int)uVar2) {
                    /* WARNING: Subroutine does not return */
      memset(&DAT_02760c18,0,(ulong)uVar2 << 4);
    }
  }
  else if (0 < (int)uVar2) {
    uVar10 = (ulong)(int)uVar2;
    uVar6 = uVar10 & 3;
    if (uVar10 - 1 < 3) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      pfVar12 = param_3 + 8;
      puVar9 = (undefined8 *)((long)&DAT_02760c44 + 4);
      do {
        uVar4 = *(undefined8 *)(pfVar12 + -6);
        lVar8 = lVar8 + 4;
        puVar9[-6] = *(undefined8 *)(pfVar12 + -8);
        puVar9[-5] = uVar4;
        uVar4 = *(undefined8 *)(pfVar12 + -2);
        puVar9[-4] = *(undefined8 *)(pfVar12 + -4);
        puVar9[-3] = uVar4;
        uVar4 = *(undefined8 *)(pfVar12 + 2);
        puVar9[-2] = *(undefined8 *)pfVar12;
        puVar9[-1] = uVar4;
        pfVar11 = pfVar12 + 4;
        uVar4 = *(undefined8 *)(pfVar12 + 6);
        pfVar12 = pfVar12 + 0x10;
        *puVar9 = *(undefined8 *)pfVar11;
        puVar9[1] = uVar4;
        puVar9 = puVar9 + 8;
      } while (uVar10 - uVar6 != lVar8);
    }
    if (uVar6 != 0) {
      lVar7 = -uVar6;
      puVar9 = (undefined8 *)(&DAT_02760c18 + lVar8 * 4);
      pfVar12 = param_3 + lVar8 * 4;
      do {
        uVar4 = *(undefined8 *)(pfVar12 + 2);
        *puVar9 = *(undefined8 *)pfVar12;
        puVar9[1] = uVar4;
        lVar7 = lVar7 + 1;
        puVar9 = puVar9 + 2;
        pfVar12 = pfVar12 + 4;
      } while (lVar7 != 0);
    }
  }
  if ((int)uVar2 < (int)uVar3) {
    if ((int)param_5 <= (int)param_2) {
      param_2 = param_5;
    }
    if ((int)param_5 <= (int)uVar1) {
      uVar1 = param_5;
    }
                    /* WARNING: Subroutine does not return */
    memset(&DAT_02760c18 + (long)(int)uVar2 * 4,0,(ulong)((-2 - param_2) - ~uVar1) * 0x10 + 0x10);
  }
  uVar1 = uVar1 - param_5 & ((int)(uVar1 - param_5) >> 0x1f ^ 0xffffffffU);
  uVar2 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  (**(code **)(**(long **)(param_1 + 0x30) + 0xb0))
            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xf4),&DAT_02760c18,uVar3);
  if (param_3 == (float *)0x0) {
    if (0 < (int)uVar5) {
                    /* WARNING: Subroutine does not return */
      memset(&DAT_02760c18,0,(ulong)(uVar2 - 1) * 0x10 + 0x10);
    }
  }
  else if (0 < (int)uVar5) {
    uVar6 = 0;
    pfVar12 = (float *)&DAT_02760c24;
    pfVar11 = param_3 + (long)(int)param_5 * 4 + 2;
    do {
      fVar13 = pfVar11[-1];
      uVar6 = uVar6 + 1;
      fVar15 = param_3[1];
      fVar17 = *pfVar11;
      fVar18 = pfVar11[1];
      fVar14 = param_3[2];
      fVar16 = param_3[3];
      pfVar12[-3] = pfVar11[-2] - *param_3;
      pfVar12[-2] = fVar13 - fVar15;
      pfVar12[-1] = fVar17 - fVar14;
      *pfVar12 = fVar18 - fVar16;
      pfVar12 = pfVar12 + 4;
      pfVar11 = pfVar11 + 4;
    } while (uVar6 < uVar2);
  }
  if ((int)uVar2 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
    memset(&DAT_02760c18 + (ulong)uVar2 * 4,0,(ulong)(uVar1 + ~uVar2) * 0x10 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00573bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0xb0))
            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xf8),&DAT_02760c18,uVar1);
  return;
}


