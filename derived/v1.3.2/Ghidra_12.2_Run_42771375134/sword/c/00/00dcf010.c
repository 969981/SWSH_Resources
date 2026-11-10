/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcf010; name: FUN_00dcf010
 */


void FUN_00dcf010(float param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar3 = FUN_00726ce0();
  if (lVar3 != 0) {
    uVar6 = 0;
    do {
      iVar2 = FUN_00726d10(param_2,uVar6 & 0xffffffff);
      if ((iVar2 < 2) || (param_1 <= *(float *)(param_3 + 0x24) * *(float *)(param_3 + 0x24))) {
        iVar2 = 0;
      }
      else {
        fVar7 = SQRT(param_1);
        if (NAN(SQRT(param_1))) {
          fVar7 = sqrtf(param_1);
        }
        fVar8 = (fVar7 - *(float *)(param_3 + 0x24)) /
                (*(float *)(param_3 + 0x20) - *(float *)(param_3 + 0x24));
        fVar7 = fVar8;
        if (1.0 < fVar8) {
          fVar7 = 1.0;
        }
        fVar9 = 0.0;
        if (0.0 <= fVar8) {
          fVar9 = fVar7;
        }
        iVar5 = (int)(fVar9 * (float)iVar2);
        iVar1 = iVar2 + -1;
        if (iVar5 <= iVar2 + -1) {
          iVar1 = iVar5;
        }
        iVar2 = 0;
        if (-1 < iVar5) {
          iVar2 = iVar1;
        }
      }
      FUN_00726d30(param_2,uVar6 & 0xffffffff,iVar2);
      uVar6 = uVar6 + 1;
      uVar4 = FUN_00726ce0(param_2);
    } while (uVar6 < uVar4);
  }
  return;
}


