/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008434c0; name: FUN_008434c0
 */


void FUN_008434c0(byte *param_1,ulong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined1 auStack_b0 [8];
  byte local_a8 [16];
  void *local_98;
  uint local_90;
  undefined1 auStack_8c [44];
  
  bVar5 = *param_1;
  uVar16 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar16 = *(ulong *)(param_1 + 8);
  }
  if (uVar16 == 0) {
    FUN_00801270(&local_90,2,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/tokenizer.cc"
                 ,0x414);
    uVar4 = FUN_00800f30(&local_90,
                         " Tokenizer::ParseStringAppend() passed text that could not have been tokenized as a string: "
                        );
    FUN_007ff6d0(local_a8,param_1);
    uVar4 = FUN_00800f60(uVar4,local_a8);
    FUN_00800fa0(auStack_b0,uVar4);
    if ((local_a8[0] & 1) != 0) {
      operator_delete(local_98);
    }
    FUN_00801290(&local_90);
    return;
  }
  bVar5 = bVar5 & 1;
  if (((byte)*param_2 & 1) == 0) {
    if ((byte)((byte)*param_2 >> 1) + uVar16 < 0x17) goto LAB_008435b8;
  }
  else if (param_2[1] + uVar16 <= (*param_2 & 0xfffffffffffffffe) - 1) goto LAB_008435b8;
  std::string::reserve((ulong)param_2);
  bVar5 = *param_1 & 1;
LAB_008435b8:
  pbVar7 = *(byte **)(param_1 + 0x10);
  if (bVar5 == 0) {
    pbVar7 = param_1 + 1;
  }
LAB_008435f8:
  while( true ) {
    pbVar15 = pbVar7 + 1;
    bVar5 = *pbVar15;
    cVar3 = (char)param_2;
    if (bVar5 == 0x5c) break;
    if (bVar5 == 0) {
      return;
    }
LAB_0084367c:
    pbVar13 = param_1 + 1;
    if ((*param_1 & 1) != 0) {
      pbVar13 = *(byte **)(param_1 + 0x10);
    }
    if ((bVar5 != *pbVar13) || (pbVar13 = pbVar7 + 2, pbVar7 = pbVar15, *pbVar13 != 0)) {
      std::string::push_back(cVar3);
      pbVar7 = pbVar15;
    }
  }
  pbVar13 = pbVar7 + 2;
  bVar2 = *pbVar13;
  if (bVar2 == 0) goto LAB_0084367c;
  uVar6 = (uint)bVar2;
  if ((bVar2 & 0xf8) == 0x30) {
    if ((bVar2 - 0x30 < 10) || (uVar6 - 0x61 < 0x1a)) {
      bVar5 = pbVar7[3];
    }
    else {
      bVar5 = pbVar7[3];
    }
    if ((bVar5 & 0xf8) == 0x30) {
      pbVar13 = pbVar7 + 3;
    }
    if ((pbVar13[1] & 0xf8) == 0x30) {
      pbVar13 = pbVar13 + 1;
    }
    goto switchD_008436c0_caseD_61;
  }
  switch(uVar6) {
  case 0x22:
  case 0x27:
  case 0x3f:
  case 0x5c:
    break;
  default:
    break;
  case 0x55:
  case 0x75:
    uVar8 = 4;
    if (bVar2 != 0x75) {
      uVar8 = (uint)(uVar6 == 0x55) << 3;
    }
    if (uVar8 == 0) {
LAB_0084382c:
      std::string::push_back(cVar3);
      pbVar7 = pbVar13;
    }
    else {
      uVar16 = (ulong)(uVar8 | 3);
      uVar6 = 0;
      pbVar15 = pbVar7 + 3;
      pbVar1 = pbVar7 + uVar16;
      do {
        bVar5 = *pbVar15;
        if (bVar5 == 0) goto LAB_0084382c;
        uVar9 = (uint)bVar5;
        uVar8 = uVar9 - 0x37;
        if (0x19 < bVar5 - 0x41) {
          uVar8 = 0xffffffff;
        }
        if (uVar9 - 0x61 < 0x1a) {
          uVar8 = uVar9 - 0x57;
        }
        pbVar15 = pbVar15 + 1;
        if (uVar9 - 0x30 < 10) {
          uVar8 = uVar9 - 0x30;
        }
        uVar6 = uVar8 + uVar6 * 0x10;
      } while (pbVar15 < pbVar1);
      if (((uVar6 >> 10 == 0x36) && (*pbVar1 == 0x5c)) && (pbVar1[1] == 0x75)) {
        bVar5 = pbVar1[2];
        if (bVar5 != 0) {
          uVar8 = bVar5 - 0x30;
          if (uVar8 < 10) {
LAB_00843948:
            bVar5 = pbVar1[3];
          }
          else {
            uVar9 = (uint)bVar5;
            if (0x19 < uVar9 - 0x61) {
              uVar8 = uVar9 - 0x37;
              if (0x19 < uVar9 - 0x41) {
                uVar8 = 0xffffffff;
              }
              goto LAB_00843948;
            }
            uVar8 = uVar9 - 0x57;
            bVar5 = pbVar1[3];
          }
          if (bVar5 != 0) {
            uVar10 = (uint)bVar5;
            uVar9 = uVar10 - 0x30;
            if (uVar9 < 10) {
LAB_00843988:
              bVar5 = pbVar1[4];
            }
            else {
              if (0x19 < uVar10 - 0x61) {
                uVar9 = uVar10 - 0x37;
                if (0x19 < uVar10 - 0x41) {
                  uVar9 = 0xffffffff;
                }
                goto LAB_00843988;
              }
              uVar9 = uVar10 - 0x57;
              bVar5 = pbVar1[4];
            }
            if (bVar5 != 0) {
              uVar11 = (uint)bVar5;
              uVar10 = uVar11 - 0x30;
              if (uVar10 < 10) {
LAB_008439c8:
                bVar5 = pbVar1[5];
              }
              else {
                if (0x19 < uVar11 - 0x61) {
                  uVar10 = uVar11 - 0x37;
                  if (0x19 < uVar11 - 0x41) {
                    uVar10 = 0xffffffff;
                  }
                  goto LAB_008439c8;
                }
                uVar10 = uVar11 - 0x57;
                bVar5 = pbVar1[5];
              }
              if (bVar5 != 0) {
                uVar11 = bVar5 - 0x30;
                if (9 < uVar11) {
                  uVar12 = (uint)bVar5;
                  if (bVar5 - 0x61 < 0x1a) {
                    uVar11 = uVar12 - 0x57;
                  }
                  else {
                    uVar11 = uVar12 - 0x37;
                    if (0x19 < uVar12 - 0x41) {
                      uVar11 = 0xffffffff;
                    }
                  }
                }
                uVar11 = uVar11 + (uVar10 + (uVar9 + uVar8 * 0x10) * 0x10) * 0x10;
                if (uVar11 >> 10 == 0x37) {
                  uVar6 = (uVar11 - 0xdc00 | uVar6 * 0x400 + 0xfca00000) + 0x10000;
                  uVar16 = uVar16 + 6;
                }
              }
            }
          }
        }
      }
      local_90 = 0;
      if (uVar6 < 0x80) {
        lVar14 = 1;
        local_90 = uVar6;
LAB_00843b00:
        local_90 = FUN_00801570(local_90);
        std::string::append((char *)param_2,(ulong)(auStack_8c + -lVar14));
      }
      else {
        if (uVar6 < 0x800) {
          local_90 = (uVar6 & 0x7c0) << 2 | uVar6 & 0x3f | 0xc080;
          lVar14 = 2;
          goto LAB_00843b00;
        }
        if (uVar6 >> 0x10 == 0) {
          local_90 = (uVar6 & 0xfc0) << 2 | uVar6 & 0x3f | (uVar6 >> 0xc & 0xf) << 0x10 | 0xe08080;
          lVar14 = 3;
          goto LAB_00843b00;
        }
        if (uVar6 >> 0x15 == 0) {
          local_90 = (uVar6 & 0x3f000) << 4 | (uVar6 >> 0x12 & 7) << 0x18 |
                     uVar6 & 0x3f | (uVar6 >> 6 & 0x3f) << 8 | 0xf0808080;
          lVar14 = 4;
          goto LAB_00843b00;
        }
        FUN_0080f3e0(param_2,"\\U%08x");
      }
      pbVar7 = pbVar7 + (uVar16 - 1);
    }
    goto LAB_008435f8;
  case 0x61:
    break;
  case 0x62:
    break;
  case 0x66:
    break;
  case 0x6e:
    break;
  case 0x72:
    break;
  case 0x74:
    break;
  case 0x76:
    break;
  case 0x78:
    uVar6 = (uint)pbVar7[3];
    if (uVar6 - 0x30 < 10) {
LAB_008438c4:
      pbVar13 = pbVar7 + 3;
    }
    else {
      uVar6 = uVar6 - 0x41;
      if ((uVar6 < 0x26) && ((1L << ((ulong)uVar6 & 0x3f) & 0x3f0000003fU) != 0)) goto LAB_008438c4;
    }
    uVar6 = (uint)pbVar13[1];
    if ((uVar6 - 0x30 < 10) ||
       ((uVar6 = uVar6 - 0x41, uVar6 < 0x26 && ((1L << ((ulong)uVar6 & 0x3f) & 0x3f0000003fU) != 0))
       )) {
      pbVar13 = pbVar13 + 1;
    }
    std::string::push_back(cVar3);
    pbVar7 = pbVar13;
    goto LAB_008435f8;
  }
switchD_008436c0_caseD_61:
  std::string::push_back(cVar3);
  pbVar7 = pbVar13;
  goto LAB_008435f8;
}


