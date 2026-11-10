/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f7d60; name: FUN_008f7d60
 */


void FUN_008f7d60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  uint *puVar3;
  
  FUN_008f7df0();
  FUN_008f7e90(param_1,param_2);
  lVar2 = *(long *)(param_1 + 0x88);
  if (-1 < *(int *)(lVar2 + 0xae0)) {
    uVar1 = FUN_00931a70(param_2);
    if (*(long *)(param_1 + 0x638) == 0) {
      lVar2 = 0;
    }
    else {
      puVar3 = *(uint **)(*(long *)(param_1 + 0x638) + 400);
      lVar2 = (long)puVar3 + (ulong)*puVar3;
    }
    FUN_0092fc60(uVar1,lVar2);
    lVar2 = *(long *)(param_1 + 0x88);
  }
  if ((*(byte *)(lVar2 + 0xa73) >> 5 & 1) == 0) {
    return;
  }
  uVar1 = FUN_00931a60(param_2);
  FUN_00934760(uVar1,*(undefined1 *)(*(long *)(param_1 + 0x88) + 0x1af));
  return;
}


