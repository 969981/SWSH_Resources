/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ead690; name: FUN_00ead690
 */


void FUN_00ead690(long param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 0x569) == '\0') {
    *(undefined8 *)(param_1 + 0xb8) = param_2[1];
    *(undefined8 *)(param_1 + 0xb0) = *param_2;
    *(undefined1 *)(param_1 + 0xc0) = 1;
    return;
  }
  return;
}


