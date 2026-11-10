/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01492470; name: FUN_01492470
 */


void FUN_01492470(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_48;
  
  local_56 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0x101;
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  local_48 = param_2;
  plVar2 = (long *)(**(code **)*puVar3)(puVar3);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02717528), iVar1 != 0))
  {
    uVar7 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar7;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar2 != (long *)PTR_DAT_02717530; plVar2 = (long *)*plVar2) {
  }
  FUN_00ff86a0(&local_e0,*(undefined8 *)(puVar3[0x9f] + 0xb0),0);
  lVar4 = *(long *)(local_e0 + 0x60);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = 0;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x80) + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar5 + 0x2e8);
  if (lVar6 == 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    FUN_0077eb10(lVar4,&local_48,0);
  }
  else {
    plVar2 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    FUN_0077eb10(lVar4,&local_48,lVar6);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x5d8);
  lVar5 = *(long *)(*(long *)(param_1 + 0x80) + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar5 + 0x2f0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  lVar5 = *(long *)(*(long *)(param_1 + 0x80) + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar5 + 0x2e8);
  plVar2 = (long *)(lVar8 + 0x48);
  if (lVar8 != 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  FUN_014c62d0(uVar7,lVar6,lVar8);
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))(plVar2);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x80) + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar5 + 0x2f0);
  if (lVar6 == 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    local_68 = 0;
    uVar7 = *(undefined8 *)(param_1 + 0xa8);
    lVar5 = *(long *)(param_1 + 0x68);
    if (lVar5 == 0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_01492754;
    }
  }
  else {
    plVar2 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    local_68 = lVar6;
    (**(code **)(*plVar2 + 0x18))(plVar2);
    uVar7 = *(undefined8 *)(param_1 + 0xa8);
    lVar5 = *(long *)(param_1 + 0x68);
    puVar3 = (undefined8 *)0x0;
    if (lVar5 == 0) goto LAB_01492754;
  }
  puVar3 = *(undefined8 **)(lVar5 + 0x60);
  if (puVar3 != (undefined8 *)0x0) {
    plVar2 = (long *)(**(code **)*puVar3)(puVar3);
    lVar5 = FUN_01481a10();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar5) {
        puVar3 = puVar3 + -10;
        goto LAB_01492754;
      }
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_01492754:
  local_d8 = puVar3[0x11];
  local_c8 = puVar3[0x13];
  local_b8 = puVar3[0x15];
  local_a8 = puVar3[0x17];
  local_98 = puVar3[0x19];
  local_88 = puVar3[0x1b];
  local_78 = puVar3[0x1d];
  local_e0 = puVar3[0x10];
  local_d0 = puVar3[0x12];
  local_c0 = puVar3[0x14];
  local_b0 = puVar3[0x16];
  local_a0 = puVar3[0x18];
  local_90 = puVar3[0x1a];
  local_80 = puVar3[0x1c];
  FUN_010381d0(uVar7,&local_68,&local_e0);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0xa8),0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


