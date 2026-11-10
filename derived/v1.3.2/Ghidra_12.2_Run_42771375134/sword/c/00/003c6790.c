/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c6790; name: FUN_003c6790
 */


long FUN_003c6790(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if ((long *)*param_1 != (long *)param_1[1]) {
    plVar2 = (long *)*param_1;
    do {
      plVar1 = plVar2 + 1;
      *param_1 = (long)plVar1;
      lVar3 = *plVar2;
      if ((*(byte *)(lVar3 + 0x25) & 1) != 0) {
        if (*(long *)(lVar3 + 0x28) == param_1[2]) {
          return lVar3;
        }
        if (*(long *)(lVar3 + 0x30) == param_1[2]) {
          return lVar3;
        }
      }
      plVar2 = plVar1;
    } while ((long *)param_1[1] != plVar1);
  }
  return 0;
}


