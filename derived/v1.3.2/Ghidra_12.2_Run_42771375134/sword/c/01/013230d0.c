/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013230d0; name: FUN_013230d0
 */


undefined8 FUN_013230d0(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  if (*(undefined8 **)(param_1 + 0x58) == puVar1) {
    return 0;
  }
  do {
    uVar2 = FUN_01323a30(*puVar3);
    puVar4 = puVar3 + 4;
    if ((uVar2 & 1) != 0) {
      return *puVar3;
    }
    puVar3 = puVar4;
  } while (puVar1 != puVar4);
  return 0;
}


