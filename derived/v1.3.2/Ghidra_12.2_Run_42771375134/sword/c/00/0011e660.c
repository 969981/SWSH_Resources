/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011e660; name: FUN_0011e660
 */


undefined8
FUN_0011e660(long param_1,long *param_2,undefined4 *param_3,long *param_4,undefined4 *param_5,
            long *param_6,undefined4 *param_7)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  
  puVar4 = PTR_DAT_02710c28;
  uVar1 = *(uint *)(param_1 + 0x6a8) & 0x7fffffff;
  plVar6 = param_6;
  plVar8 = param_4;
  plVar9 = param_2;
  if (uVar1 != 0) {
    uVar7 = 0;
    do {
      uVar10 = *(uint *)(*(long *)(param_1 + 0x6a0) + uVar7 * 4);
      if (uVar10 != 0) goto LAB_0011e6cc;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
  }
  goto LAB_0011e7a8;
  while( true ) {
    lVar13 = *(long *)(*(long *)(param_1 + 0x1e0) +
                      (ulong)(uVar3 >> (ulong)(*(uint *)(param_1 + 0x1cc) & 0x1f)) * 8);
    uVar11 = (ulong)(*(int *)(param_1 + 0x1c0) - 1U & uVar3);
    lVar5 = lVar13 + uVar11 * 0x70;
    bVar2 = *(byte *)(lVar5 + 0x53);
    if ((bVar2 >> 1 & 1) == 0) {
      *plVar8 = lVar5;
      plVar8[1] = *(long *)(lVar13 + uVar11 * 0x70 + 0x18);
      plVar8 = plVar8 + 2;
    }
    else if ((bVar2 >> 4 & 1) == 0) {
      *plVar9 = lVar5;
      plVar9[1] = *(long *)(lVar13 + uVar11 * 0x70 + 0x18);
      plVar9 = plVar9 + 2;
    }
    else {
      *plVar6 = lVar5;
      plVar6[1] = *(long *)(lVar13 + uVar11 * 0x70 + 0x18);
      *(byte *)(lVar5 + 0x53) = bVar2 & 0xef;
      plVar6 = plVar6 + 2;
    }
    if (uVar10 == 0) break;
LAB_0011e6cc:
    uVar12 = (uint)uVar7;
    uVar3 = *(uint *)(puVar4 + (ulong)((uVar10 & -uVar10) * 0x77cb531 >> 0x1b) * 4) | uVar12 << 5;
    uVar10 = uVar10 - 1 & uVar10;
    while (uVar10 == 0) {
      uVar12 = uVar12 + 1;
      uVar7 = (ulong)uVar12;
      if (uVar1 <= uVar12) {
        uVar10 = 0;
        break;
      }
      uVar10 = *(uint *)(*(long *)(param_1 + 0x6a0) + (ulong)uVar12 * 4);
    }
    if (uVar3 == 0xffffffff) break;
  }
LAB_0011e7a8:
  *param_3 = (int)((ulong)((long)plVar9 - (long)param_2) >> 4);
  *param_5 = (int)((ulong)((long)plVar8 - (long)param_4) >> 4);
  *param_7 = (int)((ulong)((long)plVar6 - (long)param_6) >> 4);
  return 1;
}


