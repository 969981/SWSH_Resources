/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01110370; name: FUN_01110370
 */


void FUN_01110370(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_58;
  long local_50;
  long local_48;
  undefined8 uStack_38;
  
  uStack_38 = param_2;
  FUN_00ff86a0(&local_48,*(undefined8 *)(*(long *)(param_1[1] + 0x60) + 0xb0),5);
  lVar1 = *(long *)(local_48 + 0x60);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  lVar2 = *(long *)(param_1[1] + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(lVar1,&uStack_38,0);
  }
  else {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(lVar1,&uStack_38,lVar3);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  lVar2 = *(long *)(param_1[1] + 0x2b0);
  if (lVar2 == 0) {
    local_48 = -0x7047ea5b1a3f80b5;
    FUN_0167cce0(0,&local_48,10);
  }
  else {
    plVar5 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    local_48 = -0x7047ea5b1a3f80b5;
    FUN_0167cce0(lVar2,&local_48,10);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_48 = -0x5bb5b79bf0ab5118;
  FUN_00ffd510(0,param_1[1] + 0x100,&local_48);
  FUN_010364c0(param_1[1],2);
  FUN_00ff86a0(&local_48,*(undefined8 *)(*param_1 + 0xb0),0);
  lVar2 = *(long *)(local_48 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  lVar3 = *(long *)(param_1[3] + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar3 + 0x2e8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  FUN_01036e20(param_1[3]);
  local_48 = 0x6a1a8ec0e36659a0;
  FUN_0077eb10(lVar2,&local_48,lVar4);
  lVar3 = param_1[3];
  local_50 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_01036db0(lVar3,0,0,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  local_48 = 0x6a1723c0e3636df8;
  FUN_0077eb10(lVar2,&local_48,lVar4);
  lVar3 = param_1[3];
  local_58 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_01036db0(lVar3,1,1,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


