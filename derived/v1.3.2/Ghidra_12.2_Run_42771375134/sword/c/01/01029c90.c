/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01029c90; name: FUN_01029c90
 */


undefined8 FUN_01029c90(long param_1)

{
  long lVar1;
  
  lVar1 = 0x68;
  if (*(int *)(param_1 + 100) != 1) {
    lVar1 = 0x50;
  }
  return *(undefined8 *)(param_1 + lVar1);
}


