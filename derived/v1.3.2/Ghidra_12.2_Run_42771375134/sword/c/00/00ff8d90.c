/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff8d90; name: FUN_00ff8d90
 */


void FUN_00ff8d90(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  bVar3 = 1;
  for (puVar4 = *(undefined8 **)(param_1 + 0x78); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    bVar2 = FUN_00ffaaa0(*puVar4);
    bVar3 = bVar3 & bVar2;
  }
  *(byte *)(param_1 + 0xc0) = bVar3;
  return;
}


