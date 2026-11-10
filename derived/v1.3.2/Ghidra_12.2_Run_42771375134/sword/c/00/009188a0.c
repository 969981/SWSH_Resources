/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009188a0; name: FUN_009188a0
 */


void FUN_009188a0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x54) = *param_2;
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  uVar2 = param_2[3];
  *(undefined8 *)(param_1 + 0x74) = param_2[4];
  *(undefined8 *)(param_1 + 0x6c) = uVar2;
  *(undefined8 *)(param_1 + 100) = uVar3;
  *(undefined8 *)(param_1 + 0x5c) = uVar1;
  return;
}


