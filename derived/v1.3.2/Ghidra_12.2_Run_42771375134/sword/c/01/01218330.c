/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01218330; name: FUN_01218330
 */


void FUN_01218330(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  uVar1 = param_2[1];
  uVar4 = param_2[2];
  uVar2 = param_2[3];
  uVar5 = param_2[4];
  uVar3 = *param_3;
  uVar6 = param_3[1];
  uVar7 = nn::time::StandardSteadyClock::now();
  param_1[1] = uVar1;
  param_1[2] = uVar4;
  *param_1 = uVar8;
  param_1[3] = uVar2;
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[5] = uVar3;
  param_1[6] = uVar6;
  return;
}


