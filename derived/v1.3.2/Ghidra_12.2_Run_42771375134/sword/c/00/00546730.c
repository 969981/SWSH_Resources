/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00546730; name: FUN_00546730
 */


uint FUN_00546730(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar2 = *(uint *)(param_1 + 0x28) >> 0x14 & 0x100 | (*(uint *)(param_1 + 0x28) >> 8 & 1) << 9 |
          (uVar2 & 1) << 4 | (uVar2 >> 1 & 1) << 5 | (uVar2 >> 2 & 1) << 6;
  uVar1 = uVar2 | 4;
  if (1 < *(int *)(param_1 + 0xc) - 3U) {
    uVar1 = uVar2;
  }
  return uVar1;
}


