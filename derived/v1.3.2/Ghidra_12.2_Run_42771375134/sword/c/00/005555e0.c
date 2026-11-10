/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005555e0; name: FUN_005555e0
 */


undefined8 FUN_005555e0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x1b8) = *param_2;
  *(undefined8 *)(param_1 + 0x1c0) = uVar1;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x1d4) = param_3[1];
  *(undefined8 *)(param_1 + 0x1cc) = uVar1;
  return 0;
}


