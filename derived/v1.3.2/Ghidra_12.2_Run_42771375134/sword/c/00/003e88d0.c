/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e88d0; name: FUN_003e88d0
 */


void FUN_003e88d0(long param_1,long param_2,uint param_3,long param_4,undefined8 param_5,
                 long *param_6,long param_7)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  int *piVar15;
  ulong uVar16;
  undefined8 *puVar17;
  
  if (param_3 != 0) {
    uVar16 = 0;
    do {
      uVar1 = uVar16 + 1;
      if (uVar1 < param_3) {
        uVar7 = *(ulong *)(param_2 + uVar1 * 8);
        uVar10 = uVar7 >> 6;
        uVar12 = ((ulong)((int)param_4 + 0xb0) - 1) + uVar7;
        lVar9 = (1 - uVar10) + (uVar12 >> 6);
        uVar12 = uVar12 >> 6;
        uVar4 = ((int)uVar12 + 1) - (int)uVar10;
        if ((uVar4 & 7) != 0) {
          lVar13 = -((ulong)uVar4 & 7);
          do {
            Hint_Prefetch(uVar7,0,0,0);
            uVar7 = uVar7 + 0x40;
            lVar9 = lVar9 + -1;
            lVar13 = lVar13 + 1;
          } while (lVar13 != 0);
        }
        if (6 < uVar12 - uVar10) {
          do {
            Hint_Prefetch(uVar7,0,0,0);
            Hint_Prefetch(uVar7 + 0x40,0,0,0);
            lVar9 = lVar9 + -8;
            Hint_Prefetch(uVar7 + 0x80,0,0,0);
            Hint_Prefetch(uVar7 + 0xc0,0,0,0);
            Hint_Prefetch(uVar7 + 0x100,0,0,0);
            Hint_Prefetch(uVar7 + 0x140,0,0,0);
            Hint_Prefetch(uVar7 + 0x180,0,0,0);
            Hint_Prefetch(uVar7 + 0x1c0,0,0,0);
            uVar7 = uVar7 + 0x200;
          } while (lVar9 != 0);
        }
      }
      piVar5 = *(int **)(param_1 + 0x1138);
      lVar9 = *(long *)(piVar5 + 4);
      iVar2 = piVar5[1];
      uVar7 = (ulong)(uint)piVar5[2];
      puVar14 = (undefined8 *)(lVar9 + uVar7 * 0x18 + 8);
      puVar17 = (undefined8 *)*puVar14;
      if (puVar17 == (undefined8 *)0x0) {
        piVar15 = (int *)(lVar9 + uVar7 * 0x18 + 0x10);
        iVar3 = *piVar15;
        if (iVar3 != *piVar5) {
          *piVar15 = iVar3 + 1;
          puVar17 = (undefined8 *)(*(long *)(lVar9 + uVar7 * 0x18) + (ulong)(uint)(iVar3 * iVar2));
          if (puVar17 != (undefined8 *)0x0) goto LAB_003e8a1c;
        }
        puVar17 = (undefined8 *)FUN_003f1aa0();
      }
      else {
        *puVar14 = *puVar17;
      }
LAB_003e8a1c:
      uVar12 = (long)puVar17 + 0x4fU >> 6;
      uVar7 = (1 - ((ulong)puVar17 >> 6)) + uVar12;
      puVar14 = puVar17;
      if ((uVar7 & 7) != 0) {
        lVar9 = -(uVar7 & 7);
        do {
          Hint_Prefetch(puVar14,0,0,0);
          puVar14 = puVar14 + 8;
          uVar7 = uVar7 - 1;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 0);
      }
      if (6 < uVar12 - ((ulong)puVar17 >> 6)) {
        do {
          Hint_Prefetch(puVar14,0,0,0);
          Hint_Prefetch(puVar14 + 8,0,0,0);
          uVar7 = uVar7 - 8;
          Hint_Prefetch(puVar14 + 0x10,0,0,0);
          Hint_Prefetch(puVar14 + 0x18,0,0,0);
          Hint_Prefetch(puVar14 + 0x20,0,0,0);
          Hint_Prefetch(puVar14 + 0x28,0,0,0);
          Hint_Prefetch(puVar14 + 0x30,0,0,0);
          Hint_Prefetch(puVar14 + 0x38,0,0,0);
          puVar14 = puVar14 + 0x40;
        } while (uVar7 != 0);
      }
      lVar9 = *(long *)(param_2 + uVar16 * 8) + param_4;
      FUN_003fc5c0(*param_6,param_5,lVar9);
      lVar13 = *param_6;
      puVar8 = (undefined4 *)
               (*(long *)(*(long *)(param_1 + 0x808) + 8) +
               ((ulong)*(uint *)(lVar13 + 0x18) & 0x1fffffff) * 0x18);
      puVar11 = (undefined4 *)(param_7 + uVar16 * 0x18);
      *puVar11 = *puVar8;
      puVar11[1] = puVar8[1];
      puVar11[2] = puVar8[2];
      puVar11[3] = puVar8[3];
      puVar11[4] = puVar8[4];
      puVar11[5] = puVar8[5];
      (**(code **)(**(long **)(param_1 + 0x760) + 0x20))
                (*(long **)(param_1 + 0x760),lVar13 + 0x20,*(undefined4 *)(lVar13 + 0x48));
      *param_6 = (long)puVar17;
      lVar13 = param_1 + (long)*(int *)(lVar9 + 0x48) * 4;
      *(int *)(lVar13 + 0x1298) = *(int *)(lVar13 + 0x1298) + 1;
      plVar6 = *(long **)(*(long *)(param_1 + 0x720) + 0x6e8);
      (**(code **)(*plVar6 + 0x58))(plVar6,lVar9 + 0x20);
      uVar16 = uVar1;
    } while (uVar1 != param_3);
  }
  return;
}


