/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01487f40; name: FUN_01487f40
 */


void FUN_01487f40(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),0);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),1);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),2);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),3);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),4);
  lVar3 = *(long *)(param_1 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar3 + 0x2e8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  FUN_00ff86a0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar3 = *(long *)(local_38 + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  uVar1 = FUN_014876d0(*(undefined8 *)(param_1 + 0x5e8));
  if (((uVar1 & 1) == 0) && (**(int **)(param_1 + 0x5e8) != 1)) {
    local_38 = -0x1cba72469b688a9f;
    FUN_0077eb10(lVar3,&local_38,lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x5d8);
    local_40 = lVar2;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar4,2,0,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
  }
  local_38 = -0x1cba71469b6888ec;
  FUN_0077eb10(lVar3,&local_38,lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x5d8);
  local_48 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar4,0,1,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (((char)(*(int **)(param_1 + 0x5e8))[5] == '\0') && (**(int **)(param_1 + 0x5e8) != 1)) {
    local_38 = -0x1cb708469b65a0aa;
    FUN_0077eb10(lVar3,&local_38,lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x5d8);
    local_50 = lVar2;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar4,1,2,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


