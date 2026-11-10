/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecb840; name: FUN_00ecb840
 */


void FUN_00ecb840(long param_1)

{
  if (*(char *)(param_1 + 0x78) != '\0') {
    FUN_00893630(*(undefined8 *)(param_1 + 0x58));
    *(undefined1 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0xcbf29ce484222645;
  }
  return;
}


