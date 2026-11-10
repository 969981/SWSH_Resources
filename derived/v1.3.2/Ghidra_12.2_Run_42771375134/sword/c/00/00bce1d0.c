/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bce1d0; name: FUN_00bce1d0
 */


int FUN_00bce1d0(undefined8 param_1,int param_2,undefined4 param_3,uint *param_4,uint *param_5,
                uint *param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar13 = *param_6;
  uVar6 = 6;
  if (param_2 != 0) {
    uVar6 = 1;
  }
  if (uVar13 == 0) {
    iVar12 = 0;
  }
  else {
    uVar8 = *param_4;
    uVar4 = 0;
    if (uVar6 != 0) {
      uVar4 = uVar8 / uVar6;
    }
    iVar3 = uVar8 - uVar4 * uVar6;
    uVar7 = *param_5;
    uVar11 = 0;
    iVar12 = 0;
    uVar14 = 0xffffffff;
    uVar9 = 0xffffffff;
    uVar10 = 0xffffffff;
    uVar15 = 0xffffffff;
    do {
      if (uVar7 != 0) {
        uVar13 = 0;
        do {
          lVar5 = FUN_00bccb30(param_1,param_2,param_3,uVar8 + uVar13);
          uVar1 = uVar11;
          if (uVar15 != 0xffffffff) {
            uVar1 = uVar15;
          }
          uVar7 = uVar13;
          if ((int)uVar9 <= (int)uVar13 && uVar9 != 0xffffffff) {
            uVar7 = uVar9;
          }
          uVar2 = uVar13;
          if ((int)uVar13 <= (int)uVar14) {
            uVar2 = uVar14;
          }
          if (lVar5 != 0) {
            uVar9 = uVar7;
          }
          uVar7 = *param_5;
          if (lVar5 != 0) {
            iVar12 = iVar12 + 1;
            uVar10 = uVar11;
            uVar15 = uVar1;
            uVar14 = uVar2;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar7);
        uVar13 = *param_6;
      }
      uVar11 = uVar11 + 1;
      uVar8 = uVar8 + uVar6;
    } while (uVar11 < uVar13);
    if (iVar12 != 0) {
      *param_4 = uVar9 + iVar3 + (uVar15 + uVar4) * uVar6;
      *param_5 = (1 - uVar9) + uVar14;
      *param_6 = (1 - uVar15) + uVar10;
    }
  }
  return iVar12;
}


