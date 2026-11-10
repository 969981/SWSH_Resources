/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a0820; name: FUN_014a0820
 */


void FUN_014a0820(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_78 [3];
  long local_58;
  
  FUN_00ff86a0(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),5);
  lVar2 = *(long *)(local_58 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  iVar1 = FUN_01521090(lVar3,*(undefined2 *)(*(long *)(param_1 + 0x5d0) + 0x42));
  local_58 = 0x3b95cde3601dea4f;
  local_78[2] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_78[1] = 0x3c7f01d1707ed2c9;
  FUN_008cf360(param_1 + 0x100,&local_58,local_78 + 2,local_78 + 1,0,
               *(undefined2 *)(*(long *)(param_1 + 0x5d0) + 0x42),iVar1);
  if (local_78[2] != 0) {
    (**(code **)(*(long *)(local_78[2] + 0x48) + 0x18))();
    local_78[2] = 0;
  }
  lVar4 = *(long *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar4 + 0x2e0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN_014ca220(lVar5,0,iVar1,3,0,1);
  local_58 = 0xda901b9632d5716;
  lVar6 = *(long *)(lVar4 + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(lVar2,&local_58,0);
  }
  else {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0077eb10(lVar2,&local_58,lVar6);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  local_58 = -0x8dc22adea4a4742;
  FUN_0167cce0(lVar4,&local_58,10);
  local_58 = -0x8dc23adea4a48f5;
  local_78[0] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_78[1] = 0xda900b9632d5563;
  FUN_008c4e70(param_1 + 0x100,&local_58,local_78,local_78 + 1,10);
  if (local_78[0] != 0) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
    local_78[0] = 0;
  }
  iVar1 = iVar1 - (uint)(*(short *)(*(long *)(param_1 + 0x5d0) + 0x42) == 0x31c);
  FUN_014a0e00(param_1,iVar1);
  *(short *)(param_1 + 0x5e6) = (short)iVar1;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


