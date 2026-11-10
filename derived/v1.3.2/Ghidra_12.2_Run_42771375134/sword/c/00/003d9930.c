/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d9930; name: FUN_003d9930
 */


void FUN_003d9930(long param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = FUN_003fd9f0();
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    do {
      while ((*(byte *)(lVar2 + 0x1b) & 0x60) == 0) {
        FUN_003fd750(lVar2,0,uVar1 & 1);
        lVar2 = *(long *)(lVar2 + 8);
        if (lVar2 == 0) {
          return;
        }
      }
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != 0);
  }
  return;
}


