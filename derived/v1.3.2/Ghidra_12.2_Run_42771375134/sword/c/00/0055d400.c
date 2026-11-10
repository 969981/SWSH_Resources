/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0055d400; name: FUN_0055d400
 */


float FUN_0055d400(long param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x18c) != '\0') {
    return 1.0;
  }
  if (*(char *)(param_1 + 0x180) == '\0') {
    fVar1 = 0.0;
    fVar2 = 0.0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x184);
    fVar2 = *(float *)(param_1 + 0x188);
  }
  return fVar1 * (fVar2 * (*(float *)(param_1 + 0x158) + DAT_01d4c30c) + DAT_01d4bc70);
}


