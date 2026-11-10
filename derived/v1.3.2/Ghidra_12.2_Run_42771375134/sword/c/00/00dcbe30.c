/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcbe30; name: FUN_00dcbe30
 */


undefined8 FUN_00dcbe30(long param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0xa50);
  do {
    if (pcVar1 == *(char **)(param_1 + 0xa58)) {
      return 1;
    }
    if (*pcVar1 != '\0') {
      if (*(long *)(pcVar1 + 0x88) == 0) {
        return 0;
      }
      if (*(char *)(*(long *)(pcVar1 + 0x88) + 0x170) == '\0') {
        return 0;
      }
    }
    pcVar1 = pcVar1 + 0x230;
  } while( true );
}


