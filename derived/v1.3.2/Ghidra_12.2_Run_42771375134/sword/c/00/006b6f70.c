/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b6f70; name: FUN_006b6f70
 */


undefined8 FUN_006b6f70(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar4;
  undefined8 *puVar3;
  
  if (*(long *)(param_1 + 0x118) == 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x98);
    puVar3 = *(undefined8 **)(param_1 + 0x90);
    if (*(undefined8 **)(param_1 + 0x90) == puVar1) {
      return 0;
    }
    while( true ) {
      puVar4 = puVar3 + 4;
      uVar2 = FUN_006b6f70(*puVar3);
      if ((uVar2 & 1) != 0) break;
      puVar3 = puVar4;
      if (puVar1 == puVar4) {
        return 0;
      }
    }
  }
  return 1;
}


