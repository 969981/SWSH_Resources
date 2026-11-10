/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011da90; name: FUN_0011da90
 */


void FUN_0011da90(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar2 = *(uint *)(param_2 + 0x58);
  if (((*(byte *)(param_2 + 0x10) >> 1 & 1) != 0) && ((*(byte *)(param_2 + 0x51) >> 4 & 1) != 0)) {
    FUN_00190b50(param_1 + 0x680,uVar2 + 1);
    lVar4 = (ulong)(uVar2 >> 5) * 4;
    *(uint *)(*(long *)(param_1 + 0x680) + lVar4) =
         *(uint *)(*(long *)(param_1 + 0x680) + lVar4) & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
  }
  iVar1 = uVar2 + 1;
  FUN_00190b50(param_1 + 0x670,iVar1);
  uVar3 = 1 << (ulong)(uVar2 & 0x1f);
  lVar4 = (ulong)(uVar2 >> 5) * 4;
  *(uint *)(*(long *)(param_1 + 0x670) + lVar4) =
       *(uint *)(*(long *)(param_1 + 0x670) + lVar4) & (uVar3 ^ 0xffffffff);
  FUN_00190b50(param_1 + 0x6a0,iVar1);
  *(uint *)(*(long *)(param_1 + 0x6a0) + lVar4) =
       *(uint *)(*(long *)(param_1 + 0x6a0) + lVar4) & (uVar3 ^ 0xffffffff);
  FUN_00190b50(param_1 + 0x6b0,iVar1);
  *(uint *)(*(long *)(param_1 + 0x6b0) + lVar4) =
       *(uint *)(*(long *)(param_1 + 0x6b0) + lVar4) & (uVar3 ^ 0xffffffff);
  lVar4 = (ulong)(*(uint *)(param_2 + 0x58) >> 5) * 4;
  *(uint *)(*(long *)(param_1 + 0x1f0) + lVar4) =
       *(uint *)(*(long *)(param_1 + 0x1f0) + lVar4) &
       (1 << ((ulong)*(uint *)(param_2 + 0x58) & 0x1f) ^ 0xffffffffU);
  uVar2 = *(uint *)(param_1 + 0x1d8);
  *(uint *)(param_1 + 0x1d8) = uVar2 + 1;
  *(long *)(*(long *)(param_1 + 0x1d0) + (ulong)uVar2 * 8) = param_2;
  return;
}


