/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ff9e0; name: FUN_009ff9e0
 */


undefined2 FUN_009ff9e0(long param_1)

{
  undefined2 uVar1;
  
  if (*(long *)(param_1 + 0x180) == 0) {
    return 0;
  }
  uVar1 = FUN_0075dd70(*(long *)(param_1 + 0x180) + 0x60,0x22fc);
  return uVar1;
}


