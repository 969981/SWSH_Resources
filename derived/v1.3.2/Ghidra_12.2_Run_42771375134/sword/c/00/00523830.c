/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00523830; name: FUN_00523830
 */


undefined8
FUN_00523830(undefined4 param_1,long param_2,undefined8 *param_3,byte param_4,byte param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *(undefined8 *)(param_2 + 0xc84) = param_3[1];
  *(undefined8 *)(param_2 + 0xc7c) = uVar1;
  *(undefined4 *)(param_2 + 0xc8c) = param_1;
  *(byte *)(param_2 + 0xc90) = param_4 & 1;
  *(byte *)(param_2 + 0xc91) = param_5 & 1;
  return 0;
}


