/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00206e80; name: FUN_00206e80
 */


void FUN_00206e80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)PTR_DAT_02711048 + 0x308);
                    /* try { // try from 00206ea4 to 00206ebb has its CatchHandler @ 00206ed8 */
  FUN_00217f10(param_1,uVar1);
  FUN_00217f10(param_1 + 0x10,uVar1);
  FUN_00217f00(param_1 + 0x10);
  FUN_00217f00(param_1);
  return;
}


