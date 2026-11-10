/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00906e60; name: FUN_00906e60
 */


void FUN_00906e60(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_008f98a0(*(undefined8 *)(param_1 + 0x58));
  FUN_009c7ca0(param_2,1,0x44);
  FUN_009c7cd0(param_2,uVar1);
  FUN_009c7cd0(param_2,param_3);
  return;
}


