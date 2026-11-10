/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bd7e0; name: FUN_004bd7e0
 */


void FUN_004bd7e0(long param_1,int param_2)

{
  float fVar1;
  
  if ((param_2 != 0) && ((*(byte *)(param_1 + 0x40) >> 1 & 1) != 0)) {
    fVar1 = expf((float)(int)-(uint)*(ushort *)PTR_DAT_02712ac0 / ((float)param_2 * DAT_01d4c490));
    *(float *)(param_1 + 0x44) = fVar1;
  }
  return;
}


