/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ba330; name: FUN_003ba330
 */


void FUN_003ba330(long *param_1)

{
  byte *pbVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    lVar2 = *(long *)(*param_1 + 0x38);
    while (lVar2 != 0) {
      while (pbVar1 = (byte *)(lVar2 + 0x1b), lVar2 = *(long *)(lVar2 + 8), (*pbVar1 & 0x60) != 0) {
        if (lVar2 == 0) {
          return;
        }
      }
      FUN_003fc860();
    }
  }
  return;
}


