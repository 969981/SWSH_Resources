/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d95a0; name: FUN_003d95a0
 */


void FUN_003d95a0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_001415d0(0,0);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    return;
  }
  return;
}


