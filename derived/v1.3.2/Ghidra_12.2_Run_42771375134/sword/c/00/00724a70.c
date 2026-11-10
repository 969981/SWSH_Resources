/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00724a70; name: FUN_00724a70
 */


void FUN_00724a70(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  undefined8 local_60;
  uint local_54;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  
  local_50 = 0x40;
  local_60 = *(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10);
  local_54 = param_2;
  lVar12 = FUN_00723880(auStack_48,*(undefined8 *)(param_1 + 8),&local_50,&local_54,&local_60);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x358) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x358) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x358) = 0;
  }
  *(long *)(param_1 + 0x358) = lVar12;
  *(undefined4 *)(lVar12 + 0x138) = 0;
  puVar11 = PTR_DAT_02710460;
  FUN_006f6a10(*(undefined8 *)PTR_DAT_02710460,lVar12);
  lVar21 = lVar12 + 0x58;
  puVar13 = (undefined8 *)thunk_FUN_0199c7e0(lVar21);
  if (param_2 == 0) {
    thunk_FUN_0199c800(lVar21);
    lVar12 = *(long *)(param_1 + 0x358);
    *(undefined4 *)(lVar12 + 0x138) = 1;
    FUN_006f6a10(*(undefined8 *)puVar11,lVar12);
    lVar12 = lVar12 + 200;
    thunk_FUN_0199c7e0(lVar12);
  }
  else {
    uVar1 = param_2 & 3;
    if (2 < param_2 - 1) {
      iVar15 = uVar1 - param_2;
      uVar2 = *(undefined8 *)PTR_DAT_027159c0;
      uVar6 = *(undefined8 *)(PTR_DAT_027159c0 + 8);
      uVar3 = *(undefined8 *)(PTR_DAT_027159c0 + 0x10);
      uVar7 = *(undefined8 *)(PTR_DAT_027159c0 + 0x18);
      uVar4 = *(undefined8 *)(PTR_DAT_027159c0 + 0x20);
      uVar8 = *(undefined8 *)(PTR_DAT_027159c0 + 0x28);
      uVar5 = *(undefined8 *)(PTR_DAT_027159c0 + 0x30);
      uVar9 = *(undefined8 *)(PTR_DAT_027159c0 + 0x38);
      do {
        puVar13[2] = uVar3;
        puVar13[3] = uVar7;
        iVar15 = iVar15 + 4;
        *puVar13 = uVar2;
        puVar13[1] = uVar6;
        puVar13[6] = uVar5;
        puVar13[7] = uVar9;
        puVar13[4] = uVar4;
        puVar13[5] = uVar8;
        puVar13 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar12 + 0xc0));
        puVar13[2] = uVar3;
        puVar13[3] = uVar7;
        *puVar13 = uVar2;
        puVar13[1] = uVar6;
        puVar13[6] = uVar5;
        puVar13[7] = uVar9;
        puVar13[4] = uVar4;
        puVar13[5] = uVar8;
        puVar13 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar12 + 0xc0));
        puVar13[2] = uVar3;
        puVar13[3] = uVar7;
        *puVar13 = uVar2;
        puVar13[1] = uVar6;
        puVar13[6] = uVar5;
        puVar13[7] = uVar9;
        puVar13[4] = uVar4;
        puVar13[5] = uVar8;
        puVar13 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar12 + 0xc0));
        puVar13[2] = uVar3;
        puVar13[3] = uVar7;
        *puVar13 = uVar2;
        puVar13[1] = uVar6;
        puVar13[6] = uVar5;
        puVar13[7] = uVar9;
        puVar13[4] = uVar4;
        puVar13[5] = uVar8;
        puVar13 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar12 + 0xc0));
      } while (iVar15 != 0);
    }
    if (uVar1 != 0) {
      iVar15 = -uVar1;
      uVar2 = *(undefined8 *)PTR_DAT_027159c0;
      uVar6 = *(undefined8 *)(PTR_DAT_027159c0 + 8);
      uVar3 = *(undefined8 *)(PTR_DAT_027159c0 + 0x10);
      uVar7 = *(undefined8 *)(PTR_DAT_027159c0 + 0x18);
      uVar4 = *(undefined8 *)(PTR_DAT_027159c0 + 0x20);
      uVar8 = *(undefined8 *)(PTR_DAT_027159c0 + 0x28);
      uVar5 = *(undefined8 *)(PTR_DAT_027159c0 + 0x30);
      uVar9 = *(undefined8 *)(PTR_DAT_027159c0 + 0x38);
      do {
        puVar13[2] = uVar3;
        puVar13[3] = uVar7;
        iVar15 = iVar15 + 1;
        *puVar13 = uVar2;
        puVar13[1] = uVar6;
        puVar13[6] = uVar5;
        puVar13[7] = uVar9;
        puVar13[4] = uVar4;
        puVar13[5] = uVar8;
        puVar13 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar12 + 0xc0));
      } while (iVar15 != 0);
    }
    thunk_FUN_0199c800(lVar21);
    lVar21 = *(long *)(param_1 + 0x358);
    *(undefined4 *)(lVar21 + 0x138) = 1;
    FUN_006f6a10(*(undefined8 *)puVar11,lVar21);
    lVar12 = lVar21 + 200;
    puVar13 = (undefined8 *)thunk_FUN_0199c7e0(lVar12);
    uVar1 = param_2 & 3;
    if (2 < param_2 - 1) {
      iVar15 = uVar1 - param_2;
      uVar2 = *(undefined8 *)PTR_DAT_027159c0;
      uVar6 = *(undefined8 *)(PTR_DAT_027159c0 + 8);
      uVar3 = *(undefined8 *)(PTR_DAT_027159c0 + 0x10);
      uVar7 = *(undefined8 *)(PTR_DAT_027159c0 + 0x18);
      uVar4 = *(undefined8 *)(PTR_DAT_027159c0 + 0x20);
      uVar8 = *(undefined8 *)(PTR_DAT_027159c0 + 0x28);
      uVar5 = *(undefined8 *)(PTR_DAT_027159c0 + 0x30);
      uVar9 = *(undefined8 *)(PTR_DAT_027159c0 + 0x38);
      do {
        puVar13[2] = uVar3;
        puVar13[3] = uVar7;
        iVar15 = iVar15 + 4;
        *puVar13 = uVar2;
        puVar13[1] = uVar6;
        puVar13[6] = uVar5;
        puVar13[7] = uVar9;
        puVar13[4] = uVar4;
        puVar13[5] = uVar8;
        puVar13 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar21 + 0x130));
        puVar13[2] = uVar3;
        puVar13[3] = uVar7;
        *puVar13 = uVar2;
        puVar13[1] = uVar6;
        puVar13[6] = uVar5;
        puVar13[7] = uVar9;
        puVar13[4] = uVar4;
        puVar13[5] = uVar8;
        puVar13 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar21 + 0x130));
        puVar13[2] = uVar3;
        puVar13[3] = uVar7;
        *puVar13 = uVar2;
        puVar13[1] = uVar6;
        puVar13[6] = uVar5;
        puVar13[7] = uVar9;
        puVar13[4] = uVar4;
        puVar13[5] = uVar8;
        puVar13 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar21 + 0x130));
        puVar13[2] = uVar3;
        puVar13[3] = uVar7;
        *puVar13 = uVar2;
        puVar13[1] = uVar6;
        puVar13[6] = uVar5;
        puVar13[7] = uVar9;
        puVar13[4] = uVar4;
        puVar13[5] = uVar8;
        puVar13 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar21 + 0x130));
      } while (iVar15 != 0);
    }
    if (uVar1 != 0) {
      iVar15 = -uVar1;
      uVar2 = *(undefined8 *)PTR_DAT_027159c0;
      uVar6 = *(undefined8 *)(PTR_DAT_027159c0 + 8);
      uVar3 = *(undefined8 *)(PTR_DAT_027159c0 + 0x10);
      uVar7 = *(undefined8 *)(PTR_DAT_027159c0 + 0x18);
      uVar4 = *(undefined8 *)(PTR_DAT_027159c0 + 0x20);
      uVar8 = *(undefined8 *)(PTR_DAT_027159c0 + 0x28);
      uVar5 = *(undefined8 *)(PTR_DAT_027159c0 + 0x30);
      uVar9 = *(undefined8 *)(PTR_DAT_027159c0 + 0x38);
      do {
        puVar13[2] = uVar3;
        puVar13[3] = uVar7;
        iVar15 = iVar15 + 1;
        *puVar13 = uVar2;
        puVar13[1] = uVar6;
        puVar13[6] = uVar5;
        puVar13[7] = uVar9;
        puVar13[4] = uVar4;
        puVar13[5] = uVar8;
        puVar13 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar21 + 0x130));
      } while (iVar15 != 0);
    }
  }
  thunk_FUN_0199c800(lVar12);
  lVar12 = *(long *)(param_1 + 0x478);
  lVar21 = *(long *)(param_1 + 0x470);
  uVar18 = (ulong)param_2;
  uVar19 = lVar12 - lVar21 >> 6;
  if (uVar19 < uVar18) {
    FUN_00728ab0(param_1 + 0x470,uVar18 - uVar19);
    lVar21 = *(long *)(param_1 + 0x470);
    if (*(long *)(param_1 + 0x478) == lVar21) goto LAB_00724dd4;
  }
  else {
    if (uVar19 != uVar18) {
      lVar12 = lVar21 + uVar18 * 0x40;
      *(long *)(param_1 + 0x478) = lVar12;
    }
    if (lVar12 == lVar21) goto LAB_00724dd4;
  }
  uVar2 = *(undefined8 *)PTR_DAT_02715410;
  uVar6 = *(undefined8 *)(PTR_DAT_02715410 + 8);
  uVar3 = *(undefined8 *)(PTR_DAT_02715410 + 0x10);
  uVar7 = *(undefined8 *)(PTR_DAT_02715410 + 0x18);
  uVar4 = *(undefined8 *)(PTR_DAT_02715410 + 0x20);
  uVar8 = *(undefined8 *)(PTR_DAT_02715410 + 0x28);
  uVar5 = *(undefined8 *)(PTR_DAT_02715410 + 0x30);
  uVar9 = *(undefined8 *)(PTR_DAT_02715410 + 0x38);
  uVar18 = 1;
  uVar19 = 0;
  do {
    uVar16 = uVar18;
    puVar13 = (undefined8 *)(lVar21 + uVar19 * 0x40);
    puVar13[2] = uVar3;
    puVar13[3] = uVar7;
    *puVar13 = uVar2;
    puVar13[1] = uVar6;
    puVar13[6] = uVar5;
    puVar13[7] = uVar9;
    puVar13[4] = uVar4;
    puVar13[5] = uVar8;
    lVar21 = *(long *)(param_1 + 0x470);
    uVar18 = (ulong)((int)uVar16 + 1);
    uVar19 = uVar16;
  } while (uVar16 < (ulong)(*(long *)(param_1 + 0x478) - lVar21 >> 6));
LAB_00724dd4:
  plVar14 = *(long **)(param_1 + 0x368);
  plVar17 = *(long **)(param_1 + 0x370);
  do {
    if (plVar14 == plVar17) {
      *(ulong *)(param_1 + 0x4e0) = *(ulong *)(param_1 + 0x4e0) | 2;
      return;
    }
    plVar20 = (long *)*plVar14;
    plVar10 = (long *)plVar14[1];
    if (plVar20 != plVar10) {
      uVar18 = (long)plVar10 + (-8 - (long)plVar20);
      if (((uint)uVar18 >> 3 & 1) == 0) {
        if (*(uint *)(*plVar20 + 0x1dc) != param_2) {
          *(uint *)(*plVar20 + 0x1dc) = param_2;
          *(undefined1 *)(*plVar20 + 0x1d8) = 1;
        }
        plVar20 = plVar20 + 1;
      }
      if (7 < uVar18) {
        do {
          while (*(uint *)(*plVar20 + 0x1dc) != param_2) {
            *(uint *)(*plVar20 + 0x1dc) = param_2;
            *(undefined1 *)(*plVar20 + 0x1d8) = 1;
            lVar12 = plVar20[1];
            if (*(uint *)(lVar12 + 0x1dc) == param_2) goto LAB_00724e48;
LAB_00724e74:
            *(uint *)(lVar12 + 0x1dc) = param_2;
            *(undefined1 *)(plVar20[1] + 0x1d8) = 1;
            plVar20 = plVar20 + 2;
            if (plVar10 == plVar20) goto LAB_00724e8c;
          }
          lVar12 = plVar20[1];
          if (*(uint *)(lVar12 + 0x1dc) != param_2) goto LAB_00724e74;
LAB_00724e48:
          plVar20 = plVar20 + 2;
        } while (plVar10 != plVar20);
      }
    }
LAB_00724e8c:
    plVar14 = plVar14 + 9;
  } while( true );
}


