/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c54ff0; name: FUN_00c54ff0
 */


void FUN_00c54ff0(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  byte *__s;
  undefined4 uVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  ulong local_60;
  byte *pbStack_58;
  size_t local_50;
  long local_48;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    return;
  }
  if (*(char *)(param_3 + 0x20) == '\0') {
    return;
  }
  plVar3 = *(long **)(param_1 + 0xb0);
  if (plVar3 == (long *)0x0) {
    return;
  }
  lVar7 = *(long *)(param_3 + 0x28);
  if (lVar7 < 0x167ceda85886a1e3) {
    if (lVar7 == -0x106122acd047a43d) {
      uVar5 = 3;
      goto LAB_00c550e4;
    }
    if (lVar7 != -0x69201f1a107587d) {
      return;
    }
  }
  else {
    uVar5 = 1;
    if (lVar7 == 0x167ceda85886a1e3) goto LAB_00c550e4;
    if (lVar7 != 0x23d58a04e2221889) {
      if (lVar7 != 0x40e51597f9803559) {
        return;
      }
      goto LAB_00c550e4;
    }
  }
  uVar5 = 2;
LAB_00c550e4:
  local_60 = CONCAT44(local_60._4_4_,uVar5);
  local_38 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_60);
  lVar7 = DAT_02a57538;
  local_48 = 0;
  uVar5 = *(undefined4 *)PTR_DAT_0271bdc8;
  local_60 = DAT_02a57520;
  pbStack_58 = DAT_02a57528;
  local_50 = DAT_02a57530;
  if (DAT_02a57538 == 0) {
    local_48 = DAT_02a57538;
  }
  else {
    (**(code **)(*(long *)(DAT_02a57538 + 0x48) + 0x10))();
    lVar8 = local_48;
    local_48 = lVar7;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar7 + 0x7d8);
  if (lVar8 == 0) {
    bVar2 = false;
  }
  else {
    plVar3 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar4 = FUN_00e331a0(lVar8,&local_38);
    if (lVar4 == 0) {
      bVar2 = false;
    }
    else {
      __s = (byte *)FUN_00e33360(lVar8,lVar4,uVar5);
      bVar2 = false;
      if (__s != (byte *)0x0) {
        local_50 = strlen((char *)__s);
        bVar1 = *__s;
        local_60 = 0xcbf29ce484222645;
        pbVar6 = __s;
        while (bVar1 != 0) {
          pbVar6 = pbVar6 + 1;
          local_60 = (local_60 ^ bVar1) * 0x100000001b3;
          bVar1 = *pbVar6;
        }
        pbStack_58 = __s;
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        }
        bVar2 = true;
        local_48 = 0;
      }
    }
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (bVar2) {
    local_80 = 0x9200010e908f0c9b;
    local_78 = "GroundAttributes";
    local_70 = 0x10;
    local_68 = 0;
    FUN_00895ec0(param_2,&local_80,&local_60);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


