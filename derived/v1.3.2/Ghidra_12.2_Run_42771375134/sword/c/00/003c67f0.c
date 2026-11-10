/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c67f0; name: FUN_003c67f0
 */


long FUN_003c67f0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 != param_1[1]) {
    lVar1 = param_1[1];
    do {
      lVar2 = lVar1 + -8;
      param_1[1] = lVar2;
      lVar1 = *(long *)(lVar1 + -8);
      if ((*(byte *)(lVar1 + 0x25) & 1) != 0) {
        if (*(long *)(lVar1 + 0x28) == param_1[2]) {
          return lVar1;
        }
        if (*(long *)(lVar1 + 0x30) == param_1[2]) {
          return lVar1;
        }
      }
      lVar1 = lVar2;
    } while (*param_1 != lVar2);
  }
  return 0;
}


