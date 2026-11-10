/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00445a90; name: FUN_00445a90
 */


int FUN_00445a90(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_48;
  undefined4 local_44;
  
  if (param_2 == 0) {
    return 1;
  }
  nn::os::LockMutex((MutexType *)PTR_DAT_02712af0);
  param_1 = param_1 + 8;
  iVar4 = FUN_0044e640(param_1,&local_44,4);
  FUN_00430c80(local_44,2);
  if (iVar4 == 1) {
    iVar4 = FUN_0044e640(param_1,&local_98,2);
    FUN_00430d80((undefined2)local_98,2);
    if (iVar4 == 1) {
      iVar4 = FUN_0044e640(param_1,&local_98,2);
      FUN_00430dd0((undefined2)local_98,2);
      local_48 = 0;
      if ((iVar4 != 1) ||
         (iVar4 = FUN_0044e640(param_1,&local_48,4), puVar1 = PTR_DAT_02712b68, iVar4 != 1))
      goto LAB_00445e08;
      if (local_48 != 0) {
        uVar6 = 0;
        do {
          local_98 = 0;
          local_54 = 0;
          local_58 = 0;
          iVar4 = FUN_0044e640(param_1,&local_98,4);
          if ((iVar4 != 1) || (iVar4 = FUN_0044e640(param_1,&local_54,4), iVar4 != 1)) {
LAB_00446094:
            local_54 = 0;
            goto LAB_00446098;
          }
          iVar4 = FUN_004b4460(*(undefined8 *)puVar1,local_98);
          if (iVar4 == 0) {
            iVar4 = 2;
            goto LAB_00446094;
          }
          iVar4 = FUN_004b4780(*(undefined8 *)puVar1,local_98,local_54);
          if ((iVar4 != 1) || (iVar4 = FUN_0044e640(param_1,&local_58,4), iVar4 != 1))
          goto LAB_00446094;
          if (local_58 != 0) {
            uVar7 = 0;
            do {
              iVar4 = FUN_0044e640(param_1,&local_5c,4);
              if (((iVar4 == 1) && (iVar4 = FUN_0044e640(param_1,&local_60,4), iVar4 == 1)) &&
                 (iVar4 = FUN_0044e640(param_1,&local_64,4), iVar4 == 1)) {
                iVar4 = FUN_004b48b0(*(undefined8 *)puVar1,local_98,local_5c,local_60,local_64,0);
              }
              if (iVar4 != 1) goto LAB_00446094;
              uVar7 = uVar7 + 1;
            } while (uVar7 < local_58);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_48);
      }
      local_54 = 0;
      iVar4 = FUN_0044e640(param_1,&local_54,4);
      puVar2 = PTR_DAT_02712b98;
      puVar1 = PTR_DAT_02712a90;
      if (iVar4 == 1) {
        if (local_54 != 0) {
          uVar6 = 1;
LAB_00445ce0:
          iVar4 = FUN_0044e640(param_1,&local_98,4);
          if (((iVar4 != 1) || (iVar4 = FUN_0044e640(param_1,&local_58,4), iVar4 != 1)) ||
             (iVar4 = FUN_0044e640(param_1,&local_60,1), iVar4 != 1)) goto LAB_00445df0;
          iVar4 = FUN_0044e640(param_1,&local_5c,4);
          if ((iVar4 != 1) || (local_5c == 0)) {
LAB_00445db8:
            if ((iVar4 != 1) || (bVar3 = local_54 <= uVar6, uVar6 = uVar6 + 1, bVar3))
            goto LAB_00445df0;
            goto LAB_00445ce0;
          }
          iVar4 = local_5c * 0xc;
          lVar5 = FUN_00404690(*(undefined4 *)puVar1,iVar4);
          if (lVar5 != 0) {
            iVar4 = FUN_0044e640(param_1,lVar5,iVar4);
            if (iVar4 == 1) {
              iVar4 = FUN_004bbbc0(*(undefined8 *)puVar2,local_98,local_58,(undefined1)local_60,
                                   lVar5,local_5c);
            }
            FUN_00404870(*(undefined4 *)puVar1,lVar5);
            goto LAB_00445db8;
          }
          iVar4 = 0x34;
LAB_00445df0:
          local_58 = 0;
          if (iVar4 != 1) goto LAB_0044609c;
        }
        local_58 = 0;
        iVar4 = FUN_0044e640(param_1,&local_58,4);
        puVar1 = PTR_DAT_02712b50;
        if (iVar4 == 1) {
          for (; local_58 != 0; local_58 = local_58 - 1) {
            iVar4 = FUN_0044e640(param_1,&local_5c,4);
            if ((iVar4 == 1) && (iVar4 = FUN_0044e640(param_1,&local_98,4), iVar4 == 1)) {
              FUN_0049ea90(local_98,*(undefined8 *)puVar1,local_5c);
              iVar4 = FUN_0044e640(param_1,&local_60,4);
              if ((iVar4 == 1) &&
                 ((iVar4 = FUN_0044e640(param_1,&local_64,4), iVar4 == 1 &&
                  (iVar4 = FUN_0044e640(param_1,&local_68,4), iVar4 == 1)))) {
                FUN_0049eac0(local_64,local_68,*(undefined8 *)puVar1,local_5c,local_60);
                iVar4 = FUN_0044e640(param_1,&local_6c,1);
                if ((iVar4 != 0) && ((char)local_6c != '\0')) {
                  FUN_0049ecb0(*(undefined8 *)puVar1,(char)local_6c,local_5c);
                }
              }
            }
            if (iVar4 != 1) goto LAB_0044609c;
          }
          local_5c = 0;
          iVar4 = FUN_0044e640(param_1,&local_5c,4);
          if (iVar4 == 1) {
            if (local_5c == 0) {
              iVar4 = 1;
            }
            else {
              do {
                iVar4 = FUN_0044e640(param_1,&local_60,4);
                if (((((iVar4 == 1) && (iVar4 = FUN_0044e640(param_1,&local_64,4), iVar4 == 1)) &&
                     (iVar4 = FUN_0044e640(param_1,&local_68,4), iVar4 == 1)) &&
                    ((iVar4 = FUN_0044e640(param_1,&local_6c,4), iVar4 == 1 &&
                     (iVar4 = FUN_0044e640(param_1,&uStack_70,4), iVar4 == 1)))) &&
                   ((iVar4 = FUN_0044e640(param_1,&local_74,4), iVar4 == 1 &&
                    (iVar4 = FUN_0044e640(param_1,&local_78,4), iVar4 == 1)))) {
                  local_98 = local_60;
                  uStack_94 = local_64;
                  local_88 = uStack_70;
                  uStack_84 = local_74;
                  local_90 = local_68;
                  uStack_8c = local_6c;
                  local_80 = local_78;
                  iVar4 = FUN_004c2000(local_60,&local_98);
                }
              } while ((iVar4 == 1) && (local_5c = local_5c + -1, local_5c != 0));
            }
          }
          goto LAB_00445e08;
        }
      }
      else {
LAB_00446098:
        local_58 = 0;
      }
LAB_0044609c:
      local_5c = 0;
      goto LAB_00445e08;
    }
  }
  local_48 = 0;
LAB_00445e08:
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
  return iVar4;
}


