/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00465440; name: FUN_00465440
 */


/* WARNING: Removing unreachable block (ram,0x004655ec) */
/* WARNING: Removing unreachable block (ram,0x0046552c) */
/* WARNING: Removing unreachable block (ram,0x004657a0) */

void FUN_00465440(void *param_1,void *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  *(undefined8 *)((long)param_1 + 0xc0) = *(undefined8 *)((long)param_2 + 0xc0);
  *(undefined4 *)((long)param_1 + 200) = *(undefined4 *)((long)param_2 + 200);
  *(undefined8 *)((long)param_1 + 0xd0) = *(undefined8 *)((long)param_2 + 0xd0);
  memcpy(param_1,param_2,0x86);
  *(undefined4 *)((long)param_1 + 0xa8) = *(undefined4 *)((long)param_2 + 0xa8);
  *(undefined8 *)((long)param_1 + 0xa0) = *(undefined8 *)((long)param_2 + 0xa0);
  *(undefined8 *)((long)param_1 + 0x98) = *(undefined8 *)((long)param_2 + 0x98);
  puVar7 = PTR_DAT_02712a90;
  uVar5 = *(uint *)((long)param_2 + 0x90);
  if (uVar5 == 0) goto LAB_00465690;
  if ((*(uint *)((long)param_1 + 0x90) <= uVar5) && (*(uint *)((long)param_1 + 0x94) < uVar5)) {
    uVar1 = *(uint *)((long)param_1 + 0x94) + (uVar5 - *(uint *)((long)param_1 + 0x90));
    puVar8 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar1 * 0x18);
    if (puVar8 == (undefined8 *)0x0) goto LAB_00465690;
    puVar9 = *(undefined8 **)((long)param_1 + 0x88);
    if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar8)) {
      uVar6 = *(uint *)((long)param_1 + 0x90);
      if (uVar6 != 0) {
        puVar8[2] = puVar9[2];
        puVar8[1] = puVar9[1];
        *puVar8 = *puVar9;
        if (uVar6 != 1) {
          if (uVar6 == 2) {
            lVar11 = 1;
          }
          else {
            lVar11 = 1;
            lVar12 = 0;
            do {
              lVar3 = *(long *)((long)param_1 + 0x88) + lVar12;
              *(undefined8 *)((long)puVar8 + lVar12 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
              *(undefined8 *)((long)puVar8 + lVar12 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
              *(undefined8 *)((long)puVar8 + lVar12 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
              lVar3 = *(long *)((long)param_1 + 0x88) + lVar12;
              *(undefined8 *)((long)puVar8 + lVar12 + 0x40) = *(undefined8 *)(lVar3 + 0x40);
              *(undefined8 *)((long)puVar8 + lVar12 + 0x38) = *(undefined8 *)(lVar3 + 0x38);
              lVar11 = lVar11 + 2;
              *(undefined8 *)((long)puVar8 + lVar12 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
              lVar12 = lVar12 + 0x30;
            } while ((ulong)uVar6 - (ulong)(~uVar6 & 1) != lVar11);
            if ((~uVar6 & 1) == 0) goto LAB_004655c0;
          }
          puVar9 = puVar8 + lVar11 * 3;
          puVar2 = (undefined8 *)(*(long *)((long)param_1 + 0x88) + lVar11 * 0x18);
          puVar9[2] = puVar2[2];
          puVar9[1] = puVar2[1];
          *puVar9 = *puVar2;
        }
LAB_004655c0:
        puVar9 = *(undefined8 **)((long)param_1 + 0x88);
      }
      FUN_00404870(*(undefined4 *)puVar7,puVar9);
    }
    *(undefined8 **)((long)param_1 + 0x88) = puVar8;
    *(uint *)((long)param_1 + 0x94) = uVar1;
  }
  *(uint *)((long)param_1 + 0x90) = uVar5;
  if (uVar5 == 1) {
    lVar12 = 0;
  }
  else {
    lVar11 = 0;
    lVar12 = 0;
    do {
      puVar8 = (undefined8 *)(*(long *)((long)param_2 + 0x88) + lVar11);
      puVar9 = (undefined8 *)(*(long *)((long)param_1 + 0x88) + lVar11);
      puVar9[2] = puVar8[2];
      puVar9[1] = puVar8[1];
      *puVar9 = *puVar8;
      lVar3 = *(long *)((long)param_2 + 0x88) + lVar11;
      lVar4 = *(long *)((long)param_1 + 0x88) + lVar11;
      lVar11 = lVar11 + 0x30;
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
      lVar12 = lVar12 + 2;
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
    } while ((ulong)uVar5 - ((ulong)uVar5 & 1) != lVar12);
    if ((uVar5 & 1) == 0) goto LAB_00465690;
  }
  puVar8 = (undefined8 *)(*(long *)((long)param_2 + 0x88) + lVar12 * 0x18);
  puVar9 = (undefined8 *)(*(long *)((long)param_1 + 0x88) + lVar12 * 0x18);
  puVar9[2] = puVar8[2];
  puVar9[1] = puVar8[1];
  *puVar9 = *puVar8;
LAB_00465690:
  puVar7 = PTR_DAT_02712a90;
  uVar5 = *(uint *)((long)param_2 + 0xb8);
  uVar13 = (ulong)uVar5;
  if (uVar5 != 0) {
    uVar1 = *(uint *)((long)param_1 + 0xb8);
    if (uVar1 <= uVar5) {
      if (*(uint *)((long)param_1 + 0xbc) < uVar5) {
        uVar6 = *(uint *)((long)param_1 + 0xbc) + (uVar5 - uVar1);
        lVar11 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar6 << 5);
        if (lVar11 == 0) {
          return;
        }
        lVar12 = *(long *)((long)param_1 + 0xb0);
        if ((lVar12 != 0) && (lVar12 != lVar11)) {
          uVar10 = (ulong)*(uint *)((long)param_1 + 0xb8);
          if (*(uint *)((long)param_1 + 0xb8) != 0) {
            lVar12 = 0;
            do {
              puVar8 = (undefined8 *)(lVar11 + lVar12);
              if (puVar8 != (undefined8 *)0x0) {
                *puVar8 = 0;
                puVar8[1] = 0;
                *(undefined8 *)(lVar11 + lVar12 + 0x10) = 1;
                *(undefined8 *)(lVar11 + lVar12 + 0x18) = 0;
              }
              puVar9 = (undefined8 *)(*(long *)((long)param_1 + 0xb0) + lVar12);
              lVar12 = lVar12 + 0x20;
              puVar8[3] = puVar9[3];
              puVar8[2] = puVar9[2];
              puVar8[1] = puVar9[1];
              uVar10 = uVar10 - 1;
              *puVar8 = *puVar9;
            } while (uVar10 != 0);
            lVar12 = *(long *)((long)param_1 + 0xb0);
          }
          FUN_00404870(*(undefined4 *)puVar7,lVar12);
        }
        *(long *)((long)param_1 + 0xb0) = lVar11;
        *(uint *)((long)param_1 + 0xbc) = uVar6;
      }
      if (uVar1 < uVar5) {
        lVar12 = uVar13 - uVar1;
        lVar11 = (ulong)uVar1 << 5;
        do {
          if (*(long *)((long)param_1 + 0xb0) + lVar11 != 0) {
            puVar8 = (undefined8 *)(*(long *)((long)param_1 + 0xb0) + lVar11);
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 1;
            puVar8[3] = 0;
          }
          lVar12 = lVar12 + -1;
          lVar11 = lVar11 + 0x20;
        } while (lVar12 != 0);
      }
    }
    *(uint *)((long)param_1 + 0xb8) = uVar5;
    if (uVar5 == 1) {
      lVar12 = 0;
    }
    else {
      lVar11 = 0;
      lVar12 = 0;
      do {
        puVar8 = (undefined8 *)(*(long *)((long)param_2 + 0xb0) + lVar11);
        puVar9 = (undefined8 *)(*(long *)((long)param_1 + 0xb0) + lVar11);
        puVar9[3] = puVar8[3];
        puVar9[2] = puVar8[2];
        puVar9[1] = puVar8[1];
        *puVar9 = *puVar8;
        lVar3 = *(long *)((long)param_2 + 0xb0) + lVar11;
        lVar4 = *(long *)((long)param_1 + 0xb0) + lVar11;
        lVar11 = lVar11 + 0x40;
        *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar3 + 0x38);
        *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
        *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
        lVar12 = lVar12 + 2;
        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
      } while (uVar13 - (uVar13 & 1) != lVar12);
      if ((uVar5 & 1) == 0) {
        return;
      }
    }
    puVar8 = (undefined8 *)(*(long *)((long)param_2 + 0xb0) + lVar12 * 0x20);
    puVar9 = (undefined8 *)(*(long *)((long)param_1 + 0xb0) + lVar12 * 0x20);
    puVar9[3] = puVar8[3];
    puVar9[2] = puVar8[2];
    puVar9[1] = puVar8[1];
    *puVar9 = *puVar8;
  }
  return;
}


