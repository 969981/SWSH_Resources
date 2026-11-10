/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d3920; name: FUN_006d3920
 */


void FUN_006d3920(long param_1)

{
  *(undefined1 *)(param_1 + 0x160) = 1;
  if (*(char *)(param_1 + 0x161) == '\0') {
    return;
  }
  FUN_006d5da0(*(undefined8 *)(param_1 + 0x10));
  return;
}


