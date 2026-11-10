/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00932780; name: FUN_00932780
 */


int FUN_00932780(char *param_1)

{
  if (*param_1 == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 4) == 0xff) {
    return 0xff;
  }
  return *(int *)(param_1 + 4) - *(int *)(param_1 + 0xc);
}


