/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e4890; name: FUN_009e4890
 */


undefined8 FUN_009e4890(undefined8 param_1,byte param_2)

{
  if (0xb < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(*(long *)PTR_DAT_02718af8 + (ulong)param_2 * 0x20 + 8);
}


