/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00776de0; name: FUN_00776de0
 */


bool FUN_00776de0(long param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar2 = FUN_00776cc0();
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}


