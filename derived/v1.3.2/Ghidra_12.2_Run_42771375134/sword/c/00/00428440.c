/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00428440; name: FUN_00428440
 */


void FUN_00428440(long param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  
  if (param_3 == 0) {
    return;
  }
  uVar4 = (ulong)param_3;
  fVar8 = (float)param_2 * DAT_01d4c6ac;
  uVar3 = 0;
LAB_00428460:
  do {
    while( true ) {
      uVar5 = (uint)(fVar8 * *(float *)(param_1 + uVar3 * 4));
      param_4[uVar3] = uVar5;
      if (uVar3 == 0) break;
      uVar6 = param_4[(int)uVar3 - 1];
      if ((uVar5 & 1) == 0) {
        uVar5 = uVar5 + 1;
        param_4[uVar3] = uVar5;
      }
      uVar2 = (ulong)uVar5;
      if (2 < (int)SQRT((double)uVar2)) {
        while( true ) {
          uVar7 = 3;
          do {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar5 / uVar7;
            }
            uVar1 = uVar1 * uVar7;
            uVar7 = uVar7 + 2;
            if (uVar5 == uVar1) goto LAB_004284c0;
          } while ((int)uVar7 <= (int)SQRT((double)uVar2));
          if (uVar5 != uVar6) break;
LAB_004284c0:
          uVar5 = uVar5 + 2;
          param_4[uVar3] = uVar5;
        }
        goto LAB_00428550;
      }
      if (uVar5 != uVar6) goto LAB_00428550;
      param_4[uVar3] = uVar6 + 2;
      uVar3 = uVar3 + 1;
      if (uVar4 <= uVar3) {
        return;
      }
    }
    if ((uVar5 & 1) == 0) {
      uVar5 = uVar5 + 1;
      *param_4 = uVar5;
    }
    uVar2 = (ulong)uVar5;
    if ((int)SQRT((double)uVar2) < 3) {
      if (uVar5 == 0) {
        *param_4 = 2;
        uVar3 = 1;
        if (uVar4 < 2) {
          return;
        }
        goto LAB_00428460;
      }
    }
    else {
      while( true ) {
        uVar6 = 3;
        do {
          uVar7 = 0;
          if (uVar6 != 0) {
            uVar7 = uVar5 / uVar6;
          }
          uVar7 = uVar7 * uVar6;
          uVar6 = uVar6 + 2;
          if (uVar5 == uVar7) goto LAB_00428528;
        } while ((int)uVar6 <= (int)SQRT((double)uVar2));
        if (uVar5 != 0) break;
LAB_00428528:
        uVar5 = uVar5 + 2;
        *param_4 = uVar5;
      }
    }
LAB_00428550:
    uVar3 = uVar3 + 1;
    if (uVar4 <= uVar3) {
      return;
    }
  } while( true );
}


