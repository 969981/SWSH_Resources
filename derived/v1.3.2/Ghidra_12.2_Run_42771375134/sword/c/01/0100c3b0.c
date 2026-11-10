/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100c3b0; name: FUN_0100c3b0
 */


bool FUN_0100c3b0(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (1 < param_2 - 1U) {
    return false;
  }
  bVar1 = false;
  if (*(long *)(param_1 + 0x830) != 0) {
    iVar2 = FUN_01018a90(*(long *)(param_1 + 0x830),1);
    bVar1 = iVar2 == 3;
  }
  return bVar1;
}


