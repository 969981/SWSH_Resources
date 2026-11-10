/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e73ab0; name: FUN_00e73ab0
 */


void FUN_00e73ab0(long param_1,undefined4 *param_2)

{
  *(undefined1 *)(param_1 + 0xd6) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x98) = *param_2;
  *(bool *)(param_1 + 0x9c) = *(char *)((long)param_2 + 5) != '\0';
  *(undefined1 *)(param_1 + 0xd5) = 1;
  return;
}


