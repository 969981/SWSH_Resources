/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00498f70; name: FUN_00498f70
 */


/* WARNING: Removing unreachable block (ram,0x00499084) */

undefined4 FUN_00498f70(undefined8 param_1,long param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  uint uVar14;
  
  if (param_2 == 0) {
LAB_00498fe0:
    return 2;
  }
  lVar6 = FUN_00499180(param_2);
  puVar5 = PTR_DAT_02712a90;
  if (lVar6 == 0) goto LAB_00498fe0;
  piVar10 = *(int **)(lVar6 + 0x20);
  uVar3 = *(uint *)(lVar6 + 0x28);
  piVar13 = piVar10;
  if (uVar3 == 0) {
LAB_00498fec:
    if (piVar13 != piVar10 + (ulong)uVar3 * 3) {
      piVar13 = piVar13 + 1;
      *(undefined8 *)piVar13 = *param_4;
      goto LAB_00499154;
    }
  }
  else {
    lVar11 = (ulong)uVar3 * 0xc;
    do {
      if (*piVar13 == param_3) goto LAB_00498fec;
      lVar11 = lVar11 + -0xc;
      piVar13 = piVar13 + 3;
    } while (lVar11 != 0);
  }
  uVar14 = *(uint *)(lVar6 + 0x2c);
  if (uVar3 < uVar14) {
LAB_00499114:
    if (uVar3 < uVar14) {
      uVar3 = *(uint *)(lVar6 + 0x28);
      lVar11 = *(long *)(lVar6 + 0x20);
      *(uint *)(lVar6 + 0x28) = uVar3 + 1;
      piVar13 = (int *)(lVar11 + (ulong)uVar3 * 0xc);
      if (piVar13 != (int *)0x0) {
        *piVar13 = param_3;
        piVar13 = (int *)(lVar11 + (ulong)uVar3 * 0xc + 4);
        *(undefined8 *)piVar13 = *param_4;
        goto LAB_00499154;
      }
    }
  }
  else {
    uVar14 = uVar14 + 1;
    puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar14 * 0xc);
    if (puVar7 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)(lVar6 + 0x20);
      if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar7)) {
        uVar4 = *(uint *)(lVar6 + 0x28);
        if (uVar4 != 0) {
          *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
          *puVar7 = *puVar8;
          if (uVar4 != 1) {
            if (uVar4 == 2) {
              lVar11 = 1;
            }
            else {
              lVar11 = 1;
              lVar12 = 0;
              do {
                lVar1 = *(long *)(lVar6 + 0x20) + lVar12;
                *(undefined4 *)((long)puVar7 + lVar12 + 0x14) = *(undefined4 *)(lVar1 + 0x14);
                *(undefined8 *)((long)puVar7 + lVar12 + 0xc) = *(undefined8 *)(lVar1 + 0xc);
                lVar1 = *(long *)(lVar6 + 0x20) + lVar12;
                *(undefined4 *)((long)puVar7 + lVar12 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
                lVar11 = lVar11 + 2;
                *(undefined8 *)((long)puVar7 + lVar12 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
                lVar12 = lVar12 + 0x18;
              } while ((ulong)uVar4 - (ulong)(~uVar4 & 1) != lVar11);
              if ((~uVar4 & 1) == 0) goto LAB_00499100;
            }
            puVar8 = (undefined8 *)((long)puVar7 + lVar11 * 0xc);
            puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x20) + lVar11 * 0xc);
            *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar2 + 1);
            *puVar8 = *puVar2;
          }
LAB_00499100:
          puVar8 = *(undefined8 **)(lVar6 + 0x20);
        }
        FUN_00404870(*(undefined4 *)puVar5,puVar8);
      }
      *(undefined8 **)(lVar6 + 0x20) = puVar7;
      *(uint *)(lVar6 + 0x2c) = uVar14;
      goto LAB_00499114;
    }
  }
  piVar13 = (int *)0x0;
LAB_00499154:
  uVar9 = 1;
  if (piVar13 == (int *)0x0) {
    uVar9 = 2;
  }
  return uVar9;
}


