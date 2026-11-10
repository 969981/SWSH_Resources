/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013fee80; name: FUN_013fee80
 */


void FUN_013fee80(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_1 + 0x98);
  iVar1 = *(int *)(lVar4 + (long)*(int *)(lVar4 + 0x640) * 4 + 0x64c);
  if (*(int *)(param_1 + 0xb8) != iVar1) {
    FUN_013fca60(*(undefined8 *)(param_1 + 0xa8),iVar1);
    lVar4 = *(long *)(param_1 + 0x98);
    *(int *)(param_1 + 0xb8) = iVar1;
  }
  if (iVar1 == 3) {
    if (*(int *)(lVar4 + 0x824) == 0) {
      FUN_013fcb10(*(undefined8 *)(param_1 + 0xa8));
      return;
    }
    iVar1 = *(int *)(param_1 + 0xb4);
    iVar2 = FUN_008c8330();
    if (iVar1 != iVar2) {
      uVar5 = *(undefined8 *)(param_1 + 0xa8);
      uVar3 = FUN_008c8330(*(undefined8 *)(param_1 + 0x98));
      FUN_013fca90(uVar5,uVar3);
      uVar3 = FUN_008c8330(*(undefined8 *)(param_1 + 0x98));
      *(undefined4 *)(param_1 + 0xb4) = uVar3;
      return;
    }
  }
  else {
    if (*(int *)(lVar4 + 0x824) == 0) {
      FUN_013fcb30(*(undefined8 *)(param_1 + 0xa8));
      return;
    }
    iVar1 = *(int *)(param_1 + 0xb0);
    iVar2 = FUN_008c8330();
    if (iVar1 != iVar2) {
      uVar5 = *(undefined8 *)(param_1 + 0xa8);
      uVar3 = FUN_008c8330(*(undefined8 *)(param_1 + 0x98));
      FUN_013fcad0(uVar5,uVar3);
      uVar3 = FUN_008c8330(*(undefined8 *)(param_1 + 0x98));
      *(undefined4 *)(param_1 + 0xb0) = uVar3;
    }
  }
  return;
}


