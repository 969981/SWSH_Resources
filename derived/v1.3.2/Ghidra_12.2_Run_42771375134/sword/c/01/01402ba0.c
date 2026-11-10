/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01402ba0; name: FUN_01402ba0
 */


void FUN_01402ba0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  
  iVar4 = *(int *)(param_1 + 0x98);
  iVar5 = *(int *)(param_1 + 0x9c);
  uVar15 = 2;
  if (iVar4 == 0) {
    uVar15 = 1;
  }
  uVar1 = (uint)(iVar4 != 0);
  if (iVar5 != 0) {
    uVar1 = uVar15;
  }
  iVar6 = *(int *)(param_1 + 0xa0);
  iVar7 = *(int *)(param_1 + 0xa4);
  if (iVar6 != 0) {
    uVar1 = uVar1 + 1;
  }
  if (iVar7 != 0) {
    uVar1 = uVar1 + 1;
  }
  iVar8 = *(int *)(param_1 + 0xa8);
  iVar9 = *(int *)(param_1 + 0xac);
  if (iVar8 != 0) {
    uVar1 = uVar1 + 1;
  }
  if (iVar9 != 0) {
    uVar1 = uVar1 + 1;
  }
  iVar10 = *(int *)(param_1 + 0xb0);
  iVar11 = *(int *)(param_1 + 0xb4);
  if (iVar10 != 0) {
    uVar1 = uVar1 + 1;
  }
  if (iVar11 != 0) {
    uVar1 = uVar1 + 1;
  }
  iVar12 = *(int *)(param_1 + 0xb8);
  iVar13 = *(int *)(param_1 + 0xbc);
  if (iVar12 != 0) {
    uVar1 = uVar1 + 1;
  }
  if (iVar13 != 0) {
    uVar1 = uVar1 + 1;
  }
  if (uVar1 != 0) {
    FUN_013fd2b0(*(undefined8 *)(param_1 + 0x88),uVar1 - 1);
    piVar14 = (int *)(param_1 + 0x98);
    uVar15 = 2;
    if (*piVar14 == 0) {
      uVar15 = 1;
    }
    uVar1 = (uint)(*piVar14 != 0);
    if (*(int *)(param_1 + 0x9c) != 0) {
      uVar1 = uVar15;
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
    *(undefined4 *)((long)piVar14 + ((long)(((ulong)uVar1 << 0x20) + -0x100000000) >> 0x1e)) = 0;
    iVar4 = *piVar14;
    iVar5 = *(int *)(param_1 + 0x9c);
    iVar6 = *(int *)(param_1 + 0xa0);
    iVar7 = *(int *)(param_1 + 0xa4);
    iVar8 = *(int *)(param_1 + 0xa8);
    iVar9 = *(int *)(param_1 + 0xac);
    iVar10 = *(int *)(param_1 + 0xb0);
    iVar11 = *(int *)(param_1 + 0xb4);
    iVar12 = *(int *)(param_1 + 0xb8);
    iVar13 = *(int *)(param_1 + 0xbc);
  }
  uVar15 = 2;
  if (iVar4 == 0) {
    uVar15 = 1;
  }
  uVar1 = (uint)(iVar4 != 0);
  if (iVar5 != 0) {
    uVar1 = uVar15;
  }
  if (iVar6 != 0) {
    uVar1 = uVar1 + 1;
  }
  if (iVar7 != 0) {
    uVar1 = uVar1 + 1;
  }
  if (iVar8 != 0) {
    uVar1 = uVar1 + 1;
  }
  if (iVar9 != 0) {
    uVar1 = uVar1 + 1;
  }
  if (iVar10 != 0) {
    uVar1 = uVar1 + 1;
  }
  if (iVar11 != 0) {
    uVar1 = uVar1 + 1;
  }
  if (iVar12 != 0) {
    uVar1 = uVar1 + 1;
  }
  if (uVar1 == -(uint)(iVar13 != 0)) {
    FUN_008c61d0(*(undefined8 *)(param_1 + 0x78),1);
    FUN_013ff9c0(param_1);
    FUN_016bfe70(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x5e8));
    lVar2 = *(long *)(param_1 + 0x80);
    uVar3 = FUN_008c83c0(*(undefined8 *)(param_1 + 0x78));
    *(undefined4 *)(lVar2 + 0x644) = uVar3;
    if (*(code **)(param_1 + 0x450) == (code *)0x0) {
      FUN_01400980(param_1);
      return;
    }
    (**(code **)(param_1 + 0x450))(param_1 + 0x470);
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x458);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x460) = 0;
      *(undefined8 *)(param_1 + 0x468) = 0;
      *(undefined8 *)(param_1 + 0x450) = 0;
      *(undefined8 *)(param_1 + 0x458) = 0;
                    /* WARNING: Could not recover jumptable at 0x01402d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1 + 0x470);
      return;
    }
  }
  return;
}


