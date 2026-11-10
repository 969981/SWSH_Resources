/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102a3c0; name: FUN_0102a3c0
 */


void FUN_0102a3c0(undefined8 param_1,long *param_2,ulong param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined2 local_4c [2];
  long local_48;
  
  puVar2 = PTR_DAT_02710798;
  lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x200);
  if (lVar9 == 0) {
    uVar7 = FUN_015199f0(0);
    uVar6 = uVar7 & 0xffffffff;
    local_48 = *param_2;
    if (local_48 == 0) goto LAB_0102a534;
LAB_0102a430:
    plVar12 = (long *)(local_48 + 0x48);
    uVar8 = (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0102af30(uVar8,&local_48);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    local_48 = 0;
    lVar9 = *(long *)(*(long *)puVar2 + 0x1e8);
    if (lVar9 != 0) goto LAB_0102a468;
LAB_0102a548:
    FUN_01524b50(0);
    lVar9 = *(long *)(*param_2 + 0x58);
    if (lVar9 == 0) goto LAB_0102a55c;
LAB_0102a4a0:
    plVar12 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_00885950(lVar9,param_3 & 0xffffffff);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    FUN_01526e00();
    plVar12 = (long *)PTR_DAT_02710848;
  }
  else {
    plVar12 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    uVar6 = FUN_015199f0(lVar9);
    uVar6 = uVar6 & 0xffffffff;
    uVar7 = (**(code **)(*plVar12 + 0x18))(plVar12);
    local_48 = *param_2;
    if (local_48 != 0) goto LAB_0102a430;
LAB_0102a534:
    FUN_0102af30(uVar7,&local_48);
    lVar9 = *(long *)(*(long *)puVar2 + 0x1e8);
    if (lVar9 == 0) goto LAB_0102a548;
LAB_0102a468:
    plVar12 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_01524b50(lVar9);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar9 = *(long *)(*param_2 + 0x58);
    if (lVar9 != 0) goto LAB_0102a4a0;
LAB_0102a55c:
    FUN_00885950(0,param_3 & 0xffffffff);
    FUN_01526e00();
    plVar12 = (long *)PTR_DAT_02710848;
  }
  PTR_DAT_02710848 = (undefined *)plVar12;
  if ((uVar6 & 1) != 0) {
    lVar9 = *(long *)(*(long *)puVar2 + 0x248);
    if (lVar9 == 0) {
      local_4c[0] = 0;
      FUN_01526260(0,local_4c);
    }
    else {
      plVar12 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      local_4c[0] = 0;
      FUN_01526260(lVar9,local_4c);
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    return;
  }
  lVar9 = *(long *)(*plVar12 + 0x90);
  if (lVar9 == 0) {
    FUN_0100bb80(0);
    lVar9 = *(long *)(*(long *)puVar2 + 0x238);
    if (lVar9 == 0) goto LAB_0102a6ec;
LAB_0102a5bc:
    plVar11 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_0151b9f0(lVar9);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    lVar9 = *(long *)(*plVar12 + 0x90);
    if (lVar9 != 0) goto LAB_0102a5f4;
LAB_0102a700:
    FUN_01007280(0,1);
    lVar9 = *(long *)(*(long *)puVar2 + 0x268);
    if (lVar9 == 0) goto LAB_0102a718;
LAB_0102a630:
    plVar12 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    cVar1 = (&DAT_00053120)[lVar9];
    (**(code **)(*plVar12 + 0x18))(plVar12);
    if (cVar1 == '\0') goto LAB_0102a744;
    lVar9 = *(long *)(*(long *)puVar2 + 0x268);
    uVar6 = param_3 & ((long)param_3 >> 0x3f ^ 0xffffffffffffffffU);
    if (0xfffffffe < (long)uVar6) {
      uVar6 = 0xffffffff;
    }
    if (lVar9 != 0) {
      plVar12 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      FUN_0152e150(lVar9,uVar6 & 0xffffffff);
      (**(code **)(*plVar12 + 0x18))(plVar12);
      goto LAB_0102a744;
    }
  }
  else {
    plVar11 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_0100bb80(lVar9);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    lVar9 = *(long *)(*(long *)puVar2 + 0x238);
    if (lVar9 != 0) goto LAB_0102a5bc;
LAB_0102a6ec:
    FUN_0151b9f0(0);
    lVar9 = *(long *)(*plVar12 + 0x90);
    if (lVar9 == 0) goto LAB_0102a700;
LAB_0102a5f4:
    plVar12 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_01007280(lVar9,1);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar9 = *(long *)(*(long *)puVar2 + 0x268);
    if (lVar9 != 0) goto LAB_0102a630;
LAB_0102a718:
    if (DAT_00053120 == '\0') goto LAB_0102a744;
    uVar6 = param_3 & ((long)param_3 >> 0x3f ^ 0xffffffffffffffffU);
    if (0xfffffffe < (long)uVar6) {
      uVar6 = 0xffffffff;
    }
  }
  FUN_0152e150(0,uVar6 & 0xffffffff);
LAB_0102a744:
  FUN_014af910(*(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68));
  lVar9 = *(long *)(*(long *)puVar2 + 0x1b8);
  if (lVar9 == 0) {
    FUN_01511800(0);
    lVar9 = *(long *)puVar2;
    lVar10 = *(long *)(lVar9 + 0x1b8);
  }
  else {
    plVar12 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_01511800(lVar9);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar9 = *(long *)puVar2;
    lVar10 = *(long *)(lVar9 + 0x1b8);
  }
  if (lVar10 != 0) {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    puVar3 = PTR_DAT_02723840;
    iVar4 = FUN_015114c0(lVar10,*(undefined8 *)PTR_DAT_02723840);
    FUN_01511210(lVar10,*(undefined8 *)puVar3,iVar4 + (int)param_3);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar9 = *(long *)puVar2;
  }
  lVar9 = *(long *)(lVar9 + 0x1f8);
  if (lVar9 != 0) {
    plVar12 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  FUN_015363d0(lVar9);
  FUN_01536290(lVar9);
  FUN_01536650(lVar9,0);
  lVar9 = *(long *)(*(long *)puVar2 + 0x1b8);
  if (lVar9 == 0) {
    iVar5 = FUN_015114c0(0,0x5651041a4cdfe1b5);
    iVar4 = 0;
    if (iVar5 + 1U < 0x32) {
      iVar4 = iVar5 + 1;
    }
    FUN_01511210(0,0x5651041a4cdfe1b5,iVar4);
    return;
  }
  plVar12 = (long *)(lVar9 + 0x48);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  iVar5 = FUN_015114c0(lVar9,0x5651041a4cdfe1b5);
  iVar4 = 0;
  if (iVar5 + 1U < 0x32) {
    iVar4 = iVar5 + 1;
  }
  FUN_01511210(lVar9,0x5651041a4cdfe1b5,iVar4);
                    /* WARNING: Could not recover jumptable at 0x0102a8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar12 + 0x18))(plVar12);
  return;
}


