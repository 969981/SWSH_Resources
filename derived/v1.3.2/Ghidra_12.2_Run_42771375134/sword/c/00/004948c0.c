/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004948c0; name: FUN_004948c0
 */


int FUN_004948c0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
  *(long *)PTR_DAT_02712b80 = lVar4;
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar2 = 0;
  uVar3 = (uint)((ulong)lVar4 >> 0x21);
  if (uVar1 != 0) {
    uVar2 = uVar3 / uVar1;
  }
  return uVar3 - uVar2 * uVar1;
}


