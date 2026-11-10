/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed60e0; name: FUN_00ed60e0
 */


void FUN_00ed60e0(long param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x731) != param_2) ||
     ((*(char *)(param_1 + 0x730) != '\0' && (*(char *)(param_1 + 0x730) != param_2)))) {
    *(char *)(param_1 + 0x730) = param_2;
  }
  return;
}


