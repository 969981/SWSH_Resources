/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00419090; name: FUN_00419090
 */


long FUN_00419090(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x108) == 0) {
    return 0x7fffffffffffffff;
  }
  uVar2 = *(uint *)(param_1 + 0x100);
  uVar3 = *(int *)(param_1 + 0x118) - 1;
  if (uVar3 < uVar2) {
    uVar5 = (ulong)uVar3;
    if ((ulong)uVar2 - 1 == uVar5) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      do {
        plVar1 = (long *)(param_1 + uVar5 * 8);
        uVar5 = uVar5 + 2;
        lVar6 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
                *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar6;
      } while ((ulong)uVar2 - ((ulong)(uVar2 - uVar3) & 1) != uVar5);
    }
    if ((uVar2 - uVar3 & 1) != 0) {
      lVar6 = *(long *)(*(long *)(*(long *)(param_1 + uVar5 * 8) + 8) + 0x68) + lVar6;
    }
  }
  else {
    lVar6 = 0;
  }
  lVar4 = FUN_004191e0(param_1 + 0x108);
  return lVar4 + lVar6;
}


