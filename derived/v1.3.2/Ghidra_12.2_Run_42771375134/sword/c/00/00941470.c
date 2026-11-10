/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00941470; name: FUN_00941470
 */


void FUN_00941470(long param_1,undefined1 param_2,byte param_3,undefined1 param_4)

{
  byte bVar1;
  
  bVar1 = FUN_008db610(*(undefined8 *)(param_1 + 0x30),0x61);
  if (bVar1 < param_3) {
    FUN_008db590(*(undefined8 *)(param_1 + 0x30),4,param_2);
    FUN_008db590(*(undefined8 *)(param_1 + 0x30),0x61,param_3);
    FUN_008db590(*(undefined8 *)(param_1 + 0x30),0x62,param_4);
    return;
  }
  return;
}


