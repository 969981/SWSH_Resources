/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6cab0; name: FUN_00c6cab0
 */


void FUN_00c6cab0(long param_1)

{
  if (*(int *)(param_1 + 0x94) != 0) {
    if (*(int *)(param_1 + 0x94) != 2) {
      FUN_00c6cb10(param_1);
      *(undefined8 *)(param_1 + 0x90) = 0x600000003;
      return;
    }
    *(undefined1 *)(param_1 + 0x7d) = 1;
  }
  return;
}


