/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00665d30; name: FUN_00665d30
 */


void FUN_00665d30(long param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  
  if (*(long **)(param_1 + 0xc0) != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x78) = param_2;
    *(uint *)(param_1 + 0xb8) = param_3;
    lVar5 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x98))();
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(lVar5 + 4);
    lVar5 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x98))();
    if (*(int *)(lVar5 + 0x14) >> (param_3 & 0x1f) < 2) {
      iVar6 = 1;
    }
    else {
      lVar5 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x98))();
      iVar6 = *(int *)(lVar5 + 0x14) >> (param_3 & 0x1f);
    }
    *(int *)(param_1 + 0x8c) = iVar6;
    lVar5 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x98))();
    if (*(int *)(lVar5 + 0x18) >> (param_3 & 0x1f) < 2) {
      iVar6 = 1;
    }
    else {
      lVar5 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x98))();
      iVar6 = *(int *)(lVar5 + 0x18) >> (param_3 & 0x1f);
    }
    *(int *)(param_1 + 0x90) = iVar6;
    lVar5 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x98))();
    iVar6 = 1;
    if (1 < *(int *)(lVar5 + 0x1c) >> (param_3 & 0x1f)) {
      lVar5 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x98))();
      iVar6 = *(int *)(lVar5 + 0x1c) >> (param_3 & 0x1f);
    }
    *(int *)(param_1 + 0x94) = iVar6;
    lVar5 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x98))();
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(lVar5 + 0x30);
    lVar5 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x98))();
    uVar4 = *(undefined4 *)(lVar5 + 0x34);
    *(undefined1 *)(param_1 + 0xa4) = 1;
    *(undefined4 *)(param_1 + 0x9c) = uVar4;
    uVar4 = FUN_005ed170(*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0xa0) = uVar4;
    lVar5 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x98))();
    cVar3 = *(char *)(lVar5 + 0x3a);
    *(char *)(param_1 + 0xa5) = cVar3;
    if (cVar3 != '\0') {
      iVar6 = *(int *)(param_1 + 0x8c) + 3;
      iVar1 = *(int *)(param_1 + 0x8c) + 6;
      if (-1 < iVar6) {
        iVar1 = iVar6;
      }
      iVar6 = *(int *)(param_1 + 0x90) + 3;
      iVar2 = *(int *)(param_1 + 0x90) + 6;
      if (-1 < iVar6) {
        iVar2 = iVar6;
      }
      *(int *)(param_1 + 0xa8) = iVar1 >> 2;
      *(int *)(param_1 + 0xac) = iVar2 >> 2;
      uVar4 = FUN_005ed1a0(*(undefined4 *)(param_1 + 0x7c));
      *(undefined4 *)(param_1 + 0xb4) = uVar4;
    }
    lVar5 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x40))();
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(lVar5 + 8);
    lVar5 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x40))();
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(lVar5 + 0xc);
    lVar5 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x40))();
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(lVar5 + 0x10);
    lVar5 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x40))();
    uVar4 = *(undefined4 *)(lVar5 + 4);
    *(undefined4 *)(param_1 + 100) = 4;
    *(undefined4 *)(param_1 + 0x68) = uVar4;
  }
  return;
}


