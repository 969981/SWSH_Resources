/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00555570; name: FUN_00555570
 */


undefined8 FUN_00555570(undefined4 param_1,undefined4 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_3 + 0x184) = param_1;
  *(undefined4 *)(param_3 + 0x188) = param_2;
  uVar1 = *param_4;
  *(undefined8 *)(param_3 + 0x1a4) = param_4[1];
  *(undefined8 *)(param_3 + 0x19c) = uVar1;
  return 0;
}


