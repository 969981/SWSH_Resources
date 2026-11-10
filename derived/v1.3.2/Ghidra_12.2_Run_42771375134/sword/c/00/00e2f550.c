/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e2f550; name: FUN_00e2f550
 */


void FUN_00e2f550(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[3];
  param_2[2] = param_1[2];
  param_2[3] = uVar3;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return;
}


