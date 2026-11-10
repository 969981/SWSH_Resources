/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a2dc0; name: FUN_013a2dc0
 */


bool FUN_013a2dc0(long param_1)

{
  if (((*(long *)(param_1 + 0xf18) == 0) && (*(long *)(param_1 + 0x960) == 0)) &&
     (*(long *)(param_1 + 0x8e0) == 0)) {
    return *(long *)PTR_DAT_0271e288 != 0;
  }
  return true;
}


