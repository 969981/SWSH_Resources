/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010c23d0; name: FUN_010c23d0
 */


void FUN_010c23d0(long param_1,uint param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_60;
  long local_58;
  
  FUN_00ff86a0(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar1 = *(long *)(local_58 + 0x60);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  lVar4 = *(long *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar4 + 0x2e0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  FUN_014ca220(lVar2,0,(ulong)param_2 / 10000,4,2,1);
  FUN_014ca220(lVar2,1,param_2 % 10000,4,2,1);
  local_60 = lVar1;
  if (lVar1 == 0) {
    FUN_010c1f90(param_1,0x20e514c0d0bf078d,0x1e62d2ab07d68529,&local_60,0);
  }
  else {
    plVar3 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_010c1f90(param_1,0x20e514c0d0bf078d,0x1e62d2ab07d68529,&local_60,0);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_60 = 0;
  }
  local_58 = 0x1e62d2ab07d68529;
  lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe | param_3 & 1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


