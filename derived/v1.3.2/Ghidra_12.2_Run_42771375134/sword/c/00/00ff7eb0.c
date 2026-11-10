/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff7eb0; name: FUN_00ff7eb0
 */


long FUN_00ff7eb0(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  if (param_2 == 2) {
    return param_1 + 0xf8;
  }
  if (param_2 == 0) {
    lVar1 = param_1 + 0x10;
  }
  return lVar1;
}


