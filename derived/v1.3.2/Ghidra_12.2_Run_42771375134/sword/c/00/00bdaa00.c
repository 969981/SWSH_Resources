/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdaa00; name: FUN_00bdaa00
 */


void FUN_00bdaa00(long param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 0x1790);
  if (*pcVar1 == '\0') {
    if (*param_2 != '\0') {
      memcpy((void *)(param_1 + 0x1798),param_2 + 8,0x118);
      *pcVar1 = '\x01';
    }
    return;
  }
  if (*param_2 == '\0') {
    *pcVar1 = '\0';
    return;
  }
  memcpy((void *)(param_1 + 0x1798),param_2 + 8,0x111);
  return;
}


