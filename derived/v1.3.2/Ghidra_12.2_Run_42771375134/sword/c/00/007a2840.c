/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a2840; name: FUN_007a2840
 */


undefined8 FUN_007a2840(long param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x108) != 0) {
    lVar2 = *(long *)(param_1 + 0x100);
    lVar3 = *(long *)(param_1 + 0x108) << 3;
    do {
      pcVar1 = (char *)FUN_007a24d0(param_1 + 0x1c0,lVar2);
      if (*pcVar1 == '\0') {
        return 0;
      }
      lVar2 = lVar2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return 1;
}


