/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066d0f0; name: FUN_0066d0f0
 */


void FUN_0066d0f0(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  *(undefined8 *)(param_2 + 0x110) = 0;
  lVar4 = *(long *)(param_1 + 0x1f0);
  if (0 < (int)lVar4) {
    lVar5 = (long)(int)lVar4;
    do {
      while( true ) {
        lVar7 = *(long *)(param_1 + 0x208);
        lVar6 = lVar5 + -1;
        if (*(long *)(lVar7 + lVar6 * 8) == param_2) break;
        bVar1 = lVar5 < 2;
        lVar5 = lVar6;
        if (bVar1) goto LAB_0066d184;
      }
      if (lVar5 < lVar4) {
        *(undefined8 *)(lVar7 + lVar6 * 8) = *(undefined8 *)(lVar7 + lVar5 * 8);
        lVar4 = *(long *)(param_1 + 0x1f0);
        if (lVar5 + 1 < lVar4) {
          lVar7 = lVar5;
          do {
            puVar3 = (undefined8 *)(*(long *)(param_1 + 0x208) + lVar7 * 8);
            *puVar3 = puVar3[1];
            lVar4 = *(long *)(param_1 + 0x1f0);
            lVar2 = lVar7 + 2;
            lVar7 = lVar7 + 1;
          } while (lVar2 < lVar4);
        }
      }
      lVar4 = lVar4 + -1;
      *(long *)(param_1 + 0x1f0) = lVar4;
      bVar1 = 1 < lVar5;
      lVar5 = lVar6;
    } while (bVar1);
  }
LAB_0066d184:
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(undefined8 *)(param_1 + 0x218) = 0;
    return;
  }
  *(long *)(param_1 + 0x210) = *(long *)(param_1 + 0x208);
  *(long *)(param_1 + 0x218) = *(long *)(param_1 + 0x208) + lVar4 * 8;
  return;
}


