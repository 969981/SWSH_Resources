/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c5760; name: FUN_003c5760
 */


void FUN_003c5760(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x750) + 0xe8) +
               (ulong)*(uint *)(param_1 + 0x4c) * 0x20 + 0xc) == 0) {
    return;
  }
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 8;
  FUN_003dff20(*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
  FUN_003c15c0(*(undefined8 *)(param_1 + 0x68));
  FUN_003c64f0(*(undefined8 *)(param_1 + 0x70));
  lVar2 = *(long *)(*(long *)(param_1 + 0x70) + 8);
  lVar1 = *(long *)(*(long *)(param_1 + 0x70) + 0x10);
  if (*(uint *)(lVar1 + 0x34) <= *(uint *)(lVar2 + 0x34)) {
    lVar2 = lVar1;
  }
  FUN_003ba7d0(lVar2,1,0,3);
  return;
}


