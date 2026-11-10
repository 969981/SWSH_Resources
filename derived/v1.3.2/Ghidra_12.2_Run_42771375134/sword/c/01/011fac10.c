/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fac10; name: FUN_011fac10
 */


void FUN_011fac10(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x58) <= param_2) {
    FUN_011fa6d0();
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x16b) = 0;
    *(undefined1 *)(param_1 + 0x16d) = 0;
  }
  return;
}


