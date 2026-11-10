/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff7f10; name: FUN_00ff7f10
 */


long FUN_00ff7f10(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  lVar2 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  if (iVar1 == 2) {
    return param_1 + 0xf8;
  }
  if (iVar1 == 0) {
    lVar2 = param_1 + 0x10;
  }
  return lVar2;
}


