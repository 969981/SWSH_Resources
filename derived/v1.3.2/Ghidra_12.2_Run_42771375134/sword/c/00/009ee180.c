/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ee180; name: FUN_009ee180
 */


bool FUN_009ee180(long param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (*(long *)(*(long *)(param_1 + 0x60) + 0x78) != 0) {
    iVar2 = FUN_016ac730();
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


