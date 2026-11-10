/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a68e0; name: FUN_007a68e0
 */


int FUN_007a68e0(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 == 0) {
    iVar2 = 0;
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  else if ((int)uVar1 < 0) {
    iVar2 = 0xb;
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  else if (uVar1 < 0x80) {
    iVar2 = 2;
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  else {
    iVar2 = FUN_0080e440();
    iVar2 = iVar2 + 1;
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      iVar3 = 0xb;
    }
    else if (uVar1 < 0x80) {
      iVar3 = 2;
    }
    else {
      iVar3 = FUN_0080e440();
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar3 + iVar2;
  }
  *(int *)(param_1 + 0x1c) = iVar2;
  return iVar2;
}


