/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00842de0; name: FUN_00842de0
 */


/* WARNING: Removing unreachable block (ram,0x00842f3c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00842de0(undefined4 *param_1)

{
  string *psVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  long *plVar14;
  ulong local_68;
  undefined8 local_60;
  char *local_58;
  
  psVar1 = (string *)(param_1 + 2);
  param_1[0xc] = *param_1;
  std::string::operator=((string *)(param_1 + 0xe),psVar1);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 8);
  param_1[0x16] = param_1[10];
  if (*(char *)(param_1 + 0x22) != '\0') {
LAB_00842f7c:
    *param_1 = 1;
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
      *(undefined2 *)psVar1 = 0;
    }
    else {
      **(undefined1 **)(param_1 + 6) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
    }
    param_1[8] = param_1[0x23];
    param_1[9] = param_1[0x24];
    param_1[10] = param_1[0x24];
    return 0;
  }
  bVar3 = *(byte *)(param_1 + 0x1c);
  do {
    if ((bVar3 - 9 < 5) || (bVar3 == 0x20)) {
      FUN_00841d30(param_1);
    }
    else {
      iVar9 = FUN_00842cf0(param_1);
      if (iVar9 == 0) {
        while (*(char *)(param_1 + 0x1c) != '\0') {
          if (*(char *)(param_1 + 0x1c) == '\n') {
            FUN_00841d30(param_1);
            break;
          }
          FUN_00841d30(param_1);
        }
        cVar4 = *(char *)(param_1 + 0x22);
      }
      else {
        if (iVar9 != 1) {
          if (iVar9 == 2) {
            return 1;
          }
          if (*(char *)(param_1 + 0x22) == '\0') {
            bVar3 = *(byte *)(param_1 + 0x1c);
            if ((bVar3 == 0) || ((byte)(bVar3 - 1) < 0x1f)) {
              local_58 = operator_new(0x30);
              uVar7 = s_Invalid_control_characters_encou_01d1b278._8_8_;
              uVar11 = CONCAT17(s_Invalid_control_characters_encou_01d1b278[0x27],
                                s_Invalid_control_characters_encou_01d1b278._32_7_);
              local_60 = 0x2f;
              uVar6 = CONCAT71(s_Invalid_control_characters_encou_01d1b278._40_7_,
                               s_Invalid_control_characters_encou_01d1b278[0x27]);
              *(undefined8 *)local_58 = s_Invalid_control_characters_encou_01d1b278._0_8_;
              *(undefined8 *)(local_58 + 8) = uVar7;
              uVar8 = s_Invalid_control_characters_encou_01d1b278._24_8_;
              uVar7 = s_Invalid_control_characters_encou_01d1b278._16_8_;
              local_68 = 0x31;
              *(undefined8 *)(local_58 + 0x27) = uVar6;
              *(undefined8 *)(local_58 + 0x10) = uVar7;
              local_58[0x2f] = '\0';
              *(undefined8 *)(local_58 + 0x18) = uVar8;
              *(undefined8 *)(local_58 + 0x20) = uVar11;
              (**(code **)(**(long **)(param_1 + 0x1a) + 0x10))
                        (*(long **)(param_1 + 0x1a),param_1[0x23],param_1[0x24],&local_68);
              if ((local_68 & 1) != 0) {
                operator_delete(local_58);
              }
              do {
                do {
                  FUN_00841d30(param_1);
                } while (*(byte *)(param_1 + 0x1c) - 1 < 0x1f);
                if (*(char *)(param_1 + 0x22) != '\0') goto LAB_00842f7c;
              } while (*(byte *)(param_1 + 0x1c) == 0);
              goto LAB_00842e60;
            }
            *param_1 = 0;
            if ((*(byte *)(param_1 + 2) & 1) == 0) {
              *(undefined2 *)psVar1 = 0;
            }
            else {
              **(undefined1 **)(param_1 + 6) = 0;
              bVar3 = *(byte *)(param_1 + 0x1c);
              *(undefined8 *)(param_1 + 4) = 0;
            }
            param_1[8] = param_1[0x23];
            param_1[9] = param_1[0x24];
            *(string **)(param_1 + 0x26) = psVar1;
            param_1[0x28] = param_1[0x21];
            if (((bVar3 - 0x61 < 0x1a) || (bVar3 == 0x5f)) ||
               (uVar13 = (uint)bVar3, (uVar13 - 0x41 & 0xff) < 0x1a)) {
              do {
                do {
                  FUN_00841d30(param_1);
                  bVar3 = *(byte *)(param_1 + 0x1c);
                } while ((byte)((bVar3 & 0xdf) + 0xbf) < 0x1a);
              } while ((bVar3 == 0x5f) || ((byte)(bVar3 - 0x30) < 10));
              uVar10 = 2;
            }
            else if (uVar13 == 0x2e) {
              FUN_00841d30(param_1);
              bVar5 = true;
              if (*(byte *)(param_1 + 0x1c) - 0x30 < 10) goto LAB_00843108;
LAB_0084311c:
              bVar12 = false;
              if (!bVar5) goto LAB_008431dc;
LAB_00843124:
              if (bVar12) {
                if (((param_1[0xc] == 2) && (param_1[8] == param_1[0x14])) &&
                   (param_1[9] == param_1[0x16])) {
                  uVar10 = param_1[0x23];
                  iVar9 = param_1[0x24];
                  plVar14 = *(long **)(param_1 + 0x1a);
                  local_58 = operator_new(0x40);
                  uVar11 = s_Need_space_between_identifier_an_01d2522e._8_8_;
                  local_68 = 0x41;
                  local_60 = 0x30;
                  *(undefined8 *)local_58 = s_Need_space_between_identifier_an_01d2522e._0_8_;
                  *(undefined8 *)(local_58 + 8) = uVar11;
                  local_58[0x30] = '\0';
                  uVar7 = s_Need_space_between_identifier_an_01d2522e._40_8_;
                  uVar6 = s_Need_space_between_identifier_an_01d2522e._24_8_;
                  uVar11 = s_Need_space_between_identifier_an_01d2522e._16_8_;
                  *(undefined8 *)(local_58 + 0x20) =
                       s_Need_space_between_identifier_an_01d2522e._32_8_;
                  *(undefined8 *)(local_58 + 0x28) = uVar7;
                  *(undefined8 *)(local_58 + 0x10) = uVar11;
                  *(undefined8 *)(local_58 + 0x18) = uVar6;
                  (**(code **)(*plVar14 + 0x10))(plVar14,uVar10,iVar9 + -2,&local_68);
                  if ((local_68 & 1) != 0) {
                    operator_delete(local_58);
                  }
                }
                uVar10 = FUN_00842360(param_1,0,1);
              }
              else {
LAB_00843288:
                uVar10 = 6;
              }
            }
            else if (uVar13 == 0x30) {
              FUN_00841d30(param_1);
              uVar11 = 1;
LAB_008431e8:
              uVar10 = FUN_00842360(param_1,uVar11,0);
            }
            else {
              bVar5 = false;
              if (9 < uVar13 - 0x30) goto LAB_0084311c;
LAB_00843108:
              FUN_00841d30(param_1);
              bVar12 = true;
              if (bVar5) goto LAB_00843124;
LAB_008431dc:
              if (bVar12) {
                uVar11 = 0;
                goto LAB_008431e8;
              }
              cVar4 = *(char *)(param_1 + 0x1c);
              if (cVar4 == '\'') {
                FUN_00841d30(param_1);
                uVar11 = 0x27;
              }
              else {
                if (cVar4 != '\"') {
                  if (cVar4 < '\0') {
                    plVar14 = *(long **)(param_1 + 0x1a);
                    uVar10 = param_1[0x23];
                    uVar2 = param_1[0x24];
                    FUN_0080f330(&local_68,"Interpreting non ascii codepoint %d.");
                    (**(code **)(*plVar14 + 0x10))(plVar14,uVar10,uVar2,&local_68);
                    if ((local_68 & 1) != 0) {
                      operator_delete(local_58);
                    }
                  }
                  FUN_00841d30(param_1);
                  goto LAB_00843288;
                }
                FUN_00841d30(param_1);
                uVar11 = 0x22;
              }
              FUN_00841e60(param_1,uVar11);
              uVar10 = 5;
            }
            *param_1 = uVar10;
            if (param_1[0x21] != param_1[0x28]) {
              std::string::append(*(char **)(param_1 + 0x26),
                                  *(long *)(param_1 + 0x1e) + (long)(int)param_1[0x28]);
            }
            param_1[0x28] = 0xffffffff;
            *(undefined8 *)(param_1 + 0x26) = 0;
            param_1[10] = param_1[0x24];
            return 1;
          }
          goto LAB_00842f7c;
        }
        FUN_00842820(param_1,0);
        cVar4 = *(char *)(param_1 + 0x22);
      }
      if (cVar4 != '\0') goto LAB_00842f7c;
    }
LAB_00842e60:
    bVar3 = *(byte *)(param_1 + 0x1c);
  } while( true );
}


