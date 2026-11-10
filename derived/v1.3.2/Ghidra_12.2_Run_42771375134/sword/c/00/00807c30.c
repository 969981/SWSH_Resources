/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00807c30; name: FUN_00807c30
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00807c30(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  byte *pbVar1;
  string sVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  undefined1 *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong *puVar12;
  code *pcVar13;
  ulong uVar14;
  byte *pbVar15;
  char *pcVar16;
  char *pcVar17;
  int iVar18;
  ulong local_e0;
  ulong local_d8;
  undefined1 *local_d0;
  byte local_b0 [16];
  void *local_a0;
  ulong local_98;
  ulong local_90;
  void *local_88;
  ulong local_80;
  ulong local_78;
  void *local_70;
  ulong local_68;
  ulong local_60;
  undefined1 *local_58;
  
  switch(*(undefined4 *)(PTR_DAT_02716e20 + (ulong)*(uint *)((long)param_4 + 0x3c) * 4)) {
  case 1:
    local_d8 = 0;
    local_d0 = (undefined1 *)0x0;
    local_e0 = 0x2d02;
    bVar5 = *(byte *)(param_1 + 0x30);
    uVar10 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar10 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar10 == 1) {
      if ((bVar5 & 1) == 0) {
        if (*(char *)(param_1 + 0x31) == '-') {
          lVar9 = -(ulong)(bVar5 >> 1);
          pcVar16 = (char *)(param_1 + 0x32);
          pcVar17 = (char *)((ulong)&local_e0 | 2);
          do {
            lVar9 = lVar9 + 1;
            if (lVar9 == 0) goto LAB_0080822c;
            cVar3 = *pcVar17;
            cVar4 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            pcVar17 = pcVar17 + 1;
          } while (cVar4 == cVar3);
        }
        goto LAB_00808250;
      }
      if (**(char **)(param_1 + 0x40) != '-') goto LAB_00808250;
LAB_0080822c:
      FUN_00842de0(param_1 + 0x28);
      bVar6 = true;
      uVar10 = FUN_00808f50(param_1,&local_e0,0x80000000);
    }
    else {
LAB_00808250:
      bVar6 = false;
      uVar10 = FUN_00808f50(param_1,&local_e0,0x7fffffff);
    }
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    uVar10 = local_e0;
    if ((bVar6) && (uVar10 = -local_e0, local_e0 == 0x8000000000000000)) {
      uVar10 = local_e0;
    }
    if (*(int *)(param_4 + 8) == 3) {
      pcVar13 = *(code **)(*param_3 + 0x208);
    }
    else {
      pcVar13 = *(code **)(*param_3 + 0xe8);
    }
    (*pcVar13)(param_3,param_2,param_4,uVar10);
    break;
  case 2:
    local_d8 = 0;
    local_d0 = (undefined1 *)0x0;
    local_e0 = 0x2d02;
    bVar5 = *(byte *)(param_1 + 0x30);
    uVar10 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar10 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar10 == 1) {
      if ((bVar5 & 1) == 0) {
        if (*(char *)(param_1 + 0x31) == '-') {
          lVar9 = -(ulong)(bVar5 >> 1);
          pcVar16 = (char *)(param_1 + 0x32);
          pcVar17 = (char *)((ulong)&local_e0 | 2);
          do {
            lVar9 = lVar9 + 1;
            if (lVar9 == 0) goto LAB_008082a4;
            cVar3 = *pcVar17;
            cVar4 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            pcVar17 = pcVar17 + 1;
          } while (cVar4 == cVar3);
        }
        goto LAB_008082c8;
      }
      if (**(char **)(param_1 + 0x40) != '-') goto LAB_008082c8;
LAB_008082a4:
      FUN_00842de0(param_1 + 0x28);
      bVar6 = true;
      uVar10 = FUN_00808f50(param_1,&local_e0,0x8000000000000000);
    }
    else {
LAB_008082c8:
      bVar6 = false;
      uVar10 = FUN_00808f50(param_1,&local_e0,0x7fffffffffffffff);
    }
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    uVar10 = local_e0;
    if ((bVar6) && (uVar10 = -local_e0, local_e0 == 0x8000000000000000)) {
      uVar10 = local_e0;
    }
    if (*(int *)(param_4 + 8) == 3) {
      pcVar13 = *(code **)(*param_3 + 0x210);
    }
    else {
      pcVar13 = *(code **)(*param_3 + 0xf0);
    }
    goto LAB_008083a8;
  case 3:
    uVar10 = FUN_00808f50(param_1,&local_e0,0xffffffff);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_e0 = local_e0 & 0xffffffff;
    if (*(int *)(param_4 + 8) == 3) {
      pcVar13 = *(code **)(*param_3 + 0x218);
    }
    else {
      pcVar13 = *(code **)(*param_3 + 0xf8);
    }
    goto LAB_008083c8;
  case 4:
    uVar10 = FUN_00808f50(param_1,&local_e0,0xffffffffffffffff);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    uVar10 = local_e0;
    if (*(int *)(param_4 + 8) == 3) {
      pcVar13 = *(code **)(*param_3 + 0x220);
    }
    else {
      pcVar13 = *(code **)(*param_3 + 0x100);
    }
LAB_008083a8:
    (*pcVar13)(param_3,param_2,param_4,uVar10);
    break;
  case 5:
    uVar10 = FUN_00809070(param_1,&local_e0);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    if (*(int *)(param_4 + 8) == 3) {
      pcVar13 = *(code **)(*param_3 + 0x230);
    }
    else {
      pcVar13 = *(code **)(*param_3 + 0x110);
    }
    (*pcVar13)(local_e0,param_3,param_2,param_4);
    break;
  case 6:
    uVar10 = FUN_00809070(param_1,&local_e0);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    iVar8 = *(int *)(param_4 + 8);
    FUN_00843ef0(local_e0);
    if (iVar8 == 3) {
      pcVar13 = *(code **)(*param_3 + 0x228);
    }
    else {
      pcVar13 = *(code **)(*param_3 + 0x108);
    }
    (*pcVar13)(param_3,param_2,param_4);
    break;
  case 7:
    if (*(int *)(param_1 + 0x28) != 3) {
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = (void *)0x0;
      uVar10 = FUN_00807310(param_1,&local_e0);
      if ((uVar10 & 1) == 0) goto joined_r0x00808378;
      uVar14 = (ulong)((byte)local_e0 >> 1);
      uVar10 = uVar14;
      if ((local_e0 & 1) != 0) {
        uVar10 = local_d8;
      }
      if (uVar10 == 4) {
        iVar8 = std::string::compare((ulong)&local_e0,0,(char *)0xffffffffffffffff,0x1d0c8a8);
        if (iVar8 != 0) {
          uVar14 = (ulong)((byte)local_e0 >> 1);
          goto LAB_00807f90;
        }
LAB_008084bc:
        if (*(int *)(param_4 + 8) == 3) {
          pcVar13 = *(code **)(*param_3 + 0x238);
        }
        else {
          pcVar13 = *(code **)(*param_3 + 0x118);
        }
        (*pcVar13)(param_3,param_2,param_4,1);
        goto joined_r0x00808368;
      }
LAB_00807f90:
      uVar10 = uVar14;
      if (((byte)local_e0 & 1) != 0) {
        uVar10 = local_d8;
      }
      bVar5 = (byte)local_e0;
      if (uVar10 == 4) {
        iVar8 = std::string::compare((ulong)&local_e0,0,(char *)0xffffffffffffffff,0x1d28893);
        if (iVar8 == 0) goto LAB_008084bc;
        uVar14 = (ulong)((byte)local_e0 >> 1);
        bVar5 = (byte)local_e0;
      }
      uVar10 = uVar14;
      if ((bVar5 & 1) != 0) {
        uVar10 = local_d8;
      }
      if (uVar10 == 1) {
        iVar8 = std::string::compare((ulong)&local_e0,0,(char *)0xffffffffffffffff,0x1ce1523);
        if (iVar8 == 0) goto LAB_008084bc;
        uVar14 = (ulong)((byte)local_e0 >> 1);
        bVar5 = (byte)local_e0;
      }
      uVar10 = uVar14;
      if ((bVar5 & 1) != 0) {
        uVar10 = local_d8;
      }
      if (uVar10 == 5) {
        iVar8 = std::string::compare((ulong)&local_e0,0,(char *)0xffffffffffffffff,0x1cee4b2);
        if (iVar8 != 0) {
          uVar14 = (ulong)((byte)local_e0 >> 1);
          bVar5 = (byte)local_e0;
          goto LAB_00808050;
        }
      }
      else {
LAB_00808050:
        uVar10 = uVar14;
        if ((bVar5 & 1) != 0) {
          uVar10 = local_d8;
        }
        if (uVar10 == 5) {
          iVar8 = std::string::compare((ulong)&local_e0,0,(char *)0xffffffffffffffff,0x1cf984d);
          if (iVar8 == 0) goto LAB_00808688;
          uVar14 = (ulong)((byte)local_e0 >> 1);
          bVar5 = (byte)local_e0;
        }
        if ((bVar5 & 1) != 0) {
          uVar14 = local_d8;
        }
        if ((uVar14 != 1) ||
           (iVar8 = std::string::compare((ulong)&local_e0,0,(char *)0xffffffffffffffff,0x1ce4e84),
           iVar8 != 0)) {
          std::operator+("Invalid value for boolean field \"",(string *)*param_4);
          puVar12 = (ulong *)std::string::append((char *)local_b0);
          local_98 = *puVar12;
          local_90 = puVar12[1];
          local_88 = (void *)puVar12[2];
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = 0;
          puVar7 = (void *)((ulong)&local_e0 | 1);
          if ((local_e0 & 1) != 0) {
            puVar7 = local_d0;
          }
          puVar12 = (ulong *)std::string::append((char *)&local_98,(ulong)puVar7);
          local_80 = *puVar12;
          local_78 = puVar12[1];
          local_70 = (void *)puVar12[2];
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = 0;
          puVar12 = (ulong *)std::string::append((char *)&local_80);
          local_68 = *puVar12;
          local_60 = puVar12[1];
          local_58 = (undefined1 *)puVar12[2];
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = 0;
          FUN_00802750(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                       &local_68);
          if ((local_68 & 1) != 0) {
            operator_delete(local_58);
          }
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
          if ((local_98 & 1) != 0) {
            operator_delete(local_88);
          }
          if ((local_b0[0] & 1) != 0) {
            operator_delete(local_a0);
          }
joined_r0x00808378:
          if ((local_e0 & 1) == 0) {
            return 0;
          }
          operator_delete(local_d0);
          return 0;
        }
      }
LAB_00808688:
      if (*(int *)(param_4 + 8) == 3) {
        pcVar13 = *(code **)(*param_3 + 0x238);
      }
      else {
        pcVar13 = *(code **)(*param_3 + 0x118);
      }
      (*pcVar13)(param_3,param_2,param_4,0);
      goto joined_r0x00808368;
    }
    uVar10 = FUN_00808f50(param_1,&local_e0,1);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    if (*(int *)(param_4 + 8) == 3) {
      pcVar13 = *(code **)(*param_3 + 0x238);
    }
    else {
      pcVar13 = *(code **)(*param_3 + 0x118);
    }
    local_e0 = (ulong)(local_e0 != 0);
LAB_008083c8:
    (*pcVar13)(param_3,param_2,param_4,local_e0);
    break;
  case 8:
    local_60 = 0;
    local_58 = (undefined1 *)0x0;
    local_68 = 0;
    uVar11 = param_4[0xe];
    if (*(int *)(param_1 + 0x28) == 2) {
      uVar10 = FUN_00807310(param_1,&local_68);
      if ((uVar10 & 1) != 0) {
        lVar9 = FUN_007e3ee0(uVar11,&local_68);
joined_r0x00808590:
        if (lVar9 != 0) {
          if (*(int *)(param_4 + 8) == 3) {
            pcVar13 = *(code **)(*param_3 + 0x248);
          }
          else {
            pcVar13 = *(code **)(*param_3 + 0x128);
          }
          (*pcVar13)(param_3,param_2,param_4,lVar9);
          uVar11 = 0;
          iVar18 = 2;
          iVar8 = 2;
          goto joined_r0x008083fc;
        }
        if (*(char *)(param_1 + 0xe6) != '\0') {
          std::operator+("Unknown enumeration value of \"",(string *)&local_68);
          puVar12 = (ulong *)std::string::append((char *)local_b0);
          local_98 = *puVar12;
          local_90 = puVar12[1];
          local_88 = (void *)puVar12[2];
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = 0;
          pbVar15 = (byte *)*param_4;
          pbVar1 = *(byte **)(pbVar15 + 0x10);
          if ((*pbVar15 & 1) == 0) {
            pbVar1 = pbVar15 + 1;
          }
          puVar12 = (ulong *)std::string::append((char *)&local_98,(ulong)pbVar1);
          local_80 = *puVar12;
          local_78 = puVar12[1];
          local_70 = (void *)puVar12[2];
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = 0;
          puVar12 = (ulong *)std::string::append((char *)&local_80);
          local_e0 = *puVar12;
          local_d8 = puVar12[1];
          local_d0 = (undefined1 *)puVar12[2];
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = 0;
          FUN_00805490(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                       &local_e0);
          if ((local_e0 & 1) != 0) {
            operator_delete(local_d0);
          }
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
          if ((local_98 & 1) != 0) {
            operator_delete(local_88);
          }
          if ((local_b0[0] & 1) != 0) {
            operator_delete(local_a0);
          }
          uVar11 = 1;
          goto joined_r0x008084b4;
        }
        std::operator+("Unknown enumeration value of \"",(string *)&local_68);
        puVar12 = (ulong *)std::string::append((char *)local_b0);
        local_98 = *puVar12;
        local_90 = puVar12[1];
        local_88 = (void *)puVar12[2];
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = 0;
        pbVar15 = (byte *)*param_4;
        pbVar1 = *(byte **)(pbVar15 + 0x10);
        if ((*pbVar15 & 1) == 0) {
          pbVar1 = pbVar15 + 1;
        }
        puVar12 = (ulong *)std::string::append((char *)&local_98,(ulong)pbVar1);
        local_80 = *puVar12;
        local_78 = puVar12[1];
        local_70 = (void *)puVar12[2];
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = 0;
        puVar12 = (ulong *)std::string::append((char *)&local_80);
        local_e0 = *puVar12;
        local_d8 = puVar12[1];
        local_d0 = (undefined1 *)puVar12[2];
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = 0;
        FUN_00802750(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                     &local_e0);
        if ((local_e0 & 1) != 0) {
          operator_delete(local_d0);
        }
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        if ((local_98 & 1) != 0) {
          operator_delete(local_88);
        }
        if ((local_b0[0] & 1) != 0) {
          operator_delete(local_a0);
        }
      }
LAB_0080879c:
      uVar11 = 0;
      iVar18 = 1;
      iVar8 = 1;
    }
    else {
      local_d8 = 0;
      local_d0 = (undefined1 *)0x0;
      local_e0 = 0x2d02;
      sVar2 = *(string *)(param_1 + 0x30);
      uVar14 = (ulong)((byte)sVar2 >> 1);
      uVar10 = uVar14;
      if (((byte)sVar2 & 1) != 0) {
        uVar10 = *(ulong *)(param_1 + 0x38);
      }
      if (uVar10 == 1) {
        if (((byte)sVar2 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == '-') {
            lVar9 = -uVar14;
            pcVar16 = (char *)(param_1 + 0x32);
            pcVar17 = (char *)((ulong)&local_e0 | 2);
            do {
              lVar9 = lVar9 + 1;
              if (lVar9 == 0) goto LAB_00808420;
              cVar3 = *pcVar17;
              cVar4 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              pcVar17 = pcVar17 + 1;
            } while (cVar4 == cVar3);
          }
          goto LAB_00808418;
        }
        if (**(char **)(param_1 + 0x40) != '-') goto LAB_00808418;
LAB_00808420:
        local_d8 = 0;
        local_d0 = (undefined1 *)0x0;
        local_e0 = 0x2d02;
        if (uVar10 == 1) {
          if (((byte)sVar2 & 1) == 0) {
            if (*(char *)(param_1 + 0x31) == '-') {
              lVar9 = -uVar14;
              pcVar16 = (char *)(param_1 + 0x32);
              pcVar17 = (char *)((ulong)&local_e0 | 2);
              do {
                lVar9 = lVar9 + 1;
                if (lVar9 == 0) goto LAB_008084e4;
                cVar3 = *pcVar17;
                cVar4 = *pcVar16;
                pcVar16 = pcVar16 + 1;
                pcVar17 = pcVar17 + 1;
              } while (cVar4 == cVar3);
            }
            goto LAB_00808508;
          }
          if (**(char **)(param_1 + 0x40) != '-') goto LAB_00808508;
LAB_008084e4:
          FUN_00842de0(param_1 + 0x28);
          bVar6 = true;
          uVar10 = FUN_00808f50(param_1,&local_e0,0x80000000);
        }
        else {
LAB_00808508:
          bVar6 = false;
          uVar10 = FUN_00808f50(param_1,&local_e0,0x7fffffff);
        }
        if ((uVar10 & 1) != 0) {
          uVar10 = local_e0;
          if ((bVar6) && (uVar10 = -local_e0, local_e0 == 0x8000000000000000)) {
            uVar10 = local_e0;
          }
          FUN_007ffde0(&local_e0,uVar10);
          if ((local_68 & 1) != 0) {
            *local_58 = 0;
            local_60 = 0;
            if ((local_68 & 1) != 0) {
              operator_delete(local_58);
            }
          }
          local_60 = local_d8;
          local_58 = local_d0;
          local_68 = local_e0;
          lVar9 = FUN_007e3f10(uVar11,uVar10 & 0xffffffff);
          goto joined_r0x00808590;
        }
        goto LAB_0080879c;
      }
LAB_00808418:
      if (*(int *)(param_1 + 0x28) == 3) goto LAB_00808420;
      std::operator+("Expected integer or identifier, got: ",(string *)(param_1 + 0x30));
      FUN_00802750(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_e0
                  );
      if ((local_e0 & 1) == 0) goto LAB_0080879c;
      operator_delete(local_d0);
      uVar11 = 0;
joined_r0x008084b4:
      iVar18 = 1;
      iVar8 = 1;
    }
joined_r0x008083fc:
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
      iVar8 = iVar18;
    }
    if (iVar8 == 1) {
      return uVar11;
    }
    break;
  case 9:
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = (void *)0x0;
    uVar10 = FUN_00809390(param_1,&local_e0);
    if ((uVar10 & 1) == 0) goto joined_r0x00808378;
    if (*(int *)(param_4 + 8) == 3) {
      pcVar13 = *(code **)(*param_3 + 0x240);
    }
    else {
      pcVar13 = *(code **)(*param_3 + 0x120);
    }
    (*pcVar13)(param_3,param_2,param_4,&local_e0);
joined_r0x00808368:
    if ((local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
    break;
  case 10:
    FUN_00801270(&local_e0,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/text_format.cc"
                 ,0x2eb);
    uVar11 = FUN_00800f30(&local_e0,"Reached an unintended state: CPPTYPE_MESSAGE");
    FUN_00800fa0(&local_68,uVar11);
    FUN_00801290(&local_e0);
  }
  return 1;
}


