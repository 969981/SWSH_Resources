/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd01f0; name: FUN_00bd01f0
 */


undefined8 FUN_00bd01f0(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  undefined8 local_28;
  
  local_28 = 0;
  lVar1 = param_3 + 0x668;
  if (*(int *)(param_3 + 0x6a0) == 0) {
    FUN_0167b630(*(undefined8 *)(param_3 + 0x58),lVar1,&local_28);
    return 0;
  }
  fVar2 = (float)FUN_0167b720(*(undefined8 *)(param_3 + 0x58),lVar1);
  local_28 = CONCAT44(*(float *)(param_3 + 0x69c) + param_2,fVar2 + *(float *)(param_3 + 0x698));
  FUN_0167b630(*(undefined8 *)(param_3 + 0x58),lVar1,&local_28);
  *(int *)(param_3 + 0x6a0) = *(int *)(param_3 + 0x6a0) + -1;
  return 1;
}


