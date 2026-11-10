/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008abd30; name: FUN_008abd30
 */


undefined8 FUN_008abd30(long param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long local_60;
  long local_58;
  long local_50;
  long *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_28;
  
  local_48 = *(long **)(param_1 + 8);
  local_58 = 0;
  local_50 = 0;
  local_60 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_28 = *param_2;
  if (local_28 == 0) {
    FUN_008abf60(param_1,&local_28,&local_60);
    iVar4 = FUN_0087b880(*param_2,0);
  }
  else {
    plVar7 = (long *)(local_28 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_008abf60(param_1,&local_28,&local_60);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    local_28 = 0;
    iVar4 = FUN_0087b880(*param_2,0);
  }
  if (iVar4 != 0) {
    if (local_60 != local_58) {
      lVar5 = 0;
      bVar1 = false;
      do {
        bVar2 = iVar4 == *(int *)(local_60 + lVar5);
        bVar3 = (local_58 - local_60) + -4 != lVar5;
        lVar5 = lVar5 + 4;
        bVar1 = (bool)(bVar1 | bVar2);
      } while (!bVar2 && bVar3);
      if (bVar1) goto LAB_008abe48;
    }
    uVar6 = 0;
    goto joined_r0x008abf40;
  }
LAB_008abe48:
  iVar4 = FUN_0087b880(*param_2,1);
  if (iVar4 != 0) {
    if (local_60 != local_58) {
      lVar5 = 0;
      bVar1 = false;
      do {
        bVar2 = iVar4 == *(int *)(local_60 + lVar5);
        bVar3 = (local_58 - local_60) + -4 != lVar5;
        lVar5 = lVar5 + 4;
        bVar1 = (bool)(bVar1 | bVar2);
      } while (!bVar2 && bVar3);
      if (bVar1) goto LAB_008abe94;
    }
    uVar6 = 1;
    goto joined_r0x008abf40;
  }
LAB_008abe94:
  iVar4 = FUN_0087b880(*param_2,2);
  if (iVar4 != 0) {
    if (local_60 != local_58) {
      lVar5 = 0;
      bVar1 = false;
      do {
        bVar2 = iVar4 == *(int *)(local_60 + lVar5);
        bVar3 = (local_58 - local_60) + -4 != lVar5;
        lVar5 = lVar5 + 4;
        bVar1 = (bool)(bVar1 | bVar2);
      } while (!bVar2 && bVar3);
      if (bVar1) goto LAB_008abee0;
    }
    uVar6 = 2;
    goto joined_r0x008abf40;
  }
LAB_008abee0:
  iVar4 = FUN_0087b880(*param_2,3);
  if (iVar4 == 0) {
LAB_008abf30:
    uVar6 = 4;
  }
  else {
    if (local_60 != local_58) {
      lVar5 = 0;
      bVar1 = false;
      do {
        bVar2 = iVar4 == *(int *)(local_60 + lVar5);
        bVar3 = (local_58 - local_60) + -4 != lVar5;
        lVar5 = lVar5 + 4;
        bVar1 = (bool)(bVar1 | bVar2);
      } while (!bVar2 && bVar3);
      if (bVar1) goto LAB_008abf30;
    }
    uVar6 = 3;
  }
joined_r0x008abf40:
  if (local_60 != 0) {
    local_58 = local_60;
    (**(code **)(*local_48 + 0x18))(local_48,local_60,local_50 - local_60,4);
  }
  return uVar6;
}


