/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f07a0; name: FUN_007f07a0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_007f07a0(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,byte param_5)

{
  size_t sVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  size_t sVar5;
  longlong lVar6;
  ulong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  string *psVar10;
  byte bVar11;
  uint uVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  byte *__s2;
  undefined4 uVar18;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_140;
  undefined4 local_138;
  char *local_110;
  undefined4 local_108;
  byte *local_e0;
  uint local_d8;
  undefined1 auStack_d4 [4];
  void *local_d0;
  char *local_b0;
  undefined8 local_a8;
  void *local_a0;
  byte local_80 [16];
  void *local_70;
  string local_68 [8];
  size_t local_60;
  byte *local_58;
  
  puVar9 = param_3;
  if (param_3 == (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_1 + 0x50);
  }
  pbVar3 = (byte *)FUN_007e1d20(*(undefined8 *)(param_1 + 8),puVar9[1]);
  if ((*pbVar3 & 1) == 0) {
    if (*pbVar3 >> 1 != 0) {
LAB_007f0814:
      std::string::append((ulong)pbVar3,'\x01');
    }
  }
  else if (*(long *)(pbVar3 + 8) != 0) goto LAB_007f0814;
  pbVar13 = *(byte **)(param_2 + 0x18);
  pbVar15 = *(byte **)(pbVar13 + 0x10);
  if ((*pbVar13 & 1) == 0) {
    pbVar15 = pbVar13 + 1;
  }
  std::string::append((char *)pbVar3,(ulong)pbVar15);
  FUN_007ebbc0(param_1,*(undefined8 *)(param_2 + 0x18),pbVar3,param_2);
  uVar4 = FUN_007e1d20(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x18));
  *param_4 = uVar4;
  param_4[1] = pbVar3;
  param_4[6] = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(param_4 + 7) = *(undefined4 *)(param_2 + 0x20);
  *(byte *)((long)param_4 + 0x44) = param_5 & 1;
  std::string::string(local_68,*(string **)(param_2 + 0x18));
  if (((byte)local_68[0] & 1) == 0) {
    pbVar3 = (byte *)((ulong)local_68 | 1);
    pbVar15 = pbVar3 + ((byte)local_68[0] >> 1);
    if (pbVar3 != pbVar15) {
LAB_007f08bc:
      do {
        if (*pbVar3 - 0x41 < 0x1a) {
          *pbVar3 = *pbVar3 + 0x20;
        }
        pbVar3 = pbVar3 + 1;
      } while (pbVar15 != pbVar3);
    }
  }
  else {
    pbVar15 = local_58 + local_60;
    pbVar3 = local_58;
    if (local_58 != pbVar15) goto LAB_007f08bc;
  }
  pbVar3 = *(byte **)(param_2 + 0x18);
  bVar11 = *pbVar3;
  sVar5 = (ulong)((byte)local_68[0] >> 1);
  if (((byte)local_68[0] & 1) != 0) {
    sVar5 = local_60;
  }
  sVar1 = (ulong)(bVar11 >> 1);
  if ((bVar11 & 1) != 0) {
    sVar1 = *(size_t *)(pbVar3 + 8);
  }
  if (sVar5 == sVar1) {
    pbVar15 = (byte *)((ulong)local_68 | 1);
    pbVar13 = pbVar15;
    if (((byte)local_68[0] & 1) != 0) {
      pbVar13 = local_58;
    }
    __s2 = *(byte **)(pbVar3 + 0x10);
    if ((bVar11 & 1) == 0) {
      __s2 = pbVar3 + 1;
    }
    if (((byte)local_68[0] & 1) == 0) {
      if (sVar5 != 0) {
        lVar14 = -(ulong)((byte)local_68[0] >> 1);
        do {
          if (*pbVar15 != *__s2) goto LAB_007f0970;
          pbVar15 = pbVar15 + 1;
          __s2 = __s2 + 1;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0);
      }
    }
    else if ((sVar5 != 0) && (iVar2 = memcmp(pbVar13,__s2,sVar5), iVar2 != 0)) goto LAB_007f0970;
    param_4[2] = *param_4;
  }
  else {
LAB_007f0970:
    uVar4 = FUN_007e1d20(*(undefined8 *)(param_1 + 8),local_68);
    param_4[2] = uVar4;
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  FUN_007f1560(&local_b0,*(undefined8 *)(param_2 + 0x18),1);
  uVar4 = FUN_007e1d20(uVar4,&local_b0);
  param_4[3] = uVar4;
  if (((ulong)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((*(byte *)(param_2 + 0x11) & 1) == 0) {
    *(undefined1 *)(param_4 + 4) = 0;
    param_4[5] = param_4[3];
  }
  else {
    *(undefined1 *)(param_4 + 4) = 1;
    uVar4 = FUN_007e1d20(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x48));
    param_4[5] = uVar4;
  }
  *(undefined4 *)((long)param_4 + 0x3c) = *(undefined4 *)(param_2 + 0x38);
  iVar2 = *(int *)(param_2 + 0x24);
  *(int *)(param_4 + 8) = iVar2;
  if ((iVar2 == 2) && (*(char *)((long)param_4 + 0x44) != '\0')) {
    FUN_007eac10(param_1,param_4[1],param_2,2,"Message extensions cannot have required fields.");
  }
  param_4[0xc] = 0;
  param_4[10] = 0;
  param_4[0xd] = 0;
  param_4[0xe] = 0;
  *(byte *)(param_4 + 0x10) = (byte)(*(uint *)(param_2 + 0x10) >> 6) & 1;
  uVar12 = *(uint *)(param_2 + 0x10);
  if (((uVar12 >> 6 & 1) != 0) && (*(int *)(param_4 + 8) == 3)) {
    FUN_007eac10(param_1,param_4[1],param_2,4,"Repeated fields can\'t have default values.");
    uVar12 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar12 >> 3 & 1) == 0) goto switchD_007f0bac_default;
  if ((uVar12 >> 6 & 1) == 0) {
    switch(*(undefined4 *)(PTR_DAT_02716e20 + (ulong)*(uint *)((long)param_4 + 0x3c) * 4)) {
    case 1:
    case 3:
    case 6:
      *(undefined4 *)(param_4 + 0x11) = 0;
      iVar2 = *(int *)(param_4 + 7);
      break;
    case 2:
    case 4:
    case 5:
    case 8:
      param_4[0x11] = 0;
      iVar2 = *(int *)(param_4 + 7);
      break;
    case 7:
      *(undefined1 *)(param_4 + 0x11) = 0;
      iVar2 = *(int *)(param_4 + 7);
      break;
    case 9:
      if (*(long *)PTR_DAT_02716d70 != 2) {
        local_a0 = (void *)((ulong)local_a0 & 0xffffffffffffff00);
        local_b0 = PTR_DAT_02716670 + 0x10;
        local_a8 = PTR_LAB_02716d78;
        FUN_00801c10(PTR_DAT_02716d70,&local_b0);
        FUN_00801390(&local_b0);
      }
      param_4[0x11] = *(undefined8 *)PTR_DAT_02716d10;
      iVar2 = *(int *)(param_4 + 7);
      break;
    default:
      goto switchD_007f0bac_default;
    }
    goto joined_r0x007f0f70;
  }
  local_110 = (char *)0x0;
  switch(*(undefined4 *)(PTR_DAT_02716e20 + (ulong)*(uint *)((long)param_4 + 0x3c) * 4)) {
  case 1:
    pbVar3 = *(byte **)(param_2 + 0x40);
    if ((*pbVar3 & 1) == 0) {
      pbVar3 = pbVar3 + 1;
    }
    else {
      pbVar3 = *(byte **)(pbVar3 + 0x10);
    }
    lVar14 = strtol((char *)pbVar3,&local_110,0);
    *(int *)(param_4 + 0x11) = (int)lVar14;
    break;
  case 2:
    pbVar3 = *(byte **)(param_2 + 0x40);
    if ((*pbVar3 & 1) == 0) {
      pbVar3 = pbVar3 + 1;
    }
    else {
      pbVar3 = *(byte **)(pbVar3 + 0x10);
    }
    lVar6 = strtoll((char *)pbVar3,&local_110,0);
    param_4[0x11] = lVar6;
    break;
  case 3:
    pbVar3 = *(byte **)(param_2 + 0x40);
    if ((*pbVar3 & 1) == 0) {
      pbVar3 = pbVar3 + 1;
    }
    else {
      pbVar3 = *(byte **)(pbVar3 + 0x10);
    }
    uVar7 = strtoul((char *)pbVar3,&local_110,0);
    *(int *)(param_4 + 0x11) = (int)uVar7;
    break;
  case 4:
    pbVar3 = *(byte **)(param_2 + 0x40);
    if ((*pbVar3 & 1) == 0) {
      pbVar3 = pbVar3 + 1;
    }
    else {
      pbVar3 = *(byte **)(pbVar3 + 0x10);
    }
    uVar8 = strtoull((char *)pbVar3,&local_110,0);
    param_4[0x11] = uVar8;
    break;
  case 5:
    pbVar3 = *(byte **)(param_2 + 0x40);
    bVar11 = *pbVar3;
    uVar16 = *(ulong *)(pbVar3 + 8);
    uVar17 = (ulong)(bVar11 >> 1);
    uVar7 = uVar17;
    if ((bVar11 & 1) != 0) {
      uVar7 = uVar16;
    }
    if (uVar7 == 3) {
      iVar2 = std::string::compare((ulong)pbVar3,0,(char *)0xffffffffffffffff,0x1cddd59);
      if (iVar2 == 0) {
        param_4[0x11] = 0x7ff0000000000000;
        break;
      }
      pbVar3 = *(byte **)(param_2 + 0x40);
      bVar11 = *pbVar3;
      uVar16 = *(ulong *)(pbVar3 + 8);
      uVar17 = (ulong)(bVar11 >> 1);
      uVar7 = uVar17;
      if ((bVar11 & 1) != 0) {
        uVar7 = uVar16;
      }
    }
    else {
      uVar7 = uVar17;
      if ((bVar11 & 1) != 0) {
        uVar7 = uVar16;
      }
    }
    if (uVar7 == 4) {
      iVar2 = std::string::compare((ulong)pbVar3,0,(char *)0xffffffffffffffff,0x1cef541);
      if (iVar2 == 0) {
        param_4[0x11] = 0xfff0000000000000;
        break;
      }
      pbVar3 = *(byte **)(param_2 + 0x40);
      bVar11 = *pbVar3;
      uVar16 = *(ulong *)(pbVar3 + 8);
      uVar17 = (ulong)(bVar11 >> 1);
    }
    if ((bVar11 & 1) != 0) {
      uVar17 = uVar16;
    }
    if (uVar17 == 3) {
      iVar2 = std::string::compare((ulong)pbVar3,0,(char *)0xffffffffffffffff,0x1d14976);
      if (iVar2 == 0) {
        param_4[0x11] = 0x7ff8000000000000;
        break;
      }
      pbVar3 = *(byte **)(param_2 + 0x40);
      bVar11 = *pbVar3;
    }
    if ((bVar11 & 1) == 0) {
      pbVar3 = pbVar3 + 1;
    }
    else {
      pbVar3 = *(byte **)(pbVar3 + 0x10);
    }
    uVar4 = FUN_00843c90(pbVar3,&local_110);
    param_4[0x11] = uVar4;
    break;
  case 6:
    pbVar3 = *(byte **)(param_2 + 0x40);
    bVar11 = *pbVar3;
    uVar16 = *(ulong *)(pbVar3 + 8);
    uVar17 = (ulong)(bVar11 >> 1);
    uVar7 = uVar17;
    if ((bVar11 & 1) != 0) {
      uVar7 = uVar16;
    }
    if (uVar7 == 3) {
      iVar2 = std::string::compare((ulong)pbVar3,0,(char *)0xffffffffffffffff,0x1cddd59);
      if (iVar2 == 0) {
        *(undefined4 *)(param_4 + 0x11) = 0x7f800000;
        break;
      }
      pbVar3 = *(byte **)(param_2 + 0x40);
      bVar11 = *pbVar3;
      uVar16 = *(ulong *)(pbVar3 + 8);
      uVar17 = (ulong)(bVar11 >> 1);
      uVar7 = uVar17;
      if ((bVar11 & 1) != 0) {
        uVar7 = uVar16;
      }
    }
    else {
      uVar7 = uVar17;
      if ((bVar11 & 1) != 0) {
        uVar7 = uVar16;
      }
    }
    if (uVar7 == 4) {
      iVar2 = std::string::compare((ulong)pbVar3,0,(char *)0xffffffffffffffff,0x1cef541);
      if (iVar2 == 0) {
        *(undefined4 *)(param_4 + 0x11) = 0xff800000;
        break;
      }
      pbVar3 = *(byte **)(param_2 + 0x40);
      bVar11 = *pbVar3;
      uVar16 = *(ulong *)(pbVar3 + 8);
      uVar17 = (ulong)(bVar11 >> 1);
    }
    if ((bVar11 & 1) != 0) {
      uVar17 = uVar16;
    }
    if (uVar17 == 3) {
      iVar2 = std::string::compare((ulong)pbVar3,0,(char *)0xffffffffffffffff,0x1d14976);
      if (iVar2 == 0) {
        *(undefined4 *)(param_4 + 0x11) = 0x7fc00000;
        break;
      }
      pbVar3 = *(byte **)(param_2 + 0x40);
      bVar11 = *pbVar3;
    }
    if ((bVar11 & 1) == 0) {
      pbVar3 = pbVar3 + 1;
    }
    else {
      pbVar3 = *(byte **)(pbVar3 + 0x10);
    }
    FUN_00843c90(pbVar3,&local_110);
    uVar18 = FUN_00843ef0();
    *(undefined4 *)(param_4 + 0x11) = uVar18;
    break;
  case 7:
    pbVar3 = *(byte **)(param_2 + 0x40);
    bVar11 = *pbVar3;
    uVar7 = (ulong)(bVar11 >> 1);
    if ((bVar11 & 1) != 0) {
      uVar7 = *(ulong *)(pbVar3 + 8);
    }
    if (uVar7 == 4) {
      iVar2 = std::string::compare((ulong)pbVar3,0,(char *)0xffffffffffffffff,0x1d0c8a8);
      if (iVar2 == 0) {
        *(undefined1 *)(param_4 + 0x11) = 1;
        break;
      }
      pbVar3 = *(byte **)(param_2 + 0x40);
      uVar7 = (ulong)(*pbVar3 >> 1);
      if ((*pbVar3 & 1) != 0) {
        uVar7 = *(ulong *)(pbVar3 + 8);
      }
    }
    else {
      uVar7 = (ulong)(bVar11 >> 1);
      if ((bVar11 & 1) != 0) {
        uVar7 = *(ulong *)(pbVar3 + 8);
      }
    }
    if ((uVar7 == 5) &&
       (iVar2 = std::string::compare((ulong)pbVar3,0,(char *)0xffffffffffffffff,0x1cee4b2),
       iVar2 == 0)) {
      *(undefined1 *)(param_4 + 0x11) = 0;
    }
    else {
      FUN_007eac10(param_1,param_4[1],param_2,4,"Boolean default must be true or false.");
    }
    break;
  case 8:
    param_4[0x11] = 0;
    goto switchD_007f0bac_default;
  case 9:
    uVar4 = *(undefined8 *)(param_1 + 8);
    if (*(uint *)((long)param_4 + 0x3c) == 0xc) {
      FUN_007ff3c0(&local_b0,*(undefined8 *)(param_2 + 0x40));
      uVar4 = FUN_007e1d20(uVar4,&local_b0);
      param_4[0x11] = uVar4;
      if (((ulong)local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
    }
    else {
      uVar4 = FUN_007e1d20(uVar4,*(undefined8 *)(param_2 + 0x40));
      param_4[0x11] = uVar4;
    }
    break;
  case 10:
    FUN_007eac10(param_1,param_4[1],param_2,4,"Messages can\'t have default values.");
    *(undefined1 *)(param_4 + 0x10) = 0;
    break;
  default:
    goto switchD_007f0bac_default;
  }
  if (local_110 == (char *)0x0) {
switchD_007f0bac_default:
    iVar2 = *(int *)(param_4 + 7);
  }
  else {
    psVar10 = *(string **)(param_2 + 0x40);
    if (((byte)*psVar10 & 1) == 0) {
      if ((byte)*psVar10 >> 1 != 0) {
LAB_007f14cc:
        if (*local_110 == '\0') goto switchD_007f0bac_default;
      }
    }
    else if (*(long *)(psVar10 + 8) != 0) goto LAB_007f14cc;
    uVar4 = param_4[1];
    std::operator+("Couldn\'t parse default value \"",psVar10);
    puVar9 = (undefined8 *)std::string::append((char *)&local_e0);
    local_b0 = (char *)*puVar9;
    local_a8 = (undefined *)puVar9[1];
    local_a0 = (void *)puVar9[2];
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    FUN_007eaaf0(param_1,uVar4,param_2,4,&local_b0);
    if (((ulong)local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if (((ulong)local_e0 & 1) == 0) goto switchD_007f0bac_default;
    operator_delete(local_d0);
    iVar2 = *(int *)(param_4 + 7);
  }
joined_r0x007f0f70:
  if (iVar2 < 1) {
    FUN_007eac10(param_1,param_4[1],param_2,1,"Field numbers must be positive integers.");
    uVar12 = *(uint *)(param_2 + 0x10);
    if ((param_5 & 1) != 0) goto LAB_007f0d40;
LAB_007f0be4:
    if ((uVar12 >> 5 & 1) != 0) {
LAB_007f0be8:
      FUN_007eac10(param_1,param_4[1],param_2,3,
                   "FieldDescriptorProto.extendee set for non-extension field.");
    }
LAB_007f0c04:
    param_4[10] = param_3;
    if (*(char *)(param_2 + 0x10) < '\0') {
      iVar2 = *(int *)(param_2 + 0x3c);
      if ((-1 < iVar2) && (iVar2 < *(int *)(param_3 + 7))) {
        param_4[0xb] = param_3[8] + (long)iVar2 * 0x30;
        bVar11 = *(byte *)(param_2 + 0x11);
        goto joined_r0x007f0c38;
      }
      uVar4 = param_4[1];
      local_b0 = (char *)FUN_007ff7d0((long)iVar2,(long)&local_a8 + 4);
      sVar5 = strlen(local_b0);
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,(int)sVar5);
      pbVar3 = (byte *)*param_3;
      local_e0 = *(byte **)(pbVar3 + 0x10);
      if ((*pbVar3 & 1) == 0) {
        local_e0 = pbVar3 + 1;
      }
      local_108 = 0xffffffff;
      local_138 = 0xffffffff;
      local_168 = 0xffffffff;
      local_198 = 0xffffffff;
      local_1c8 = 0xffffffff;
      local_1f8 = 0xffffffff;
      local_228 = 0xffffffff;
      local_258 = 0xffffffff;
      local_110 = (char *)0x0;
      local_140 = 0;
      local_170 = 0;
      local_1a0 = 0;
      local_d8 = (uint)(*pbVar3 >> 1);
      if ((*pbVar3 & 1) != 0) {
        local_d8 = (uint)*(undefined8 *)(pbVar3 + 8);
      }
      local_1d0 = 0;
      local_200 = 0;
      local_230 = 0;
      local_260 = 0;
      FUN_00863000(local_80,"FieldDescriptorProto.oneof_index $0 is out of range for type \"$1\".",
                   &local_b0,&local_e0,&local_110,&local_140,&local_170,&local_1a0,&local_1d0,
                   &local_200,&local_230,&local_260);
      FUN_007eaaf0(param_1,uVar4,param_2,9,local_80);
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
    }
  }
  else {
    if ((0x1fffffff < iVar2) && ((param_5 & 1) == 0)) {
      uVar4 = param_4[1];
      local_b0 = (char *)FUN_007ff7d0(0x1fffffff,(long)&local_a8 + 4);
      sVar5 = strlen(local_b0);
      local_d8 = 0xffffffff;
      local_108 = 0xffffffff;
      local_138 = 0xffffffff;
      local_168 = 0xffffffff;
      local_198 = 0xffffffff;
      local_1c8 = 0xffffffff;
      local_1f8 = 0xffffffff;
      local_228 = 0xffffffff;
      local_258 = 0xffffffff;
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,(int)sVar5);
      local_e0 = (byte *)0x0;
      local_110 = (char *)0x0;
      local_140 = 0;
      local_170 = 0;
      local_1a0 = 0;
      local_1d0 = 0;
      local_200 = 0;
      local_230 = 0;
      local_260 = 0;
      FUN_00863000(local_80,"Field numbers cannot be greater than $0.",&local_b0,&local_e0,
                   &local_110,&local_140,&local_170,&local_1a0,&local_1d0,&local_200,&local_230,
                   &local_260);
      FUN_007eaaf0(param_1,uVar4,param_2,1,local_80);
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      if ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) goto LAB_007f0be8;
      goto LAB_007f0c04;
    }
    if (iVar2 - 19000U < 1000) {
      uVar4 = param_4[1];
      local_b0 = (char *)FUN_007ff7d0(19000,(long)&local_a8 + 4);
      sVar5 = strlen(local_b0);
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,(int)sVar5);
      local_e0 = (byte *)FUN_007ff7d0(19999,auStack_d4);
      sVar5 = strlen((char *)local_e0);
      local_108 = 0xffffffff;
      local_138 = 0xffffffff;
      local_168 = 0xffffffff;
      local_198 = 0xffffffff;
      local_1c8 = 0xffffffff;
      local_1f8 = 0xffffffff;
      local_228 = 0xffffffff;
      local_258 = 0xffffffff;
      local_d8 = (uint)sVar5;
      local_110 = (char *)0x0;
      local_140 = 0;
      local_170 = 0;
      local_1a0 = 0;
      local_1d0 = 0;
      local_200 = 0;
      local_230 = 0;
      local_260 = 0;
      FUN_00863000(local_80,
                   "Field numbers $0 through $1 are reserved for the protocol buffer library implementation."
                   ,&local_b0,&local_e0,&local_110,&local_140,&local_170,&local_1a0,&local_1d0,
                   &local_200,&local_230,&local_260);
      FUN_007eaaf0(param_1,uVar4,param_2,1,local_80);
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
    }
    uVar12 = *(uint *)(param_2 + 0x10);
    if ((param_5 & 1) == 0) goto LAB_007f0be4;
LAB_007f0d40:
    if ((uVar12 >> 5 & 1) == 0) {
      FUN_007eac10(param_1,param_4[1],param_2,3,
                   "FieldDescriptorProto.extendee not set for extension field.");
    }
    param_4[0xc] = param_3;
    if (*(char *)(param_2 + 0x10) < '\0') {
      FUN_007eac10(param_1,param_4[1],param_2,9,
                   "FieldDescriptorProto.oneof_index should not be set for extensions.");
      param_4[0xb] = 0;
      bVar11 = *(byte *)(param_2 + 0x11);
      goto joined_r0x007f0c38;
    }
  }
  param_4[0xb] = 0;
  bVar11 = *(byte *)(param_2 + 0x11);
joined_r0x007f0c38:
  if ((bVar11 >> 1 & 1) == 0) {
    param_4[0xf] = 0;
  }
  else {
    lVar14 = *(long *)(param_2 + 0x50);
    if (lVar14 == 0) {
      lVar14 = *(long *)(*(long *)PTR_DAT_02716e60 + 0x50);
    }
    FUN_007fcdc0(param_1,param_4[1],param_4[1],lVar14,param_4);
  }
  FUN_007f02f0(param_1,param_4[1],param_3,*param_4,param_2,2,param_4);
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  return;
}


