/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01402da0; name: FUN_01402da0
 */


void FUN_01402da0(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar5;
  int *piVar6;
  
  if (*(int *)(param_1 + 0x56c) < *(int *)(param_1 + 0xc4)) {
    piVar6 = (int *)(param_1 + 0x98);
    iVar3 = (uint)(*(int *)(param_1 + 0x9c) != 0) - (uint)(*piVar6 == 0);
    if (*(int *)(param_1 + 0xa0) != 0) {
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(param_1 + 0xa4) != 0) {
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(param_1 + 0xa8) != 0) {
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(param_1 + 0xac) != 0) {
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(param_1 + 0xb0) != 0) {
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(param_1 + 0xb4) != 0) {
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(param_1 + 0xb8) != 0) {
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      iVar3 = iVar3 + 1;
    }
    FUN_013fd2b0(*(undefined8 *)(param_1 + 0x88),iVar3);
    uVar5 = 2;
    if (*piVar6 == 0) {
      uVar5 = 1;
    }
    uVar1 = (uint)(*piVar6 != 0);
    if (*(int *)(param_1 + 0x9c) != 0) {
      uVar1 = uVar5;
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
    *(undefined4 *)((long)piVar6 + ((long)(((ulong)uVar1 << 0x20) + -0x100000000) >> 0x1e)) = 0;
    iVar3 = *(int *)(param_1 + 0x56c) + 1;
    *(int *)(param_1 + 0x56c) = iVar3;
    if (iVar3 < *(int *)(param_1 + 0xc4)) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x56c) < *(int *)(param_1 + 0xc4)) {
    return;
  }
  FUN_008c61d0(*(undefined8 *)(param_1 + 0x78),1);
  FUN_013ff9c0(param_1);
  FUN_016bfe70(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x5e8));
  lVar2 = *(long *)(param_1 + 0x80);
  uVar4 = FUN_008c83c0(*(undefined8 *)(param_1 + 0x78));
  *(undefined4 *)(lVar2 + 0x644) = uVar4;
  if (*(code **)(param_1 + 0x450) == (code *)0x0) {
    FUN_01400980(param_1);
    return;
  }
  (**(code **)(param_1 + 0x450))(param_1 + 0x470);
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x458);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
                    /* WARNING: Could not recover jumptable at 0x01402f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 0x470);
  return;
}


