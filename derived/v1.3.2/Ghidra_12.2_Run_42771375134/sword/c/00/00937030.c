/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00937030; name: FUN_00937030
 */


undefined8 FUN_00937030(long param_1,uint param_2,undefined4 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_008ef450(param_2);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  FUN_00931960(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  uVar1 = FUN_00935520();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x49,param_2 & 0xff,param_3);
  return 1;
}


