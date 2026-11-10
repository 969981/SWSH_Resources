/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d9fef0; name: FUN_00d9fef0
 */


void FUN_00d9fef0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x4b0) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x490);
    while (plVar1 != (long *)0x0) {
      lVar5 = *plVar1;
      (**(code **)(**(long **)(param_1 + 0x498) + 0x18))(*(long **)(param_1 + 0x498),plVar1,0x20,8);
      plVar1 = (long *)lVar5;
    }
    uVar4 = *(ulong *)(param_1 + 0x470);
    *(undefined8 *)(param_1 + 0x490) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar3 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x468) + lVar3) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x468) + lVar3 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x468) + lVar3 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x468) + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar5);
      }
      if (uVar2 != 0) {
        lVar5 = lVar5 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x468) + lVar5) = 0;
          lVar5 = lVar5 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x4b0) = 0;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    plVar1 = (long *)(param_1 + 0x48);
    FUN_01010a60(plVar1,*(undefined8 *)(param_1 + 0x70));
    uVar4 = *(ulong *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar3 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(*plVar1 + lVar3) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 8) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x10) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar5);
      }
      if (uVar2 != 0) {
        lVar5 = lVar5 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*plVar1 + lVar5) = 0;
          lVar5 = lVar5 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    plVar1 = (long *)(param_1 + 0xa0);
    FUN_01010a60(plVar1,*(undefined8 *)(param_1 + 200));
    uVar4 = *(ulong *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 200) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar3 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(*plVar1 + lVar3) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 8) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x10) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar5);
      }
      if (uVar2 != 0) {
        lVar5 = lVar5 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*plVar1 + lVar5) = 0;
          lVar5 = lVar5 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    plVar1 = (long *)(param_1 + 0xf8);
    FUN_01010a60(plVar1,*(undefined8 *)(param_1 + 0x120));
    uVar4 = *(ulong *)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x120) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar3 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(*plVar1 + lVar3) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 8) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x10) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar5);
      }
      if (uVar2 != 0) {
        lVar5 = lVar5 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*plVar1 + lVar5) = 0;
          lVar5 = lVar5 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  if (*(long *)(param_1 + 0x198) != 0) {
    plVar1 = (long *)(param_1 + 0x150);
    FUN_01010a60(plVar1,*(undefined8 *)(param_1 + 0x178));
    uVar4 = *(ulong *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x178) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar3 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(*plVar1 + lVar3) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 8) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x10) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar5);
      }
      if (uVar2 != 0) {
        lVar5 = lVar5 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*plVar1 + lVar5) = 0;
          lVar5 = lVar5 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  if (*(long *)(param_1 + 0x1f0) != 0) {
    plVar1 = (long *)(param_1 + 0x1a8);
    FUN_01010a60(plVar1,*(undefined8 *)(param_1 + 0x1d0));
    uVar4 = *(ulong *)(param_1 + 0x1b0);
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar3 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(*plVar1 + lVar3) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 8) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x10) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar5);
      }
      if (uVar2 != 0) {
        lVar5 = lVar5 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*plVar1 + lVar5) = 0;
          lVar5 = lVar5 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  if (*(long *)(param_1 + 0x248) != 0) {
    plVar1 = (long *)(param_1 + 0x200);
    FUN_01010a60(plVar1,*(undefined8 *)(param_1 + 0x228));
    uVar4 = *(ulong *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x228) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar3 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(*plVar1 + lVar3) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 8) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x10) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar5);
      }
      if (uVar2 != 0) {
        lVar5 = lVar5 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*plVar1 + lVar5) = 0;
          lVar5 = lVar5 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  if (*(long *)(param_1 + 0x2a0) != 0) {
    plVar1 = (long *)(param_1 + 600);
    FUN_01010a60(plVar1,*(undefined8 *)(param_1 + 0x280));
    uVar4 = *(ulong *)(param_1 + 0x260);
    *(undefined8 *)(param_1 + 0x280) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar3 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(*plVar1 + lVar3) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 8) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x10) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar5);
      }
      if (uVar2 != 0) {
        lVar5 = lVar5 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*plVar1 + lVar5) = 0;
          lVar5 = lVar5 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x2a0) = 0;
  }
  if (*(long *)(param_1 + 0x2f8) != 0) {
    plVar1 = (long *)(param_1 + 0x2b0);
    FUN_01010a60(plVar1,*(undefined8 *)(param_1 + 0x2d8));
    uVar4 = *(ulong *)(param_1 + 0x2b8);
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar3 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(*plVar1 + lVar3) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 8) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x10) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar5);
      }
      if (uVar2 != 0) {
        lVar5 = lVar5 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*plVar1 + lVar5) = 0;
          lVar5 = lVar5 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  if (*(long *)(param_1 + 0x350) != 0) {
    plVar1 = (long *)(param_1 + 0x308);
    FUN_01010a60(plVar1,*(undefined8 *)(param_1 + 0x330));
    uVar4 = *(ulong *)(param_1 + 0x310);
    *(undefined8 *)(param_1 + 0x330) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar3 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(*plVar1 + lVar3) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 8) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x10) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar5);
      }
      if (uVar2 != 0) {
        lVar5 = lVar5 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*plVar1 + lVar5) = 0;
          lVar5 = lVar5 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x350) = 0;
  }
  if (*(long *)(param_1 + 0x3a8) != 0) {
    plVar1 = (long *)(param_1 + 0x360);
    FUN_01010a60(plVar1,*(undefined8 *)(param_1 + 0x388));
    uVar4 = *(ulong *)(param_1 + 0x368);
    *(undefined8 *)(param_1 + 0x388) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar3 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(*plVar1 + lVar3) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 8) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x10) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar5);
      }
      if (uVar2 != 0) {
        lVar5 = lVar5 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*plVar1 + lVar5) = 0;
          lVar5 = lVar5 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x3a8) = 0;
  }
  if (*(long *)(param_1 + 0x400) != 0) {
    plVar1 = (long *)(param_1 + 0x3b8);
    FUN_01010a60(plVar1,*(undefined8 *)(param_1 + 0x3e0));
    uVar4 = *(ulong *)(param_1 + 0x3c0);
    *(undefined8 *)(param_1 + 0x3e0) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar3 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(*plVar1 + lVar3) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 8) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x10) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar5);
      }
      if (uVar2 != 0) {
        lVar5 = lVar5 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*plVar1 + lVar5) = 0;
          lVar5 = lVar5 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x400) = 0;
  }
  if (*(long *)(param_1 + 0x458) != 0) {
    plVar1 = (long *)(param_1 + 0x410);
    FUN_01010a60(plVar1,*(undefined8 *)(param_1 + 0x438));
    uVar4 = *(ulong *)(param_1 + 0x418);
    *(undefined8 *)(param_1 + 0x438) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar3 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(*plVar1 + lVar3) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 8) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x10) = 0;
          *(undefined8 *)(*plVar1 + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar5);
      }
      if (uVar2 != 0) {
        lVar5 = lVar5 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*plVar1 + lVar5) = 0;
          lVar5 = lVar5 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x458) = 0;
  }
  return;
}


