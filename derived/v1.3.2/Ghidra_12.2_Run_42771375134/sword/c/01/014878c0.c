/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014878c0; name: FUN_014878c0
 */


void FUN_014878c0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar4 = *(long *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar4 + 0x2e8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  FUN_00ff86a0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar4 = *(long *)(local_38 + 0x60);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  local_38 = -0x1cba71469b6888ec;
  FUN_0077eb10(lVar4,&local_38,lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x5d8);
  local_40 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar5,0,1,&local_40);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  uVar5 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5e8));
  uVar2 = FUN_0087d610(uVar5,2);
  if (*(char *)(*(long *)(param_1 + 0x5e8) + 0x14) == '\0') {
    if ((uVar2 & 1) != 0) {
      FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),2);
      uVar2 = FUN_014876d0(*(undefined8 *)(param_1 + 0x5e8));
      goto joined_r0x01487a7c;
    }
    local_38 = -0x1cba6f469b688586;
    FUN_0077eb10(lVar4,&local_38,lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x5d8);
    local_48 = lVar3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar5,2,0,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
  }
  uVar2 = FUN_014876d0(*(undefined8 *)(param_1 + 0x5e8));
joined_r0x01487a7c:
  if ((uVar2 & 1) == 0) {
    local_38 = -0x1cba6e469b6883d3;
    FUN_0077eb10(lVar4,&local_38,lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x5d8);
    local_50 = lVar3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar5,1,2,&local_50);
    lVar1 = 0;
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
      lVar1 = local_50;
    }
  }
  else {
    FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),1);
    lVar1 = local_50;
  }
  local_50 = lVar1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


