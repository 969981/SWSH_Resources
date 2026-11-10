/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01061700; name: FUN_01061700
 */


void FUN_01061700(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (((**(long **)(param_1 + 0x78) != 0) && (*(int *)(**(long **)(param_1 + 0x78) + 0x54) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x78) + 0x10) != 0)) {
    FUN_0069c600();
  }
  lVar2 = 0;
LAB_01061740:
  do {
    lVar1 = **(long **)(param_1 + 0x98 + lVar2);
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x54) != 0)) &&
       (lVar1 = *(long *)(param_1 + 0x98 + lVar2), *(char *)(lVar1 + 0x22) != '\0')) {
      if (*(long *)(lVar1 + 0x18) != 0) {
        FUN_01061700();
        lVar2 = lVar2 + 0x20;
        if (lVar2 == 0x200) {
          return;
        }
        goto LAB_01061740;
      }
      if (*(long *)(lVar1 + 0x10) != 0) {
        FUN_0069c600();
      }
    }
    lVar2 = lVar2 + 0x20;
    if (lVar2 == 0x200) {
      return;
    }
  } while( true );
}


