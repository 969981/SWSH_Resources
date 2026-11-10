/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c0620; name: FUN_003c0620
 */


void FUN_003c0620(float param_1,long param_2)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float __x;
  float fVar14;
  float fVar15;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined8 local_70;
  float local_68;
  
  pfVar2 = &local_80;
  lVar5 = *(long *)(param_2 + 0x50);
  if ((*(ushort *)(param_2 + 0xb4) >> 2 & 1) == 0) {
    local_70 = 0;
    local_68 = 0.0;
    FUN_003bdad0(lVar5,&local_70);
    pfVar2 = (float *)&local_70;
    local_70 = 0;
    local_68 = 0.0;
  }
  else {
    *(ushort *)(param_2 + 0xb4) = *(ushort *)(param_2 + 0xb4) & 63999;
    pfVar3 = (float *)0x0;
    if (*(long *)(lVar5 + 0xb0) != 0) {
      uVar1 = FUN_003be9f0(lVar5,1);
      if ((uVar1 & 1) == 0) {
        pfVar3 = (float *)0x0;
      }
      else {
        pfVar3 = *(float **)(lVar5 + 0xb0);
      }
    }
    fVar6 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar8 = pfVar3[2];
    fVar9 = pfVar3[3];
    lVar4 = *(long *)(param_2 + 0x50);
    local_68 = (pfVar3[6] - *(float *)(lVar4 + 0x28)) * param_1;
    local_70 = CONCAT44((pfVar3[5] - *(float *)(lVar4 + 0x24)) * param_1,
                        (pfVar3[4] - *(float *)(lVar4 + 0x20)) * param_1);
    fVar10 = *(float *)(lVar4 + 0x10);
    fVar11 = *(float *)(lVar4 + 0x14);
    fVar12 = *(float *)(lVar4 + 0x18);
    fVar13 = *(float *)(lVar4 + 0x1c);
    fVar14 = ((fVar6 * fVar13 - fVar9 * fVar10) - fVar7 * fVar12) + fVar8 * fVar11;
    fVar15 = ((fVar7 * fVar13 - fVar9 * fVar11) - fVar8 * fVar10) + fVar6 * fVar12;
    __x = fVar9 * fVar13 + fVar6 * fVar10 + fVar7 * fVar11 + fVar8 * fVar12;
    fVar6 = ((fVar8 * fVar13 - fVar9 * fVar12) - fVar6 * fVar11) + fVar7 * fVar10;
    if (__x < 0.0) {
      fVar14 = -fVar14;
      fVar15 = -fVar15;
      fVar6 = -fVar6;
      __x = -__x;
    }
    fVar7 = fVar14 * fVar14 + fVar15 * fVar15 + fVar6 * fVar6;
    if (DAT_01d4bc30 <= fVar7) {
      fVar8 = sqrtf(fVar7);
      fVar8 = 1.0 / fVar8;
      fVar14 = fVar14 * fVar8;
      fVar15 = fVar15 * fVar8;
      fVar6 = fVar6 * fVar8;
      fVar9 = fabsf(__x);
      if (DAT_01d4c2e0 <= fVar9) {
        fVar7 = atan2f(fVar7 * fVar8,__x);
        fVar7 = fVar7 + fVar7;
      }
      else {
        fVar7 = DAT_01d4bb38;
      }
    }
    else {
      fVar15 = 0.0;
      fVar14 = 1.0;
      fVar6 = 0.0;
      fVar7 = 0.0;
    }
    fStack_7c = fVar15 * fVar7 * param_1;
    local_80 = fVar14 * fVar7 * param_1;
    local_78 = fVar6 * fVar7 * param_1;
    FUN_003bdad0(lVar5,&local_70);
  }
  FUN_003bdb20(lVar5,pfVar2);
  return;
}


