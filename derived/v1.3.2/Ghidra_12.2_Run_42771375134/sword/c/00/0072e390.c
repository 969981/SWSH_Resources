/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072e390; name: FUN_0072e390
 */


int FUN_0072e390(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x68) + 0x260);
  lVar4 = *(long *)(*(long *)(param_1 + 0x68) + 0x268);
  lVar5 = lVar3;
  if (lVar4 != lVar3) {
    lVar2 = lVar3;
    if (*(long *)(lVar3 + 0x20) != *param_2) {
      do {
        lVar5 = lVar2 + 0x60;
        if (lVar4 == lVar5) {
          return -1;
        }
        plVar1 = (long *)(lVar2 + 0x80);
        lVar2 = lVar5;
      } while (*plVar1 != *param_2);
    }
  }
  if (lVar5 == lVar4) {
    return -1;
  }
  return (int)((ulong)(lVar5 - lVar3) >> 5) * -0x55555555;
}


