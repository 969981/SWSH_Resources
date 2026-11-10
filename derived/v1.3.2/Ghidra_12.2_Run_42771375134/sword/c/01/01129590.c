/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01129590; name: FUN_01129590
 */


void FUN_01129590(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  if (*(char *)(param_2 + 0x10) != '\0') {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x14);
    *param_1 = 1;
  }
  return;
}


