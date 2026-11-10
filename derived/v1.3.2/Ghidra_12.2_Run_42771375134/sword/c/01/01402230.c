/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01402230; name: FUN_01402230
 */


void FUN_01402230(long param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar7;
  int *piVar8;
  long lVar9;
  undefined8 *puVar10;
  
  iVar5 = *(int *)(param_1 + 0x550) + 1;
  iVar2 = *(int *)(param_1 + 0x554);
  *(int *)(param_1 + 0x550) = iVar5;
  if (0 < iVar2 && iVar5 % 3 == 0) {
    piVar8 = (int *)(param_1 + 0x98);
    uVar7 = 2;
    if (*piVar8 == 0) {
      uVar7 = 1;
    }
    uVar1 = (uint)(*piVar8 != 0);
    if (*(int *)(param_1 + 0x9c) != 0) {
      uVar1 = uVar7;
    }
    if (*(int *)(param_1 + 0xa0) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xa4) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xa8) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xac) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xb0) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xb4) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xb8) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      uVar1 = uVar1 + 1;
    }
    FUN_013fd140(*(undefined8 *)(param_1 + 0x88),uVar1,*(undefined4 *)(param_1 + 0xc0));
    uVar7 = 2;
    if (*piVar8 == 0) {
      uVar7 = 1;
    }
    uVar1 = (uint)(*piVar8 != 0);
    if (*(int *)(param_1 + 0x9c) != 0) {
      uVar1 = uVar7;
    }
    if (*(int *)(param_1 + 0xa0) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xa4) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xa8) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xac) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xb0) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xb4) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xb8) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      uVar1 = uVar1 + 1;
    }
    piVar8[uVar1] = *(int *)(param_1 + 0xc0);
    iVar2 = *(int *)(param_1 + 0x554) + -1;
    *(int *)(param_1 + 0x554) = iVar2;
  }
  if (iVar2 == 0) {
    FUN_008c61d0(*(undefined8 *)(param_1 + 0x78),1);
    FUN_013ff9c0(param_1);
    FUN_016bfe70(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x5e8));
    lVar9 = *(long *)(param_1 + 0x80);
    uVar4 = FUN_008c83c0(*(undefined8 *)(param_1 + 0x78));
    *(undefined4 *)(lVar9 + 0x644) = uVar4;
    if (*(code **)(param_1 + 0x450) == (code *)0x0) {
      bVar3 = *(int *)(param_1 + 0x98) != 0;
      uVar7 = 2;
      if (!bVar3) {
        uVar7 = 1;
      }
      uVar1 = (uint)bVar3;
      if (*(int *)(param_1 + 0x9c) != 0) {
        uVar1 = uVar7;
      }
      if (*(int *)(param_1 + 0xa0) != 0) {
        uVar1 = uVar1 + 1;
      }
      if (*(int *)(param_1 + 0xa4) != 0) {
        uVar1 = uVar1 + 1;
      }
      if (*(int *)(param_1 + 0xa8) != 0) {
        uVar1 = uVar1 + 1;
      }
      if (*(int *)(param_1 + 0xac) != 0) {
        uVar1 = uVar1 + 1;
      }
      if (*(int *)(param_1 + 0xb0) != 0) {
        uVar1 = uVar1 + 1;
      }
      if (*(int *)(param_1 + 0xb4) != 0) {
        uVar1 = uVar1 + 1;
      }
      if (*(int *)(param_1 + 0xb8) != 0) {
        uVar1 = uVar1 + 1;
      }
      if (*(int *)(param_1 + 0xbc) != 0) {
        uVar1 = uVar1 + 1;
      }
      if (uVar1 != 10) {
        lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        }
        uVar4 = FUN_00888c50(0x95,0xe);
        iVar5 = FUN_01520330(lVar9,uVar4);
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
        }
        if (iVar5 != 0) {
          FUN_01400980(param_1);
          return;
        }
      }
      lVar9 = *(long *)(param_1 + 0x78);
      FUN_016b2d70(*(undefined8 *)(lVar9 + 0x688),0);
      FUN_016b2d70(*(undefined8 *)(lVar9 + 0x690),0);
      FUN_008c82b0(*(undefined8 *)(param_1 + 0x78),0);
      FUN_008c4b10(*(undefined8 *)(param_1 + 0x78),0);
      FUN_008c6ab0(*(undefined8 *)(param_1 + 0x78),1);
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar10 != (undefined8 *)0x0
         )) {
        plVar6 = (long *)(**(code **)*puVar10)(puVar10);
        lVar9 = FUN_013f9d40();
        for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if (plVar6 == (long *)lVar9) {
            puVar10 = puVar10 + -10;
            goto LAB_01402584;
          }
        }
      }
      puVar10 = (undefined8 *)0x0;
LAB_01402584:
      FUN_013fafe0(puVar10,0xa767ebbbb3dae398,1,0);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
      if (*(int *)(param_1 + 0x570) == 4) {
        FUN_008c9980(*(undefined8 *)(param_1 + 0x78),0);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0xd8);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        *(undefined8 *)(param_1 + 0xe0) = 0;
        *(undefined8 *)(param_1 + 0xe8) = 0;
        *(undefined8 *)(param_1 + 0xd0) = 0;
        *(undefined8 *)(param_1 + 0xd8) = 0;
        (*UNRECOVERED_JUMPTABLE)(param_1 + 0xf0);
      }
      *(long *)(param_1 + 0xf0) = param_1;
      *(undefined1 **)(param_1 + 0xd0) = &LAB_01405b40;
      *(undefined1 **)(param_1 + 0xd8) = &LAB_01405ba0;
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x158);
      *(undefined1 **)(param_1 + 0xe0) = &LAB_01405bb0;
      *(undefined1 **)(param_1 + 0xe8) = &LAB_01405bc0;
      *(undefined4 *)(param_1 + 0x570) = 2;
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        *(undefined8 *)(param_1 + 0x160) = 0;
        *(undefined8 *)(param_1 + 0x168) = 0;
        *(undefined8 *)(param_1 + 0x150) = 0;
        *(undefined8 *)(param_1 + 0x158) = 0;
        (*UNRECOVERED_JUMPTABLE)(param_1 + 0x170);
      }
      *(long *)(param_1 + 0x170) = param_1;
      *(undefined1 **)(param_1 + 0x150) = &LAB_01404f80;
      *(undefined1 **)(param_1 + 0x158) = &LAB_01405140;
      *(undefined1 **)(param_1 + 0x160) = &LAB_01405350;
      *(undefined1 **)(param_1 + 0x168) = &LAB_01405360;
      return;
    }
    (**(code **)(param_1 + 0x450))(param_1 + 0x470);
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x458);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x460) = 0;
      *(undefined8 *)(param_1 + 0x468) = 0;
      *(undefined8 *)(param_1 + 0x450) = 0;
      *(undefined8 *)(param_1 + 0x458) = 0;
                    /* WARNING: Could not recover jumptable at 0x014023f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1 + 0x470);
      return;
    }
  }
  return;
}


