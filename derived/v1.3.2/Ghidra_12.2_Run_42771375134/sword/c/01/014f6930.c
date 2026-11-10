/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f6930; name: FUN_014f6930
 */


void FUN_014f6930(long param_1,char param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_70;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  
  cVar2 = FUN_008d4270();
  lVar5 = 0;
  puVar3 = &DAT_026a7df0;
  if (cVar2 != ',') {
    puVar3 = &DAT_026a7eb0;
  }
  puVar1 = &DAT_026a7eb0;
  if (cVar2 != ',') {
    puVar1 = &DAT_026a7df0;
  }
  do {
    uVar4 = *(undefined8 *)(param_1 + 0x468);
    FUN_006cf0a0(&local_68,puVar3 + lVar5);
    local_48 = FUN_0069d1d0(uVar4,&local_68);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    FUN_0069d200(*(undefined8 *)(param_1 + 0x468),&local_48,0);
    uVar4 = *(undefined8 *)(param_1 + 0x468);
    FUN_006cf0a0(&local_68,puVar1 + lVar5);
    local_70 = FUN_0069d1d0(uVar4,&local_68);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    FUN_0069d200(*(undefined8 *)(param_1 + 0x468),&local_70,0);
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0xc0);
  if ('\0' < param_2) {
    uVar6 = (long)param_2 & 0xffffffff;
    do {
      uVar4 = *(undefined8 *)(param_1 + 0x468);
      FUN_006cf0a0(&local_68,puVar3);
      local_48 = FUN_0069d1d0(uVar4,&local_68);
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
        local_50 = 0;
      }
      FUN_0069d200(*(undefined8 *)(param_1 + 0x468),&local_48,1);
      puVar3 = puVar3 + 0x18;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  local_68 = 0x8fb5e713cdc8e849;
  local_60 = "fi_badges_complete";
  local_58 = 0x12;
  local_50 = 0;
  local_48 = FUN_0069d1d0(*(undefined8 *)(param_1 + 0x468),&local_68);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  FUN_0069d200(*(undefined8 *)(param_1 + 0x468),&local_48,param_2 == '\b');
  *(bool *)(param_1 + 0x470) = param_2 != '\0';
  return;
}


