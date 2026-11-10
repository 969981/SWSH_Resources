/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047a510; name: FUN_0047a510
 */


undefined8 FUN_0047a510(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
  iVar3 = *(int *)(param_1 + 0xd0) + -1;
  if (-1 < iVar3) {
    uVar9 = *(ulong *)(param_1 + 200);
    iVar6 = 0;
    do {
      while( true ) {
        iVar1 = iVar3 - iVar6;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        uVar7 = iVar6 + (iVar1 >> 1);
        lVar11 = (long)(int)uVar7;
        uVar2 = *(ulong *)(uVar9 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar7 << 4
                                   ));
        if (param_2 < uVar2) break;
        if (param_2 <= uVar2) {
          puVar8 = (undefined8 *)(uVar9 + lVar11 * 0x10);
          if (puVar8 == (undefined8 *)0x0) {
            return 1;
          }
          piVar4 = (int *)(uVar9 + lVar11 * 0x10 + 8);
          iVar3 = *piVar4;
          iVar6 = iVar3 + -1;
          if (iVar3 != 0 && iVar6 != 0) {
            *piVar4 = iVar6;
            return 1;
          }
          FUN_0045b680();
          uVar7 = *(uint *)(param_1 + 0xd0);
          puVar5 = (undefined8 *)((*(long *)(param_1 + 200) + (ulong)uVar7 * 0x10) - 0x10);
          if (puVar8 < puVar5) {
            uVar9 = *(long *)(param_1 + 200) + (((ulong)uVar7 - 1) - lVar11) * 0x10 + ~uVar9;
            uVar7 = ((uint)(uVar9 >> 4) & 0xfffffff) + 1;
            if ((uVar7 & 7) != 0) {
              lVar11 = -((ulong)uVar7 & 7);
              puVar10 = puVar8;
              do {
                puVar8 = puVar10 + 2;
                *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar10 + 3);
                *puVar10 = *puVar8;
                lVar11 = lVar11 + 1;
                puVar10 = puVar8;
              } while (lVar11 != 0);
            }
            if (0x6f < uVar9) {
              do {
                *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + 3);
                *puVar8 = puVar8[2];
                puVar8[2] = puVar8[4];
                *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(puVar8 + 5);
                puVar8[4] = puVar8[6];
                *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(puVar8 + 7);
                puVar8[6] = puVar8[8];
                *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(puVar8 + 9);
                *(undefined4 *)(puVar8 + 9) = *(undefined4 *)(puVar8 + 0xb);
                puVar8[8] = puVar8[10];
                *(undefined4 *)(puVar8 + 0xb) = *(undefined4 *)(puVar8 + 0xd);
                puVar8[10] = puVar8[0xc];
                *(undefined4 *)(puVar8 + 0xd) = *(undefined4 *)(puVar8 + 0xf);
                puVar8[0xc] = puVar8[0xe];
                puVar10 = puVar8 + 0x10;
                puVar8[0xe] = *puVar10;
                *(undefined4 *)(puVar8 + 0xf) = *(undefined4 *)(puVar8 + 0x11);
                puVar8 = puVar10;
              } while (puVar10 < puVar5);
            }
            uVar7 = *(uint *)(param_1 + 0xd0);
          }
          *(uint *)(param_1 + 0xd0) = uVar7 - 1;
          return 1;
        }
        iVar6 = uVar7 + 1;
        if (iVar3 < iVar6) {
          return 1;
        }
      }
      iVar3 = uVar7 - 1;
    } while (iVar6 <= iVar3);
  }
  return 1;
}


