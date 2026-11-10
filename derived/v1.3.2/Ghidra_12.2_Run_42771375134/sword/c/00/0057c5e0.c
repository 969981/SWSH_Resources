/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0057c5e0; name: FUN_0057c5e0
 */


undefined1  [16] FUN_0057c5e0(float *param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  undefined4 extraout_var;
  undefined8 extraout_var_04;
  undefined1 auVar4 [16];
  undefined4 extraout_var_00;
  undefined8 extraout_var_05;
  undefined1 auVar5 [16];
  undefined4 extraout_var_01;
  undefined8 extraout_var_06;
  undefined1 auVar6 [16];
  undefined4 extraout_var_02;
  undefined8 extraout_var_07;
  undefined1 auVar7 [16];
  undefined4 extraout_var_03;
  undefined8 extraout_var_08;
  undefined1 auVar8 [16];
  float fVar9;
  
  fVar2 = *param_1;
  switch(param_2) {
  case 6:
    fVar9 = fVar2 * DAT_01d4bbf0;
    if ((param_4 & 1) == 0) {
      fVar3 = fVar2;
      if (fVar2 <= DAT_01d4c104) {
        fVar3 = DAT_01d4c104;
      }
    }
    else {
      bVar1 = DAT_01d4c104 <= fVar2;
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
      fVar3 = DAT_01d4c104;
      if (bVar1) {
        fVar3 = fVar2;
      }
    }
    fVar2 = powf(fVar3,DAT_01d4c410);
    if (DAT_01d4c124 <= *param_1) {
      fVar9 = fVar2 * DAT_01d4c120 + DAT_01d4c574;
    }
    if ((param_4 & 1) == 0) {
LAB_0057c90c:
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      return ZEXT416((uint)fVar9);
    }
    if (0.0 <= fVar9) break;
    fVar2 = 0.0;
  default:
    return ZEXT416((uint)fVar2);
  case 7:
    fVar9 = fVar2 * 4.5;
    if ((param_4 & 1) == 0) {
      fVar3 = fVar2;
      if (fVar2 <= DAT_01d4c104) {
        fVar3 = DAT_01d4c104;
      }
    }
    else {
      bVar1 = DAT_01d4c104 <= fVar2;
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
      fVar3 = DAT_01d4c104;
      if (bVar1) {
        fVar3 = fVar2;
      }
    }
    fVar2 = powf(fVar3,DAT_01d4bed0);
    if (DAT_01d4c520 <= *param_1) {
      fVar9 = fVar2 * DAT_01d4bd68 + DAT_01d4bf04;
    }
    if ((param_4 & 1) == 0) goto LAB_0057c90c;
    if (fVar9 < 0.0) {
      return ZEXT816(0);
    }
    break;
  case 8:
    fVar9 = fVar2 * 4.5;
    if ((param_4 & 1) == 0) {
      fVar3 = fVar2;
      if (fVar2 <= DAT_01d4c104) {
        fVar3 = DAT_01d4c104;
      }
    }
    else {
      bVar1 = DAT_01d4c104 <= fVar2;
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
      fVar3 = DAT_01d4c104;
      if (bVar1) {
        fVar3 = fVar2;
      }
    }
    fVar2 = powf(fVar3,DAT_01d4bed0);
    if (DAT_01d4c520 <= *param_1) {
      fVar9 = fVar2 * DAT_01d4bd68 + DAT_01d4bf04;
    }
    if ((param_4 & 1) == 0) goto LAB_0057c90c;
    if (fVar9 < 0.0) {
      return ZEXT816(0);
    }
    break;
  case 9:
    if ((param_4 & 1) == 0) {
      fVar9 = fVar2;
      if (fVar2 <= DAT_01d4c104) {
        fVar9 = DAT_01d4c104;
      }
    }
    else {
      bVar1 = DAT_01d4c104 <= fVar2;
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
      fVar9 = DAT_01d4c104;
      if (bVar1) {
        fVar9 = fVar2;
      }
    }
    auVar4._0_4_ = powf(fVar9,DAT_01d4bdc8);
    auVar4._4_4_ = extraout_var;
    auVar4._8_8_ = extraout_var_04;
    return auVar4;
  case 10:
    if ((param_4 & 1) == 0) {
      fVar9 = fVar2;
      if (fVar2 <= DAT_01d4c104) {
        fVar9 = DAT_01d4c104;
      }
    }
    else {
      bVar1 = DAT_01d4c104 <= fVar2;
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
      fVar9 = DAT_01d4c104;
      if (bVar1) {
        fVar9 = fVar2;
      }
    }
    auVar5._0_4_ = powf(fVar9,DAT_01d4c5f8);
    auVar5._4_4_ = extraout_var_00;
    auVar5._8_8_ = extraout_var_05;
    return auVar5;
  case 0xb:
    fVar9 = fVar2 * 16.0;
    if ((param_4 & 1) == 0) {
      fVar3 = fVar2;
      if (fVar2 <= DAT_01d4c104) {
        fVar3 = DAT_01d4c104;
      }
    }
    else {
      bVar1 = DAT_01d4c104 <= fVar2;
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
      fVar3 = DAT_01d4c104;
      if (bVar1) {
        fVar3 = fVar2;
      }
    }
    fVar2 = powf(fVar3,DAT_01d4bc80);
    if (DAT_01d4bce0 <= *param_1) {
      fVar9 = fVar2;
    }
    if ((param_4 & 1) == 0) goto LAB_0057c90c;
    if (fVar9 < 0.0) {
      return ZEXT816(0);
    }
    break;
  case 0xc:
    if ((param_4 & 1) == 0) {
      fVar9 = fVar2;
      if (fVar2 <= DAT_01d4c104) {
        fVar9 = DAT_01d4c104;
      }
    }
    else {
      bVar1 = DAT_01d4c104 <= fVar2;
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
      fVar9 = DAT_01d4c104;
      if (bVar1) {
        fVar9 = fVar2;
      }
    }
    auVar7._0_4_ = powf(fVar9,DAT_01d4bc80);
    auVar7._4_4_ = extraout_var_02;
    auVar7._8_8_ = extraout_var_07;
    return auVar7;
  case 0xd:
    if ((param_4 & 1) == 0) {
      fVar9 = fVar2;
      if (fVar2 <= DAT_01d4c104) {
        fVar9 = DAT_01d4c104;
      }
    }
    else {
      bVar1 = DAT_01d4c104 <= fVar2;
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
      fVar9 = DAT_01d4c104;
      if (bVar1) {
        fVar9 = fVar2;
      }
    }
    auVar6._0_4_ = powf(fVar9,DAT_01d4c568);
    auVar6._4_4_ = extraout_var_01;
    auVar6._8_8_ = extraout_var_06;
    return auVar6;
  case 0xe:
    if ((param_4 & 1) == 0) {
      fVar9 = fVar2;
      if (fVar2 <= DAT_01d4c104) {
        fVar9 = DAT_01d4c104;
      }
    }
    else {
      bVar1 = DAT_01d4c104 <= fVar2;
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
      fVar9 = DAT_01d4c104;
      if (bVar1) {
        fVar9 = fVar2;
      }
    }
    auVar8._0_4_ = powf(fVar9,DAT_01d4c410);
    auVar8._4_4_ = extraout_var_03;
    auVar8._8_8_ = extraout_var_08;
    return auVar8;
  }
  if (1.0 < fVar9) {
    fVar9 = 1.0;
  }
  return ZEXT416((uint)fVar9);
}


