/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bc2d0; name: FUN_003bc2d0
 */


ulong FUN_003bc2d0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 == 0) {
    return 0;
  }
  uVar3 = 0;
  uVar2 = 0;
  do {
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + uVar3 * 8);
    if ((*(byte *)(*(long *)(lVar4 + 0x88) + 0x1c) >> 2 & 1) != 0) {
      *(long *)(param_2 + uVar2 * 8) = lVar4;
      uVar2 = (ulong)((int)uVar2 + 1);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < uVar1);
  return uVar2;
}


