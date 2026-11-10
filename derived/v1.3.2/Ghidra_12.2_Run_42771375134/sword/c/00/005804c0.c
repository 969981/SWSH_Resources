/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005804c0; name: FUN_005804c0
 */


/* WARNING: Removing unreachable block (ram,0x00580740) */

undefined1  [16] FUN_005804c0(float *param_1,int param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  
  fVar2 = DAT_01d4c524;
  fVar1 = *param_1;
  switch(param_2) {
  case 0:
  case 0xf:
  case 0x11:
    fVar2 = fVar1 * DAT_01d4c4d4;
    if (fVar1 * DAT_01d4c4d4 <= DAT_01d4c104) {
      fVar2 = DAT_01d4c104;
    }
    fVar2 = powf(fVar2,DAT_01d4bf08);
    fVar3 = powf((fVar2 * DAT_01d4bcd0 + DAT_01d4c74c) / (fVar2 * DAT_01d4bd48 + 1.0),DAT_01d4bd6c);
    fVar2 = fVar3;
    if (1.0 < fVar3) {
      fVar2 = 1.0;
    }
    goto LAB_00580744;
  case 1:
    if (0.0 < fVar1) {
      if (1.0 <= fVar1) {
        fVar2 = logf(fVar1 + DAT_01d4bb70);
        fVar2 = fVar2 * DAT_01d4c0f0 + DAT_01d4c394;
      }
      else {
        fVar2 = SQRT(fVar1);
        if (NAN(fVar2)) {
          fVar2 = sqrtf(fVar1);
        }
        fVar2 = fVar2 * 0.5;
      }
      if (fVar2 < 0.0) {
        return ZEXT816(0);
      }
    }
    else {
      fVar2 = 0.0;
    }
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    return ZEXT416((uint)fVar2);
  case 2:
    fVar2 = (fVar1 / DAT_01d4bee0) * 5.0 + DAT_01d4c528;
    fVar1 = logf(fVar1 / DAT_01d4bee0 + DAT_01d4c324);
    if (DAT_01d4bce4 <= *param_1) {
      fVar2 = (fVar1 / DAT_01d4c014) * DAT_01d4bea0 + DAT_01d4c020 + DAT_01d4c298;
    }
    fVar3 = fVar2 * DAT_01d4bafc + DAT_01d4c4a0;
    break;
  case 3:
    fVar2 = (fVar1 / DAT_01d4bee0) * DAT_01d4c128 + DAT_01d4c528;
    fVar1 = logf((fVar1 / DAT_01d4bee0) * DAT_01d4be9c + DAT_01d4c324);
    if (DAT_01d4c414 <= *param_1) {
      fVar2 = (fVar1 / DAT_01d4c014) * DAT_01d4bea0 + DAT_01d4c52c;
    }
    fVar3 = fVar2 * DAT_01d4bafc + DAT_01d4c4a0;
    break;
  case 4:
    fVar3 = (fVar1 * DAT_01d4c0ec) / DAT_01d4c524 + DAT_01d4c4b4;
    fVar1 = logf((fVar1 + DAT_01d4c4d4) / DAT_01d4c018);
    if (fVar2 <= *param_1) {
      fVar3 = (fVar1 / DAT_01d4c014) * DAT_01d4c600 + DAT_01d4c01c;
    }
    break;
  default:
    if ((param_2 == 0x10) || (param_2 - 6U < 9)) {
      FUN_0057c5e0(param_1,param_2,param_3 & 1,1);
      auVar4._4_4_ = extraout_var;
      auVar4._0_4_ = extraout_s0;
      auVar4._8_8_ = extraout_var_00;
      return auVar4;
    }
    goto LAB_00580750;
  }
  fVar3 = fVar3 / DAT_01d4c390;
  fVar2 = fVar3;
LAB_00580744:
  fVar1 = 0.0;
  if (0.0 <= fVar3) {
    fVar1 = fVar2;
  }
LAB_00580750:
  return ZEXT416((uint)fVar1);
}


