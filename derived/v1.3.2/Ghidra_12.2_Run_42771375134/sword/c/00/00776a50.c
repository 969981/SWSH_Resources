/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00776a50; name: FUN_00776a50
 */


bool FUN_00776a50(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if ((param_2 != -1) && (*(long *)PTR_DAT_027161a8 != -1)) {
    iVar2 = (**(code **)(**(long **)(param_1 + 0x80) + 0x140))();
    bVar1 = iVar2 == 1;
  }
  return bVar1;
}


