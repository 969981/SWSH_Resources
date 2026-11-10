/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044f1a0; name: FUN_0044f1a0
 */


bool FUN_0044f1a0(long *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if ((*(ushort *)((long)param_1 + 0x154) >> 5 & 1) == 0) {
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  else if ((*(ushort *)((long)param_1 + 0x154) >> 9 & 1) != 0) {
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  fVar2 = 0.0;
  fVar3 = 0.0;
  if (DAT_01d4c2ec <= *(float *)(param_1 + 0xc) * DAT_01d4c158) {
    uVar1 = (uint)(DAT_01d4c714 + DAT_01d4bda4 * *(float *)(param_1 + 0xc));
    fVar3 = (float)(uVar1 & 0x7fffff | 0x3f800000);
    fVar3 = (DAT_01d4c23c + fVar3 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar3)) *
            (float)(uVar1 & 0xff800000);
  }
  if (DAT_01d4c2ec <= *(float *)(param_1 + 0x11) * DAT_01d4c158) {
    uVar1 = (uint)(DAT_01d4c714 + DAT_01d4bda4 * *(float *)(param_1 + 0x11));
    fVar2 = (float)(uVar1 & 0x7fffff | 0x3f800000);
    fVar2 = (DAT_01d4c23c + fVar2 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar2)) *
            (float)(uVar1 & 0xff800000);
  }
  return *(float *)((long)param_1 + 100) * fVar3 * fVar2 <= *(float *)PTR_DAT_02712d48;
}


