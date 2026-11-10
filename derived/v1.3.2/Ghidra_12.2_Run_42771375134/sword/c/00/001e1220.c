/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e1220; name: FUN_001e1220
 */


ulong FUN_001e1220(long param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  if (*(uint *)(lVar2 + 0x50) == 0) {
    return 0xffffffff;
  }
  uVar1 = 0;
  plVar3 = (long *)(*(long *)(lVar2 + 0x48) + 8);
  while ((*(byte *)(plVar3 + -1) != param_2 || (*plVar3 != param_3))) {
    uVar1 = uVar1 + 1;
    plVar3 = plVar3 + 2;
    if (*(uint *)(lVar2 + 0x50) <= uVar1) {
      return 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


