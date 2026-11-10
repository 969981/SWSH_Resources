/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00842360; name: FUN_00842360
 */


undefined4 FUN_00842360(long param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong local_38;
  undefined8 local_30;
  char *local_28;
  
  bVar6 = *(byte *)(param_1 + 0x70);
  uVar7 = (uint)bVar6;
  if ((param_2 & 1) == 0) {
    while (uVar7 - 0x30 < 10) {
      FUN_00841d30(param_1);
      bVar6 = *(byte *)(param_1 + 0x70);
      uVar7 = (uint)bVar6;
    }
LAB_00842528:
    if ((param_3 & 1) == 0) {
      if (bVar6 == 0x2e) {
        FUN_00841d30(param_1);
        bVar6 = *(byte *)(param_1 + 0x70);
        while (bVar6 - 0x30 < 10) {
          FUN_00841d30(param_1);
          bVar6 = *(byte *)(param_1 + 0x70);
        }
        goto LAB_00842564;
      }
      bVar2 = false;
      if (bVar6 != 0x45) goto LAB_00842570;
LAB_00842578:
      FUN_00841d30(param_1);
      if ((*(char *)(param_1 + 0x70) == '+') || (*(char *)(param_1 + 0x70) == '-')) {
        FUN_00841d30(param_1);
      }
      if (*(byte *)(param_1 + 0x70) - 0x30 < 10) {
        do {
          FUN_00841d30(param_1);
        } while (*(byte *)(param_1 + 0x70) - 0x30 < 10);
      }
      else {
        local_28 = operator_new(0x30);
        uVar5 = s__e__must_be_followed_by_exponent_01d14bb7._24_8_;
        uVar4 = s__e__must_be_followed_by_exponent_01d14bb7._16_8_;
        uVar3 = s__e__must_be_followed_by_exponent_01d14bb7._8_8_;
        uVar1 = s__e__must_be_followed_by_exponent_01d14bb7._0_8_;
        local_38 = 0x31;
        local_30 = 0x21;
        local_28[0x21] = '\0';
        *(undefined8 *)(local_28 + 0x10) = uVar4;
        *(undefined8 *)(local_28 + 0x18) = uVar5;
        *(undefined8 *)local_28 = uVar1;
        *(undefined8 *)(local_28 + 8) = uVar3;
        local_28[0x20] = '.';
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),&local_38);
        if ((local_38 & 1) != 0) {
          operator_delete(local_28);
        }
      }
      bVar2 = true;
    }
    else {
LAB_00842564:
      bVar2 = true;
      if (bVar6 == 0x45) goto LAB_00842578;
LAB_00842570:
      if (bVar6 == 0x65) goto LAB_00842578;
    }
    if (*(char *)(param_1 + 0xa4) != '\0') {
      bVar6 = *(byte *)(param_1 + 0x70);
      uVar7 = (uint)bVar6;
      if ((bVar6 != 0x46) && (bVar6 != 0x66)) goto LAB_0084265c;
      FUN_00841d30(param_1);
      bVar2 = true;
    }
LAB_00842658:
    uVar7 = (uint)*(byte *)(param_1 + 0x70);
LAB_0084265c:
    if (uVar7 - 0x61 < 0x1a) goto LAB_00842668;
LAB_00842408:
    if ((uVar7 == 0x5f) || ((uVar7 - 0x41 & 0xff) < 0x1a)) goto LAB_00842668;
LAB_008426b8:
    if (uVar7 != 0x2e) goto LAB_00842788;
    if (bVar2) {
      local_28 = operator_new(0x40);
      uVar5 = s_Already_saw_decimal_point_or_exp_01d251ef._24_8_;
      uVar1 = s_Already_saw_decimal_point_or_exp_01d251ef._16_8_;
      uVar4 = s_Already_saw_decimal_point_or_exp_01d251ef._8_8_;
      uVar3 = s_Already_saw_decimal_point_or_exp_01d251ef._0_8_;
      local_38 = 0x41;
      local_30 = 0x3e;
      local_28[0x3e] = '\0';
      *(undefined8 *)(local_28 + 0x10) = uVar1;
      *(undefined8 *)(local_28 + 0x18) = uVar5;
      uVar1 = CONCAT26(s_Already_saw_decimal_point_or_exp_01d251ef._54_2_,
                       s_Already_saw_decimal_point_or_exp_01d251ef._48_6_);
      *(undefined8 *)local_28 = uVar3;
      *(undefined8 *)(local_28 + 8) = uVar4;
      uVar4 = s_Already_saw_decimal_point_or_exp_01d251ef._40_8_;
      uVar3 = s_Already_saw_decimal_point_or_exp_01d251ef._32_8_;
      *(ulong *)(local_28 + 0x36) =
           CONCAT62(s_Already_saw_decimal_point_or_exp_01d251ef._56_6_,
                    s_Already_saw_decimal_point_or_exp_01d251ef._54_2_);
      *(undefined8 *)(local_28 + 0x28) = uVar4;
      *(undefined8 *)(local_28 + 0x30) = uVar1;
      *(undefined8 *)(local_28 + 0x20) = uVar3;
    }
    else {
      local_28 = operator_new(0x30);
      uVar1 = s_Hex_and_octal_numbers_must_be_in_01d447cd._8_8_;
      local_38 = 0x31;
      local_30 = 0x27;
      *(undefined8 *)local_28 = s_Hex_and_octal_numbers_must_be_in_01d447cd._0_8_;
      *(undefined8 *)(local_28 + 8) = uVar1;
      local_28[0x27] = '\0';
      uVar3 = s_Hex_and_octal_numbers_must_be_in_01d447cd._16_8_;
      uVar1 = CONCAT17(s_Hex_and_octal_numbers_must_be_in_01d447cd[0x1f],
                       s_Hex_and_octal_numbers_must_be_in_01d447cd._24_7_);
      *(ulong *)(local_28 + 0x1f) =
           CONCAT71(s_Hex_and_octal_numbers_must_be_in_01d447cd._32_7_,
                    s_Hex_and_octal_numbers_must_be_in_01d447cd[0x1f]);
      *(undefined8 *)(local_28 + 0x10) = uVar3;
      *(undefined8 *)(local_28 + 0x18) = uVar1;
    }
  }
  else {
    if ((uVar7 != 0x58) && (uVar7 = (uint)bVar6, uVar7 != 0x78)) {
      if (9 < uVar7 - 0x30) goto LAB_00842528;
      if ((uVar7 & 0xf8) == 0x30) {
        do {
          FUN_00841d30(param_1);
        } while ((*(byte *)(param_1 + 0x70) & 0xf8) == 0x30);
        if (9 < *(byte *)(param_1 + 0x70) - 0x30) goto LAB_0084280c;
      }
      local_28 = operator_new(0x40);
      local_38 = 0x41;
      local_30 = 0x34;
      local_28[0x30] = 't';
      uVar1 = s_Numbers_starting_with_leading_ze_01d251ba._8_8_;
      local_28[0x31] = 'a';
      local_28[0x32] = 'l';
      local_28[0x33] = '.';
      *(undefined8 *)local_28 = s_Numbers_starting_with_leading_ze_01d251ba._0_8_;
      *(undefined8 *)(local_28 + 8) = uVar1;
      local_28[0x34] = '\0';
      uVar4 = s_Numbers_starting_with_leading_ze_01d251ba._40_8_;
      uVar3 = s_Numbers_starting_with_leading_ze_01d251ba._24_8_;
      uVar1 = s_Numbers_starting_with_leading_ze_01d251ba._16_8_;
      *(undefined8 *)(local_28 + 0x20) = s_Numbers_starting_with_leading_ze_01d251ba._32_8_;
      *(undefined8 *)(local_28 + 0x28) = uVar4;
      *(undefined8 *)(local_28 + 0x10) = uVar1;
      *(undefined8 *)(local_28 + 0x18) = uVar3;
      (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90),&local_38);
      if ((local_38 & 1) != 0) {
        operator_delete(local_28);
      }
      bVar6 = *(byte *)(param_1 + 0x70);
      if (9 < bVar6 - 0x30) goto LAB_008423f8;
      do {
        FUN_00841d30(param_1);
        uVar7 = (uint)*(byte *)(param_1 + 0x70);
        bVar2 = false;
      } while (*(byte *)(param_1 + 0x70) - 0x30 < 10);
      goto LAB_0084265c;
    }
    FUN_00841d30(param_1);
    if ((9 < *(byte *)(param_1 + 0x70) - 0x30) &&
       ((uVar7 = *(byte *)(param_1 + 0x70) - 0x41, 0x25 < uVar7 ||
        ((1L << ((ulong)uVar7 & 0x3f) & 0x3f0000003fU) == 0)))) {
      local_28 = operator_new(0x30);
      local_38 = 0x31;
      local_30 = 0x24;
      local_28[0x20] = 'i';
      uVar5 = s__0x__must_be_followed_by_hex_dig_01d06cdb._24_8_;
      uVar4 = s__0x__must_be_followed_by_hex_dig_01d06cdb._16_8_;
      uVar3 = s__0x__must_be_followed_by_hex_dig_01d06cdb._8_8_;
      uVar1 = s__0x__must_be_followed_by_hex_dig_01d06cdb._0_8_;
      local_28[0x21] = 't';
      local_28[0x22] = 's';
      local_28[0x23] = '.';
      local_28[0x24] = '\0';
      *(undefined8 *)(local_28 + 0x10) = uVar4;
      *(undefined8 *)(local_28 + 0x18) = uVar5;
      *(undefined8 *)local_28 = uVar1;
      *(undefined8 *)(local_28 + 8) = uVar3;
      (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90),&local_38);
      if ((local_38 & 1) != 0) {
        operator_delete(local_28);
      }
LAB_0084280c:
      bVar2 = false;
      goto LAB_00842658;
    }
    do {
      do {
        FUN_00841d30(param_1);
        bVar6 = *(byte *)(param_1 + 0x70);
      } while (bVar6 - 0x30 < 10);
      uVar7 = bVar6 - 0x41;
    } while (uVar7 < 0x26 && (1L << ((ulong)uVar7 & 0x3f) & 0x3f0000003fU) != 0);
LAB_008423f8:
    bVar2 = false;
    uVar7 = (uint)bVar6;
    if (0x19 < uVar7 - 0x61) goto LAB_00842408;
LAB_00842668:
    if (*(char *)(param_1 + 0xac) == '\0') goto LAB_008426b8;
    local_28 = operator_new(0x30);
    uVar1 = s_Need_space_between_number_and_id_01cef850._8_8_;
    local_38 = 0x31;
    local_30 = 0x29;
    *(undefined8 *)local_28 = s_Need_space_between_number_and_id_01cef850._0_8_;
    *(undefined8 *)(local_28 + 8) = uVar1;
    local_28[0x29] = '\0';
    uVar3 = s_Need_space_between_number_and_id_01cef850._32_8_;
    uVar1 = s_Need_space_between_number_and_id_01cef850._16_8_;
    *(undefined8 *)(local_28 + 0x18) = s_Need_space_between_number_and_id_01cef850._24_8_;
    *(undefined8 *)(local_28 + 0x20) = uVar3;
    *(undefined8 *)(local_28 + 0x10) = uVar1;
    local_28[0x28] = '.';
  }
  (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
            (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
             *(undefined4 *)(param_1 + 0x90),&local_38);
  if ((local_38 & 1) != 0) {
    operator_delete(local_28);
  }
LAB_00842788:
  uVar8 = 3;
  if (bVar2) {
    uVar8 = 4;
  }
  return uVar8;
}


