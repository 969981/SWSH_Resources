/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8b5d0; name: FUN_00e8b5d0
 */


bool FUN_00e8b5d0(long param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  char *pcStack_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  long local_28;
  
  plVar4 = *(long **)(param_1 + 0x70);
  if (0.0 < *(float *)(param_1 + 0x84)) {
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined1 *)(plVar4 + 0x18) = 1;
    plVar4[0x17] = CONCAT44((float)((ulong)plVar4[0x17] >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                            (float)plVar4[0x17] + (float)uVar6);
    plVar4[0x16] = CONCAT44((float)((ulong)plVar4[0x16] >> 0x20) + (float)((ulong)uVar5 >> 0x20),
                            (float)plVar4[0x16] + (float)uVar5);
  }
  (**(code **)(*plVar4 + 0x10))(&local_30,plVar4);
  local_28 = local_30;
  local_30 = 0;
  local_50 = 0x31e40a42ad743f45;
  pcStack_48 = "fi20_walk01";
  local_40 = 0xb;
  local_38 = 0;
  uVar2 = FUN_00e7be90(&local_28,&local_50);
  if ((uVar2 & 1) == 0) {
    (**(code **)(*plVar4 + 0x10))(&local_60,plVar4);
    local_58 = local_60;
    local_60 = 0;
    local_80 = 0x837abea538664a9c;
    pcStack_78 = "fi21_run01";
    local_70 = 10;
    local_68 = 0;
    uVar2 = FUN_00e7be90(&local_58,&local_80);
    uVar2 = uVar2 & 0xffffffff;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    lVar1 = 0;
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
      lVar1 = local_60;
    }
  }
  else {
    uVar2 = 1;
    lVar1 = local_60;
  }
  local_60 = lVar1;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  iVar3 = *(int *)(param_1 + 0xb0);
  if ((uVar2 & 1) != 0) {
    iVar3 = iVar3 + -1;
    *(int *)(param_1 + 0xb0) = iVar3;
  }
  return iVar3 < 1;
}


