/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00506af0; name: FUN_00506af0
 */


void FUN_00506af0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x3c) * 4);
    uVar1 = uVar2 + 3;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    memcpy(*(void **)(*(long *)(param_1 + 0x28) + lVar3 * 8),
           (void *)(*(long *)(*(long *)(param_1 + 0x20) + lVar3 * 8) + (long)((int)uVar1 >> 2) * 4),
           (ulong)(uVar1 & 0xfffffffc));
    lVar3 = lVar3 + 1;
  } while (lVar3 < *(int *)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 0x44) = 1;
  return;
}


