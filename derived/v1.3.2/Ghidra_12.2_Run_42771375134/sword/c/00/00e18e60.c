/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e18e60; name: FUN_00e18e60
 */


undefined8 FUN_00e18e60(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_02710848;
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar3 + 0x1e8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar4 + 0x68) == *(long *)(param_1 + 0xf0)) {
    lVar2 = *param_2;
    if ((((*(long *)(param_1 + 0x110) != lVar2) && (*(long *)(param_1 + 0x118) != lVar2)) &&
        (*(long *)(param_1 + 0x120) != lVar2)) &&
       (((*(long *)(param_1 + 0x128) != lVar2 && (*(long *)(param_1 + 0x130) != lVar2)) &&
        ((*(long *)(param_1 + 0x138) != lVar2 && (*(long *)(param_1 + 0x140) != lVar2)))))) {
      if (*(long *)(param_1 + 0x110) == 0) {
        uVar5 = 0;
        *(long *)(param_1 + 0x110) = lVar2;
        lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      else if (*(long *)(param_1 + 0x118) == 0) {
        uVar5 = 1;
        *(long *)(param_1 + 0x118) = lVar2;
        lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      else if (*(long *)(param_1 + 0x120) == 0) {
        uVar5 = 2;
        *(long *)(param_1 + 0x120) = lVar2;
        lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      else if (*(long *)(param_1 + 0x128) == 0) {
        uVar5 = 3;
        *(long *)(param_1 + 0x128) = lVar2;
        lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      else if (*(long *)(param_1 + 0x130) == 0) {
        uVar5 = 4;
        *(long *)(param_1 + 0x130) = lVar2;
        lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      else if (*(long *)(param_1 + 0x138) == 0) {
        uVar5 = 5;
        *(long *)(param_1 + 0x138) = lVar2;
        lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      else {
        if (*(long *)(param_1 + 0x140) != 0) goto LAB_00e18f24;
        uVar5 = 6;
        *(long *)(param_1 + 0x140) = lVar2;
        lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      lVar6 = *(long *)(lVar2 + 0x1e8);
      if (lVar6 == 0) {
        FUN_015c5d70(0,param_2,uVar5);
      }
      else {
        plVar7 = (long *)(lVar6 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_015c5d70(lVar6,param_2,uVar5);
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      lVar6 = *(long *)(lVar2 + 0x1e8);
      if (lVar6 == 0) {
        FUN_015c60c0(0,*param_2);
      }
      else {
        plVar7 = (long *)(lVar6 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_015c60c0(lVar6,*param_2);
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      uVar5 = 1;
      goto LAB_00e18f28;
    }
  }
LAB_00e18f24:
  uVar5 = 0;
LAB_00e18f28:
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return uVar5;
}


