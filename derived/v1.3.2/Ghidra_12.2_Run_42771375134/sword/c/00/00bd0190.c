/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd0190; name: FUN_00bd0190
 */


void FUN_00bd0190(float param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_2;
  fVar1 = (float)FUN_0167b760(*(undefined8 *)(param_3 + 0x58),param_3 + 0x668);
  *(undefined4 *)(param_3 + 0x6a0) = 4;
  *(float *)(param_3 + 0x698) = (param_1 - fVar1) * 0.25;
  *(float *)(param_3 + 0x69c) = (param_2 - fVar2) * 0.25;
  return;
}


