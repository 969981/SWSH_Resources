/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0055e9f0; name: FUN_0055e9f0
 */


undefined8 FUN_0055e9f0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x374) = param_2[1];
  *(undefined8 *)(param_1 + 0x36c) = uVar1;
  *(undefined8 *)(param_1 + 0x37c) = *param_3;
  *(undefined8 *)(param_1 + 900) = *param_4;
  return 0;
}


