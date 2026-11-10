/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01383b30; name: FUN_01383b30
 */


bool FUN_01383b30(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_02710840;
  FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  iVar2 = FUN_01020350();
  if (iVar2 == 1) {
    return false;
  }
  FUN_0101f840(*(undefined8 *)puVar1);
  iVar2 = FUN_01020350();
  if (iVar2 == 2) {
    return false;
  }
  FUN_0101f840(*(undefined8 *)puVar1);
  iVar2 = FUN_01020350();
  return iVar2 != 0;
}


