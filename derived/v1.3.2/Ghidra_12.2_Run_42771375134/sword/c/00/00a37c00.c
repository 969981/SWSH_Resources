/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a37c00; name: FUN_00a37c00
 */


void FUN_00a37c00(long param_1)

{
  long lVar1;
  
  lVar1 = 0x640;
  if (*(char *)(param_1 + 0x61d) != '\0') {
    lVar1 = 0x648;
  }
  FUN_016b8190(*(undefined8 *)(param_1 + lVar1));
  return;
}


