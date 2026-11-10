/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014f6b0; name: FUN_0014f6b0
 */


int FUN_0014f6b0(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x268) != 0) {
    iVar3 = *(int *)(param_1 + 0x268);
  }
  fVar4 = *(float *)(param_1 + 0x254);
  if (-*(float *)(param_1 + 600) <= *(float *)(param_1 + 0x254)) {
    fVar4 = -*(float *)(param_1 + 600);
  }
  if (0.0 < fVar4) {
    uVar1 = iVar3 * 2 + 0x800;
    uVar2 = iVar3 * 4 + 4;
    if (uVar2 <= uVar1) {
      uVar2 = uVar1;
    }
    return (iVar3 * 2 + 2U & 0xfffffffc) + iVar3 * 4 + uVar2;
  }
  return 0;
}


