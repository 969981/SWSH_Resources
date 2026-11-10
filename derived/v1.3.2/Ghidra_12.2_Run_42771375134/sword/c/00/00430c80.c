/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00430c80; name: FUN_00430c80
 */


undefined8 FUN_00430c80(float param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = 0x1f;
  if ((DAT_01d4c4e8 <= param_1) && (param_1 <= 0.0)) {
    if (param_2 <= *(int *)PTR_DAT_02712d78) {
      *(int *)PTR_DAT_02712d78 = param_2;
      fVar5 = param_1 * DAT_01d4c158;
      fVar4 = powf(10.0,fVar5);
      puVar1 = PTR_DAT_02712df0;
      if (DAT_01d4c2ec <= fVar5) {
        uVar3 = (uint)(DAT_01d4c714 + DAT_01d4bda4 * param_1);
        fVar5 = (float)(uVar3 & 0x7fffff | 0x3f800000);
        fVar5 = (DAT_01d4c23c + fVar5 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar5)) *
                (float)(uVar3 & 0xff800000);
      }
      else {
        fVar5 = 0.0;
      }
      if (fVar4 <= fVar5) {
        fVar4 = fVar5;
      }
      *(float *)PTR_DAT_02712d48 = fVar4;
      *(float *)puVar1 = param_1;
    }
    uVar2 = 1;
  }
  return uVar2;
}


