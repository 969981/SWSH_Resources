/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009bf3e0; name: FUN_009bf3e0
 */


int FUN_009bf3e0(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    iVar2 = 0;
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  else {
    iVar2 = FUN_0080e480();
    iVar2 = iVar2 + 1;
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  if (uVar1 != 0) {
    if (uVar1 < 0x80) {
      iVar3 = 2;
    }
    else {
      iVar3 = FUN_0080e440();
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar3 + iVar2;
  }
  if (*(uint *)(param_1 + 0x24) != 0) {
    if (*(uint *)(param_1 + 0x24) < 0x80) {
      iVar3 = 2;
    }
    else {
      iVar3 = FUN_0080e440();
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar3 + iVar2;
  }
  *(int *)(param_1 + 0x28) = iVar2;
  return iVar2;
}


