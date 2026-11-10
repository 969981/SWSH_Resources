/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00722fb0; name: FUN_00722fb0
 */


int FUN_00722fb0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0x1b8);
  lVar3 = *(long *)(param_1 + 0x1c0);
  lVar5 = lVar2;
  if (lVar3 != lVar2) {
    lVar4 = lVar2;
    if (**(long **)(lVar2 + 0x128) != *param_2) {
      do {
        lVar5 = lVar4 + 0x130;
        if (lVar3 == lVar5) {
          return -1;
        }
        puVar1 = (undefined8 *)(lVar4 + 600);
        lVar4 = lVar5;
      } while (*(long *)*puVar1 != *param_2);
    }
  }
  if (lVar5 == lVar3) {
    return -1;
  }
  return (int)((ulong)(lVar5 - lVar2) >> 4) * 0x286bca1b;
}


