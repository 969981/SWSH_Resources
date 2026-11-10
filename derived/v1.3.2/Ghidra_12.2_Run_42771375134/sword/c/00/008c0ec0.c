/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c0ec0; name: FUN_008c0ec0
 */


void FUN_008c0ec0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_70;
  long local_68;
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
  lVar3 = *(long *)(param_1 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar3 + 0x2e0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  FUN_014ca220(lVar2,0,*(int *)(param_1 + 0x640) * *(int *)(param_1 + 0x648),8,0,1);
  local_60 = lVar1;
  if (lVar1 == 0) {
    FUN_008c0610(param_1,0x5da578220eafa467,0x978a5fadef414593,&local_60,0);
  }
  else {
    plVar4 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_008c0610(param_1,0x5da578220eafa467,0x978a5fadef414593,&local_60,0);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    local_60 = 0;
  }
  FUN_014ca220(lVar2,0,*(undefined4 *)(param_1 + 0x640),3,0,1);
  local_70 = lVar1;
  local_68 = lVar1;
  if (lVar1 == 0) {
    FUN_008c0610(param_1,0x5da57a220eafa7cd,0x978a5eadef4143e0,&local_68,0);
    FUN_008c0610(param_1,0x5da577220eafa2b4,0x978a61adef4148f9,&local_70,0);
  }
  else {
    plVar4 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_008c0610(param_1,0x5da57a220eafa7cd,0x978a5eadef4143e0,&local_68,0);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    local_68 = 0;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_008c0610(param_1,0x5da577220eafa2b4,0x978a61adef4148f9,&local_70,0);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    local_70 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


