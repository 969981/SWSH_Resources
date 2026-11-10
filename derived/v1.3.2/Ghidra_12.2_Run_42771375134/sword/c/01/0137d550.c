/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0137d550; name: FUN_0137d550
 */


ulong FUN_0137d550(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined *puVar4;
  int iVar5;
  float fVar6;
  
  iVar5 = 0;
  pfVar3 = (float *)(param_1 + 0xcc);
  do {
    fVar6 = *pfVar3;
    pfVar2 = pfVar3 + 1;
    pfVar1 = pfVar3 + 2;
    pfVar3 = pfVar3 + 3;
    iVar5 = (int)(*pfVar1 + (float)(int)(*pfVar2 + (float)(int)(fVar6 + (float)iVar5)));
  } while (pfVar3 != (float *)(param_1 + 0x2ac));
  puVar4 = &UNK_0216c538;
  fVar6 = (float)iVar5 / DAT_01d4c664;
  if (3.0 < fVar6) {
    if (fVar6 <= 6.0) {
      return 1;
    }
    if (fVar6 <= 8.0) {
      return 2;
    }
    if (fVar6 <= 11.0) {
      return 3;
    }
    if (fVar6 <= 28.0) {
      return 4;
    }
    puVar4 = &UNK_0216c54c;
  }
  return (ulong)(puVar4 + -0x216c538) >> 2;
}


