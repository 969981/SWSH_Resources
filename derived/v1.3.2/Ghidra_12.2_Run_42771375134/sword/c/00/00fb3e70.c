/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb3e70; name: FUN_00fb3e70
 */


void FUN_00fb3e70(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ushort *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  undefined4 uVar17;
  
  if (*(uint *)(param_1 + 0x410) != param_2) {
    uVar2 = param_2 - 0xf;
    if ((int)param_2 < 0xf) {
      uVar2 = param_2;
    }
    if ((uVar2 == *(uint *)(*(long *)(param_1 + 0x3f8) + 0x60)) &&
       (*(char *)(param_1 + 0x414) == '\0')) {
      puVar6 = *(uint **)(*(long *)(param_1 + 0x2e8) + 400);
      piVar7 = (int *)((long)puVar6 + (ulong)*puVar6);
      uVar10 = (ulong)*(ushort *)((long)piVar7 + (4 - (long)*piVar7));
      puVar1 = (uint *)((long)piVar7 + uVar10);
      uVar11 = (ulong)*puVar1;
      puVar1 = (uint *)((long)puVar1 + uVar11);
      puVar5 = puVar1 + 1;
      uVar8 = (ulong)*puVar1;
      if (uVar8 != 0) {
        puVar1 = puVar5 + uVar8;
        lVar9 = (long)puVar6 + uVar11 + uVar10 + (ulong)*puVar6 + 0xd;
        do {
          piVar7 = (int *)((long)puVar5 + (ulong)*puVar5);
          puVar12 = (ushort *)((long)piVar7 - (long)*piVar7);
          if (*puVar12 < 5) {
            if (uVar2 == 0) goto LAB_00fb3f6c;
          }
          else {
            uVar15 = 0;
            if ((ulong)puVar12[2] != 0) {
              uVar15 = (uint)*(char *)((long)piVar7 + (ulong)puVar12[2]);
            }
            if (uVar15 == uVar2) {
LAB_00fb3f6c:
              puVar6 = (uint *)((long)piVar7 + (ulong)puVar12[3]);
              uVar8 = (ulong)*puVar6;
              puVar6 = (uint *)((long)puVar6 + uVar8);
              puVar13 = puVar6 + 1;
              uVar10 = (ulong)*puVar6;
              if (uVar10 != 0) {
                lVar16 = lVar9 + uVar8 + puVar12[3] + (ulong)*puVar5;
                puVar6 = puVar13;
                do {
                  puVar14 = puVar6 + 1;
                  uVar8 = 0xcbf29ce484222645;
                  bVar3 = *(byte *)((long)puVar14 + (ulong)*puVar6);
                  if (bVar3 != 0) {
                    uVar8 = 0xcbf29ce484222645;
                    pbVar4 = (byte *)(lVar16 + (ulong)*puVar6);
                    do {
                      uVar8 = (uVar8 ^ bVar3) * 0x100000001b3;
                      bVar3 = *pbVar4;
                      pbVar4 = pbVar4 + 1;
                    } while (bVar3 != 0);
                  }
                  if (uVar8 == *(ulong *)(param_1 + 0x3f0)) goto joined_r0x00fb4048;
                  lVar16 = lVar16 + 4;
                  puVar6 = puVar14;
                } while (puVar14 != puVar13 + uVar10);
              }
            }
          }
          puVar5 = puVar5 + 1;
          lVar9 = lVar9 + 4;
        } while (puVar5 != puVar1);
      }
      puVar5 = *(uint **)(*(long *)(param_1 + 0x1d8) + 400);
      piVar7 = (int *)((long)puVar5 + (ulong)*puVar5);
      puVar5 = (uint *)((long)piVar7 + (ulong)*(ushort *)((long)piVar7 + (4 - (long)*piVar7)));
      puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
      if (uVar2 < *puVar5) {
        puVar5 = puVar5 + (ulong)uVar2 + 1;
        piVar7 = (int *)((long)puVar5 + (ulong)*puVar5);
      }
      else {
        piVar7 = (int *)0x0;
      }
joined_r0x00fb4048:
      uVar17 = 0;
      if ((int)param_2 < 0xf) {
        uVar17 = 0;
        if ((0x1a < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
           (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0xd], uVar8 != 0)) {
          uVar17 = *(undefined4 *)((long)piVar7 + uVar8);
        }
      }
      FUN_00fb4890(uVar17);
      *(uint *)(param_1 + 0x410) = param_2;
      return;
    }
    *(undefined1 *)(param_1 + 0x414) = 1;
    *(uint *)(param_1 + 0x40c) = param_2;
  }
  return;
}


