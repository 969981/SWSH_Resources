/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00841e60; name: FUN_00841e60
 */


void FUN_00841e60(long param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong local_78 [2];
  char *local_68;
  
LAB_00841ebc:
  cVar1 = *(char *)(param_1 + 0x70);
  if (cVar1 == '\n') {
    if (*(char *)(param_1 + 0xad) == '\0') {
      local_68 = operator_new(0x30);
      uVar4 = s_String_literals_cannot_cross_lin_01d2c81a._8_8_;
      local_78[0] = 0x31;
      local_78[1] = 0x2d;
      *(undefined8 *)local_68 = s_String_literals_cannot_cross_lin_01d2c81a._0_8_;
      *(undefined8 *)(local_68 + 8) = uVar4;
      uVar6 = s_String_literals_cannot_cross_lin_01d2c81a._24_8_;
      uVar5 = s_String_literals_cannot_cross_lin_01d2c81a._16_8_;
      uVar4 = CONCAT35(s_String_literals_cannot_cross_lin_01d2c81a._37_3_,
                       s_String_literals_cannot_cross_lin_01d2c81a._32_5_);
      *(ulong *)(local_68 + 0x25) =
           CONCAT53(s_String_literals_cannot_cross_lin_01d2c81a._40_5_,
                    s_String_literals_cannot_cross_lin_01d2c81a._37_3_);
      *(undefined8 *)(local_68 + 0x18) = uVar6;
      *(undefined8 *)(local_68 + 0x20) = uVar4;
      *(undefined8 *)(local_68 + 0x10) = uVar5;
      local_68[0x2d] = '\0';
LAB_00842310:
      (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90),local_78);
      if ((local_78[0] & 1) == 0) {
        return;
      }
      operator_delete(local_68);
      return;
    }
  }
  else {
    if (cVar1 != '\\') {
      if (cVar1 == '\0') {
        local_68 = operator_new(0x20);
        local_78[0] = 0x21;
        local_68[0x19] = '\0';
        uVar5 = s_Unexpected_end_of_string__01d47ad6._16_8_;
        uVar4 = s_Unexpected_end_of_string__01d47ad6._8_8_;
        local_78[1] = 0x19;
        *(undefined8 *)local_68 = s_Unexpected_end_of_string__01d47ad6._0_8_;
        local_68[0x18] = '.';
        *(undefined8 *)(local_68 + 8) = uVar4;
        *(undefined8 *)(local_68 + 0x10) = uVar5;
        goto LAB_00842310;
      }
      FUN_00841d30(param_1);
      if (cVar1 == param_2) {
        return;
      }
      goto LAB_00841ebc;
    }
    FUN_00841d30(param_1);
    bVar2 = *(byte *)(param_1 + 0x70);
    switch(bVar2) {
    case 0x5c:
      goto switchD_00841f14_caseD_5c;
    }
    if ((bVar2 & 0xf8) != 0x30) {
      if (bVar2 == 0x55) {
        FUN_00841d30(param_1);
        if ((*(char *)(param_1 + 0x70) == '0') &&
           (FUN_00841d30(param_1), *(char *)(param_1 + 0x70) == '0')) {
          FUN_00841d30(param_1);
          if ((*(char *)(param_1 + 0x70) == '1') || (*(char *)(param_1 + 0x70) == '0')) {
            FUN_00841d30(param_1);
            if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
               ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
                ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
              FUN_00841d30(param_1);
              if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
                 ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
                  ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
                FUN_00841d30(param_1);
                if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
                   ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
                    ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
                  FUN_00841d30(param_1);
                  if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
                     ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
                      ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
                    FUN_00841d30(param_1);
                    if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
                       ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
                        ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0))))
                    goto switchD_00841f14_caseD_5c;
                  }
                }
              }
            }
          }
        }
        local_68 = operator_new(0x40);
        uVar7 = s_Expected_eight_hex_digits_up_to_1_01d0d8af._24_8_;
        uVar4 = s_Expected_eight_hex_digits_up_to_1_01d0d8af._16_8_;
        local_78[0] = 0x41;
        local_68[0x3d] = '\0';
        uVar6 = s_Expected_eight_hex_digits_up_to_1_01d0d8af._8_8_;
        uVar5 = s_Expected_eight_hex_digits_up_to_1_01d0d8af._0_8_;
        local_78[1] = 0x3d;
        *(undefined8 *)(local_68 + 0x10) = uVar4;
        *(undefined8 *)(local_68 + 0x18) = uVar7;
        uVar4 = CONCAT35(s_Expected_eight_hex_digits_up_to_1_01d0d8af._53_3_,
                         s_Expected_eight_hex_digits_up_to_1_01d0d8af._48_5_);
        *(undefined8 *)local_68 = uVar5;
        *(undefined8 *)(local_68 + 8) = uVar6;
        uVar6 = s_Expected_eight_hex_digits_up_to_1_01d0d8af._40_8_;
        uVar5 = s_Expected_eight_hex_digits_up_to_1_01d0d8af._32_8_;
        *(ulong *)(local_68 + 0x35) =
             CONCAT53(s_Expected_eight_hex_digits_up_to_1_01d0d8af._56_5_,
                      s_Expected_eight_hex_digits_up_to_1_01d0d8af._53_3_);
        *(undefined8 *)(local_68 + 0x28) = uVar6;
        *(undefined8 *)(local_68 + 0x30) = uVar4;
        *(undefined8 *)(local_68 + 0x20) = uVar5;
      }
      else if (bVar2 == 0x75) {
        FUN_00841d30(param_1);
        if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
           ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
            ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
          FUN_00841d30(param_1);
          if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
             ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
              ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
            FUN_00841d30(param_1);
            if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
               ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
                ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
              FUN_00841d30(param_1);
              if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
                 ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
                  ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0))))
              goto switchD_00841f14_caseD_5c;
            }
          }
        }
        local_68 = operator_new(0x40);
        uVar4 = s_Expected_four_hex_digits_for__u_e_01d007da._8_8_;
        local_78[0] = 0x41;
        local_78[1] = 0x30;
        *(undefined8 *)local_68 = s_Expected_four_hex_digits_for__u_e_01d007da._0_8_;
        *(undefined8 *)(local_68 + 8) = uVar4;
        uVar5 = s_Expected_four_hex_digits_for__u_e_01d007da._24_8_;
        uVar4 = s_Expected_four_hex_digits_for__u_e_01d007da._16_8_;
        local_68[0x30] = '\0';
        uVar6 = s_Expected_four_hex_digits_for__u_e_01d007da._40_8_;
        *(undefined8 *)(local_68 + 0x20) = s_Expected_four_hex_digits_for__u_e_01d007da._32_8_;
        *(undefined8 *)(local_68 + 0x28) = uVar6;
        *(undefined8 *)(local_68 + 0x10) = uVar4;
        *(undefined8 *)(local_68 + 0x18) = uVar5;
      }
      else if (bVar2 == 0x78) {
        FUN_00841d30(param_1);
        if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
           ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
            ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) goto switchD_00841f14_caseD_5c;
        local_68 = operator_new(0x30);
        local_78[1] = 0x28;
        *(undefined8 *)local_68 = s_Expected_hex_digits_for_escape_s_01d1b24f._0_8_;
        uVar5 = s_Expected_hex_digits_for_escape_s_01d1b24f._16_8_;
        uVar4 = s_Expected_hex_digits_for_escape_s_01d1b24f._8_8_;
        local_78[0] = 0x31;
        local_68[0x28] = '\0';
        uVar6 = s_Expected_hex_digits_for_escape_s_01d1b24f._32_8_;
        *(undefined8 *)(local_68 + 0x18) = s_Expected_hex_digits_for_escape_s_01d1b24f._24_8_;
        *(undefined8 *)(local_68 + 0x20) = uVar6;
        *(undefined8 *)(local_68 + 8) = uVar4;
        *(undefined8 *)(local_68 + 0x10) = uVar5;
      }
      else {
        local_68 = operator_new(0x30);
        uVar5 = s_Invalid_escape_sequence_in_strin_01d1e678._32_8_;
        uVar4 = s_Invalid_escape_sequence_in_strin_01d1e678._8_8_;
        local_78[1] = 0x2a;
        local_78[0] = 0x31;
        *(undefined8 *)local_68 = s_Invalid_escape_sequence_in_strin_01d1e678._0_8_;
        *(undefined8 *)(local_68 + 8) = uVar4;
        local_68[0x28] = 'l';
        uVar4 = s_Invalid_escape_sequence_in_strin_01d1e678._24_8_;
        local_68[0x29] = '.';
        *(undefined8 *)(local_68 + 0x10) = s_Invalid_escape_sequence_in_strin_01d1e678._16_8_;
        *(undefined8 *)(local_68 + 0x18) = uVar4;
        *(undefined8 *)(local_68 + 0x20) = uVar5;
        local_68[0x2a] = '\0';
      }
      (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90),local_78);
      if ((local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
      goto LAB_00841ebc;
    }
  }
switchD_00841f14_caseD_5c:
  FUN_00841d30(param_1);
  goto LAB_00841ebc;
}


