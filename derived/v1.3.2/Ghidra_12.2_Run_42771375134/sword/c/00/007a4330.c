/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a4330; name: FUN_007a4330
 */


void FUN_007a4330(long param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 == 0) {
    iVar2 = 0;
  }
  else if ((int)uVar1 < 0) {
    iVar2 = 0xb;
  }
  else if (uVar1 < 0x80) {
    iVar2 = 2;
  }
  else {
    iVar2 = FUN_0080e440();
    iVar2 = iVar2 + 1;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    iVar2 = iVar2 + 2;
  }
  *(int *)(param_1 + 0x1c) = iVar2;
  return;
}


