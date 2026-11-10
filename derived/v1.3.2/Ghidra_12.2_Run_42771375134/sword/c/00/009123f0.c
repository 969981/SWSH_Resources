/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009123f0; name: FUN_009123f0
 */


uint FUN_009123f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 uVar9;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  byte local_64;
  byte local_63;
  byte local_58;
  byte local_57;
  byte local_54;
  byte local_53;
  
  *param_5 = 0;
  uVar7 = FUN_008f35c0(param_1,0x8000);
  if ((uVar7 & 1) != 0) {
    FUN_008df3c0(param_2,0);
    cVar3 = FUN_009141d0();
    if (cVar3 == '\0') {
      *param_5 = 1;
      return 1;
    }
  }
  FUN_00912770(&local_54,&local_58,&local_64,param_1,param_2,param_4);
  uVar7 = FUN_008f93a0(param_1,0);
  if ((uVar7 & 1) == 0) {
    uVar5 = 2;
    uVar7 = FUN_008f93a0(param_1,1);
    if ((uVar7 & 1) != 0) goto LAB_00912498;
LAB_009124c4:
    if (uVar5 == 2) {
LAB_009124cc:
      uVar7 = FUN_008fa510(param_1);
      if ((uVar7 & 1) != 0) {
        uVar4 = FUN_008f93a0(param_1,0);
        bVar2 = (uVar4 & 1) == 0;
        uVar6 = uVar4 & 1;
        if (bVar2) {
          local_64 = 0;
        }
        uVar8 = 0;
        if (bVar2) {
          uVar8 = 2;
        }
        uVar7 = FUN_008f93a0(param_1,1);
        if ((uVar7 & 1) == 0) {
          if ((uVar4 & 1) == 0) goto LAB_00912554;
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
          if ((local_64 <= local_63) && ((uVar4 & 1) != 0)) {
            if (local_64 == local_63) {
              uVar6 = uVar6 + 1;
            }
            uVar5 = uVar8;
            if (1 < uVar6) goto LAB_00912554;
          }
        }
        uVar9 = 2;
        goto LAB_00912724;
      }
LAB_00912554:
      uVar7 = FUN_008fa4e0(param_1);
      if ((uVar7 & 1) == 0) {
        return 2;
      }
      uVar7 = FUN_008f93a0(param_1,0);
      if ((((local_54 != 0) && ((uVar7 & 1) != 0)) ||
          ((uVar7 = FUN_008f93a0(param_1,1), (uVar7 & 1) != 0 && (local_53 != 0)))) ||
         ((uVar5 = FUN_009134d0(param_3), (uVar5 & 0xff) == 0x1f ||
          (uVar5 = FUN_008fa070(param_1,uVar5), (uVar5 & 0xff) == 2)))) {
        *param_5 = 2;
        iVar1 = (uint)local_58 - (uint)local_54;
        uVar6 = FUN_008f93a0(param_1,0);
        bVar2 = (uVar6 & 1) == 0;
        uVar5 = 0;
        if (bVar2) {
          uVar5 = 2;
        }
        uVar4 = uVar6 & 1;
        if (bVar2) {
          iVar1 = 0;
        }
        uVar7 = FUN_008f93a0(param_1,1);
        if ((uVar7 & 1) == 0) {
          if ((uVar6 & 1) != 0) {
            return 0;
          }
        }
        else {
          if ((int)((uint)local_57 - (uint)local_53) < iVar1) {
            return 1;
          }
          if ((uVar6 & 1) == 0) {
            return 1;
          }
          if ((uint)local_57 - (uint)local_53 == iVar1) {
            uVar4 = uVar4 + 1;
          }
          if (uVar4 < 2) {
            return uVar5;
          }
        }
        FUN_00912b20(&local_6c,&local_74,param_1,param_2,0);
        FUN_00912b20(&local_68,&local_70,param_1,param_2,1);
        uVar6 = FUN_008f93a0(param_1,0);
        uVar5 = uVar6 & 1;
        if ((uVar6 & 1) == 0) {
          local_74 = 0;
        }
        uVar7 = FUN_008f93a0(param_1,1);
        if ((uVar7 & 1) == 0) {
          if ((uVar6 & 1) != 0) {
            return 0;
          }
        }
        else {
          if ((uVar6 & 1) == 0) {
            return 1;
          }
          if (local_74 < local_70) {
            return 1;
          }
          if (local_70 == local_74) {
            uVar5 = uVar5 + 1;
          }
          if (uVar5 < 2) {
            return 0;
          }
        }
        uVar5 = FUN_008f93a0(param_1,0);
        uVar6 = 0;
        if ((uVar5 & 1) == 0) {
          uVar6 = 2;
          local_6c = 0;
        }
        uVar7 = FUN_008f93a0(param_1,1);
        uVar4 = uVar6;
        if ((uVar7 & 1) != 0) {
          uVar4 = 1;
        }
        if ((uVar5 & 1) == 0) {
          return uVar4;
        }
        if ((uVar7 & 1) == 0) {
          return uVar4;
        }
        if (local_6c < local_68) {
          return 1;
        }
        uVar5 = uVar5 & 1;
        if (local_68 == local_6c) {
          uVar5 = uVar5 + 1;
        }
        uVar4 = 2;
        if (uVar5 < 2) {
          uVar4 = uVar6;
        }
        return uVar4;
      }
    }
  }
  else {
    uVar5 = (uint)(local_54 == 0) << 1;
    uVar7 = FUN_008f93a0(param_1,1);
    if ((uVar7 & 1) == 0) goto LAB_009124c4;
LAB_00912498:
    if (local_53 == 0) goto LAB_009124c4;
    if (uVar5 != 2) goto LAB_009124cc;
    uVar5 = 1;
  }
  uVar9 = 1;
LAB_00912724:
  *param_5 = uVar9;
  return uVar5;
}


