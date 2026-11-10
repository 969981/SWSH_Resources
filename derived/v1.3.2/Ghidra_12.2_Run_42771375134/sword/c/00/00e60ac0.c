/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e60ac0; name: FUN_00e60ac0
 */


undefined1  [16] FUN_00e60ac0(long param_1)

{
  undefined1 auVar1 [16];
  
  if (*(long *)(param_1 + 0xb40) == 0) {
    return ZEXT816(0);
  }
  auVar1 = FUN_00771eb0();
  return auVar1;
}


