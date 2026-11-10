/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ffa10; name: FUN_009ffa10
 */


undefined2 FUN_009ffa10(long param_1)

{
  undefined2 uVar1;
  
  if (*(long *)(param_1 + 0x188) == 0) {
    return 0;
  }
  uVar1 = FUN_0075dd70(*(long *)(param_1 + 0x188) + 0x60,0x640);
  return uVar1;
}


