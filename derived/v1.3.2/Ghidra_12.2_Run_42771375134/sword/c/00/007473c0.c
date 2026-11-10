/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007473c0; name: FUN_007473c0
 */


void FUN_007473c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x2a8) = param_2[3];
  *(undefined8 *)(param_1 + 0x298) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)(param_1 + 0x2c8) = param_2[7];
  *(undefined8 *)(param_1 + 0x2b8) = uVar1;
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x2a0) = param_2[2];
  *(undefined8 *)(param_1 + 0x290) = uVar1;
  uVar1 = param_2[4];
  *(undefined8 *)(param_1 + 0x2c0) = param_2[6];
  *(undefined8 *)(param_1 + 0x2b0) = uVar1;
  return;
}


