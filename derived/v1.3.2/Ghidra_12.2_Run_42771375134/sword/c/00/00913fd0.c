/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00913fd0; name: FUN_00913fd0
 */


undefined1 FUN_00913fd0(long param_1,byte param_2)

{
  if ((*(long *)(param_1 + 0x30) == 0) || (*(uint *)(param_1 + 0x38) <= (uint)param_2)) {
    return *(undefined1 *)(param_1 + 0x3c);
  }
  return *(undefined1 *)(*(long *)(param_1 + 0x30) + (ulong)param_2);
}


