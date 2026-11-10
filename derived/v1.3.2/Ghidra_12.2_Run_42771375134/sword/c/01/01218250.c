/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01218250; name: FUN_01218250
 */


void FUN_01218250(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  uVar1 = param_2[2];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  uVar3 = *param_3;
  uVar1 = param_3[1];
  param_1[7] = 0;
  param_1[5] = uVar3;
  param_1[6] = uVar1;
  uVar3 = nn::time::StandardSteadyClock::now();
  param_1[7] = uVar3;
  return;
}


