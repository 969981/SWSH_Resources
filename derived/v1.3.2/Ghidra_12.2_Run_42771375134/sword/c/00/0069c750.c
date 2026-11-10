/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069c750; name: FUN_0069c750
 */


void FUN_0069c750(long param_1)

{
  float fVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  float fVar7;
  
  fVar1 = DAT_01d4bf34;
  lVar4 = *(long *)(param_1 + 0x230);
  if (lVar4 != 0) {
    lVar2 = 0;
    for (uVar3 = 0;
        (lVar4 != 0 &&
        (uVar3 < ((*(long *)(lVar4 + 0x18) - *(long *)(lVar4 + 0x10) >> 4) * -0x1111111111111111 &
                 0xffffffffU))); uVar3 = uVar3 + 1) {
      piVar5 = *(int **)(*(long *)(lVar4 + 0x10) + lVar2);
      fVar7 = 0.0;
      if (0xc < *(ushort *)((long)piVar5 - (long)*piVar5)) {
        uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[6];
        fVar7 = 0.0;
        if (uVar6 != 0) {
          fVar7 = *(float *)((long)piVar5 + uVar6) * fVar1;
        }
      }
      lVar4 = *(long *)(lVar4 + 0x10) + lVar2;
      lVar2 = lVar2 + 0xf0;
      *(float *)(lVar4 + 0x24) = fVar7;
      lVar4 = *(long *)(param_1 + 0x230);
    }
  }
  return;
}


