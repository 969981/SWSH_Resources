/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ce64a0; name: FUN_00ce64a0
 */


void FUN_00ce64a0(long param_1,undefined8 param_2,ulong param_3,byte param_4,byte param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6e;
  long local_68;
  undefined8 uStack_60;
  byte local_58;
  byte local_57;
  undefined1 local_56;
  undefined8 local_48;
  
  local_57 = param_4 & 1;
  local_58 = param_5 & 1;
  local_68 = 0;
  uStack_60 = 0;
  local_56 = 1;
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x2b0);
  local_48 = param_2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x2e8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    FUN_0077eb10(uVar1,&local_48,0);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    FUN_0077eb10(uVar1,&local_48,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8);
  lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x2f0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar2 + 0x2e8);
  plVar4 = (long *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  FUN_014c62d0(uVar1,lVar3,lVar5);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))(plVar4);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x2f0);
  if (lVar3 == 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    local_68 = 0;
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    local_68 = lVar3;
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((param_3 & 1) == 0) {
    FUN_01038170(*(undefined8 *)(param_1 + 0x90),&local_68);
  }
  else {
    local_6e = 0xffff;
    local_70 = 1;
    local_80 = 0;
    uStack_78 = 0;
    local_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_b8 = 0xb3db9b7767f71ca5;
    uStack_b0 = 0xb3db987767f7178c;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xf0),&local_b8,*(undefined8 *)(param_1 + 0xb8));
    local_a8 = *(undefined8 *)(param_1 + 0xb8);
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xf0),&uStack_b0,*(undefined8 *)(param_1 + 0xc0));
    local_a0 = *(undefined8 *)(param_1 + 0xc0);
    FUN_01037680(*(undefined8 *)(param_1 + 0x90),5);
    (**(code **)(**(long **)(param_1 + 0x90) + 0x88))
              (*(long **)(param_1 + 0x90),&local_68,&local_a8);
  }
  FUN_00ffa290(*(undefined8 *)(param_1 + 0x90),1,1);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
  return;
}


