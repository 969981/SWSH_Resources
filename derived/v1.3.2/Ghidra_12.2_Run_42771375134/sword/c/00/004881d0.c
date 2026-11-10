/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004881d0; name: FUN_004881d0
 */


uint FUN_004881d0(long param_1)

{
  uint *puVar1;
  
  do {
    puVar1 = (uint *)(param_1 + 0x9c);
    param_1 = *(long *)(param_1 + 0x78);
  } while (param_1 != 0 && (*puVar1 & 0x2000000) == 0);
  return *puVar1 >> 0x1c & 1;
}


