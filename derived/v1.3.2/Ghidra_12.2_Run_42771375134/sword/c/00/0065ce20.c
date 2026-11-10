/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0065ce20; name: FUN_0065ce20
 */


void FUN_0065ce20(long param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  
  (**(code **)PTR_DAT_02713af0)(*(undefined8 *)(param_1 + 0xe0));
  *(undefined4 *)(param_1 + 0x78) = param_2;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  uVar4 = FUN_00662fc0();
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  uVar4 = (**(code **)PTR_DAT_02714c48)(*(undefined8 *)(param_1 + 0xe0));
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  uVar4 = (**(code **)PTR_DAT_02714c50)(*(undefined8 *)(param_1 + 0xe0));
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  *(uint *)(param_1 + 0xc0) = param_3;
  if (*(long **)(param_1 + 0xd8) == (long *)0x0) {
    if (*(long **)(param_1 + 200) != (long *)0x0) {
      lVar6 = (**(code **)(**(long **)(param_1 + 200) + 0xa0))();
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(lVar6 + 0x20);
    }
  }
  else {
    lVar6 = (**(code **)(**(long **)(param_1 + 0xd8) + 0x98))();
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar6 + 8);
    lVar6 = (**(code **)(**(long **)(param_1 + 0xd8) + 0x98))();
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(lVar6 + 0x10);
    lVar6 = (**(code **)(**(long **)(param_1 + 0xd8) + 0x98))();
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(lVar6 + 0xc);
    lVar6 = (**(code **)(**(long **)(param_1 + 0xd8) + 0x98))();
    iVar5 = *(int *)(lVar6 + 0x14) >> (param_3 & 0x1f);
    if (iVar5 < 2) {
      iVar5 = 1;
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    lVar6 = (**(code **)(**(long **)(param_1 + 0xd8) + 0x98))();
    iVar5 = *(int *)(lVar6 + 0x18) >> (param_3 & 0x1f);
    if (iVar5 < 2) {
      iVar5 = 1;
    }
    *(int *)(param_1 + 0x90) = iVar5;
    piVar7 = (int *)(**(code **)(**(long **)(param_1 + 0xd8) + 0x98))();
    if ((*piVar7 == 4) ||
       (piVar7 = (int *)(**(code **)(**(long **)(param_1 + 0xd8) + 0x98))(), *piVar7 == 6)) {
      param_4 = param_4 % 6;
    }
    else {
      param_4 = 4;
    }
    *(int *)(param_1 + 0xb8) = param_4;
  }
  *(undefined1 *)(param_1 + 0x9c) = 1;
  (**(code **)PTR_DAT_02714c58)(*(undefined8 *)(param_1 + 0xe0));
  uVar4 = FUN_005ed230();
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  bVar3 = FUN_005ed1d0(*(undefined4 *)(param_1 + 0x7c));
  *(byte *)(param_1 + 0xa4) = bVar3 & 1;
  if ((bVar3 & 1) != 0) {
    iVar5 = *(int *)(param_1 + 0x8c) + 3;
    iVar1 = *(int *)(param_1 + 0x8c) + 6;
    if (-1 < iVar5) {
      iVar1 = iVar5;
    }
    iVar5 = *(int *)(param_1 + 0x90) + 3;
    iVar2 = *(int *)(param_1 + 0x90) + 6;
    if (-1 < iVar5) {
      iVar2 = iVar5;
    }
    *(int *)(param_1 + 0xa8) = iVar1 >> 2;
    *(int *)(param_1 + 0xac) = iVar2 >> 2;
    uVar4 = FUN_005ed1a0(*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0xb0) = uVar4;
  }
  bVar3 = FUN_005ed790(*(undefined4 *)(param_1 + 0x7c));
  *(byte *)(param_1 + 0x9d) = bVar3 & 1;
  iVar5 = FUN_005ed170(*(undefined4 *)(param_1 + 0x7c));
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x8c) * iVar5;
  *(int *)(param_1 + 0xa0) = iVar5;
  if (*(char *)(param_1 + 0xa4) != '\0') {
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0xa8) * *(int *)(param_1 + 0xb0);
  }
  return;
}


