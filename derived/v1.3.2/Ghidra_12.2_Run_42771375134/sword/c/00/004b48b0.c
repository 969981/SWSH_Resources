/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b48b0; name: FUN_004b48b0
 */


/* WARNING: Removing unreachable block (ram,0x004b4a78) */
/* WARNING: Removing unreachable block (ram,0x004b4b14) */

undefined8
FUN_004b48b0(undefined8 *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  
  piVar9 = (int *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  piVar11 = piVar9;
  if (uVar3 != 0) {
    lVar13 = (ulong)uVar3 << 4;
    while( true ) {
      if (*piVar11 == param_2) break;
      lVar13 = lVar13 + -0x10;
      piVar11 = piVar11 + 4;
      if (lVar13 == 0) {
        return 0x14;
      }
    }
  }
  if (piVar11 == piVar9 + (ulong)uVar3 * 4) {
    return 0x14;
  }
  lVar13 = *(long *)(piVar11 + 2);
  piVar10 = *(int **)(lVar13 + 0x10);
  uVar3 = *(uint *)(lVar13 + 0x18);
  piVar9 = piVar10;
  if (uVar3 != 0) {
    lVar14 = (ulong)uVar3 * 0xc;
    do {
      if ((*piVar9 == param_3) && (piVar9[1] == param_4)) goto LAB_004b4994;
      lVar14 = lVar14 + -0xc;
      piVar9 = piVar9 + 3;
    } while (lVar14 != 0);
LAB_004b49fc:
    uVar15 = *(uint *)(lVar13 + 0x1c);
    if (uVar3 < uVar15) {
LAB_004b4bb0:
      if (uVar3 < uVar15) {
        uVar3 = *(uint *)(lVar13 + 0x18);
        lVar14 = *(long *)(lVar13 + 0x10);
        *(uint *)(lVar13 + 0x18) = uVar3 + 1;
        puVar6 = (undefined8 *)(lVar14 + (ulong)uVar3 * 0xc);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = CONCAT44(param_4,param_3);
          *(int *)(lVar14 + (ulong)uVar3 * 0xc + 8) = param_5;
          if ((param_6 & 1) != 0) goto LAB_004b49b0;
          goto LAB_004b4cc0;
        }
      }
    }
    else {
      uVar15 = uVar15 + 1;
      puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar15 * 0xc);
      if (puVar6 != (undefined8 *)0x0) {
        puVar8 = *(undefined8 **)(lVar13 + 0x10);
        if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar6)) {
          uVar4 = *(uint *)(lVar13 + 0x18);
          if (uVar4 != 0) {
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar8 + 1);
            *puVar6 = *puVar8;
            if (uVar4 != 1) {
              if (uVar4 == 2) {
                lVar14 = 1;
              }
              else {
                lVar14 = 1;
                lVar12 = 0;
                do {
                  lVar1 = *(long *)(lVar13 + 0x10) + lVar12;
                  *(undefined4 *)((long)puVar6 + lVar12 + 0x14) = *(undefined4 *)(lVar1 + 0x14);
                  *(undefined8 *)((long)puVar6 + lVar12 + 0xc) = *(undefined8 *)(lVar1 + 0xc);
                  lVar1 = *(long *)(lVar13 + 0x10) + lVar12;
                  *(undefined4 *)((long)puVar6 + lVar12 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
                  lVar14 = lVar14 + 2;
                  *(undefined8 *)((long)puVar6 + lVar12 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
                  lVar12 = lVar12 + 0x18;
                } while ((ulong)uVar4 - (ulong)(~uVar4 & 1) != lVar14);
                if ((~uVar4 & 1) == 0) goto LAB_004b4b90;
              }
              puVar8 = (undefined8 *)((long)puVar6 + lVar14 * 0xc);
              puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x10) + lVar14 * 0xc);
              *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar2 + 1);
              *puVar8 = *puVar2;
            }
LAB_004b4b90:
            puVar8 = *(undefined8 **)(lVar13 + 0x10);
          }
          FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar8);
        }
        *(undefined8 **)(lVar13 + 0x10) = puVar6;
        *(uint *)(lVar13 + 0x1c) = uVar15;
        goto LAB_004b4bb0;
      }
    }
    goto LAB_004b4cc8;
  }
LAB_004b4994:
  if (piVar9 == piVar10 + (ulong)uVar3 * 3) goto LAB_004b49fc;
  piVar9[2] = param_5;
  if ((param_6 & 1) == 0) {
LAB_004b4cc0:
    uVar7 = 1;
  }
  else {
LAB_004b49b0:
    puVar5 = PTR_DAT_02712a90;
    lVar13 = *(long *)(piVar11 + 2);
    piVar9 = *(int **)(lVar13 + 0x10);
    uVar3 = *(uint *)(lVar13 + 0x18);
    piVar11 = piVar9;
    if (uVar3 == 0) {
LAB_004b4a80:
      if (piVar11 != piVar9 + (ulong)uVar3 * 3) {
        piVar11[2] = param_5;
        goto LAB_004b4cc0;
      }
    }
    else {
      lVar14 = (ulong)uVar3 * 0xc;
      do {
        if ((*piVar11 == param_4) && (piVar11[1] == param_3)) goto LAB_004b4a80;
        lVar14 = lVar14 + -0xc;
        piVar11 = piVar11 + 3;
      } while (lVar14 != 0);
    }
    uVar15 = *(uint *)(lVar13 + 0x1c);
    if (uVar15 <= uVar3) {
      uVar15 = uVar15 + 1;
      puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar15 * 0xc);
      if (puVar6 == (undefined8 *)0x0) goto LAB_004b4cc8;
      puVar8 = *(undefined8 **)(lVar13 + 0x10);
      if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar6)) {
        uVar4 = *(uint *)(lVar13 + 0x18);
        if (uVar4 != 0) {
          *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar8 + 1);
          *puVar6 = *puVar8;
          if (uVar4 != 1) {
            if (uVar4 == 2) {
              lVar14 = 1;
            }
            else {
              lVar14 = 1;
              lVar12 = 0;
              do {
                lVar1 = *(long *)(lVar13 + 0x10) + lVar12;
                *(undefined4 *)((long)puVar6 + lVar12 + 0x14) = *(undefined4 *)(lVar1 + 0x14);
                *(undefined8 *)((long)puVar6 + lVar12 + 0xc) = *(undefined8 *)(lVar1 + 0xc);
                lVar1 = *(long *)(lVar13 + 0x10) + lVar12;
                *(undefined4 *)((long)puVar6 + lVar12 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
                lVar14 = lVar14 + 2;
                *(undefined8 *)((long)puVar6 + lVar12 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
                lVar12 = lVar12 + 0x18;
              } while ((ulong)uVar4 - (ulong)(~uVar4 & 1) != lVar14);
              if ((~uVar4 & 1) == 0) goto LAB_004b4c70;
            }
            puVar8 = (undefined8 *)((long)puVar6 + lVar14 * 0xc);
            puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x10) + lVar14 * 0xc);
            *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar2 + 1);
            *puVar8 = *puVar2;
          }
LAB_004b4c70:
          puVar8 = *(undefined8 **)(lVar13 + 0x10);
        }
        FUN_00404870(*(undefined4 *)puVar5,puVar8);
      }
      *(undefined8 **)(lVar13 + 0x10) = puVar6;
      *(uint *)(lVar13 + 0x1c) = uVar15;
    }
    if (uVar3 < uVar15) {
      uVar3 = *(uint *)(lVar13 + 0x18);
      lVar14 = *(long *)(lVar13 + 0x10);
      *(uint *)(lVar13 + 0x18) = uVar3 + 1;
      puVar6 = (undefined8 *)(lVar14 + (ulong)uVar3 * 0xc);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = CONCAT44(param_3,param_4);
        *(int *)(lVar14 + (ulong)uVar3 * 0xc + 8) = param_5;
        goto LAB_004b4cc0;
      }
    }
LAB_004b4cc8:
    uVar7 = 2;
  }
  return uVar7;
}


