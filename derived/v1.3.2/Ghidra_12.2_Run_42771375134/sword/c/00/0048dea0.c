/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048dea0; name: FUN_0048dea0
 */


int FUN_0048dea0(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long local_18;
  
  fVar4 = *(float *)(param_2 + 0x27c);
  if ((((*(ushort *)(param_2 + 0x16c) & 0xc) == 4) &&
      (FUN_0044eed0(param_2 + 0x18,&local_18), local_18 != 0)) &&
     ((ulong)*(byte *)(local_18 + 0xa0) != 0xff)) {
    local_18 = local_18 + (ulong)*(byte *)(local_18 + 0xa0) * 0x10;
    lVar1 = *(long *)(local_18 + 0x30);
    if (lVar1 != 0) {
      fVar2 = *(float *)(param_2 + 0x280);
      fVar3 = 0.0;
      if (fVar2 != 0.0) {
        fVar3 = *(float *)(lVar1 + (ulong)(*(int *)(local_18 + 0x38) - 1) * 0xc);
        if ((fVar3 <= param_1) || (fVar3 <= 0.0)) {
          fVar3 = fVar2;
        }
        else {
          fVar3 = (param_1 / fVar3) * fVar2;
        }
      }
      fVar4 = (float)NEON_fminnm(fVar3 + fVar4,DAT_01d4c6b8);
    }
  }
  return (int)fVar4;
}


