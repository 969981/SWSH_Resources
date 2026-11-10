/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f8df0; name: FUN_003f8df0
 */


void FUN_003f8df0(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  byte bVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 uStack_71;
  undefined4 local_70;
  undefined3 local_6c;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 6) {
    if (*(long *)(param_1 + 0x50) == 0) {
      uVar11 = 6;
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)*param_2)(param_2,0x80000000,*(long *)(param_1 + 0x50));
      uVar11 = *(undefined4 *)(param_1 + 0x48);
      *(long *)(param_1 + 0x50) = lVar9;
    }
    *(undefined4 *)(param_1 + 0x48) = uVar11;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined1 *)(param_1 + 0x67) = *(undefined1 *)(param_1 + 0x67);
    *(undefined2 *)(param_1 + 0x65) = *(undefined2 *)(param_1 + 0x65);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x78);
    *(long *)(param_1 + 0x68) = lVar9 + 0x20;
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x70);
  }
  else if (iVar1 == 5) {
    if (*(long *)(param_1 + 0x70) == 0) {
      uVar11 = 5;
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)*param_2)(param_2,0x80000000,*(long *)(param_1 + 0x70));
      uVar11 = *(undefined4 *)(param_1 + 0x48);
      *(long *)(param_1 + 0x70) = lVar9;
    }
    local_70 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x70) >> 8);
    local_6c = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x28);
    uVar12 = *(undefined8 *)(lVar9 + 0x60);
    *(undefined4 *)(param_1 + 0x48) = uVar11;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    uStack_71 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x69) >> 0x38);
    *(ulong *)(param_1 + 0x70) = CONCAT35(local_6c,CONCAT41(local_70,uStack_71));
    *(long *)(param_1 + 0x78) = lVar9;
    *(undefined8 *)(param_1 + 0x69) = *(undefined8 *)(param_1 + 0x69);
    *(undefined8 *)(param_1 + 0x80) = uVar12;
    *(undefined4 *)(param_1 + 0x92) = *(undefined4 *)(param_1 + 0x92);
    *(undefined2 *)(param_1 + 0x96) = *(undefined2 *)(param_1 + 0x96);
  }
  else if (iVar1 == 4) {
    plVar10 = (long *)(param_1 + 0x68);
    if (*plVar10 == 0) {
      uVar11 = 4;
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)*param_2)(param_2,0x80000000,*plVar10);
      uVar11 = *(undefined4 *)(param_1 + 0x48);
      *(long **)(param_1 + 0x68) = plVar8;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    uVar12 = *(undefined8 *)(param_1 + 0x4c);
    uVar13 = *(undefined8 *)(param_1 + 0x54);
    uVar14 = *(undefined8 *)(param_1 + 0x5c);
    uVar3 = *(undefined4 *)(param_1 + 100);
    lVar9 = *plVar10;
    uVar4 = *(undefined1 *)(param_1 + 0x77);
    uVar5 = *(undefined1 *)(param_1 + 0x74);
    uVar6 = *(undefined2 *)(param_1 + 0x75);
    bVar7 = (**(code **)(*plVar8 + 0x78))(plVar8);
    *(undefined4 *)(param_1 + 0x48) = uVar11;
    *(undefined8 *)(param_1 + 0x4c) = uVar12;
    *(undefined8 *)(param_1 + 0x54) = uVar13;
    *(undefined8 *)(param_1 + 0x5c) = uVar14;
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    *plVar10 = lVar9;
    *(undefined1 *)(param_1 + 0x74) = uVar5;
    *(undefined1 *)(param_1 + 0x77) = uVar4;
    *(undefined2 *)(param_1 + 0x75) = uVar6;
    *(long **)(param_1 + 0x78) = plVar8 + 4;
    *(byte *)(param_1 + 0x80) = bVar7 & 1;
  }
  return;
}


