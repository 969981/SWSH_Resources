/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a98070; name: FUN_00a98070
 */


uint FUN_00a98070(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 8);
  plVar5 = *(long **)(lVar4 + 0x580);
  uVar2 = 0;
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = (**(code **)(*plVar5 + 400))(plVar5);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00ad2d90(plVar5);
      uVar2 = uVar2 & 1;
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = *(long *)(param_1 + 8);
  }
  plVar5 = *(long **)(lVar4 + 0x588);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = (**(code **)(*plVar5 + 400))(plVar5);
    if ((uVar3 & 1) != 0) {
      uVar3 = FUN_00ad2d90(plVar5);
      uVar1 = uVar2 | 2;
      if ((uVar3 & 1) == 0) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = *(long *)(param_1 + 8);
  }
  plVar5 = *(long **)(lVar4 + 0x590);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = (**(code **)(*plVar5 + 400))(plVar5);
    if ((uVar3 & 1) != 0) {
      uVar3 = FUN_00ad2d90(plVar5);
      uVar1 = uVar2 | 4;
      if ((uVar3 & 1) == 0) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = *(long *)(param_1 + 8);
  }
  plVar5 = *(long **)(lVar4 + 0x598);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = (**(code **)(*plVar5 + 400))(plVar5);
    if ((uVar3 & 1) != 0) {
      uVar3 = FUN_00ad2d90(plVar5);
      uVar1 = uVar2 | 8;
      if ((uVar3 & 1) == 0) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = *(long *)(param_1 + 8);
  }
  plVar5 = *(long **)(lVar4 + 0x5a0);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = (**(code **)(*plVar5 + 400))(plVar5);
    if ((uVar3 & 1) != 0) {
      uVar3 = FUN_00ad2d90(plVar5);
      uVar1 = uVar2 | 0x10;
      if ((uVar3 & 1) == 0) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = *(long *)(param_1 + 8);
  }
  plVar5 = *(long **)(lVar4 + 0x5a8);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = (**(code **)(*plVar5 + 400))(plVar5);
    if ((uVar3 & 1) != 0) {
      uVar3 = FUN_00ad2d90(plVar5);
      uVar1 = uVar2 | 0x20;
      if ((uVar3 & 1) == 0) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = *(long *)(param_1 + 8);
  }
  plVar5 = *(long **)(lVar4 + 0x5b0);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = (**(code **)(*plVar5 + 400))(plVar5);
    if ((uVar3 & 1) != 0) {
      uVar3 = FUN_00ad2d90(plVar5);
      uVar1 = uVar2 | 0x40;
      if ((uVar3 & 1) == 0) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  return uVar2;
}


