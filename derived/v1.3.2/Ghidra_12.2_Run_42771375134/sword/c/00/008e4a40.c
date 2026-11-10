/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e4a40; name: FUN_008e4a40
 */


void FUN_008e4a40(long param_1,char param_2,undefined4 param_3)

{
  if ((*(char *)(param_1 + 0x2ac) != param_2) && (*(char *)(param_1 + 0x2ad) != param_2)) {
    *(char *)(param_1 + 0x2ae) = param_2;
    *(undefined4 *)(param_1 + 0x2b0) = param_3;
  }
  return;
}


