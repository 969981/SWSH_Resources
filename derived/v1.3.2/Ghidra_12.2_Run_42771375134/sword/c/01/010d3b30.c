/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d3b30; name: FUN_010d3b30
 */


void FUN_010d3b30(long param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_48;
  
  lVar2 = *(long *)(param_1 + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar2 + 0x2e0);
  if (lVar4 == 0) {
    uVar3 = *param_2;
    uVar1 = FUN_008d3fc0(param_3,0);
    FUN_014c7aa0(0,0,uVar3,uVar1,0,0);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = *param_2;
    uVar1 = FUN_008d3fc0(param_3,0);
    FUN_014c7aa0(lVar4,0,uVar3,uVar1,0,0);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  FUN_010d3900(param_1,0x5fc2057668d46436,0x70328f8b668b8b65);
  lVar2 = *(long *)(param_1 + 0x2b0);
  if (lVar2 == 0) {
    local_48 = 0x562547b25f3d358;
    FUN_0167b9b0(0,&local_48,1);
  }
  else {
    plVar5 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    local_48 = 0x562547b25f3d358;
    FUN_0167b9b0(lVar2,&local_48,1);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  return;
}


