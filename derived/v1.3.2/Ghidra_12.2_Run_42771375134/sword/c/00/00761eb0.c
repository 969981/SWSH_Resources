/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00761eb0; name: FUN_00761eb0
 */


void FUN_00761eb0(long param_1)

{
  *(undefined1 *)(param_1 + 0xca) = 0;
  if (*(char *)(param_1 + 0xc9) != '\0') {
    if (*(char *)(param_1 + 200) != '\0') {
      FUN_00764420(*(undefined8 *)(param_1 + 0x60));
    }
    *(undefined1 *)(param_1 + 0xc9) = 0;
  }
  return;
}


