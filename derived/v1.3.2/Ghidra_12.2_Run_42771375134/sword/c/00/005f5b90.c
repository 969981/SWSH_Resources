/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f5b90; name: FUN_005f5b90
 */


undefined8
FUN_005f5b90(undefined8 param_1,long *param_2,char *param_3,long param_4,long param_5,
            undefined4 *param_6,char *param_7)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  size_t sVar7;
  size_t __n;
  int local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_44;
  
  local_44 = 0;
  if (*param_7 == '\0') {
    uVar4 = FUN_005f6760(param_5 + 0x48,&local_44);
    if ((uVar4 & 1) == 0) {
      FUN_005c47b0(param_4 + 0x10,"Invalid format : ");
      if (param_3 == (char *)0x0) {
        return 0;
      }
      if (*param_3 == '\0') {
        return 0;
      }
      sVar7 = 0;
      do {
        __n = sVar7 + 1;
        lVar5 = sVar7 + 1;
        sVar7 = __n;
      } while (param_3[lVar5] != '\0');
      goto LAB_005f5dac;
    }
  }
  else {
    uVar4 = FUN_005f6940(*param_6,&local_44);
    if ((uVar4 & 1) == 0) {
      FUN_005c47b0(param_4 + 0x10,"Invalid format : ");
      if (param_3 == (char *)0x0) {
        return 0;
      }
      if (*param_3 == '\0') {
        return 0;
      }
      sVar7 = 0;
      do {
        __n = sVar7 + 1;
        lVar5 = sVar7 + 1;
        sVar7 = __n;
      } while (param_3[lVar5] != '\0');
      goto LAB_005f5dac;
    }
  }
  if (*param_7 == '\0') {
    if ((*(uint *)(param_5 + 0x6c) >> 9 & 1) == 0) {
      if ((*(uint *)(param_5 + 0x6c) >> 0x15 & 1) != 0) goto LAB_005f5cc8;
      local_78 = 2;
      if (1 < *(uint *)(param_5 + 0x14)) {
        local_78 = 3;
      }
    }
    else {
LAB_005f5cc0:
      local_78 = 4;
    }
  }
  else {
    iVar2 = param_6[1];
    if (iVar2 == 2) {
      local_78 = 1;
    }
    else if (iVar2 == 4) {
LAB_005f5cc8:
      local_78 = 3;
    }
    else {
      if (iVar2 != 3) {
        FUN_005c47b0(param_4 + 0x10,"Invalid image type : ");
        if (param_3 == (char *)0x0) {
          return 0;
        }
        if (*param_3 == '\0') {
          return 0;
        }
        sVar7 = 0;
        do {
          __n = sVar7 + 1;
          lVar5 = sVar7 + 1;
          sVar7 = __n;
        } while (param_3[lVar5] != '\0');
        goto LAB_005f5dac;
      }
      if ((*(byte *)(param_6 + 2) >> 2 & 1) != 0) goto LAB_005f5cc0;
      local_78 = 5;
      if ((uint)param_6[3] < 2) {
        local_78 = 2;
      }
    }
  }
  uVar3 = *(uint *)(param_5 + 0x18);
  local_60 = 0;
  if ((int)uVar3 < 2) {
    uVar3 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  uStack_74 = local_44;
  local_68 = (ulong)uVar3 << 0x20;
  local_70 = *(undefined4 *)(param_5 + 0xc);
  local_6c = *(undefined4 *)(param_5 + 8);
  if (local_78 == 3) {
    local_68 = CONCAT44(uVar3,*(undefined4 *)(param_5 + 0x14));
  }
  if (*param_7 != '\0') {
    local_60 = (ulong)(uint)param_6[3];
  }
  uVar4 = (**(code **)(*param_2 + 0x40))(param_2,&local_78);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  FUN_005c47b0(param_4 + 0x10,"Failed to create image : ");
  if (param_3 == (char *)0x0) {
    return 0;
  }
  if (*param_3 == '\0') {
    return 0;
  }
  sVar7 = 0;
  do {
    __n = sVar7 + 1;
    lVar5 = sVar7 + 1;
    sVar7 = __n;
  } while (param_3[lVar5] != '\0');
LAB_005f5dac:
  lVar5 = *(long *)(param_4 + 0x20);
  uVar4 = lVar5 + __n;
  if (*(ulong *)(param_4 + 0x30) <= uVar4) {
    uVar6 = *(ulong *)(param_4 + 0x30) * 2;
    uVar1 = uVar4 + 1;
    if (uVar4 + 1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (*(long *)(param_4 + 0x28) != 0) {
      uVar1 = *(long *)(param_4 + 0x28) + lVar5 + __n + 1;
    }
    FUN_005c5e00(param_4 + 0x10,uVar1,1);
    lVar5 = *(long *)(param_4 + 0x20);
    uVar4 = lVar5 + __n;
  }
  memcpy((void *)(*(long *)(param_4 + 0x18) + lVar5),param_3,__n);
  *(size_t *)(param_4 + 0x20) = *(long *)(param_4 + 0x20) + __n;
  *(undefined1 *)(*(long *)(param_4 + 0x18) + uVar4) = 0;
  return 0;
}


