/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00137e10; name: FUN_00137e10
 */


/* WARNING: Removing unreachable block (ram,0x00137e78) */
/* WARNING: Removing unreachable block (ram,0x00137ee4) */

void FUN_00137e10(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulong uVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar5 = (ulong)uVar4;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(uint *)((long)param_1 + 0xc4) != uVar4) {
    *(undefined1 *)((long)param_1 + 0x119) = 1;
  }
  if (*(int *)((long)param_1 + 0x94) == 0) goto LAB_00137ff0;
  puVar16 = (undefined4 *)param_1[0x14];
  lVar15 = param_1[0x17];
  uVar7 = *(int *)((long)param_1 + 0x94) - uVar4;
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      puVar11 = puVar16;
      do {
        puVar3 = (undefined4 *)(lVar15 + lVar10 * 4);
        lVar10 = lVar10 + 2;
        *puVar3 = *puVar11;
        puVar1 = puVar11 + 6;
        puVar11 = puVar11 + 0xc;
        puVar3[1] = *puVar1;
      } while (uVar5 - (uVar5 & 1) != lVar10);
      if ((uVar4 & 1) == 0) goto LAB_00137ec0;
    }
    *(undefined4 *)(lVar15 + lVar10 * 4) = puVar16[lVar10 * 6];
  }
LAB_00137ec0:
  cVar6 = *(char *)((long)param_1 + 0x119);
  if ((uVar7 != 0) && (cVar6 != '\0')) {
    if (uVar7 == 1) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      do {
        uVar8 = uVar5 + lVar10;
        lVar10 = lVar10 + 2;
        uVar2 = (int)uVar8 + 1;
        *(undefined4 *)(lVar15 + (uVar8 & 0xffffffff) * 4) = puVar16[(uVar8 & 0xffffffff) * 6];
        *(undefined4 *)(lVar15 + (ulong)uVar2 * 4) = puVar16[(ulong)uVar2 * 6];
      } while ((ulong)uVar7 - ((ulong)uVar7 & 1) != lVar10);
      if ((uVar7 & 1) == 0) goto LAB_00137f3c;
    }
    uVar2 = uVar4 + (int)lVar10;
    *(undefined4 *)(lVar15 + (ulong)uVar2 * 4) = puVar16[(ulong)uVar2 * 6];
  }
LAB_00137f3c:
  *(uint *)(param_1 + 0x18) = uVar4;
  if (uVar4 != 0) {
    *(uint *)((long)param_1 + 0xc4) = uVar4;
    if (uVar7 == 0) {
      puVar17 = (undefined8 *)0x0;
      lVar10 = 0;
      *(undefined1 *)((long)param_1 + 0x119) = 1;
    }
    else if (cVar6 == '\0') {
      puVar17 = *(undefined8 **)(param_2 + 0x3210);
      lVar10 = *(long *)(param_2 + 0x3208);
    }
    else {
      lVar10 = FUN_002d4750(param_1 + 0x1b,lVar15 + uVar5 * 4,uVar7,1);
      lVar18 = *(long *)(lVar10 + 0x10);
      FUN_00137bd0(param_2,uVar7,2);
      puVar17 = *(undefined8 **)(param_2 + 0x3210);
      lVar10 = *(long *)(param_2 + 0x3208);
      uVar8 = 0;
      puVar12 = puVar17;
      do {
        uVar2 = *(int *)(lVar18 + uVar8 * 4) + uVar4;
        puVar9 = (undefined8 *)(puVar16 + (ulong)uVar2 * 6);
        puVar12[2] = puVar9[2];
        puVar12[1] = puVar9[1];
        *puVar12 = *puVar9;
        *(undefined2 *)(lVar10 + uVar8 * 2) = *(undefined2 *)(param_1[0x16] + (ulong)uVar2 * 2);
        uVar8 = uVar8 + 1;
        puVar12 = puVar12 + 3;
      } while (uVar7 != uVar8);
      *(undefined4 *)(puVar17 + (ulong)uVar7 * 3) = 0xffffffff;
      *(undefined4 *)(puVar17 + (ulong)(uVar7 + 1) * 3) = 0xffffffff;
      *(undefined1 *)((long)param_1 + 0x119) = 0;
    }
    lVar15 = FUN_002d4750(param_1 + 0x1b,lVar15,uVar4,1);
    lVar18 = *(long *)(lVar15 + 0x10);
    FUN_00137d20(param_2,uVar4,2);
    puVar9 = *(undefined8 **)(param_2 + 0x3218);
    lVar15 = param_1[0x1e];
    uVar8 = 0;
    puVar12 = puVar9;
    do {
      uVar13 = (ulong)*(uint *)(lVar18 + uVar8 * 4);
      puVar14 = (undefined8 *)(puVar16 + uVar13 * 6);
      puVar12[2] = puVar14[2];
      puVar12[1] = puVar14[1];
      *puVar12 = *puVar14;
      *(undefined2 *)(lVar15 + uVar8 * 2) = *(undefined2 *)(param_1[0x16] + uVar13 * 2);
      uVar8 = uVar8 + 1;
      puVar12 = puVar12 + 3;
    } while (uVar5 != uVar8);
    *(undefined4 *)(puVar9 + uVar5 * 3) = 0xffffffff;
    *(undefined4 *)(puVar9 + (ulong)(uVar4 + 1) * 3) = 0xffffffff;
    param_1[2] = puVar17;
    param_1[3] = lVar15;
    *param_1 = param_1[0x10];
    param_1[1] = puVar9;
    param_1[4] = lVar10;
    *(uint *)(param_1 + 5) = uVar4;
    *(uint *)((long)param_1 + 0x2c) = uVar7;
    *(undefined1 *)(param_1 + 6) = 1;
    return;
  }
LAB_00137ff0:
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0;
  *(undefined1 *)((long)param_1 + 0x119) = 1;
  return;
}


