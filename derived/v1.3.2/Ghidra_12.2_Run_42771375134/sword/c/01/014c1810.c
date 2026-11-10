/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c1810; name: FUN_014c1810
 */


byte FUN_014c1810(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  
  bVar1 = FUN_014c45c0(param_1 + 0x270);
  bVar2 = FUN_014c45c0(param_1 + 0x3a0);
  bVar3 = FUN_014c45c0(param_1 + 0x4d0);
  bVar4 = FUN_014c45c0(param_1 + 0x600);
  bVar5 = FUN_014c45c0(param_1 + 0x730);
  bVar6 = FUN_014c45c0(param_1 + 0x860);
  bVar7 = FUN_014c45c0(param_1 + 0x990);
  bVar8 = 0;
  if (*(long *)(param_1 + 0xb18) != 0) {
    bVar8 = *(byte *)(*(long *)(param_1 + 0xb18) + 0x170);
  }
  return bVar8 & bVar1 & bVar2 & bVar3 & bVar4 & bVar5 & bVar6 & bVar7 & 1;
}


