/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a64b0; name: FUN_013a64b0
 */


void FUN_013a64b0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  
  puVar1 = PTR_DAT_027185f8;
  if (*(char *)(param_1 + 0x5f1) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x5f1) = 1;
  uVar3 = FUN_0120e640(*(undefined8 *)puVar1);
  iVar2 = FUN_0132a4a0(param_1 + 0x110,uVar3);
  lVar7 = (long)iVar2;
  piVar8 = (int *)(param_1 + 0x110 + (long)iVar2 * 0x30 + 0x84);
  iVar2 = *piVar8;
  if (iVar2 == 0) {
LAB_013a656c:
    lVar4 = param_1 + lVar7 * 0x30;
    iVar2 = *(int *)(lVar4 + 0x198);
    if (iVar2 == 0) goto LAB_013a6614;
LAB_013a657c:
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar5 == 0) {
      FUN_01520760(0,iVar2,1,1);
      goto LAB_013a6614;
    }
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_01520760(lVar5,*(undefined4 *)(lVar4 + 0x198),1,1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = param_1 + lVar7 * 0x30;
    iVar2 = *(int *)(lVar4 + 0x19c);
    if (iVar2 != 0) goto LAB_013a6624;
LAB_013a6674:
    lVar4 = param_1 + lVar7 * 0x30;
    iVar2 = *(int *)(lVar4 + 0x1a0);
    if (iVar2 == 0) goto LAB_013a671c;
LAB_013a6684:
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar5 == 0) {
      FUN_01520760(0,iVar2,1,1);
      goto LAB_013a671c;
    }
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_01520760(lVar5,*(undefined4 *)(lVar4 + 0x1a0),1,1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = param_1 + lVar7 * 0x30;
    iVar2 = *(int *)(lVar4 + 0x1a4);
    if (iVar2 != 0) goto LAB_013a672c;
LAB_013a677c:
    lVar4 = param_1 + lVar7 * 0x30;
    iVar2 = *(int *)(lVar4 + 0x1a8);
    if (iVar2 == 0) goto LAB_013a6824;
LAB_013a678c:
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar5 == 0) {
      FUN_01520760(0,iVar2,1,1);
      goto LAB_013a6824;
    }
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_01520760(lVar5,*(undefined4 *)(lVar4 + 0x1a8),1,1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = param_1 + lVar7 * 0x30;
    iVar2 = *(int *)(lVar4 + 0x1ac);
    if (iVar2 != 0) goto LAB_013a6834;
LAB_013a6884:
    lVar4 = param_1 + lVar7 * 0x30;
    iVar2 = *(int *)(lVar4 + 0x1b0);
    if (iVar2 == 0) goto LAB_013a692c;
LAB_013a6894:
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar5 == 0) {
      FUN_01520760(0,iVar2,1,1);
      goto LAB_013a692c;
    }
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_01520760(lVar5,*(undefined4 *)(lVar4 + 0x1b0),1,1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = param_1 + lVar7 * 0x30;
    iVar2 = *(int *)(lVar4 + 0x1b4);
    if (iVar2 != 0) goto LAB_013a693c;
LAB_013a698c:
    lVar4 = param_1 + lVar7 * 0x30;
    iVar2 = *(int *)(lVar4 + 0x1b8);
  }
  else {
    lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar4 != 0) {
      plVar6 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_01520760(lVar4,*piVar8,1,1);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      goto LAB_013a656c;
    }
    FUN_01520760(0,iVar2,1,1);
    lVar4 = param_1 + lVar7 * 0x30;
    iVar2 = *(int *)(lVar4 + 0x198);
    if (iVar2 != 0) goto LAB_013a657c;
LAB_013a6614:
    lVar4 = param_1 + lVar7 * 0x30;
    iVar2 = *(int *)(lVar4 + 0x19c);
    if (iVar2 == 0) goto LAB_013a6674;
LAB_013a6624:
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_01520760(lVar5,*(undefined4 *)(lVar4 + 0x19c),1,1);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      goto LAB_013a6674;
    }
    FUN_01520760(0,iVar2,1,1);
    lVar4 = param_1 + lVar7 * 0x30;
    iVar2 = *(int *)(lVar4 + 0x1a0);
    if (iVar2 != 0) goto LAB_013a6684;
LAB_013a671c:
    lVar4 = param_1 + lVar7 * 0x30;
    iVar2 = *(int *)(lVar4 + 0x1a4);
    if (iVar2 == 0) goto LAB_013a677c;
LAB_013a672c:
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_01520760(lVar5,*(undefined4 *)(lVar4 + 0x1a4),1,1);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      goto LAB_013a677c;
    }
    FUN_01520760(0,iVar2,1,1);
    lVar4 = param_1 + lVar7 * 0x30;
    iVar2 = *(int *)(lVar4 + 0x1a8);
    if (iVar2 != 0) goto LAB_013a678c;
LAB_013a6824:
    lVar4 = param_1 + lVar7 * 0x30;
    iVar2 = *(int *)(lVar4 + 0x1ac);
    if (iVar2 == 0) goto LAB_013a6884;
LAB_013a6834:
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_01520760(lVar5,*(undefined4 *)(lVar4 + 0x1ac),1,1);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      goto LAB_013a6884;
    }
    FUN_01520760(0,iVar2,1,1);
    lVar4 = param_1 + lVar7 * 0x30;
    iVar2 = *(int *)(lVar4 + 0x1b0);
    if (iVar2 != 0) goto LAB_013a6894;
LAB_013a692c:
    lVar4 = param_1 + lVar7 * 0x30;
    iVar2 = *(int *)(lVar4 + 0x1b4);
    if (iVar2 == 0) goto LAB_013a698c;
LAB_013a693c:
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_01520760(lVar5,*(undefined4 *)(lVar4 + 0x1b4),1,1);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      goto LAB_013a698c;
    }
    FUN_01520760(0,iVar2,1,1);
    lVar4 = param_1 + lVar7 * 0x30;
    iVar2 = *(int *)(lVar4 + 0x1b8);
  }
  if (iVar2 != 0) {
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_01520760(lVar5,*(undefined4 *)(lVar4 + 0x1b8),1,1);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      iVar2 = *(int *)(param_1 + lVar7 * 0x30 + 400);
      goto joined_r0x013a69f8;
    }
    FUN_01520760(0,iVar2,1,1);
  }
  iVar2 = *(int *)(param_1 + lVar7 * 0x30 + 400);
joined_r0x013a69f8:
  if (iVar2 == 0) {
    return;
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar7 == 0) {
    FUN_01520760(0,iVar2,1,1);
    return;
  }
  plVar6 = (long *)(lVar7 + 0x48);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  FUN_01520760(lVar7,iVar2,1,1);
                    /* WARNING: Could not recover jumptable at 0x013a6a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6);
  return;
}


