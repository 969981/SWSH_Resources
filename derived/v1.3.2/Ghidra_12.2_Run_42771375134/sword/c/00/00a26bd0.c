/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a26bd0; name: FUN_00a26bd0
 */


undefined4 FUN_00a26bd0(long param_1)

{
  if (*(long *)(param_1 + 0x428) == 0) {
    return 0;
  }
  if ((*(undefined4 **)(param_1 + 0x420))[1] == 0) {
    return 0;
  }
  return **(undefined4 **)(param_1 + 0x420);
}


