/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004851f0; name: FUN_004851f0
 */


undefined8 FUN_004851f0(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  
  bVar3 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  uVar1 = *(uint *)(param_1 + 0x13) & 0xffdfffff;
  if ((bVar3 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x13) | 0x200000;
  }
  *(uint *)(param_1 + 0x13) = uVar1;
  (**(code **)(*param_1 + 0x180))(param_1,0);
  *(uint *)((long)param_1 + 0x9c) =
       *(uint *)((long)param_1 + 0x9c) & 0xfff80000 |
       *(uint *)((long)param_1 + 0x9c) & 0x3ffff | (bVar3 >> 1 & 1) << 0x12;
  uVar1 = *(uint *)(param_1 + 0x13) & 0x3c3fffff;
  if ((bVar3 & 4) != 0) {
    uVar1 = *(uint *)(param_1 + 0x13) | 0xc3c00000;
  }
  *(uint *)(param_1 + 0x13) = uVar1;
  (**(code **)(*param_1 + 0x180))(param_1,0);
  if ((bVar3 >> 3 & 1) == 0) {
    if ((undefined4 *)param_1[0x11] == (undefined4 *)0x0) {
      return 1;
    }
    *(undefined4 *)param_1[0x11] = 0;
    (**(code **)(*param_1 + 0x180))(param_1,0);
    if (param_1[0x11] == 0) {
      return 1;
    }
    *(undefined4 *)(param_1[0x11] + 4) = 0;
    (**(code **)(*param_1 + 0x180))(param_1,0);
    if (param_1[0x11] == 0) {
      return 1;
    }
    *(undefined4 *)(param_1[0x11] + 8) = 0;
    (**(code **)(*param_1 + 0x180))(param_1,0);
    if (param_1[0x11] == 0) {
      return 1;
    }
    *(undefined4 *)(param_1[0x11] + 0xc) = 0;
    goto LAB_0048549c;
  }
  piVar7 = (int *)*param_2 + 1;
  iVar2 = *(int *)*param_2;
  *param_2 = piVar7;
  piVar4 = (int *)param_1[0x11];
  if ((iVar2 == 0) || (piVar4 != (int *)0x0)) {
    if (piVar4 != (int *)0x0) goto LAB_00485348;
  }
  else {
    puVar5 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x10);
    param_1[0x11] = (long)puVar5;
    piVar4 = (int *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      piVar4 = (int *)param_1[0x11];
    }
    if (piVar4 == (int *)0x0) {
      return 0x34;
    }
LAB_00485348:
    *piVar4 = iVar2;
    (**(code **)(*param_1 + 0x180))(param_1,0);
    piVar7 = (int *)*param_2;
  }
  piVar4 = piVar7 + 1;
  iVar2 = *piVar7;
  *param_2 = piVar4;
  lVar6 = param_1[0x11];
  if ((iVar2 == 0) || (lVar6 != 0)) {
    if (lVar6 != 0) goto LAB_004853b8;
  }
  else {
    puVar5 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x10);
    param_1[0x11] = (long)puVar5;
    lVar6 = 0;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      lVar6 = param_1[0x11];
    }
    if (lVar6 == 0) {
      return 0x34;
    }
LAB_004853b8:
    *(int *)(lVar6 + 4) = iVar2;
    (**(code **)(*param_1 + 0x180))(param_1,0);
    piVar4 = (int *)*param_2;
  }
  piVar7 = piVar4 + 1;
  iVar2 = *piVar4;
  *param_2 = piVar7;
  lVar6 = param_1[0x11];
  if ((iVar2 == 0) || (lVar6 != 0)) {
    if (lVar6 != 0) goto LAB_00485428;
  }
  else {
    puVar5 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x10);
    param_1[0x11] = (long)puVar5;
    lVar6 = 0;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      lVar6 = param_1[0x11];
    }
    if (lVar6 == 0) {
      return 0x34;
    }
LAB_00485428:
    *(int *)(lVar6 + 8) = iVar2;
    (**(code **)(*param_1 + 0x180))(param_1,0);
    piVar7 = (int *)*param_2;
  }
  iVar2 = *piVar7;
  *param_2 = piVar7 + 1;
  lVar6 = param_1[0x11];
  if ((iVar2 == 0) || (lVar6 != 0)) {
    if (lVar6 == 0) {
      return 1;
    }
  }
  else {
    puVar5 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x10);
    param_1[0x11] = (long)puVar5;
    lVar6 = 0;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      lVar6 = param_1[0x11];
    }
    if (lVar6 == 0) {
      return 0x34;
    }
  }
  *(int *)(lVar6 + 0xc) = iVar2;
LAB_0048549c:
  (**(code **)(*param_1 + 0x180))(param_1,0);
  return 1;
}


