/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01538f80; name: FUN_01538f80
 */


int FUN_01538f80(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x60);
  if (uVar3 == 0) {
    return 0;
  }
  iVar2 = 0;
  do {
    uVar1 = uVar3 & 1;
    uVar3 = uVar3 >> 1;
    iVar2 = uVar1 + iVar2;
  } while (uVar3 != 0);
  return iVar2;
}


