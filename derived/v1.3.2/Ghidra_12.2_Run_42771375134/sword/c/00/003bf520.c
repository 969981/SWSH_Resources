/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bf520; name: FUN_003bf520
 */


void FUN_003bf520(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x7c) & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    while (lVar2 = lVar1, lVar1 != 0) {
      while (lVar1 = *(long *)(lVar2 + 8), (*(byte *)(lVar2 + 0x1b) & 0x60) != 0) {
        lVar2 = lVar1;
        if (lVar1 == 0) {
          return;
        }
      }
      FUN_003fcf40(lVar2,0,param_2);
    }
  }
  return;
}


