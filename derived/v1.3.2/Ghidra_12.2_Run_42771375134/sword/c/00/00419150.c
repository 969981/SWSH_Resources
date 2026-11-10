/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00419150; name: FUN_00419150
 */


long FUN_00419150(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x100);
  if (uVar2 <= param_2) {
    return 0;
  }
  uVar4 = (ulong)param_2;
  if ((ulong)uVar2 - 1 == uVar4) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      plVar1 = (long *)(param_1 + uVar4 * 8);
      uVar4 = uVar4 + 2;
      lVar3 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
              *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar3;
    } while ((ulong)uVar2 - ((ulong)(uVar2 - param_2) & 1) != uVar4);
  }
  if ((uVar2 - param_2 & 1) != 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + uVar4 * 8) + 8) + 0x68) + lVar3;
  }
  return lVar3;
}


