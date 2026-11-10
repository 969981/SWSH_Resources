/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdaa80; name: FUN_00bdaa80
 */


void FUN_00bdaa80(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  if (*(char *)(param_2 + 0x1790) != '\0') {
    memcpy(param_1 + 8,(void *)(param_2 + 0x1798),0x118);
    *param_1 = 1;
  }
  return;
}


