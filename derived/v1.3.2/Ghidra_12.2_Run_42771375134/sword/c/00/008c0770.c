/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c0770; name: FUN_008c0770
 */


void FUN_008c0770(long param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_50;
  long local_48;
  
  *(undefined4 *)(param_1 + 0x648) = param_2;
  *(int *)(param_1 + 0x644) = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x648) = 0;
  }
  FUN_00ff86a0(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar2 = *(long *)(local_48 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  lVar4 = *(long *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar4 + 0x2e0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  FUN_014ca220(lVar3,0,*(undefined4 *)(param_1 + 0x648),8,0,1);
  uVar1 = 0x5da571220eaf9882;
  if (*(int *)(param_1 + 0x648) != 0) {
    uVar1 = 0x5da578220eafa467;
  }
  local_50 = lVar2;
  if (lVar2 == 0) {
    FUN_008c0610(param_1,uVar1,0xe3bf6556fb33c43,&local_50,0);
  }
  else {
    plVar5 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_008c0610(param_1,uVar1,0xe3bf6556fb33c43,&local_50,0);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    local_50 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


