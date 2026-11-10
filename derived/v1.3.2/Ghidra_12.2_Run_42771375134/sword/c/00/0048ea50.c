/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048ea50; name: FUN_0048ea50
 */


long FUN_0048ea50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  
  lVar1 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x2c0);
  if (lVar1 != 0) {
    FUN_0048b110(lVar1,param_4,param_2,param_3,param_5,0);
  }
  return lVar1;
}


