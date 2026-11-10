/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060f8a0; name: FUN_0060f8a0
 */


void FUN_0060f8a0(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  
  if ((*(long *)(param_1 + 400) != param_2) || (*(long *)(param_1 + 0x198) != param_4)) {
    iVar10 = *(int *)(param_1 + 8);
    *(long *)(param_1 + 400) = param_2;
    *(long *)(param_1 + 0x198) = param_4;
    if (iVar10 != 0) {
      lVar3 = FUN_00602580((long)*(int *)(param_1 + 0x10),param_2);
      *(long *)(param_1 + 0x18) = lVar3;
      *(ulong *)(param_1 + 0x20) = lVar3 + 0x20U & 0xffffffffffffffc0;
      if (iVar10 != 1) {
        piVar9 = (int *)(param_1 + 0x28);
        iVar10 = 1 - iVar10;
        do {
          lVar4 = FUN_00602580((long)*piVar9,param_2);
          lVar6 = lVar4 - *(long *)(param_1 + 0x18);
          lVar3 = -lVar6;
          if (-1 < lVar6) {
            lVar3 = lVar6;
          }
          lVar6 = *(long *)(param_1 + 0x18);
          if (0x7f < lVar3) {
            lVar6 = lVar4;
          }
          iVar10 = iVar10 + 1;
          *(long *)(piVar9 + 2) = lVar6;
          *(ulong *)(piVar9 + 4) = lVar6 + 0x20U & 0xffffffffffffffc0;
          piVar9 = piVar9 + 6;
        } while (iVar10 != 0);
      }
    }
  }
  if ((*(long *)(param_1 + 0x328) != param_3) || (*(long *)(param_1 + 0x330) != param_5)) {
    iVar10 = *(int *)(param_1 + 0x1a0);
    *(long *)(param_1 + 0x328) = param_3;
    *(long *)(param_1 + 0x330) = param_5;
    if (iVar10 != 0) {
      lVar3 = FUN_00602580((long)*(int *)(param_1 + 0x1a8),param_3);
      *(long *)(param_1 + 0x1b0) = lVar3;
      *(ulong *)(param_1 + 0x1b8) = lVar3 + 0x20U & 0xffffffffffffffc0;
      if (iVar10 != 1) {
        piVar9 = (int *)(param_1 + 0x1c0);
        iVar10 = 1 - iVar10;
        do {
          lVar4 = FUN_00602580((long)*piVar9,param_3);
          lVar6 = lVar4 - *(long *)(param_1 + 0x1b0);
          lVar3 = -lVar6;
          if (-1 < lVar6) {
            lVar3 = lVar6;
          }
          lVar6 = *(long *)(param_1 + 0x1b0);
          if (0x7f < lVar3) {
            lVar6 = lVar4;
          }
          iVar10 = iVar10 + 1;
          *(long *)(piVar9 + 2) = lVar6;
          *(ulong *)(piVar9 + 4) = lVar6 + 0x20U & 0xffffffffffffffc0;
          piVar9 = piVar9 + 6;
        } while (iVar10 != 0);
      }
    }
    if (param_3 < 0x20c49ba) {
      uVar2 = *(uint *)(param_1 + 0xf60);
      *(bool *)(param_1 + 0xf6c) = param_3 * 0x7d < *(long *)(param_1 + 0xf58) * 8;
    }
    else {
      lVar3 = *(ulong *)(param_1 + 0xf58) << 3;
      uVar2 = *(uint *)(param_1 + 0xf60);
      *(bool *)(param_1 + 0xf6c) =
           param_3 < (long)(lVar3 / 0x7d + (lVar3 >> 0x3f) +
                           ((*(ulong *)(param_1 + 0xf58) & 0x1fffffffffffffff) >> 0x3c));
    }
    uVar8 = (ulong)uVar2;
    if (0 < (int)uVar2) {
      uVar7 = (long)(int)uVar2;
      do {
        lVar3 = FUN_00602580(uVar7,param_3);
        uVar8 = uVar7;
        if (lVar3 < 0x21) break;
        uVar8 = uVar7 - 1;
        bVar1 = 0 < (long)uVar7;
        uVar7 = uVar8;
      } while (uVar8 != 0 && bVar1);
    }
    *(int *)(param_1 + 0xf64) = (int)uVar8;
    iVar10 = *(int *)(param_1 + 0x338);
    if (iVar10 != 0) {
      piVar9 = (int *)(param_1 + 0x340);
      do {
        lVar3 = FUN_00602580((long)piVar9[2],param_3);
        *(long *)(piVar9 + 10) = lVar3 + param_5;
        lVar3 = FUN_00602580((long)piVar9[3],param_3);
        *(long *)(piVar9 + 8) = lVar3 + param_5;
        lVar3 = FUN_00602580((long)*piVar9,param_3);
        *(long *)(piVar9 + 4) = lVar3 + param_5;
        uVar5 = FUN_00602580((long)piVar9[1],param_3);
        *(ulong *)(piVar9 + 4) = *(long *)(piVar9 + 4) + 0x20U & 0xffffffffffffffc0;
        *(undefined8 *)(piVar9 + 6) = uVar5;
        iVar10 = iVar10 + -1;
        piVar9 = piVar9 + 0xc;
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(param_1 + 0x640);
    if (iVar10 != 0) {
      piVar9 = (int *)(param_1 + 0x648);
      do {
        lVar3 = FUN_00602580((long)piVar9[2],param_3);
        *(long *)(piVar9 + 10) = lVar3 + param_5;
        lVar3 = FUN_00602580((long)piVar9[3],param_3);
        *(long *)(piVar9 + 8) = lVar3 + param_5;
        lVar3 = FUN_00602580((long)*piVar9,param_3);
        *(long *)(piVar9 + 4) = lVar3 + param_5;
        uVar5 = FUN_00602580((long)piVar9[1],param_3);
        *(ulong *)(piVar9 + 4) = *(long *)(piVar9 + 4) + 0x20U & 0xffffffffffffffc0;
        *(undefined8 *)(piVar9 + 6) = uVar5;
        iVar10 = iVar10 + -1;
        piVar9 = piVar9 + 0xc;
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(param_1 + 0x948);
    if (iVar10 != 0) {
      piVar9 = (int *)(param_1 + 0x950);
      do {
        lVar3 = FUN_00602580((long)piVar9[2],param_3);
        *(long *)(piVar9 + 10) = lVar3 + param_5;
        lVar3 = FUN_00602580((long)piVar9[3],param_3);
        *(long *)(piVar9 + 8) = lVar3 + param_5;
        lVar3 = FUN_00602580((long)*piVar9,param_3);
        *(long *)(piVar9 + 4) = lVar3 + param_5;
        uVar5 = FUN_00602580((long)piVar9[1],param_3);
        *(ulong *)(piVar9 + 4) = *(long *)(piVar9 + 4) + 0x20U & 0xffffffffffffffc0;
        *(undefined8 *)(piVar9 + 6) = uVar5;
        iVar10 = iVar10 + -1;
        piVar9 = piVar9 + 0xc;
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(param_1 + 0xc50);
    if (iVar10 != 0) {
      piVar9 = (int *)(param_1 + 0xc58);
      do {
        lVar3 = FUN_00602580((long)piVar9[2],param_3);
        *(long *)(piVar9 + 10) = lVar3 + param_5;
        lVar3 = FUN_00602580((long)piVar9[3],param_3);
        *(long *)(piVar9 + 8) = lVar3 + param_5;
        lVar3 = FUN_00602580((long)*piVar9,param_3);
        *(long *)(piVar9 + 4) = lVar3 + param_5;
        uVar5 = FUN_00602580((long)piVar9[1],param_3);
        *(ulong *)(piVar9 + 4) = *(long *)(piVar9 + 4) + 0x20U & 0xffffffffffffffc0;
        *(undefined8 *)(piVar9 + 6) = uVar5;
        iVar10 = iVar10 + -1;
        piVar9 = piVar9 + 0xc;
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(param_1 + 0x338);
    if (iVar10 != 0) {
      piVar9 = (int *)(param_1 + 0x340);
      do {
        iVar12 = *(int *)(param_1 + 0x948);
        if (iVar12 != 0) {
          puVar11 = (undefined8 *)(param_1 + 0x978);
          do {
            lVar6 = (long)*piVar9 - (long)*(int *)(puVar11 + -5);
            lVar3 = -lVar6;
            if (-1 < (int)lVar6) {
              lVar3 = lVar6;
            }
            lVar3 = FUN_00602580(lVar3,param_3);
            if (lVar3 < 0x40) {
              *(undefined8 *)(piVar9 + 10) = *puVar11;
              *(undefined8 *)(piVar9 + 8) = puVar11[-1];
              *(undefined8 *)(piVar9 + 4) = puVar11[-3];
              *(undefined8 *)(piVar9 + 6) = puVar11[-2];
              break;
            }
            iVar12 = iVar12 + -1;
            puVar11 = puVar11 + 6;
          } while (iVar12 != 0);
        }
        piVar9 = piVar9 + 0xc;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(param_1 + 0x640);
    if (iVar10 != 0) {
      piVar9 = (int *)(param_1 + 0x648);
LAB_0060fccc:
      do {
        iVar12 = *(int *)(param_1 + 0xc50);
        if (iVar12 != 0) {
          puVar11 = (undefined8 *)(param_1 + 0xc80);
          do {
            lVar6 = (long)*piVar9 - (long)*(int *)(puVar11 + -5);
            lVar3 = -lVar6;
            if (-1 < (int)lVar6) {
              lVar3 = lVar6;
            }
            lVar3 = FUN_00602580(lVar3,param_3);
            if (lVar3 < 0x40) {
              *(undefined8 *)(piVar9 + 10) = *puVar11;
              *(undefined8 *)(piVar9 + 8) = puVar11[-1];
              *(undefined8 *)(piVar9 + 4) = puVar11[-3];
              *(undefined8 *)(piVar9 + 6) = puVar11[-2];
              iVar10 = iVar10 + -1;
              piVar9 = piVar9 + 0xc;
              if (iVar10 == 0) {
                return;
              }
              goto LAB_0060fccc;
            }
            iVar12 = iVar12 + -1;
            puVar11 = puVar11 + 6;
          } while (iVar12 != 0);
        }
        iVar10 = iVar10 + -1;
        piVar9 = piVar9 + 0xc;
      } while (iVar10 != 0);
    }
  }
  return;
}


