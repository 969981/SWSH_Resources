/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009330a0; name: FUN_009330a0
 */


int FUN_009330a0(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x88);
  uVar4 = FUN_008ed270(param_1 + 0x58);
  uVar2 = *(uint *)(param_1 + 0x88);
  uVar4 = uVar4 & 0xff;
  iVar3 = uVar4 - uVar2;
  if (uVar4 <= uVar2 || uVar4 == 0) {
    iVar3 = 0;
  }
  return (iVar1 - uVar2) + iVar3;
}


