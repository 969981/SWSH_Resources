/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fb070; name: FUN_008fb070
 */


undefined2 FUN_008fb070(long param_1,ulong param_2)

{
  if (*(long *)(param_1 + (param_2 & 0xff) * 0x70 + 0x1e8) == 0) {
    return *(undefined2 *)(param_1 + (param_2 & 0xff) * 0x70 + 0x210);
  }
  return 0;
}


