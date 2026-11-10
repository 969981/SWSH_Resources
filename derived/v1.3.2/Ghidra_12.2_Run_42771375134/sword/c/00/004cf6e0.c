/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cf6e0; name: FUN_004cf6e0
 */


undefined4 FUN_004cf6e0(float param_1)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  if (30.0 <= param_1) {
    uVar1 = (uint)(DAT_01d4c714 + DAT_01d4c1a4 * (DAT_01d4c6b8 - param_1));
    fVar2 = (float)(uVar1 & 0x7fffff | 0x3f800000);
    fVar2 = (float)(uVar1 & 0xff800000) * DAT_01d4c28c *
            (DAT_01d4c23c + fVar2 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar2));
  }
  else {
    fVar2 = DAT_01d4c114 + DAT_01d4c720 * (30.0 - param_1);
  }
  fVar4 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_02712b38);
  uVar3 = NEON_fminnm(fVar4 * DAT_01d4bed0,fVar2);
  return uVar3;
}


