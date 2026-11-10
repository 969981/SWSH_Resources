/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c8f50; name: FUN_008c8f50
 */


void FUN_008c8f50(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x648);
  if (0 < iVar1) {
    lVar2 = (long)iVar1 + 0x192;
    do {
      iVar1 = iVar1 + -1;
      *(int *)(param_1 + 0x640) = iVar1;
      lVar3 = lVar2 * 4;
      lVar4 = lVar2 + -0x192;
      *(undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + lVar3) * 4 + 0x764) = 0;
      lVar2 = lVar2 + -1;
      *(undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + lVar3) * 4 + 0x740) = 0;
    } while (1 < lVar4);
  }
  return;
}


