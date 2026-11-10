/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe14c0; name: FUN_00fe14c0
 */


void FUN_00fe14c0(long param_1,undefined *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_48;
  
  if (*(long *)(param_1 + 0x7f8) != 0) {
    puVar1 = &DAT_02158da8;
    if (param_2 != (undefined *)0x0) {
      puVar1 = param_2;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x1b0);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)(lVar6 + 0x2e0);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    FUN_0077d520(*(undefined8 *)(param_1 + 0x848),puVar1);
    FUN_014c9110(lVar3,0,*(undefined8 *)(param_1 + 0x848),param_3,param_4);
    uVar2 = FUN_00ff9390(param_1);
    FUN_00ff86a0(&local_48,uVar2,0);
    lVar6 = *(long *)(local_48 + 0x60);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    local_48 = 0x22be48f6c8b0521f;
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x1b0);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar5 = *(long *)(lVar4 + 0x2e8);
    if (lVar5 == 0) {
      FUN_0077eb10(lVar6,&local_48,0);
    }
    else {
      plVar7 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_0077eb10(lVar6,&local_48,lVar5);
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x1b0);
    if (lVar4 == 0) {
      FUN_0167cce0(0,param_1 + 0x7f8,10);
    }
    else {
      plVar7 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_0167cce0(lVar4,param_1 + 0x7f8,10);
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
  }
  return;
}


