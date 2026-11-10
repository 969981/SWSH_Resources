/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042c1b0; name: FUN_0042c1b0
 */


void FUN_0042c1b0(void)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_02712d10;
  for (lVar2 = *(long *)(PTR_DAT_02712d00 + 0x10); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x10)) {
    fVar3 = *(float *)(lVar2 + 0x70);
    fVar4 = *(float *)(lVar2 + 0x74);
    fVar5 = *(float *)(lVar2 + 0x60);
    fVar6 = *(float *)(lVar2 + 100);
    fVar7 = *(float *)(lVar2 + 0x68);
    fVar8 = *(float *)(lVar2 + 0x6c);
    *(float *)(lVar2 + 0x3c) = fVar7 * fVar3 - fVar6 * fVar4;
    *(float *)(lVar2 + 0x40) = fVar5 * fVar4 - fVar8 * fVar7;
    *(float *)(lVar2 + 0x44) = fVar8 * fVar6 - fVar5 * fVar3;
    *(float *)(lVar2 + 0x48) = fVar8;
    *(float *)(lVar2 + 0x4c) = fVar3;
    *(float *)(lVar2 + 0x50) = fVar4;
    *(float *)(lVar2 + 0x54) = fVar5;
    *(float *)(lVar2 + 0x58) = fVar6;
    *(float *)(lVar2 + 0x5c) = fVar7;
    FUN_004e7fa0(puVar1,*(undefined8 *)(*(long *)(lVar2 + 8) + 0x48));
  }
  return;
}


