/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008aff70; name: FUN_008aff70
 */


byte FUN_008aff70(long param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  uVar4 = FUN_008c8330(*(undefined8 *)(param_1 + 0xa0));
  FUN_008885c0(auStack_40,uVar4);
  iVar5 = FUN_00888630(auStack_40,0x11);
  if (((uVar4 - 0x4cf < 0x15) || (bVar1 = iVar5 == 1, uVar4 == 0x646)) || (uVar4 == 0x285)) {
    bVar1 = true;
  }
  FUN_008885c0(auStack_50,uVar4);
  iVar5 = FUN_00888eb0(auStack_50);
  FUN_00888620(auStack_50);
  bVar2 = FUN_008bdbe0(uVar4);
  bVar3 = FUN_008adec0(uVar4);
  FUN_00888620(auStack_40);
  return (bVar3 | bVar2 | uVar4 == 0x4fe |
                          (uVar4 | 1) == 0x637 |
                          (uVar4 | 1) == 0x275 | uVar4 - 0x3af < 4 | bVar1 | iVar5 != -1) & 1;
}


