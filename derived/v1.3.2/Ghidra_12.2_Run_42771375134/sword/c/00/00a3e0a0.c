/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a3e0a0; name: FUN_00a3e0a0
 */


void FUN_00a3e0a0(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined4 *puVar8;
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 local_58;
  
  uVar2 = *(uint *)(param_1 + 0x600);
  local_60 = *(long *)(param_1 + 0x5d8);
  lVar4 = *(long *)(*(long *)(param_1 + 0x5f0) + 0x40);
  local_58 = 0x55e9408dd2c19f5;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
  }
  puVar1 = (undefined4 *)(lVar4 + (ulong)uVar2 * 8);
  puVar8 = puVar1 + 1;
  FUN_008cf360(param_1 + 0x100,&local_58,&local_60,&DAT_02154900,0,*puVar1,*puVar8);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  FUN_0168c190(*(undefined8 *)(param_1 + 0x4e8),*puVar1,0,&local_e0);
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(&local_c0);
  }
  lVar4 = *(long *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x5d8);
  lVar6 = *(long *)(lVar4 + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(uVar5,&DAT_02154908,0);
    lVar6 = *(long *)(lVar4 + 0x2e0);
  }
  else {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0077eb10(uVar5,&DAT_02154908,lVar6);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar6 = *(long *)(lVar4 + 0x2e0);
  }
  if (lVar6 == 0) {
    FUN_014ca220(0,0,*puVar8,3,0,1);
  }
  else {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_014ca220(lVar6,0,*puVar8,3,0,1);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  local_58 = 0xb2a2c394b0ba413b;
  FUN_0167cce0(lVar4,&local_58,10);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  FUN_0077e740(*(undefined8 *)(param_1 + 0x5e0),*puVar1,*(undefined8 *)(param_1 + 0x5e8));
  local_58 = 0x5c87c917e2849780;
  uVar5 = FUN_0077d470(*(undefined8 *)(param_1 + 0x5e8));
  FUN_00ffd700(param_1 + 0x100,&local_58,uVar5,10);
  return;
}


