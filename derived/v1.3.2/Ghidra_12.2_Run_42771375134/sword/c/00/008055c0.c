/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008055c0; name: FUN_008055c0
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_008055c0(long param_1,long *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  undefined8 uVar15;
  byte *__s2;
  byte *pbVar16;
  long lVar17;
  byte *pbVar18;
  ulong uVar19;
  long lVar20;
  char *pcVar21;
  char *pcVar22;
  long lVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  byte local_138 [16];
  void *local_128;
  ulong local_120;
  ulong local_118;
  void *local_110;
  ulong local_108;
  ulong local_100;
  byte *local_f8;
  ulong local_d8;
  ulong local_d0;
  void *local_c8;
  ulong local_c0;
  ulong local_b8;
  void *local_b0;
  ulong local_a8;
  ulong local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulong local_80;
  size_t local_78;
  byte *local_70;
  
  plVar8 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  lVar9 = (**(code **)(*param_2 + 0xb8))(param_2);
  local_78 = 0;
  local_70 = (byte *)0x0;
  local_80 = 0;
  uVar15 = *(undefined8 *)(param_1 + 0x48);
  lVar23 = param_1 + 0x28;
  uVar10 = FUN_00844230(param_2,&local_88,&local_90);
  if ((uVar10 & 1) != 0) {
    local_100 = 0;
    local_f8 = (byte *)0x0;
    local_108 = 0x5b02;
    bVar2 = *(byte *)(param_1 + 0x30);
    uVar10 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar10 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar10 == 1) {
      if ((bVar2 & 1) == 0) {
        if (*(char *)(param_1 + 0x31) == '[') {
          lVar17 = -(ulong)(bVar2 >> 1);
          pcVar21 = (char *)(param_1 + 0x32);
          pcVar22 = (char *)((ulong)&local_108 | 2);
          do {
            lVar17 = lVar17 + 1;
            if (lVar17 == 0) goto LAB_00805988;
            cVar3 = *pcVar22;
            cVar4 = *pcVar21;
            pcVar21 = pcVar21 + 1;
            pcVar22 = pcVar22 + 1;
          } while (cVar4 == cVar3);
        }
      }
      else if (**(char **)(param_1 + 0x40) == '[') {
LAB_00805988:
        FUN_00842de0(lVar23);
        local_100 = 0;
        local_f8 = (byte *)0x0;
        local_108 = 0;
        local_a0 = 0;
        local_98 = (void *)0x0;
        local_a8 = 0;
        uVar10 = FUN_00806840(param_1,&local_108,&local_a8);
        if ((uVar10 & 1) == 0) {
LAB_00805a5c:
          uVar7 = 0;
        }
        else {
          local_b8 = 0;
          local_b0 = (void *)0x0;
          local_c0 = 0x5d02;
          uVar10 = FUN_00806c70(param_1,&local_c0);
          if ((local_c0 & 1) != 0) {
            operator_delete(local_b0);
          }
          if ((uVar10 & 1) == 0) goto LAB_00805a5c;
          local_b8 = 0;
          local_b0 = (void *)0x0;
          local_c0 = 0x3a02;
          bVar2 = *(byte *)(param_1 + 0x30);
          uVar10 = (ulong)(bVar2 >> 1);
          if ((bVar2 & 1) != 0) {
            uVar10 = *(ulong *)(param_1 + 0x38);
          }
          if (uVar10 == 1) {
            if ((bVar2 & 1) == 0) {
              if (*(char *)(param_1 + 0x31) == ':') {
                lVar9 = -(ulong)(bVar2 >> 1);
                pcVar21 = (char *)(param_1 + 0x32);
                pcVar22 = (char *)((ulong)&local_c0 | 2);
                do {
                  lVar9 = lVar9 + 1;
                  if (lVar9 == 0) goto LAB_008066a4;
                  cVar3 = *pcVar22;
                  cVar4 = *pcVar21;
                  pcVar21 = pcVar21 + 1;
                  pcVar22 = pcVar22 + 1;
                } while (cVar4 == cVar3);
              }
            }
            else if (**(char **)(param_1 + 0x40) == ':') {
LAB_008066a4:
              FUN_00842de0(lVar23);
            }
          }
          local_b8 = 0;
          local_b0 = (void *)0x0;
          local_c0 = 0;
          lVar23 = (**(code **)(*param_2 + 0xb8))(param_2);
          uVar10 = FUN_00806e50(param_1,&local_108,*(undefined8 *)(*(long *)(lVar23 + 0x10) + 0x10),
                                &local_c0);
          if ((uVar10 & 1) == 0) {
            uVar7 = 0;
          }
          else {
            FUN_00807080(&local_d8,&local_a8,&local_108);
            (**(code **)(*plVar8 + 0x120))(plVar8,param_2,local_88,&local_d8);
            if ((local_d8 & 1) != 0) {
              operator_delete(local_c8);
            }
            (**(code **)(*plVar8 + 0x120))(plVar8,param_2,local_90,&local_c0);
            uVar7 = 1;
          }
          if ((local_c0 & 1) != 0) {
            operator_delete(local_b0);
          }
        }
        if ((local_a8 & 1) != 0) {
          operator_delete(local_98);
        }
        if ((local_108 & 1) != 0) {
          operator_delete(local_f8);
        }
        goto joined_r0x00806830;
      }
    }
  }
  puVar14 = (ulong *)(param_1 + 0x38);
  pbVar16 = (byte *)(param_1 + 0x30);
  local_100 = 0;
  local_f8 = (byte *)0x0;
  local_108 = 0x5b02;
  bVar2 = *pbVar16;
  uVar10 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar10 = *puVar14;
  }
  if (uVar10 == 1) {
    if ((bVar2 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '[') {
        lVar17 = -(ulong)(bVar2 >> 1);
        pcVar21 = (char *)(param_1 + 0x32);
        pcVar22 = (char *)((ulong)&local_108 | 2);
        do {
          lVar17 = lVar17 + 1;
          if (lVar17 == 0) goto LAB_00805738;
          cVar3 = *pcVar22;
          cVar4 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar22 = pcVar22 + 1;
        } while (cVar4 == cVar3);
      }
      goto LAB_008057b4;
    }
    if (**(char **)(param_1 + 0x40) != '[') goto LAB_008057b4;
LAB_00805738:
    FUN_00842de0(lVar23);
    uVar10 = FUN_00807170(param_1,&local_80);
    if ((uVar10 & 1) == 0) goto LAB_008064d4;
    local_f8 = (byte *)0x0;
    local_100 = 0;
    local_108 = 0x5d02;
    uVar10 = FUN_00806c70(param_1,&local_108);
    if ((local_108 & 1) != 0) {
      operator_delete(local_f8);
    }
    if ((uVar10 & 1) == 0) goto LAB_008064d4;
    plVar11 = *(long **)(param_1 + 8);
    if (plVar11 != (long *)0x0) {
      lVar17 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,&local_80);
      if (lVar17 == 0) goto LAB_008065c0;
      goto LAB_00805b38;
    }
    lVar17 = (**(code **)(*plVar8 + 0x268))(plVar8,&local_80);
    if (lVar17 != 0) goto LAB_00805b38;
LAB_008065c0:
    if (*(char *)(param_1 + 0xe5) != '\0') {
      std::operator+("Extension \"",(string *)&local_80);
      puVar12 = (ulong *)std::string::append((char *)&local_d8);
      local_c0 = *puVar12;
      local_b8 = puVar12[1];
      local_b0 = (void *)puVar12[2];
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = 0;
      pbVar24 = *(byte **)(lVar9 + 8);
      pbVar18 = *(byte **)(pbVar24 + 0x10);
      if ((*pbVar24 & 1) == 0) {
        pbVar18 = pbVar24 + 1;
      }
      goto LAB_00805c40;
    }
    std::operator+("Extension \"",(string *)&local_80);
    puVar14 = (ulong *)std::string::append((char *)&local_d8);
    local_c0 = *puVar14;
    local_b8 = puVar14[1];
    local_b0 = (void *)puVar14[2];
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = 0;
    pbVar18 = *(byte **)(lVar9 + 8);
    pbVar16 = *(byte **)(pbVar18 + 0x10);
    if ((*pbVar18 & 1) == 0) {
      pbVar16 = pbVar18 + 1;
    }
LAB_00805fdc:
    puVar14 = (ulong *)std::string::append((char *)&local_c0,(ulong)pbVar16);
    local_a8 = *puVar14;
    local_a0 = puVar14[1];
    local_98 = (void *)puVar14[2];
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = 0;
    puVar14 = (ulong *)std::string::append((char *)&local_a8);
    local_108 = *puVar14;
    local_100 = puVar14[1];
    local_f8 = (byte *)puVar14[2];
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = 0;
    FUN_00802750(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_108)
    ;
    if ((local_108 & 1) != 0) {
      operator_delete(local_f8);
    }
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_d8 & 1) != 0) {
      local_128 = local_c8;
LAB_008064d0:
      operator_delete(local_128);
    }
LAB_008064d4:
    uVar7 = 0;
    goto joined_r0x00806830;
  }
LAB_008057b4:
  uVar10 = FUN_00807310(param_1,&local_80);
  if ((uVar10 & 1) == 0) {
    uVar7 = 0;
    goto joined_r0x00806830;
  }
  if ((*(char *)(param_1 + 0xe7) != '\0') &&
     (uVar10 = FUN_00800480(&local_80,&local_120), (uVar10 & 1) != 0)) {
    lVar17 = FUN_007e4500(lVar9,local_120 & 0xffffffff);
    if (lVar17 == 0) {
      lVar17 = FUN_007e3b90(lVar9,local_120 & 0xffffffff);
    }
    else {
      lVar17 = (**(code **)(*plVar8 + 0x270))(plVar8);
    }
joined_r0x00805b34:
    if (lVar17 == 0) goto LAB_00805bd8;
LAB_00805b38:
    if (*(int *)(param_1 + 0xe0) != 1) {
LAB_00805ebc:
      puVar5 = PTR_DAT_02716e20;
      if (*(int *)(PTR_DAT_02716e20 + (ulong)*(uint *)(lVar17 + 0x3c) * 4) == 10) {
        local_100 = 0;
        local_f8 = (byte *)0x0;
        local_108 = 0x3a02;
        bVar2 = *pbVar16;
        uVar10 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          uVar10 = *puVar14;
        }
        if (uVar10 == 1) {
          if ((bVar2 & 1) == 0) {
            if (*(char *)(param_1 + 0x31) == ':') {
              lVar9 = -(ulong)(bVar2 >> 1);
              pcVar21 = (char *)(param_1 + 0x32);
              pcVar22 = (char *)((ulong)&local_108 | 2);
              do {
                lVar9 = lVar9 + 1;
                if (lVar9 == 0) goto LAB_00806104;
                cVar3 = *pcVar22;
                cVar4 = *pcVar21;
                pcVar21 = pcVar21 + 1;
                pcVar22 = pcVar22 + 1;
              } while (cVar4 == cVar3);
            }
          }
          else if (**(char **)(param_1 + 0x40) == ':') {
LAB_00806104:
            FUN_00842de0(lVar23);
          }
        }
      }
      else {
        local_100 = 0;
        local_f8 = (byte *)0x0;
        local_108 = 0x3a02;
        uVar10 = FUN_00806c70(param_1,&local_108);
        if ((local_108 & 1) != 0) {
          operator_delete(local_f8);
        }
        if ((uVar10 & 1) == 0) goto LAB_008064d4;
      }
      if (*(int *)(lVar17 + 0x40) == 3) {
        local_100 = 0;
        local_f8 = (byte *)0x0;
        local_108 = 0x5b02;
        bVar2 = *pbVar16;
        uVar10 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          uVar10 = *puVar14;
        }
        if (uVar10 == 1) {
          if ((bVar2 & 1) == 0) {
            if (*(char *)(param_1 + 0x31) == '[') {
              lVar9 = -(ulong)(bVar2 >> 1);
              pcVar21 = (char *)(param_1 + 0x32);
              pcVar22 = (char *)((ulong)&local_108 | 2);
              do {
                lVar9 = lVar9 + 1;
                if (lVar9 == 0) goto LAB_008061d0;
                cVar3 = *pcVar22;
                cVar4 = *pcVar21;
                pcVar21 = pcVar21 + 1;
                pcVar22 = pcVar22 + 1;
              } while (cVar4 == cVar3);
            }
          }
          else if (**(char **)(param_1 + 0x40) == '[') {
LAB_008061d0:
            FUN_00842de0(lVar23);
            do {
              if (*(int *)(puVar5 + (ulong)*(uint *)(lVar17 + 0x3c) * 4) == 10) {
                uVar10 = FUN_00807ae0();
              }
              else {
                uVar10 = FUN_00807c30(param_1,param_2,plVar8,lVar17);
              }
              if ((uVar10 & 1) == 0) goto LAB_008064d4;
              local_100 = 0;
              local_f8 = (byte *)0x0;
              local_108 = 0x5d02;
              bVar2 = *pbVar16;
              uVar10 = (ulong)(bVar2 >> 1);
              if ((bVar2 & 1) != 0) {
                uVar10 = *puVar14;
              }
              if (uVar10 == 1) {
                if ((bVar2 & 1) == 0) {
                  if (*(char *)(param_1 + 0x31) == ']') {
                    lVar9 = -(ulong)(bVar2 >> 1);
                    pcVar21 = (char *)((ulong)&local_108 | 2);
                    pcVar22 = (char *)(param_1 + 0x32);
                    do {
                      lVar9 = lVar9 + 1;
                      if (lVar9 == 0) goto LAB_00806628;
                      cVar3 = *pcVar21;
                      cVar4 = *pcVar22;
                      pcVar21 = pcVar21 + 1;
                      pcVar22 = pcVar22 + 1;
                    } while (cVar4 == cVar3);
                  }
                }
                else if (**(char **)(param_1 + 0x40) == ']') {
LAB_00806628:
                  FUN_00842de0(lVar23);
                  goto LAB_00806310;
                }
              }
              local_100 = 0;
              local_f8 = (byte *)0x0;
              local_108 = 0x2c02;
              uVar10 = FUN_00806c70(param_1,&local_108);
              if ((local_108 & 1) != 0) {
                operator_delete(local_f8);
              }
              uVar7 = 0;
            } while ((uVar10 & 1) != 0);
            goto joined_r0x00806830;
          }
        }
      }
      if (*(int *)(puVar5 + (ulong)*(uint *)(lVar17 + 0x3c) * 4) == 10) {
        uVar10 = FUN_00807ae0();
      }
      else {
        uVar10 = FUN_00807c30(param_1,param_2,plVar8,lVar17);
      }
      if ((uVar10 & 1) == 0) goto LAB_008064d4;
LAB_00806310:
      local_100 = 0;
      local_f8 = (byte *)0x0;
      local_108 = 0x3b02;
      bVar2 = *pbVar16;
      uVar19 = (ulong)(bVar2 >> 1);
      uVar10 = uVar19;
      if ((bVar2 & 1) != 0) {
        uVar10 = *puVar14;
      }
      if (uVar10 == 1) {
        if ((bVar2 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == ';') {
            lVar9 = -uVar19;
            pcVar21 = (char *)(param_1 + 0x32);
            pcVar22 = (char *)((ulong)&local_108 | 2);
            do {
              lVar9 = lVar9 + 1;
              if (lVar9 == 0) goto LAB_008064f8;
              cVar3 = *pcVar22;
              cVar4 = *pcVar21;
              pcVar21 = pcVar21 + 1;
              pcVar22 = pcVar22 + 1;
            } while (cVar4 == cVar3);
          }
          goto LAB_00806394;
        }
        if (**(char **)(param_1 + 0x40) != ';') goto LAB_00806394;
LAB_008064f8:
        FUN_00842de0(lVar23);
      }
      else {
LAB_00806394:
        local_98 = (void *)0x0;
        local_a0 = 0;
        local_a8 = 0x2c02;
        if (uVar10 == 1) {
          if ((bVar2 & 1) == 0) {
            if (*(char *)(param_1 + 0x31) == ',') {
              lVar9 = -uVar19;
              pcVar21 = (char *)(param_1 + 0x32);
              pcVar22 = (char *)((ulong)&local_a8 | 2);
              do {
                lVar9 = lVar9 + 1;
                if (lVar9 == 0) goto LAB_008064f8;
                cVar3 = *pcVar22;
                cVar4 = *pcVar21;
                pcVar21 = pcVar21 + 1;
                pcVar22 = pcVar22 + 1;
              } while (cVar4 == cVar3);
            }
          }
          else if (**(char **)(param_1 + 0x40) == ',') goto LAB_008064f8;
        }
      }
      if (*(char *)(*(long *)(lVar17 + 0x78) + 0x5a) != '\0') {
        std::operator+("text format contains deprecated field \"",(string *)&local_80);
        puVar14 = (ulong *)std::string::append((char *)&local_a8);
        local_108 = *puVar14;
        local_100 = puVar14[1];
        local_f8 = (byte *)puVar14[2];
        puVar14[1] = 0;
        puVar14[2] = 0;
        *puVar14 = 0;
        FUN_00805490(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                     &local_108);
        if ((local_108 & 1) != 0) {
          operator_delete(local_f8);
        }
        if ((local_a8 & 1) != 0) {
          operator_delete(local_98);
        }
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_00801fc0(*(long *)(param_1 + 0x10),lVar17,uVar15);
      }
      uVar7 = 1;
      goto joined_r0x00806830;
    }
    if ((*(int *)(lVar17 + 0x40) != 3) &&
       (uVar10 = (**(code **)(*plVar8 + 0x28))(plVar8,param_2,lVar17), (uVar10 & 1) != 0)) {
      std::operator+("Non-repeated field \"",(string *)&local_80);
      puVar14 = (ulong *)std::string::append((char *)&local_a8);
      local_108 = *puVar14;
      local_100 = puVar14[1];
      local_f8 = (byte *)puVar14[2];
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      FUN_00802750(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                   &local_108);
      if ((local_108 & 1) != 0) {
        operator_delete(local_f8);
      }
      if ((local_a8 & 1) == 0) goto LAB_008064d4;
      local_128 = local_98;
      goto LAB_008064d0;
    }
    puVar25 = *(undefined8 **)(lVar17 + 0x58);
    if ((puVar25 == (undefined8 *)0x0) ||
       (uVar10 = (**(code **)(*plVar8 + 0x40))(plVar8,param_2,puVar25), (uVar10 & 1) == 0))
    goto LAB_00805ebc;
    puVar13 = (undefined8 *)(**(code **)(*plVar8 + 0x50))(plVar8,param_2,puVar25);
    std::operator+("Field \"",(string *)&local_80);
    puVar14 = (ulong *)std::string::append((char *)local_138);
    local_120 = *puVar14;
    local_118 = puVar14[1];
    local_110 = (void *)puVar14[2];
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = 0;
    pbVar18 = (byte *)*puVar13;
    pbVar16 = *(byte **)(pbVar18 + 0x10);
    if ((*pbVar18 & 1) == 0) {
      pbVar16 = pbVar18 + 1;
    }
    puVar14 = (ulong *)std::string::append((char *)&local_120,(ulong)pbVar16);
    local_d8 = *puVar14;
    local_d0 = puVar14[1];
    local_c8 = (void *)puVar14[2];
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = 0;
    puVar14 = (ulong *)std::string::append((char *)&local_d8);
    local_c0 = *puVar14;
    local_b8 = puVar14[1];
    local_b0 = (void *)puVar14[2];
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = 0;
    pbVar18 = (byte *)*puVar25;
    pbVar16 = *(byte **)(pbVar18 + 0x10);
    if ((*pbVar18 & 1) == 0) {
      pbVar16 = pbVar18 + 1;
    }
    puVar14 = (ulong *)std::string::append((char *)&local_c0,(ulong)pbVar16);
    local_a8 = *puVar14;
    local_a0 = puVar14[1];
    local_98 = (void *)puVar14[2];
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = 0;
    puVar14 = (ulong *)std::string::append((char *)&local_a8);
    local_108 = *puVar14;
    local_100 = puVar14[1];
    local_f8 = (byte *)puVar14[2];
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = 0;
    FUN_00802750(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_108)
    ;
    if ((local_108 & 1) != 0) {
      operator_delete(local_f8);
    }
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    if ((local_120 & 1) != 0) {
      operator_delete(local_110);
    }
    if ((local_138[0] & 1) != 0) goto LAB_008064d0;
    goto LAB_008064d4;
  }
  lVar17 = FUN_007e3d00(lVar9,&local_80);
  if (lVar17 != 0) {
LAB_008058d8:
    if (*(int *)(lVar17 + 0x3c) == 10) {
      pbVar18 = (byte *)**(undefined8 **)(lVar17 + 0x68);
      bVar2 = *pbVar18;
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(pbVar18 + 8);
      }
      sVar1 = local_80 >> 1 & 0x7f;
      if ((local_80 & 1) != 0) {
        sVar1 = local_78;
      }
      if (__n != sVar1) goto LAB_00805ac0;
      pbVar24 = *(byte **)(pbVar18 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar24 = pbVar18 + 1;
      }
      __s2 = (byte *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        __s2 = local_70;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          lVar20 = -(ulong)(bVar2 >> 1);
          do {
            pbVar18 = pbVar18 + 1;
            if (*pbVar18 != *__s2) goto LAB_00805ac0;
            __s2 = __s2 + 1;
            lVar20 = lVar20 + 1;
          } while (lVar20 != 0);
          if (lVar17 == 0) goto LAB_00805ac0;
        }
      }
      else if ((__n != 0) && (iVar6 = memcmp(pbVar24,__s2,__n), iVar6 != 0)) goto LAB_00805ac0;
    }
    goto LAB_00805b38;
  }
  std::string::string((string *)&local_108,(string *)&local_80);
  if ((local_108 & 1) == 0) {
    pbVar18 = (byte *)((ulong)&local_108 | 1);
    pbVar24 = pbVar18 + (local_108 >> 1 & 0x7f);
    if (pbVar18 != pbVar24) goto LAB_00805884;
  }
  else {
    pbVar24 = local_f8 + local_100;
    pbVar18 = local_f8;
    if (local_f8 != pbVar24) {
LAB_00805884:
      do {
        if (*pbVar18 - 0x41 < 0x1a) {
          *pbVar18 = *pbVar18 + 0x20;
        }
        pbVar18 = pbVar18 + 1;
      } while (pbVar24 != pbVar18);
    }
  }
  lVar17 = FUN_007e3d00(lVar9,&local_108);
  if (lVar17 == 0) {
    lVar17 = 0;
  }
  else if (*(int *)(lVar17 + 0x3c) != 10) {
    lVar17 = 0;
  }
  if ((local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  if (lVar17 != 0) goto LAB_008058d8;
LAB_00805ac0:
  if (*(char *)(param_1 + 0xe4) != '\0') {
    std::string::string((string *)&local_108,(string *)&local_80);
    if ((local_108 & 1) == 0) {
      pbVar18 = (byte *)((ulong)&local_108 | 1);
      pbVar24 = pbVar18 + (local_108 >> 1 & 0x7f);
      if (pbVar18 != pbVar24) goto LAB_00805af0;
    }
    else {
      pbVar24 = local_f8 + local_100;
      pbVar18 = local_f8;
      if (local_f8 != pbVar24) {
LAB_00805af0:
        do {
          if (*pbVar18 - 0x41 < 0x1a) {
            *pbVar18 = *pbVar18 + 0x20;
          }
          pbVar18 = pbVar18 + 1;
        } while (pbVar24 != pbVar18);
      }
    }
    lVar17 = FUN_007e3ca0(lVar9,&local_108);
    if ((local_108 & 1) != 0) {
      operator_delete(local_f8);
    }
    goto joined_r0x00805b34;
  }
LAB_00805bd8:
  if (*(char *)(param_1 + 0xe5) == '\0') {
    std::operator+("Message type \"",*(string **)(lVar9 + 8));
    puVar14 = (ulong *)std::string::append((char *)&local_d8);
    local_c0 = *puVar14;
    local_b8 = puVar14[1];
    local_b0 = (void *)puVar14[2];
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = 0;
    pbVar16 = (byte *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      pbVar16 = local_70;
    }
    goto LAB_00805fdc;
  }
  std::operator+("Message type \"",*(string **)(lVar9 + 8));
  puVar12 = (ulong *)std::string::append((char *)&local_d8);
  local_c0 = *puVar12;
  local_b8 = puVar12[1];
  local_b0 = (void *)puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  pbVar18 = (byte *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    pbVar18 = local_70;
  }
LAB_00805c40:
  puVar12 = (ulong *)std::string::append((char *)&local_c0,(ulong)pbVar18);
  local_a8 = *puVar12;
  local_a0 = puVar12[1];
  local_98 = (void *)puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar12 = (ulong *)std::string::append((char *)&local_a8);
  local_108 = *puVar12;
  local_100 = puVar12[1];
  local_f8 = (byte *)puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  FUN_00805490(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_108);
  if ((local_108 & 1) == 0) {
    if ((local_a8 & 1) == 0) goto LAB_00805cac;
LAB_0080606c:
    operator_delete(local_98);
    if ((local_c0 & 1) != 0) goto LAB_0080607c;
LAB_00805cb4:
    if ((local_d8 & 1) == 0) goto LAB_00805cbc;
LAB_0080608c:
    operator_delete(local_c8);
    cVar3 = *(char *)(param_1 + 0xe5);
  }
  else {
    operator_delete(local_f8);
    if ((local_a8 & 1) != 0) goto LAB_0080606c;
LAB_00805cac:
    if ((local_c0 & 1) == 0) goto LAB_00805cb4;
LAB_0080607c:
    operator_delete(local_b0);
    if ((local_d8 & 1) != 0) goto LAB_0080608c;
LAB_00805cbc:
    cVar3 = *(char *)(param_1 + 0xe5);
  }
  if (cVar3 == '\0') {
    FUN_00801270(&local_108,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/text_format.cc"
                 ,0x1da);
    uVar15 = FUN_00800f30(&local_108,"CHECK failed: allow_unknown_field_: ");
    FUN_00800fa0(&local_a8,uVar15);
    FUN_00801290(&local_108);
  }
  local_100 = 0;
  local_f8 = (byte *)0x0;
  local_108 = 0x3a02;
  bVar2 = *pbVar16;
  uVar10 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar10 = *puVar14;
  }
  if (uVar10 == 1) {
    if ((bVar2 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == ':') {
        lVar9 = -(ulong)(bVar2 >> 1);
        pcVar21 = (char *)(param_1 + 0x32);
        pcVar22 = (char *)((ulong)&local_108 | 2);
        do {
          lVar9 = lVar9 + 1;
          if (lVar9 == 0) goto LAB_00806404;
          cVar3 = *pcVar22;
          cVar4 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar22 = pcVar22 + 1;
        } while (cVar4 == cVar3);
      }
    }
    else if (**(char **)(param_1 + 0x40) == ':') {
LAB_00806404:
      FUN_00842de0(lVar23);
      local_a0 = 0;
      local_98 = (void *)0x0;
      local_a8 = 0x7b02;
      bVar2 = *pbVar16;
      uVar19 = (ulong)(bVar2 >> 1);
      uVar10 = uVar19;
      if ((bVar2 & 1) != 0) {
        uVar10 = *puVar14;
      }
      if (uVar10 == 1) {
        if ((bVar2 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == '{') {
            lVar23 = -uVar19;
            pcVar21 = (char *)(param_1 + 0x32);
            pcVar22 = (char *)((ulong)&local_a8 | 2);
            do {
              lVar23 = lVar23 + 1;
              if (lVar23 == 0) goto LAB_00806808;
              cVar3 = *pcVar22;
              cVar4 = *pcVar21;
              pcVar21 = pcVar21 + 1;
              pcVar22 = pcVar22 + 1;
            } while (cVar4 == cVar3);
          }
        }
        else if (**(char **)(param_1 + 0x40) == '{') goto LAB_00806808;
      }
      local_b0 = (void *)0x0;
      local_b8 = 0;
      local_c0 = 0x3c02;
      if (uVar10 == 1) {
        if ((bVar2 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == '<') {
            lVar23 = -uVar19;
            pcVar21 = (char *)(param_1 + 0x32);
            pcVar22 = (char *)((ulong)&local_c0 | 2);
            do {
              lVar23 = lVar23 + 1;
              if (lVar23 == 0) goto LAB_00806808;
              cVar3 = *pcVar22;
              cVar4 = *pcVar21;
              pcVar21 = pcVar21 + 1;
              pcVar22 = pcVar22 + 1;
            } while (cVar4 == cVar3);
          }
        }
        else if (**(char **)(param_1 + 0x40) == '<') goto LAB_00806808;
      }
      uVar7 = FUN_008073d0(param_1);
      goto joined_r0x00806830;
    }
  }
LAB_00806808:
  uVar7 = FUN_00807930(param_1);
joined_r0x00806830:
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  return uVar7 & 1;
}


