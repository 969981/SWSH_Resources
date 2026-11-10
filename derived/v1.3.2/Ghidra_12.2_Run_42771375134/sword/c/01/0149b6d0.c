/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0149b6d0; name: FUN_0149b6d0
 */


ulong FUN_0149b6d0(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long local_48;
  
  puVar2 = PTR_DAT_02710848;
  uVar6 = 1;
  switch(*param_1) {
  case 2:
  case 5:
    lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    puVar1 = PTR_DAT_02710798;
    lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar7 == 0) {
      uVar3 = FUN_0150b350(0);
    }
    else {
      plVar4 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar3 = FUN_0150b350(lVar7);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    lVar5 = *(long *)(*(long *)puVar2 + 0x90);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar7 = *(long *)(*(long *)puVar1 + 0x220);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    local_48 = *(long *)(param_1 + 10);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    uVar6 = FUN_015073c0(lVar7,uVar3,&local_48,1);
    uVar6 = uVar6 & 0xffffffff;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
  case 3:
  case 7:
    break;
  default:
    uVar6 = FUN_00884820(*(undefined8 *)(param_1 + 8));
    return uVar6;
  case 6:
    if (*(long *)(*(long *)PTR_DAT_02710848 + 0x90) != 0) {
      plVar4 = (long *)(*(long *)(*(long *)PTR_DAT_02710848 + 0x90) + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar5 == 0) {
      uVar6 = FUN_0150a980(0,param_1[2]);
      return uVar6;
    }
    plVar4 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar6 = FUN_0150a980(lVar5,param_1[2]);
    uVar6 = uVar6 & 0xffffffff;
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  return uVar6;
}


