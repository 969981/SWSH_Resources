/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c71a0; name: FUN_005c71a0
 */


void FUN_005c71a0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x5c) = param_2[1];
  *(undefined8 *)(param_1 + 0x54) = uVar1;
  return;
}


