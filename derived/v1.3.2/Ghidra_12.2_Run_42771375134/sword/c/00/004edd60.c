/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004edd60; name: FUN_004edd60
 */


long FUN_004edd60(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)param_2 / uVar1;
  }
  for (lVar3 = *(long *)(*param_1 + (ulong)((uint)param_2 - uVar2 * uVar1) * 8);
      (lVar3 != 0 && (*(long *)(lVar3 + 0x38) != param_2)); lVar3 = *(long *)(lVar3 + 0x40)) {
  }
  return lVar3;
}


