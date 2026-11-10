/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00beec80; name: FUN_00beec80
 */


void FUN_00beec80(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  if ((*(long *)(param_1 + 0x840) != param_2) &&
     (*(long *)(param_1 + 0x840) = param_2, param_2 != 0)) {
    FUN_016b2d70(param_2,0);
    plVar4 = *(long **)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (plVar4 != (long *)0x0) {
      (**(code **)(plVar4[9] + 0x10))();
    }
    lVar2 = FUN_008c1820(&local_50,*(undefined8 *)(param_1 + 8));
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    *(undefined8 *)(lVar2 + 0x60) = 0xecf72d521d07fad7;
    local_50 = lVar2;
    (**(code **)(*plVar4 + 0xd0))(plVar4,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    (**(code **)(plVar4[9] + 0x18))(plVar4 + 9);
    *(undefined8 *)(lVar2 + 0xa8) = 0x1000000000000;
    plVar4 = *(long **)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (plVar4 != (long *)0x0) {
      (**(code **)(plVar4[9] + 0x10))();
    }
    lVar2 = FUN_008c1820(&local_50,*(undefined8 *)(param_1 + 8));
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    *(undefined8 *)(lVar2 + 0x60) = 0xecf734521d0806bc;
    local_50 = lVar2;
    (**(code **)(*plVar4 + 0xd0))(plVar4,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    (**(code **)(plVar4[9] + 0x18))(plVar4 + 9);
    *(undefined8 *)(lVar2 + 0xa8) = 0x400000000;
    plVar4 = *(long **)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (plVar4 != (long *)0x0) {
      (**(code **)(plVar4[9] + 0x10))();
    }
    lVar2 = FUN_008c1820(&local_50,*(undefined8 *)(param_1 + 8));
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    *(undefined8 *)(lVar2 + 0x60) = 0xecf735521d08086f;
    local_50 = lVar2;
    (**(code **)(*plVar4 + 0xd0))(plVar4,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    (**(code **)(plVar4[9] + 0x18))(plVar4 + 9);
    *(undefined8 *)(lVar2 + 0xa8) = 0x800000000;
    plVar4 = *(long **)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (plVar4 != (long *)0x0) {
      (**(code **)(plVar4[9] + 0x10))();
    }
    lVar2 = FUN_008c1820(&local_50,*(undefined8 *)(param_1 + 8));
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    *(undefined8 *)(lVar2 + 0x60) = 0xecf72e521d07fc8a;
    local_50 = lVar2;
    (**(code **)(*plVar4 + 0xd0))(plVar4,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    (**(code **)(plVar4[9] + 0x18))(plVar4 + 9);
    *(undefined8 *)(lVar2 + 0xa8) = 0x2000000000000;
    FUN_006cf0a0(&local_50,&DAT_02638e98);
    lVar1 = local_38;
    *(long *)(lVar2 + 0x2b0) = local_50;
    *(undefined8 *)(lVar2 + 0x2b8) = local_48;
    *(undefined8 *)(lVar2 + 0x2c0) = local_40;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)(lVar2 + 0x2c8);
    *(long *)(lVar2 + 0x2c8) = lVar1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return;
}


