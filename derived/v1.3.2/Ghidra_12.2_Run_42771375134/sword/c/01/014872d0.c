/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014872d0; name: FUN_014872d0
 */


void FUN_014872d0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long local_e8;
  long local_e0;
  long local_d8;
  long *local_d0;
  code *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  long alStack_b0 [13];
  long local_48;
  
  if ((*(long *)(param_1 + 0x4c0) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58), lVar5 == 0)) {
    *(undefined8 *)(param_1 + 0x5d8) = 0;
    return;
  }
  plVar6 = (long *)(lVar5 + 0x48);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  lVar5 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_d0 = &local_48;
  local_48 = 0;
  local_c8 = (code *)0xe2c06acab97c29c2;
  FUN_01037340(lVar5,&local_d0,0);
  lVar7 = local_48;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  *(long *)(param_1 + 0x5d8) = lVar7;
  if (lVar7 == 0) {
    return;
  }
  FUN_016bbde0(lVar7,0);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),1);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),2);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),3);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),4);
  lVar5 = *(long *)(param_1 + 0x5d8);
  pcVar4 = *(code **)(lVar5 + 0x168);
  local_d0 = (long *)&LAB_014893c0;
  local_c8 = FUN_014893f0;
  local_c0 = FUN_01489400;
  local_b8 = &LAB_01489410;
  alStack_b0[0] = param_1;
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x170) = 0;
    *(undefined8 *)(lVar5 + 0x178) = 0;
    *(undefined8 *)(lVar5 + 0x160) = 0;
    *(undefined8 *)(lVar5 + 0x168) = 0;
    (*pcVar4)(lVar5 + 0x180);
    if (local_c0 == (code *)0x0) goto LAB_0148746c;
  }
  (*local_c0)(alStack_b0,lVar5 + 0x180);
  *(undefined1 **)(lVar5 + 0x178) = local_b8;
  *(code **)(lVar5 + 0x168) = local_c8;
  *(code **)(lVar5 + 0x170) = local_c0;
  *(undefined8 *)(lVar5 + 0x160) = local_d0;
LAB_0148746c:
  uVar2 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5e8));
  uVar1 = FUN_0087d610(uVar2,2);
  lVar5 = *(long *)(param_1 + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(lVar5 + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  FUN_00ff86a0(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar5 = *(long *)(local_48 + 0x60);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  local_48 = -0x1cba71469b6888ec;
  FUN_0077eb10(lVar5,&local_48,lVar7);
  uVar2 = *(undefined8 *)(param_1 + 0x5d8);
  local_d8 = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar2,0,1,&local_d8);
  if (local_d8 != 0) {
    (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
    local_d8 = 0;
  }
  if ((uVar1 & 1) == 0 && *(char *)(*(long *)(param_1 + 0x5e8) + 0x14) == '\0') {
    local_48 = -0x1cba6f469b688586;
    FUN_0077eb10(lVar5,&local_48,lVar7);
    uVar2 = *(undefined8 *)(param_1 + 0x5d8);
    local_e0 = lVar7;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar2,2,0,&local_e0);
    if (local_e0 != 0) {
      (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
      local_e0 = 0;
    }
  }
  uVar3 = FUN_014876d0(*(undefined8 *)(param_1 + 0x5e8));
  if ((uVar3 & 1) == 0) {
    local_48 = -0x1cba6e469b6883d3;
    FUN_0077eb10(lVar5,&local_48,lVar7);
    uVar2 = *(undefined8 *)(param_1 + 0x5d8);
    local_e8 = lVar7;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar2,1,2,&local_e8);
    if (local_e8 != 0) {
      (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
      local_e8 = 0;
    }
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  pcVar4 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (long *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar4)(alStack_b0);
  }
  return;
}


