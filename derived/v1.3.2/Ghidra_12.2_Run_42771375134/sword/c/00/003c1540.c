/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c1540; name: FUN_003c1540
 */


void FUN_003c1540(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x44) = param_1;
  *(undefined4 *)(param_3 + 0x48) = param_2;
  if (*(long *)(param_3 + 0x50) == 0) {
    return;
  }
  FUN_003c5850();
  return;
}


