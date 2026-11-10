/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f6440; name: FUN_007f6440
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_007f6440(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  ulong *puVar7;
  void *pvVar8;
  string *psVar9;
  long extraout_x1;
  long extraout_x1_00;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte bVar14;
  string *psVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  long lVar18;
  float fVar19;
  double dVar20;
  byte local_e8 [16];
  void *local_d8;
  ulong local_d0;
  ulong local_c8;
  void *local_c0;
  ulong local_b8;
  ulong local_b0;
  void *local_a8;
  ulong local_a0;
  ulong local_98;
  void *local_90;
  ulong local_88;
  ulong local_80;
  void *local_78;
  ulong local_70;
  ulong local_68;
  void *local_60;
  undefined *local_58;
  code *local_50;
  void *local_48;
  
  uVar11 = (ulong)*(uint *)((long)param_2 + 0x3c);
  switch(*(undefined4 *)(PTR_DAT_02716e20 + uVar11 * 4)) {
  case 1:
    lVar18 = param_1[2];
    if ((*(uint *)(lVar18 + 0x10) >> 2 & 1) == 0) {
      if ((*(uint *)(lVar18 + 0x10) >> 3 & 1) == 0) {
        psVar9 = (string *)param_2[1];
        pcVar6 = "Value must be integer for int32 option \"";
        break;
      }
      uVar10 = *(ulong *)(lVar18 + 0x40);
      if (-0x80000001 < (long)uVar10) goto LAB_007f6760;
    }
    else {
      uVar10 = *(ulong *)(lVar18 + 0x38);
      if (uVar10 >> 0x1f == 0) {
LAB_007f6760:
        FUN_007f6d00(param_1,*(undefined4 *)(param_2 + 7),uVar10,uVar11,param_3);
        return 1;
      }
    }
    psVar9 = (string *)param_2[1];
    pcVar6 = "Value out of range for int32 option \"";
    break;
  case 2:
    lVar18 = param_1[2];
    if ((*(uint *)(lVar18 + 0x10) >> 2 & 1) == 0) {
      if ((*(uint *)(lVar18 + 0x10) >> 3 & 1) != 0) {
        uVar2 = *(undefined4 *)(param_2 + 7);
        lVar18 = *(long *)(lVar18 + 0x40);
LAB_007f6778:
        FUN_007f6dc0(param_1,uVar2,lVar18,uVar11,param_3);
        return 1;
      }
      psVar9 = (string *)param_2[1];
      pcVar6 = "Value must be integer for int64 option \"";
    }
    else {
      lVar18 = *(long *)(lVar18 + 0x38);
      if (-1 < lVar18) {
        uVar2 = *(undefined4 *)(param_2 + 7);
        goto LAB_007f6778;
      }
      psVar9 = (string *)param_2[1];
      pcVar6 = "Value out of range for int64 option \"";
    }
    break;
  case 3:
    if ((*(byte *)(param_1[2] + 0x10) >> 2 & 1) == 0) {
      psVar9 = (string *)param_2[1];
      pcVar6 = "Value must be non-negative integer for uint32 option \"";
    }
    else {
      uVar10 = *(ulong *)(param_1[2] + 0x38);
      if (uVar10 >> 0x20 == 0) {
        FUN_007f6e70(param_1,*(undefined4 *)(param_2 + 7),uVar10,uVar11,param_3);
        return 1;
      }
      psVar9 = (string *)*param_2;
      pcVar6 = "Value out of range for uint32 option \"";
    }
    break;
  case 4:
    if ((*(byte *)(param_1[2] + 0x10) >> 2 & 1) != 0) {
      FUN_007f6f20(param_1,*(undefined4 *)(param_2 + 7),*(undefined8 *)(param_1[2] + 0x38),uVar11,
                   param_3);
      return 1;
    }
    psVar9 = (string *)param_2[1];
    pcVar6 = "Value must be non-negative integer for uint64 option \"";
    break;
  case 5:
    lVar18 = param_1[2];
    uVar1 = *(uint *)(lVar18 + 0x10);
    if ((uVar1 >> 4 & 1) != 0) {
      dVar20 = *(double *)(lVar18 + 0x48);
LAB_007f6bd8:
      FUN_0080fee0(param_3,*(undefined4 *)(param_2 + 7),dVar20);
      return 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      dVar20 = (double)NEON_ucvtf(*(undefined8 *)(lVar18 + 0x38));
      goto LAB_007f6bd8;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      dVar20 = (double)*(long *)(lVar18 + 0x40);
      goto LAB_007f6bd8;
    }
    psVar9 = (string *)param_2[1];
    pcVar6 = "Value must be number for double option \"";
    break;
  case 6:
    lVar18 = param_1[2];
    uVar1 = *(uint *)(lVar18 + 0x10);
    if ((uVar1 >> 4 & 1) != 0) {
      fVar19 = (float)*(double *)(lVar18 + 0x48);
LAB_007f6bf4:
      FUN_0080fd90(param_3,*(undefined4 *)(param_2 + 7),fVar19);
      return 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      fVar19 = (float)*(ulong *)(lVar18 + 0x38);
      goto LAB_007f6bf4;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      fVar19 = (float)*(long *)(lVar18 + 0x40);
      goto LAB_007f6bf4;
    }
    psVar9 = (string *)param_2[1];
    pcVar6 = "Value must be number for float option \"";
    break;
  case 7:
    if ((*(byte *)(param_1[2] + 0x10) >> 1 & 1) != 0) {
      pbVar16 = *(byte **)(param_1[2] + 0x30);
      bVar3 = *pbVar16;
      uVar11 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar11 = *(ulong *)(pbVar16 + 8);
      }
      if (uVar11 == 4) {
        iVar5 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,0x1d0c8a8);
        if (iVar5 != 0) {
          pbVar16 = *(byte **)(param_1[2] + 0x30);
          uVar11 = (ulong)(*pbVar16 >> 1);
          if ((*pbVar16 & 1) != 0) {
            uVar11 = *(ulong *)(pbVar16 + 8);
          }
          goto joined_r0x007f67bc;
        }
        lVar18 = 1;
      }
      else {
        uVar11 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar11 = *(ulong *)(pbVar16 + 8);
        }
joined_r0x007f67bc:
        if ((uVar11 != 5) ||
           (iVar5 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,0x1cee4b2),
           iVar5 != 0)) {
          psVar9 = (string *)param_2[1];
          pcVar6 = "Value must be \"true\" or \"false\" for boolean option \"";
          break;
        }
        lVar18 = 0;
      }
      uVar2 = *(undefined4 *)(param_2 + 7);
LAB_007f6c18:
      FUN_0080fc40(param_3,uVar2,lVar18);
switchD_007f6490_default:
      return 1;
    }
    psVar9 = (string *)param_2[1];
    pcVar6 = "Value must be identifier for boolean option \"";
    break;
  case 8:
    if ((*(byte *)(param_1[2] + 0x10) >> 1 & 1) == 0) {
      psVar9 = (string *)param_2[1];
      pcVar6 = "Value must be identifier for enum-valued option \"";
      break;
    }
    puVar17 = (undefined8 *)param_2[0xe];
    pbVar16 = *(byte **)(param_1[2] + 0x30);
    lVar18 = *(long *)(puVar17[2] + 0x10);
    if (DAT_029f55a0 != 2) {
      local_48 = (void *)((ulong)local_48 & 0xffffffffffffff00);
      local_58 = PTR_DAT_02716670 + 0x10;
      local_50 = FUN_007f76a0;
      FUN_00801c10(&DAT_029f55a0,&local_58);
      FUN_00801390(&local_58);
    }
    if (lVar18 != DAT_029f5590) {
      std::string::string((string *)&local_58,(string *)puVar17[1]);
      bVar3 = (byte)local_58._0_1_ >> 1;
      if (((ulong)local_58 & 1) != 0) {
        bVar3 = (byte)local_50;
      }
      bVar14 = *(byte *)*puVar17;
      if ((bVar14 & 1) == 0) {
        bVar14 = bVar14 >> 1;
      }
      else {
        bVar14 = (byte)*(undefined8 *)((byte *)*puVar17 + 8);
      }
      std::string::resize((ulong)&local_58,bVar3 - bVar14);
      pbVar13 = *(byte **)(pbVar16 + 0x10);
      if ((*pbVar16 & 1) == 0) {
        pbVar13 = pbVar16 + 1;
      }
      std::string::append((char *)&local_58,(ulong)pbVar13);
      iVar5 = FUN_007f91f0((undefined8 *)*param_1,*(undefined8 *)*param_1,&local_58);
      if (iVar5 == 5) {
        if (*(undefined8 **)(extraout_x1_00 + 0x18) == puVar17) {
          bVar4 = false;
          lVar18 = extraout_x1_00;
        }
        else {
          std::operator+("Enum type \"",(string *)puVar17[1]);
          puVar7 = (ulong *)std::string::append((char *)local_e8);
          local_d0 = *puVar7;
          local_c8 = puVar7[1];
          local_c0 = (void *)puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          pbVar13 = pbVar16 + 1;
          if ((*pbVar16 & 1) != 0) {
            pbVar13 = *(byte **)(pbVar16 + 0x10);
          }
          puVar7 = (ulong *)std::string::append((char *)&local_d0,(ulong)pbVar13);
          local_b8 = *puVar7;
          local_b0 = puVar7[1];
          local_a8 = (void *)puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          puVar7 = (ulong *)std::string::append((char *)&local_b8);
          local_a0 = *puVar7;
          local_98 = puVar7[1];
          local_90 = (void *)puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          pbVar12 = (byte *)param_2[1];
          pbVar13 = *(byte **)(pbVar12 + 0x10);
          if ((*pbVar12 & 1) == 0) {
            pbVar13 = pbVar12 + 1;
          }
          puVar7 = (ulong *)std::string::append((char *)&local_a0,(ulong)pbVar13);
          local_88 = *puVar7;
          local_80 = puVar7[1];
          local_78 = (void *)puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          puVar7 = (ulong *)std::string::append((char *)&local_88);
          local_70 = *puVar7;
          local_68 = puVar7[1];
          local_60 = (void *)puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          FUN_007eaaf0(*param_1,param_1[1] + 0x18,param_1[2],8,&local_70);
          if ((local_70 & 1) != 0) {
            operator_delete(local_60);
          }
          if ((local_88 & 1) != 0) {
            operator_delete(local_78);
          }
          if ((local_a0 & 1) != 0) {
            operator_delete(local_90);
          }
          if ((local_b8 & 1) != 0) {
            operator_delete(local_a8);
          }
          if ((local_d0 & 1) != 0) {
            operator_delete(local_c0);
          }
          if ((local_e8[0] & 1) != 0) {
            operator_delete(local_d8);
          }
          lVar18 = 0;
          bVar4 = true;
        }
      }
      else {
        bVar4 = false;
        lVar18 = 0;
      }
      if (((ulong)local_58 & 1) != 0) {
        operator_delete(local_48);
      }
      if (bVar4) {
        return 0;
      }
joined_r0x007f6888:
      if (lVar18 == 0) goto LAB_007f6a80;
      uVar2 = *(undefined4 *)(param_2 + 7);
      lVar18 = (long)*(int *)(lVar18 + 0x10);
      goto LAB_007f6c18;
    }
    iVar5 = FUN_007e3d50(*(undefined8 *)(puVar17[2] + 0x98),puVar17,pbVar16,5);
    lVar18 = extraout_x1;
    if (iVar5 != 0) goto joined_r0x007f6888;
LAB_007f6a80:
    std::operator+("Enum type \"",*(string **)(param_2[0xe] + 8));
    puVar7 = (ulong *)std::string::append((char *)&local_d0);
    local_b8 = *puVar7;
    local_b0 = puVar7[1];
    local_a8 = (void *)puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    pbVar13 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar13 = pbVar16 + 1;
    }
    puVar7 = (ulong *)std::string::append((char *)&local_b8,(ulong)pbVar13);
    local_a0 = *puVar7;
    local_98 = puVar7[1];
    local_90 = (void *)puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = (ulong *)std::string::append((char *)&local_a0);
    local_88 = *puVar7;
    local_80 = puVar7[1];
    local_78 = (void *)puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    pbVar13 = (byte *)param_2[1];
    pbVar16 = *(byte **)(pbVar13 + 0x10);
    if ((*pbVar13 & 1) == 0) {
      pbVar16 = pbVar13 + 1;
    }
    puVar7 = (ulong *)std::string::append((char *)&local_88,(ulong)pbVar16);
    local_70 = *puVar7;
    local_68 = puVar7[1];
    local_60 = (void *)puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = (ulong *)std::string::append((char *)&local_70);
    local_58 = (undefined *)*puVar7;
    local_50 = (code *)puVar7[1];
    local_48 = (void *)puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    FUN_007eaaf0(*param_1,param_1[1] + 0x18,param_1[2],8,&local_58);
    if (((ulong)local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    pvVar8 = local_c0;
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
      pvVar8 = local_c0;
    }
    if ((local_d0 & 1) == 0) {
      return 0;
    }
    local_c0 = pvVar8;
    goto LAB_007f685c;
  case 9:
    if ((*(byte *)(param_1[2] + 0x10) >> 5 & 1) != 0) {
      psVar15 = *(string **)(param_1[2] + 0x50);
      psVar9 = (string *)FUN_00810030(param_3,*(undefined4 *)(param_2 + 7));
      std::string::operator=(psVar9,psVar15);
      return 1;
    }
    psVar9 = (string *)param_2[1];
    pcVar6 = "Value must be quoted string for string option \"";
    break;
  case 10:
    uVar11 = FUN_007f6fc0(param_1,param_2,param_3);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
    return 1;
  default:
    goto switchD_007f6490_default;
  }
  std::operator+(pcVar6,psVar9);
  puVar7 = (ulong *)std::string::append((char *)&local_70);
  local_58 = (undefined *)*puVar7;
  local_50 = (code *)puVar7[1];
  local_48 = (void *)puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  FUN_007eaaf0(*param_1,param_1[1] + 0x18,param_1[2],8,&local_58);
  if (((ulong)local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_70 & 1) != 0) {
    pvVar8 = local_60;
LAB_007f685c:
    operator_delete(pvVar8);
  }
  return 0;
}


