/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011ddb0; name: FUN_0011ddb0
 */


void FUN_0011ddb0(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  
  (**(code **)(**(long **)(param_1 + 0x6e8) + 0x98))();
  plVar5 = (long *)FUN_003ffa60(*(undefined8 *)(param_1 + 0x1b0));
  if (plVar5 != (long *)0x0) {
    plVar12 = plVar5;
    while( true ) {
      plVar13 = (long *)*plVar12;
      *(int *)(param_1 + 0x6c0) = *(int *)(param_1 + 0x6c0) + *(int *)((long)plVar12 + 0x1c84);
      *(int *)(param_1 + 0x6c4) = *(int *)(param_1 + 0x6c4) + (int)plVar12[0x390];
      *(int *)(param_1 + 0x6cc) = *(int *)(param_1 + 0x6cc) + (int)plVar12[0x391];
      *(int *)(param_1 + 0x6d0) = *(int *)(param_1 + 0x6d0) + *(int *)((long)plVar12 + 0x1c8c);
      lVar14 = plVar12[0xf];
      iVar2 = *(int *)((long)plVar12 + 0x13c);
      *(int *)(param_1 + 0x7b8) = *(int *)(param_1 + 0x7b8) + (int)lVar14;
      *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + iVar2;
      iVar2 = *(int *)(param_1 + 0xa04) + (int)lVar14;
      *(int *)(param_1 + 0xa04) = iVar2;
      iVar3 = *(int *)((long)plVar12 + 0x7c);
      lVar14 = plVar12[0x28];
      *(int *)(param_1 + 0x7bc) = *(int *)(param_1 + 0x7bc) + iVar3;
      iVar2 = iVar2 + iVar3;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x944) = *(int *)(param_1 + 0x944) + (int)lVar14;
      lVar14 = plVar12[0x10];
      iVar3 = *(int *)((long)plVar12 + 0x144);
      *(int *)(param_1 + 0x7c0) = *(int *)(param_1 + 0x7c0) + (int)lVar14;
      iVar2 = iVar2 + (int)lVar14;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x948) = *(int *)(param_1 + 0x948) + iVar3;
      iVar3 = *(int *)((long)plVar12 + 0x84);
      lVar14 = plVar12[0x29];
      *(int *)(param_1 + 0x7c4) = *(int *)(param_1 + 0x7c4) + iVar3;
      iVar2 = iVar2 + iVar3;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x94c) = *(int *)(param_1 + 0x94c) + (int)lVar14;
      lVar14 = plVar12[0x11];
      iVar3 = *(int *)((long)plVar12 + 0x14c);
      *(int *)(param_1 + 0x7c8) = *(int *)(param_1 + 0x7c8) + (int)lVar14;
      iVar2 = iVar2 + (int)lVar14;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x950) = *(int *)(param_1 + 0x950) + iVar3;
      iVar3 = *(int *)((long)plVar12 + 0x8c);
      lVar14 = plVar12[0x2a];
      *(int *)(param_1 + 0x7cc) = *(int *)(param_1 + 0x7cc) + iVar3;
      iVar2 = iVar2 + iVar3;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x954) = *(int *)(param_1 + 0x954) + (int)lVar14;
      lVar14 = plVar12[0x12];
      iVar3 = *(int *)((long)plVar12 + 0x154);
      *(int *)(param_1 + 2000) = *(int *)(param_1 + 2000) + (int)lVar14;
      iVar2 = iVar2 + (int)lVar14;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x958) = *(int *)(param_1 + 0x958) + iVar3;
      lVar14 = plVar12[0x13];
      iVar3 = *(int *)((long)plVar12 + 0x15c);
      *(int *)(param_1 + 0x7d8) = *(int *)(param_1 + 0x7d8) + (int)lVar14;
      iVar2 = iVar2 + (int)lVar14;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x960) = *(int *)(param_1 + 0x960) + iVar3;
      iVar3 = *(int *)((long)plVar12 + 0x9c);
      lVar14 = plVar12[0x2c];
      *(int *)(param_1 + 0x7dc) = *(int *)(param_1 + 0x7dc) + iVar3;
      iVar2 = iVar2 + iVar3;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x964) = *(int *)(param_1 + 0x964) + (int)lVar14;
      lVar14 = plVar12[0x14];
      iVar3 = *(int *)((long)plVar12 + 0x164);
      *(int *)(param_1 + 0x7e0) = *(int *)(param_1 + 0x7e0) + (int)lVar14;
      iVar2 = iVar2 + (int)lVar14;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x968) = *(int *)(param_1 + 0x968) + iVar3;
      iVar3 = *(int *)((long)plVar12 + 0xa4);
      lVar14 = plVar12[0x2d];
      *(int *)(param_1 + 0x7e4) = *(int *)(param_1 + 0x7e4) + iVar3;
      iVar2 = iVar2 + iVar3;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x96c) = *(int *)(param_1 + 0x96c) + (int)lVar14;
      lVar14 = plVar12[0x15];
      iVar3 = *(int *)((long)plVar12 + 0x16c);
      *(int *)(param_1 + 0x7e8) = *(int *)(param_1 + 0x7e8) + (int)lVar14;
      iVar2 = iVar2 + (int)lVar14;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x970) = *(int *)(param_1 + 0x970) + iVar3;
      iVar3 = *(int *)((long)plVar12 + 0xac);
      lVar14 = plVar12[0x2e];
      *(int *)(param_1 + 0x7ec) = *(int *)(param_1 + 0x7ec) + iVar3;
      iVar2 = iVar2 + iVar3;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x974) = *(int *)(param_1 + 0x974) + (int)lVar14;
      lVar14 = plVar12[0x17];
      iVar3 = *(int *)((long)plVar12 + 0x17c);
      *(int *)(param_1 + 0x7f8) = *(int *)(param_1 + 0x7f8) + (int)lVar14;
      iVar2 = iVar2 + (int)lVar14;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x980) = *(int *)(param_1 + 0x980) + iVar3;
      iVar3 = *(int *)((long)plVar12 + 0xbc);
      lVar14 = plVar12[0x30];
      *(int *)(param_1 + 0x7fc) = *(int *)(param_1 + 0x7fc) + iVar3;
      iVar2 = iVar2 + iVar3;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x984) = *(int *)(param_1 + 0x984) + (int)lVar14;
      lVar14 = plVar12[0x18];
      iVar3 = *(int *)((long)plVar12 + 0x184);
      *(int *)(param_1 + 0x800) = *(int *)(param_1 + 0x800) + (int)lVar14;
      iVar2 = iVar2 + (int)lVar14;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x988) = *(int *)(param_1 + 0x988) + iVar3;
      iVar3 = *(int *)((long)plVar12 + 0xc4);
      lVar14 = plVar12[0x31];
      *(int *)(param_1 + 0x804) = *(int *)(param_1 + 0x804) + iVar3;
      iVar2 = iVar2 + iVar3;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x98c) = *(int *)(param_1 + 0x98c) + (int)lVar14;
      lVar14 = plVar12[0x19];
      iVar3 = *(int *)((long)plVar12 + 0x18c);
      *(int *)(param_1 + 0x808) = *(int *)(param_1 + 0x808) + (int)lVar14;
      iVar2 = iVar2 + (int)lVar14;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x990) = *(int *)(param_1 + 0x990) + iVar3;
      lVar14 = plVar12[0x1b];
      iVar3 = *(int *)((long)plVar12 + 0x19c);
      *(int *)(param_1 + 0x818) = *(int *)(param_1 + 0x818) + (int)lVar14;
      iVar2 = iVar2 + (int)lVar14;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x9a0) = *(int *)(param_1 + 0x9a0) + iVar3;
      iVar3 = *(int *)((long)plVar12 + 0xdc);
      lVar14 = plVar12[0x34];
      *(int *)(param_1 + 0x81c) = *(int *)(param_1 + 0x81c) + iVar3;
      iVar2 = iVar2 + iVar3;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x9a4) = *(int *)(param_1 + 0x9a4) + (int)lVar14;
      lVar14 = plVar12[0x1c];
      iVar3 = *(int *)((long)plVar12 + 0x1a4);
      *(int *)(param_1 + 0x820) = *(int *)(param_1 + 0x820) + (int)lVar14;
      iVar2 = iVar2 + (int)lVar14;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x9a8) = *(int *)(param_1 + 0x9a8) + iVar3;
      iVar3 = *(int *)((long)plVar12 + 0xe4);
      lVar14 = plVar12[0x35];
      *(int *)(param_1 + 0x824) = *(int *)(param_1 + 0x824) + iVar3;
      iVar2 = iVar2 + iVar3;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x9ac) = *(int *)(param_1 + 0x9ac) + (int)lVar14;
      lVar14 = plVar12[0x1f];
      iVar3 = *(int *)((long)plVar12 + 0x1bc);
      *(int *)(param_1 + 0x838) = *(int *)(param_1 + 0x838) + (int)lVar14;
      iVar2 = iVar2 + (int)lVar14;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x9c0) = *(int *)(param_1 + 0x9c0) + iVar3;
      iVar3 = *(int *)((long)plVar12 + 0xfc);
      lVar14 = plVar12[0x38];
      *(int *)(param_1 + 0x83c) = *(int *)(param_1 + 0x83c) + iVar3;
      iVar2 = iVar2 + iVar3;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x9c4) = *(int *)(param_1 + 0x9c4) + (int)lVar14;
      lVar14 = plVar12[0x20];
      iVar3 = *(int *)((long)plVar12 + 0x1c4);
      *(int *)(param_1 + 0x840) = *(int *)(param_1 + 0x840) + (int)lVar14;
      iVar2 = iVar2 + (int)lVar14;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x9c8) = *(int *)(param_1 + 0x9c8) + iVar3;
      lVar14 = plVar12[0x23];
      iVar3 = *(int *)((long)plVar12 + 0x1dc);
      *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + (int)lVar14;
      iVar2 = iVar2 + (int)lVar14;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x9e0) = *(int *)(param_1 + 0x9e0) + iVar3;
      iVar3 = *(int *)((long)plVar12 + 0x11c);
      lVar14 = plVar12[0x3c];
      *(int *)(param_1 + 0x85c) = *(int *)(param_1 + 0x85c) + iVar3;
      iVar2 = iVar2 + iVar3;
      *(int *)(param_1 + 0xa04) = iVar2;
      *(int *)(param_1 + 0x9e4) = *(int *)(param_1 + 0x9e4) + (int)lVar14;
      lVar14 = plVar12[0x27];
      iVar3 = *(int *)((long)plVar12 + 0x1fc);
      *(int *)(param_1 + 0x878) = *(int *)(param_1 + 0x878) + (int)lVar14;
      *(int *)(param_1 + 0xa04) = iVar2 + (int)lVar14;
      *(int *)(param_1 + 0xa00) = *(int *)(param_1 + 0xa00) + iVar3;
      *(int *)(param_1 + 0xa08) = *(int *)(param_1 + 0xa08) + (int)plVar12[899];
      *(int *)(param_1 + 0xa0c) = *(int *)(param_1 + 0xa0c) + *(int *)((long)plVar12 + 0x1c1c);
      *(int *)(param_1 + 0xa20) = *(int *)(param_1 + 0xa20) + *(int *)((long)plVar12 + 0x1c14);
                    /* try { // try from 0011e2e0 to 0011e3d3 has its CatchHandler @ 0011e4fc */
      FUN_001205c0(plVar12);
      uVar4 = *(uint *)(plVar12 + 0x38d);
      lVar14 = plVar12[0x38c];
      FUN_00190b50((long *)(param_1 + 0x6a0),uVar4 << 5);
      uVar4 = uVar4 & 0x7fffffff;
      uVar1 = *(uint *)(param_1 + 0x6a8) & 0x7fffffff;
      if (uVar4 <= uVar1) {
        uVar1 = uVar4;
      }
      if (uVar1 != 0) {
        lVar6 = *(long *)(param_1 + 0x6a0);
        uVar11 = (ulong)uVar1;
        if (uVar11 - 1 < 3) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          puVar7 = (uint *)(lVar6 + 8);
          puVar10 = (uint *)(lVar14 + 8);
          do {
            puVar7[-2] = puVar10[-2] | puVar7[-2];
            puVar7[-1] = puVar10[-1] | puVar7[-1];
            *puVar7 = *puVar10 | *puVar7;
            lVar9 = lVar9 + 4;
            puVar7[1] = puVar10[1] | puVar7[1];
            puVar7 = puVar7 + 4;
            puVar10 = puVar10 + 4;
          } while (uVar11 - (uVar11 & 3) != lVar9);
        }
        if ((uVar1 & 3) != 0) {
          lVar8 = -(uVar11 & 3);
          puVar7 = (uint *)(lVar6 + lVar9 * 4);
          puVar10 = (uint *)(lVar14 + lVar9 * 4);
          do {
            lVar8 = lVar8 + 1;
            *puVar7 = *puVar10 | *puVar7;
            puVar7 = puVar7 + 1;
            puVar10 = puVar10 + 1;
          } while (lVar8 != 0);
        }
      }
      uVar4 = *(uint *)(plVar12 + 0x38f);
      lVar14 = plVar12[0x38e];
      FUN_00190b50((long *)(param_1 + 0x6b0),uVar4 << 5);
      uVar4 = uVar4 & 0x7fffffff;
      uVar1 = *(uint *)(param_1 + 0x6b8) & 0x7fffffff;
      if (uVar4 <= uVar1) {
        uVar1 = uVar4;
      }
      if (uVar1 != 0) {
        lVar6 = *(long *)(param_1 + 0x6b0);
        uVar11 = (ulong)uVar1;
        if (uVar11 - 1 < 3) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          puVar7 = (uint *)(lVar6 + 8);
          puVar10 = (uint *)(lVar14 + 8);
          do {
            puVar7[-2] = puVar10[-2] | puVar7[-2];
            puVar7[-1] = puVar10[-1] | puVar7[-1];
            *puVar7 = *puVar10 | *puVar7;
            lVar9 = lVar9 + 4;
            puVar7[1] = puVar10[1] | puVar7[1];
            puVar7 = puVar7 + 4;
            puVar10 = puVar10 + 4;
          } while (uVar11 - (uVar11 & 3) != lVar9);
        }
        if ((uVar1 & 3) != 0) {
          lVar8 = -(uVar11 & 3);
          puVar7 = (uint *)(lVar6 + lVar9 * 4);
          puVar10 = (uint *)(lVar14 + lVar9 * 4);
          do {
            lVar8 = lVar8 + 1;
            *puVar7 = *puVar10 | *puVar7;
            puVar7 = puVar7 + 1;
            puVar10 = puVar10 + 1;
          } while (lVar8 != 0);
        }
      }
      *(int *)(param_1 + 0xa5c) = *(int *)(param_1 + 0xa5c) + (int)plVar12[0x386];
      uVar4 = *(uint *)((long)plVar12 + 0x1c2c);
      if (*(uint *)((long)plVar12 + 0x1c2c) <= *(uint *)(param_1 + 0xa58)) {
        uVar4 = *(uint *)(param_1 + 0xa58);
      }
      *(uint *)(param_1 + 0xa58) = uVar4;
      *(undefined8 *)((long)plVar12 + 0x1c2c) = 0;
      if (plVar13 == (long *)0x0) break;
      plVar12 = plVar13;
    }
    while (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
                    /* try { // try from 0011e4d4 to 0011e4d7 has its CatchHandler @ 0011e4f8 */
      FUN_003ff9a0(*(undefined8 *)(param_1 + 0x1b0));
    }
  }
  return;
}


