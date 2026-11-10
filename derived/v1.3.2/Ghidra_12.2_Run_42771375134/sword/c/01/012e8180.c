/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e8180; name: FUN_012e8180
 */


undefined4 FUN_012e8180(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0x828) == 0) {
    return 0x55;
  }
  if ((param_2 & 1) != 0) {
    *(long *)(param_1 + 0x828) = *(long *)(param_1 + 0x828) + -1;
  }
  return *(undefined4 *)(param_1 + 0x820);
}


