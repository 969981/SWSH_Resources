/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f9770; name: FUN_008f9770
 */


undefined4 FUN_008f9770(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  
  if (*(byte *)(param_1 + 0x174) == param_2) {
    return 0;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x150);
  cVar4 = FUN_008eef90(uVar3);
  cVar5 = FUN_008eef90(uVar3,param_2);
  lVar2 = 3;
  if (1 < param_2) {
    lVar2 = 1;
  }
  lVar1 = 0;
  if (cVar4 != cVar5) {
    lVar1 = lVar2;
  }
  return (&DAT_01d4a570)[lVar1];
}


