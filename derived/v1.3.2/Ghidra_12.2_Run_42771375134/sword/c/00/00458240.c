/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00458240; name: FUN_00458240
 */


undefined4 FUN_00458240(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar5 = *(long **)(param_1 + 0x60);
  if (plVar5 == (long *)0x0) {
    uVar4 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x50) == 0) {
      iVar3 = 0x3c;
    }
    else {
      iVar3 = FUN_00458360(param_1);
      iVar3 = iVar3 + 0x3c;
      plVar5 = *(long **)(param_1 + 0x60);
    }
    *(int *)(param_1 + 4) = iVar3 + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x5c);
    uVar4 = (**(code **)(*plVar5 + 8))(plVar5,param_1,0x44);
    (**(code **)(**(long **)(param_1 + 0x60) + 0x20))();
    puVar2 = PTR_DAT_02712a90;
    *(undefined8 *)(param_1 + 0x60) = 0;
    uVar1 = *(undefined4 *)puVar2;
    if (*(int *)(param_1 + 0x50) != 0) {
      FUN_00404870(uVar1,*(undefined8 *)(*(long *)(param_1 + 0x48) + 8));
      if (1 < *(uint *)(param_1 + 0x50)) {
        uVar6 = 1;
        lVar7 = 0x18;
        do {
          FUN_00404870(*(undefined4 *)puVar2,*(undefined8 *)(*(long *)(param_1 + 0x48) + lVar7));
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 0x10;
        } while (uVar6 < *(uint *)(param_1 + 0x50));
      }
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      FUN_00404870(*(undefined4 *)puVar2);
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    FUN_00404870(uVar1,param_1);
  }
  return uVar4;
}


