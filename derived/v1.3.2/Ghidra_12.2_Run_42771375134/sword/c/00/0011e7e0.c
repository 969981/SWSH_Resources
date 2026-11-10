/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011e7e0; name: FUN_0011e7e0
 */


undefined8
FUN_0011e7e0(long param_1,long *param_2,undefined4 *param_3,long *param_4,undefined4 *param_5)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  int aiStack_78 [8];
  long local_58;
  
  uVar2 = *(uint *)(param_1 + 0x6b8) & 0x7fffffff;
  if (uVar2 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    do {
      uVar14 = *(uint *)(*(long *)(param_1 + 0x6b0) + uVar13 * 4);
      if (uVar14 != 0) goto LAB_0011e848;
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar2);
  }
  uVar14 = 0;
LAB_0011e848:
  (**(code **)(**(long **)(param_1 + 0x6e8) + 0xa8))(aiStack_78);
  puVar6 = PTR_DAT_02710c28;
  plVar8 = param_4;
  plVar10 = param_2;
  if (uVar14 != 0) {
    uVar2 = *(uint *)(param_1 + 0x6b8);
    plVar9 = param_2;
LAB_0011e890:
    do {
      uVar12 = (uint)uVar13;
      uVar5 = *(uint *)(puVar6 + (ulong)((uVar14 & -uVar14) * 0x77cb531 >> 0x1b) * 4) | uVar12 << 5;
      uVar14 = uVar14 - 1 & uVar14;
      while (uVar14 == 0) {
        uVar12 = uVar12 + 1;
        uVar13 = (ulong)uVar12;
        if ((uVar2 & 0x7fffffff) <= uVar12) {
          uVar14 = 0;
          break;
        }
        uVar14 = *(uint *)(*(long *)(param_1 + 0x6b0) + (ulong)uVar12 * 4);
      }
      plVar10 = plVar9;
      if (uVar5 == 0xffffffff) break;
      lVar11 = *(long *)(*(long *)(param_1 + 0x1e0) +
                        (ulong)(uVar5 >> (ulong)(*(uint *)(param_1 + 0x1cc) & 0x1f)) * 8) +
               (ulong)(*(int *)(param_1 + 0x1c0) - 1U & uVar5) * 0x70;
      lVar1 = local_58 +
              (ulong)(aiStack_78[(ulong)*(uint *)(lVar11 + 0x6c) & 7] +
                     (*(uint *)(lVar11 + 0x6c) >> 3)) * 0x20;
      bVar3 = *(byte *)(lVar1 + 0x19);
      bVar4 = *(byte *)(lVar1 + 0x1b);
      if (bVar4 < bVar3) {
        plVar10 = plVar9 + 1;
        *plVar9 = lVar11;
        plVar9 = plVar10;
        if (uVar14 == 0) break;
        goto LAB_0011e890;
      }
      plVar7 = plVar8;
      if (bVar3 < bVar4) {
        plVar7 = plVar8 + 1;
        *plVar8 = lVar11;
      }
      plVar8 = plVar7;
    } while (uVar14 != 0);
  }
  *param_3 = (int)((ulong)((long)plVar10 - (long)param_2) >> 3);
  *param_5 = (int)((ulong)((long)plVar8 - (long)param_4) >> 3);
  return 1;
}


