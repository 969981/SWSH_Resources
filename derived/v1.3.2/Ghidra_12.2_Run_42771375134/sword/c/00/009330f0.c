/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009330f0; name: FUN_009330f0
 */


int FUN_009330f0(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x88);
  uVar3 = FUN_008ed270(param_1 + 0x58);
  uVar3 = uVar3 & 0xff;
  iVar2 = uVar3 - *(uint *)(param_1 + 0x88);
  if (uVar3 <= *(uint *)(param_1 + 0x88) || uVar3 == 0) {
    iVar2 = 0;
  }
  return iVar2 + iVar1;
}


