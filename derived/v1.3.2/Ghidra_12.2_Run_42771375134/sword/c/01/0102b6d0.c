/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102b6d0; name: FUN_0102b6d0
 */


int FUN_0102b6d0(ulong param_1)

{
  int iVar1;
  undefined1 auStack_48 [8];
  uint local_40;
  
  if ((param_1 & 1) == 0) {
    FUN_0102ac40(auStack_48);
  }
  else {
    FUN_0102abe0(auStack_48);
  }
  if (0x17 < local_40) {
    return 1;
  }
  iVar1 = -6;
  if (3 < local_40) {
    iVar1 = 1;
  }
  return *(int *)(PTR_DAT_02723850 + (long)(int)local_40 * 4) + iVar1;
}


