/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc9160; name: FUN_00bc9160
 */


void FUN_00bc9160(long param_1)

{
  bool bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  uVar3 = FUN_0150b350(lVar7);
  iVar4 = 0;
  do {
    if ((*(int *)(param_1 + 0x618) == 1) &&
       (lVar9 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),0,uVar3,iVar4), lVar9 != 0)) {
      sVar2 = FUN_008787f0();
      bVar1 = sVar2 == 0;
    }
    else {
      bVar1 = false;
    }
    uVar11 = *(undefined8 *)(param_1 + 0x5f0);
    uVar6 = FUN_00bc8500(param_1,0,uVar3,iVar4);
    uVar10 = 0;
    if ((uVar6 & 1) == 0) {
      uVar10 = 2;
    }
    FUN_00bd3390(uVar11,0,iVar4,uVar10,bVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x1e);
  uVar3 = *(undefined4 *)(param_1 + 0x614);
  if ((*(int *)(param_1 + 0x618) == 1) &&
     (lVar9 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar3,0), lVar9 != 0)) {
    sVar2 = FUN_008787f0();
    bVar1 = sVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x5f0);
  uVar6 = FUN_00bc8500(param_1,1,uVar3,0);
  uVar10 = 0;
  if ((uVar6 & 1) == 0) {
    uVar10 = 2;
  }
  FUN_00bd3390(uVar11,3,0,uVar10,bVar1);
  bVar1 = false;
  if (*(int *)(param_1 + 0x618) == 1) {
    lVar9 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar3,1);
    if (lVar9 == 0) {
      bVar1 = false;
    }
    else {
      sVar2 = FUN_008787f0();
      bVar1 = sVar2 == 0;
    }
  }
  uVar11 = *(undefined8 *)(param_1 + 0x5f0);
  uVar6 = FUN_00bc8500(param_1,1,uVar3,1);
  uVar10 = 0;
  if ((uVar6 & 1) == 0) {
    uVar10 = 2;
  }
  FUN_00bd3390(uVar11,3,1,uVar10,bVar1);
  bVar1 = false;
  if (*(int *)(param_1 + 0x618) == 1) {
    lVar9 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar3,2);
    if (lVar9 == 0) {
      bVar1 = false;
    }
    else {
      sVar2 = FUN_008787f0();
      bVar1 = sVar2 == 0;
    }
  }
  uVar11 = *(undefined8 *)(param_1 + 0x5f0);
  uVar6 = FUN_00bc8500(param_1,1,uVar3,2);
  uVar10 = 0;
  if ((uVar6 & 1) == 0) {
    uVar10 = 2;
  }
  FUN_00bd3390(uVar11,3,2,uVar10,bVar1);
  bVar1 = false;
  if (*(int *)(param_1 + 0x618) == 1) {
    lVar9 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar3,3);
    if (lVar9 == 0) {
      bVar1 = false;
    }
    else {
      sVar2 = FUN_008787f0();
      bVar1 = sVar2 == 0;
    }
  }
  uVar11 = *(undefined8 *)(param_1 + 0x5f0);
  uVar6 = FUN_00bc8500(param_1,1,uVar3,3);
  uVar10 = 0;
  if ((uVar6 & 1) == 0) {
    uVar10 = 2;
  }
  FUN_00bd3390(uVar11,3,3,uVar10,bVar1);
  bVar1 = false;
  if (*(int *)(param_1 + 0x618) == 1) {
    lVar9 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar3,4);
    if (lVar9 == 0) {
      bVar1 = false;
    }
    else {
      sVar2 = FUN_008787f0();
      bVar1 = sVar2 == 0;
    }
  }
  uVar11 = *(undefined8 *)(param_1 + 0x5f0);
  uVar6 = FUN_00bc8500(param_1,1,uVar3,4);
  uVar10 = 0;
  if ((uVar6 & 1) == 0) {
    uVar10 = 2;
  }
  FUN_00bd3390(uVar11,3,4,uVar10,bVar1);
  bVar1 = false;
  if (*(int *)(param_1 + 0x618) == 1) {
    lVar9 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar3,5);
    if (lVar9 == 0) {
      bVar1 = false;
    }
    else {
      sVar2 = FUN_008787f0();
      bVar1 = sVar2 == 0;
    }
  }
  uVar11 = *(undefined8 *)(param_1 + 0x5f0);
  uVar6 = FUN_00bc8500(param_1,1,uVar3,5);
  uVar3 = 0;
  if ((uVar6 & 1) == 0) {
    uVar3 = 2;
  }
  FUN_00bd3390(uVar11,3,5,uVar3,bVar1);
  iVar4 = FUN_01509eb0(lVar7);
  if (iVar4 != 0) {
    uVar8 = 0;
    do {
      FUN_00bc6b50(param_1,uVar8);
      uVar8 = uVar8 + 1;
      uVar5 = FUN_01509eb0(lVar7);
    } while (uVar8 < uVar5);
  }
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00bc9568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  return;
}


