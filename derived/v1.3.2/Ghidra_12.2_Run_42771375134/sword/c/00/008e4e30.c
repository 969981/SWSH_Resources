/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e4e30; name: FUN_008e4e30
 */


void FUN_008e4e30(long param_1,byte param_2,undefined4 param_3)

{
  if (param_2 < 4) {
    *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 0x368) = param_3;
  }
  return;
}


