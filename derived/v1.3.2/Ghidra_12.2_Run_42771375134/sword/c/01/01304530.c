/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01304530; name: FUN_01304530
 */


void FUN_01304530(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 == 0) {
    iVar3 = 0;
  }
  else if ((int)uVar2 < 0) {
    iVar3 = 0xb;
  }
  else if (uVar2 < 0x80) {
    iVar3 = 2;
  }
  else {
    iVar3 = FUN_0080e440();
    iVar3 = iVar3 + 1;
  }
  iVar1 = iVar3 + 5;
  if (*(float *)(param_1 + 0x18) == 0.0) {
    iVar1 = iVar3;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}


