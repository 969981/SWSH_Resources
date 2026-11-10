/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00726ce0; name: FUN_00726ce0
 */


long FUN_00726ce0(long param_1)

{
  return (*(long *)(*(long *)(param_1 + 0x108) + 0x2c8) -
          *(long *)(*(long *)(param_1 + 0x108) + 0x2c0) >> 3) * 0x6db6db6db6db6db7;
}


