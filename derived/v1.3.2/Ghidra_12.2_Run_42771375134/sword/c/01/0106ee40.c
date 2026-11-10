/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106ee40; name: FUN_0106ee40
 */


void FUN_0106ee40(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_70;
  long local_68;
  
  lVar4 = *(long *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar4 + 0x2e0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar4 + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  uVar2 = FUN_00ff93a0(param_1);
  FUN_00ff86a0(&local_68,uVar2,*(undefined4 *)(param_1 + 0x5cc));
  lVar7 = *(long *)(local_68 + 0x60);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  FUN_014c9030(lVar5,0,lVar8);
  FUN_0077eb10(lVar7,&DAT_02162f10,lVar6);
  FUN_0167cce0(lVar4,&DAT_02162f18,10);
  FUN_014ca220(lVar5,0,param_2,1,1,1);
  FUN_0077eb10(lVar7,&DAT_02162f30,lVar6);
  FUN_0167cce0(lVar4,&DAT_02162f20,10);
  uVar3 = FUN_014bbe60(*(undefined8 *)PTR_DAT_02710898,param_2);
  local_70 = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  puVar1 = &DAT_02162f38;
  if ((uVar3 & 1) == 0) {
    puVar1 = &DAT_02162f40;
  }
  FUN_008c4e70(param_1 + 0x100,&DAT_02162f28,&local_70,puVar1,10);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  uVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02162f48);
  FUN_00ffd840(param_1 + 0x100,uVar2);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  FUN_014ca220(lVar5,0,5 - param_2,1,1,1);
  FUN_0077eb10(lVar7,&DAT_02162f50,lVar6);
  FUN_0167cce0(lVar4,&DAT_02162f58,10);
  FUN_010364c0(param_1,2);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


