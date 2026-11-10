/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00114420; name: FUN_00114420
 */


void FUN_00114420(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x60) + (ulong)param_2 * 8);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x78);
    if (uVar1 < (*(uint *)(param_1 + 0x7c) & 0x7fffffff)) {
      *(long *)(*(long *)(param_1 + 0x70) + (ulong)uVar1 * 8) = lVar2;
      *(uint *)(param_1 + 0x78) = uVar1 + 1;
    }
    else {
      FUN_00114d70(param_1 + 0x70);
    }
    *(undefined8 *)(*(long *)(param_1 + 0x60) + (ulong)param_2 * 8) = 0;
  }
  return;
}


