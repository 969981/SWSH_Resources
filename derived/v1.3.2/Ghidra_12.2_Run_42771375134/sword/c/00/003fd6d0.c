/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fd6d0; name: FUN_003fd6d0
 */


void FUN_003fd6d0(long param_1)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if (-1 < (int)*(uint *)(param_1 + 0x18)) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  cVar2 = *(char *)(*(long *)(lVar4 + 0x50) + 0xd);
  lVar3 = *(long *)(*(long *)(lVar4 + 0x48) + 0x728);
  uVar1 = *(uint *)(param_1 + 0x18) & 0x1fffffff;
  uVar5 = 2;
  if ((lVar4 != 0) && (cVar2 == '\x01' || cVar2 == '\x04')) {
    uVar5 = 2 - (*(byte *)(*(long *)(lVar4 + 0x50) + 0x2c) & 1);
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(*(long *)(lVar3 + 0x98) + (ulong)uVar1 * 4) = 0;
    return;
  }
  *(uint *)(*(long *)(lVar3 + 0x98) + (ulong)uVar1 * 4) = *(int *)(lVar4 + 0x58) * 4 + 0xcU | uVar5;
  return;
}


