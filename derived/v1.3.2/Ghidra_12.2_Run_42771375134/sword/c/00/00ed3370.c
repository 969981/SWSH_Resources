/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed3370; name: FUN_00ed3370
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00ed3370(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long local_50;
  long local_48;
  
  puVar3 = PTR_DAT_02710848;
  iVar1 = *(int *)(param_1 + 400);
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  plVar9 = (long *)PTR_DAT_02720280;
  iVar2 = _DAT_00000060;
  if (lVar8 != 0) {
    plVar9 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    iVar2 = *(int *)(lVar8 + 0x60);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    plVar9 = (long *)PTR_DAT_02720280;
  }
  PTR_DAT_02720280 = (undefined *)plVar9;
  if (iVar1 == iVar2) {
    uVar5 = 1;
    goto LAB_00ed374c;
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_027194d8 + 0x50);
  lVar8 = *plVar9;
  if ((*(long *)(lVar8 + 0x140) == 0) || (*(long *)(lVar8 + 0x140) != lVar7)) {
    if ((*(long *)(lVar8 + 0x178) != 0) && (*(long *)(lVar8 + 0x178) == lVar7)) {
      lVar8 = lVar8 + 0x170;
      goto LAB_00ed34a8;
    }
    if ((*(long *)(lVar8 + 0x1b0) != 0) && (*(long *)(lVar8 + 0x1b0) == lVar7)) {
      lVar8 = lVar8 + 0x1a8;
      goto LAB_00ed34a8;
    }
    if ((*(long *)(lVar8 + 0x1e8) != 0) && (*(long *)(lVar8 + 0x1e8) == lVar7)) {
      lVar8 = lVar8 + 0x1e0;
      goto LAB_00ed34a8;
    }
    if ((*(long *)(lVar8 + 0x220) != 0) && (*(long *)(lVar8 + 0x220) == lVar7)) {
      lVar8 = lVar8 + 0x218;
      goto LAB_00ed34a8;
    }
    if ((*(long *)(lVar8 + 600) != 0) && (*(long *)(lVar8 + 600) == lVar7)) {
      lVar8 = lVar8 + 0x250;
      goto LAB_00ed34a8;
    }
    if ((*(long *)(lVar8 + 0x290) != 0) && (*(long *)(lVar8 + 0x290) == lVar7)) {
      lVar8 = lVar8 + 0x288;
      goto LAB_00ed34a8;
    }
  }
  else {
    lVar8 = lVar8 + 0x138;
LAB_00ed34a8:
    uVar6 = FUN_008d42a0(lVar8 + 0x28,0);
    uVar5 = 0;
    if ((uVar6 & 1) == 0) goto LAB_00ed374c;
  }
  puVar4 = PTR_DAT_0271f740;
  lVar8 = *(long *)(*(long *)PTR_DAT_0271bec8 + 200);
  if ((*(long *)(*(long *)PTR_DAT_0271f740 + 8) == lVar8) && (*(long *)(*plVar9 + 0x140) != 0)) {
    uVar6 = FUN_008d42a0(*plVar9 + 0x160,0);
    uVar5 = 0;
    if ((uVar6 & 1) == 0) goto LAB_00ed374c;
  }
  if ((*(long *)(*(long *)puVar4 + 0x28) == lVar8) && (*(long *)(*plVar9 + 0x178) != 0)) {
    uVar6 = FUN_008d42a0(*plVar9 + 0x198,0);
    uVar5 = 0;
    if ((uVar6 & 1) == 0) goto LAB_00ed374c;
  }
  if ((*(long *)(*(long *)puVar4 + 0x48) == lVar8) && (*(long *)(*plVar9 + 0x1b0) != 0)) {
    uVar6 = FUN_008d42a0(*plVar9 + 0x1d0,0);
    uVar5 = 0;
    if ((uVar6 & 1) == 0) goto LAB_00ed374c;
  }
  if ((*(long *)(*(long *)puVar4 + 0x68) == lVar8) && (*(long *)(*plVar9 + 0x1e8) != 0)) {
    uVar6 = FUN_008d42a0(*plVar9 + 0x208,0);
    uVar5 = 0;
    if ((uVar6 & 1) == 0) goto LAB_00ed374c;
  }
  if ((*(long *)(*(long *)puVar4 + 0x88) == lVar8) && (*(long *)(*plVar9 + 0x220) != 0)) {
    uVar6 = FUN_008d42a0(*plVar9 + 0x240,0);
    uVar5 = 0;
    if ((uVar6 & 1) == 0) goto LAB_00ed374c;
  }
  if ((*(long *)(*(long *)puVar4 + 0xa8) == lVar8) && (*(long *)(*plVar9 + 600) != 0)) {
    uVar6 = FUN_008d42a0(*plVar9 + 0x278,0);
    uVar5 = 0;
    if ((uVar6 & 1) == 0) goto LAB_00ed374c;
  }
  if ((*(long *)(*(long *)puVar4 + 200) == lVar8) && (*(long *)(*plVar9 + 0x290) != 0)) {
    uVar6 = FUN_008d42a0(*plVar9 + 0x2b0,0);
    uVar5 = 0;
    if ((uVar6 & 1) == 0) goto LAB_00ed374c;
  }
  lVar7 = *(long *)(*(long *)puVar3 + 0x78);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN_00c58c20(&local_50,lVar7);
  if (local_50 == 0) {
    local_48 = 0;
    uVar6 = FUN_00cab500();
  }
  else {
    FUN_00c62ba0(&local_48);
    uVar6 = FUN_00cab500(local_48);
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if ((uVar6 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    FUN_00ed41b0(*plVar9,lVar8);
    lVar8 = *(long *)(*(long *)puVar3 + 0x78);
    if (lVar8 == 0) {
      uVar5 = FUN_00c58c30(0,*(undefined4 *)(param_1 + 400));
    }
    else {
      plVar9 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      uVar5 = FUN_00c58c30(lVar8,*(undefined4 *)(param_1 + 400));
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
LAB_00ed374c:
  return uVar5 & 1;
}


