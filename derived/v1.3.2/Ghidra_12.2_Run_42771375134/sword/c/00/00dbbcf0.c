/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbbcf0; name: FUN_00dbbcf0
 */


undefined8 FUN_00dbbcf0(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar4;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0xe8);
  puVar3 = *(undefined8 **)(param_1 + 0xe0);
  if (*(undefined8 **)(param_1 + 0xe0) == puVar1) {
    return 0;
  }
  do {
    puVar4 = puVar3 + 1;
    uVar2 = (**(code **)(*(long *)*puVar3 + 0x88))();
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    puVar3 = puVar4;
  } while (puVar1 != puVar4);
  return 0;
}


