/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00486a80; name: FUN_00486a80
 */


void FUN_00486a80(long param_1,ulong param_2,ulong *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  
  puVar1 = PTR_DAT_02712a90;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
    uVar8 = *param_3 & *(ulong *)(lVar11 + 8);
    if (uVar8 == 0) {
      uVar5 = *(uint *)(lVar11 + 0x18);
      if (uVar5 != 0) {
        puVar9 = *(undefined8 **)(lVar11 + 0x10);
        uVar8 = 0;
        lVar2 = (ulong)uVar5 * -0x10 + 0x11;
        puVar10 = puVar9;
        do {
          puVar7 = puVar10 + 2;
          if (puVar9[uVar8 * 2 + 1] == param_2) {
            if (puVar10 < puVar9 + (ulong)uVar5 * 2 + -2) {
              if (((uint)-(int)lVar2 >> 4 & 1) == 0) {
                *puVar10 = *puVar7;
                puVar10[1] = puVar10[3];
                puVar10 = puVar7;
              }
              if (lVar2 != -0xf) {
                do {
                  *puVar10 = puVar10[2];
                  puVar10[1] = puVar10[3];
                  puVar7 = puVar10 + 4;
                  puVar10[2] = *puVar7;
                  puVar10[3] = puVar10[5];
                  puVar10 = puVar7;
                } while (puVar7 < puVar9 + (ulong)uVar5 * 2 + -2);
              }
              uVar5 = *(uint *)(lVar11 + 0x18);
            }
            *(uint *)(lVar11 + 0x18) = uVar5 - 1;
            return;
          }
          uVar12 = (int)uVar8 + 1;
          uVar8 = (ulong)uVar12;
          lVar2 = lVar2 + 0x10;
          puVar10 = puVar7;
        } while (uVar12 < uVar5);
      }
    }
    else {
      uVar5 = *(uint *)(lVar11 + 0x18);
      if (uVar5 != 0) {
        uVar4 = 0;
        puVar6 = *(ulong **)(lVar11 + 0x10);
        do {
          if ((*(ulong **)(lVar11 + 0x10))[uVar4 * 2 + 1] == param_2) {
            *puVar6 = uVar8;
            return;
          }
          uVar12 = (int)uVar4 + 1;
          uVar4 = (ulong)uVar12;
          puVar6 = puVar6 + 2;
        } while (uVar12 < uVar5);
      }
      uVar12 = *(uint *)(lVar11 + 0x1c);
      if (uVar12 <= uVar5) {
        uVar12 = uVar12 + 1;
        lVar2 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar12 << 4);
        if (lVar2 == 0) {
          return;
        }
        lVar3 = *(long *)(lVar11 + 0x10);
        if ((lVar3 != 0) && (lVar3 != lVar2)) {
          uVar4 = (ulong)*(uint *)(lVar11 + 0x18);
          if (*(uint *)(lVar11 + 0x18) != 0) {
            lVar3 = 0;
            do {
              if (lVar2 + lVar3 != 0) {
                *(undefined8 *)(lVar2 + lVar3) = 0;
                ((undefined8 *)(lVar2 + lVar3))[1] = 0;
              }
              puVar10 = (undefined8 *)(*(long *)(lVar11 + 0x10) + lVar3);
              puVar9 = (undefined8 *)(lVar2 + lVar3);
              lVar3 = lVar3 + 0x10;
              *puVar9 = *puVar10;
              uVar4 = uVar4 - 1;
              puVar9[1] = puVar10[1];
            } while (uVar4 != 0);
            lVar3 = *(long *)(lVar11 + 0x10);
          }
          FUN_00404870(*(undefined4 *)puVar1,lVar3);
        }
        *(long *)(lVar11 + 0x10) = lVar2;
        *(uint *)(lVar11 + 0x1c) = uVar12;
      }
      if (uVar5 < uVar12) {
        uVar5 = *(uint *)(lVar11 + 0x18);
        lVar2 = *(long *)(lVar11 + 0x10);
        *(uint *)(lVar11 + 0x18) = uVar5 + 1;
        puVar6 = (ulong *)(lVar2 + (ulong)uVar5 * 0x10);
        if (puVar6 != (ulong *)0x0) {
          *puVar6 = uVar8;
          *(ulong *)(lVar2 + (ulong)uVar5 * 0x10 + 8) = param_2;
        }
      }
    }
  }
  return;
}


