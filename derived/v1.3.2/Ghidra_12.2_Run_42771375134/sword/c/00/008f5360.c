/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f5360; name: FUN_008f5360
 */


void FUN_008f5360(long param_1,byte param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long local_50;
  undefined1 auStack_48 [8];
  
  lVar8 = *(long *)(param_1 + 0x88);
  if (*(byte *)(param_1 + 0x174) == param_2) {
    lVar5 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x150);
    cVar3 = FUN_008eef90(uVar2);
    cVar4 = FUN_008eef90(uVar2,param_2);
    lVar6 = 3;
    if (param_2 < 2) {
      lVar6 = 1;
    }
    lVar5 = 2;
    if (cVar3 != cVar4) {
      lVar5 = lVar6;
    }
  }
  lVar8 = lVar8 + lVar5 * 8;
  lVar6 = *(long *)(lVar8 + 0x9e0);
  plVar1 = (long *)(param_1 + (ulong)param_2 * 0x70 + 0x1e8);
  if (lVar6 == 0) {
    local_50 = *(long *)(lVar8 + 0xa18);
    if (local_50 != 0) {
      plVar7 = (long *)(local_50 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_008f4e30(param_1,plVar1,&local_50);
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar8 = FUN_008ea4d0(auStack_48,uVar9);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    if (*plVar1 != 0) {
      (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
      *plVar1 = 0;
    }
    *plVar1 = lVar8;
    FUN_01524b60(lVar8,lVar6);
    FUN_008fabc0(param_1,plVar1);
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))(plVar7);
  }
  return;
}


