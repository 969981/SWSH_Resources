/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00418980; name: FUN_00418980
 */


/* WARNING: Removing unreachable block (ram,0x004189b4) */

long FUN_00418980(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x108) == 0) {
    return 0x7fffffffffffffff;
  }
  uVar2 = *(uint *)(param_1 + 0x100);
  if (uVar2 == 0) {
    lVar4 = 0;
  }
  else {
    if (uVar2 == 1) {
      lVar3 = 0;
      lVar4 = 0;
    }
    else {
      lVar3 = 0;
      lVar4 = 0;
      do {
        plVar1 = (long *)(param_1 + lVar3 * 8);
        lVar3 = lVar3 + 2;
        lVar4 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
                *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar4;
      } while ((ulong)uVar2 - ((ulong)uVar2 & 1) != lVar3);
      if ((uVar2 & 1) == 0) goto LAB_00418a14;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + lVar3 * 8) + 8) + 0x68) + lVar4;
  }
LAB_00418a14:
  lVar3 = FUN_004191e0(param_1 + 0x108);
  return lVar3 + lVar4;
}


