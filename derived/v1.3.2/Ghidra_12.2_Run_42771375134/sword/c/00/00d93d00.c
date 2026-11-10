/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d93d00; name: FUN_00d93d00
 */


void FUN_00d93d00(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long local_40;
  undefined1 auStack_38 [8];
  
  if (*(int *)(param_1 + 0xa8) == 1) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x98))();
    if ((uVar3 & 1) == 0) goto LAB_00d93d64;
    iVar1 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar1 + 1;
    if (iVar1 < 9) goto LAB_00d93e3c;
LAB_00d93ea0:
    *(undefined4 *)(param_1 + 0xa8) = 0;
    plVar6 = *(long **)(param_1 + 0x50);
  }
  else {
    if (*(int *)(param_1 + 0xa8) == 2) {
LAB_00d93d64:
      lVar4 = FUN_00d94760(auStack_38,*(undefined8 *)(param_1 + 0xa0));
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      uVar2 = *(undefined4 *)(param_1 + 0xac);
      uVar7 = *(undefined8 *)(param_1 + 0xa0);
      local_40 = *(long *)(param_1 + 0x70);
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
      }
      FUN_00d9aca0(lVar4,uVar2,uVar7,&local_40);
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        local_40 = 0;
      }
      if (lVar4 != 0) {
        plVar6 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      lVar5 = *(long *)(param_1 + 0x60);
      *(long *)(param_1 + 0x60) = lVar4;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      if (lVar4 == 0) goto LAB_00d93ea0;
      plVar6 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      *(undefined4 *)(param_1 + 0xa8) = 0;
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
LAB_00d93e3c:
    plVar6 = *(long **)(param_1 + 0x50);
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x38))();
  }
  if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x38))();
  }
  if (*(long **)(param_1 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x38))();
  }
  return;
}


