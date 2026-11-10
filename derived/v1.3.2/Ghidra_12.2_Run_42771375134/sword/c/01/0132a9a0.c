/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132a9a0; name: FUN_0132a9a0
 */


void FUN_0132a9a0(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3[1];
  param_1 = param_1 + (long)param_2 * 0x20;
  *(undefined8 *)(param_1 + 0x198) = param_3[3];
  *(undefined8 *)(param_1 + 0x188) = uVar1;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 400) = param_3[2];
  *(undefined8 *)(param_1 + 0x180) = uVar1;
  return;
}


