/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a0f90; name: FUN_014a0f90
 */


void FUN_014a0f90(long param_1)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  char cVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long local_58;
  
  lVar7 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5d0));
  if (*(short *)(*(long *)(param_1 + 0x5d0) + 0x42) == 0x31c) {
    iVar5 = FUN_00879070(lVar7,0);
    if (iVar5 != 0x1f) {
      FUN_008794b0(lVar7,0);
    }
    iVar5 = FUN_00879070(lVar7,1);
    if (iVar5 != 0x1f) {
      FUN_008794b0(lVar7,1);
    }
    iVar5 = FUN_00879070(lVar7,2);
    if (iVar5 != 0x1f) {
      FUN_008794b0(lVar7,2);
    }
    iVar5 = FUN_00879070(lVar7,3);
    if (iVar5 != 0x1f) {
      FUN_008794b0(lVar7,3);
    }
    iVar5 = FUN_00879070(lVar7,4);
    if (iVar5 != 0x1f) {
      FUN_008794b0(lVar7,4);
    }
    iVar5 = FUN_00879070(lVar7,5);
    if (iVar5 != 0x1f) {
      FUN_008794b0(lVar7,5);
    }
    cVar9 = '\x01';
    iVar5 = **(int **)(param_1 + 0x5d0);
    plVar3 = (long *)PTR_DAT_02710848;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x5e0) == '\0';
    if (bVar1) {
      cVar2 = *(char *)(param_1 + 0x5e1);
    }
    else {
      FUN_008794b0(lVar7,0);
      cVar2 = *(char *)(param_1 + 0x5e1);
    }
    cVar9 = !bVar1;
    if (cVar2 != '\0') {
      cVar9 = cVar9 + '\x01';
      FUN_008794b0(lVar7,1);
    }
    if (*(char *)(param_1 + 0x5e2) != '\0') {
      cVar9 = cVar9 + '\x01';
      FUN_008794b0(lVar7,2);
    }
    if (*(char *)(param_1 + 0x5e3) != '\0') {
      cVar9 = cVar9 + '\x01';
      FUN_008794b0(lVar7,3);
    }
    if (*(char *)(param_1 + 0x5e4) != '\0') {
      cVar9 = cVar9 + '\x01';
      FUN_008794b0(lVar7,4);
    }
    if (*(char *)(param_1 + 0x5e5) != '\0') {
      cVar9 = cVar9 + '\x01';
      FUN_008794b0(lVar7,5);
    }
    iVar5 = **(int **)(param_1 + 0x5d0);
    plVar3 = (long *)PTR_DAT_02710848;
  }
  PTR_DAT_02710848 = (undefined *)plVar3;
  if (iVar5 == 5) {
    lVar10 = *(long *)(*plVar3 + 0x90);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    puVar4 = PTR_DAT_02710798;
    lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar11 == 0) {
      uVar6 = FUN_0150b350(0);
    }
    else {
      plVar12 = (long *)(lVar11 + 0x48);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      uVar6 = FUN_0150b350(lVar11);
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    lVar10 = *(long *)(*plVar3 + 0x90);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    lVar11 = *(long *)(*(long *)puVar4 + 0x220);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    local_58 = lVar7;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))((long *)(lVar7 + 0x48));
    }
    FUN_01505ea0(lVar11,&local_58,uVar6,*(undefined4 *)(*(long *)(param_1 + 0x5d0) + 4));
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar8 = FUN_01520b70(lVar7,*(undefined2 *)(*(long *)(param_1 + 0x5d0) + 0x42),cVar9);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  *(undefined1 *)(param_1 + 0x5d9) = 1;
  return;
}


