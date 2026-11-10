/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004eb760; name: FUN_004eb760
 */


long FUN_004eb760(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  
  if (*(uint *)(param_1 + 0x78) == 0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x70);
  lVar5 = (ulong)*(uint *)(param_1 + 0x78) * 0x110;
  lVar3 = 0;
  fVar6 = DAT_01d4c18c;
  do {
    bVar2 = fVar6 <= *(float *)(lVar4 + 0x104);
    fVar6 = (float)NEON_fminnm(*(float *)(lVar4 + 0x104),fVar6);
    lVar1 = lVar4;
    if (bVar2) {
      lVar1 = lVar3;
    }
    lVar4 = lVar4 + 0x110;
    lVar5 = lVar5 + -0x110;
    lVar3 = lVar1;
  } while (lVar5 != 0);
  return lVar1;
}


