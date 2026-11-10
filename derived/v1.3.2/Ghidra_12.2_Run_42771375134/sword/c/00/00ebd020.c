/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ebd020; name: FUN_00ebd020
 */


void FUN_00ebd020(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x108) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x100);
    lVar6 = *(long *)(param_1 + 0x108) << 3;
    do {
      uVar1 = (**(code **)(*(long *)*puVar5 + 0x40))();
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)*puVar5;
        uVar1 = (**(code **)(*plVar4 + 0x40))(plVar4);
        if ((uVar1 & 1) == 0) {
          *(undefined4 *)((long)plVar4 + 0x184) = 4;
        }
      }
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  if (*(long *)(param_1 + 0x180) != 0) {
    plVar4 = (long *)*(long *)(param_1 + 0x160);
    while (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      if (plVar4[5] != 0) {
        (**(code **)(*(long *)(plVar4[5] + 0x48) + 0x18))();
        plVar4[5] = 0;
      }
      (**(code **)(**(long **)(param_1 + 0x168) + 0x18))
                (*(long **)(param_1 + 0x168),plVar4,0x40,0x10);
      plVar4 = (long *)lVar6;
    }
    uVar1 = *(ulong *)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0x160) = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        do {
          lVar3 = lVar6 * 8;
          lVar6 = lVar6 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x138) + lVar3) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x138) + lVar3 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x138) + lVar3 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x138) + lVar3 + 0x18) = 0;
        } while (uVar1 - uVar2 != lVar6);
      }
      if (uVar2 != 0) {
        lVar6 = lVar6 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x138) + lVar6) = 0;
          lVar6 = lVar6 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  if (*(long *)(param_1 + 0x1d8) != 0) {
    plVar4 = (long *)*(long *)(param_1 + 0x1b8);
    while (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      if (plVar4[5] != 0) {
        (**(code **)(*(long *)(plVar4[5] + 0x48) + 0x18))();
        plVar4[5] = 0;
      }
      (**(code **)(**(long **)(param_1 + 0x1c0) + 0x18))(*(long **)(param_1 + 0x1c0),plVar4,0x38,8);
      plVar4 = (long *)lVar6;
    }
    uVar1 = *(ulong *)(param_1 + 0x198);
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        do {
          lVar3 = lVar6 * 8;
          lVar6 = lVar6 + 4;
          *(undefined8 *)(*(long *)(param_1 + 400) + lVar3) = 0;
          *(undefined8 *)(*(long *)(param_1 + 400) + lVar3 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 400) + lVar3 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 400) + lVar3 + 0x18) = 0;
        } while (uVar1 - uVar2 != lVar6);
      }
      if (uVar2 != 0) {
        lVar6 = lVar6 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*(long *)(param_1 + 400) + lVar6) = 0;
          lVar6 = lVar6 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  if (*(long *)(param_1 + 0x230) != 0) {
    plVar4 = (long *)*(long *)(param_1 + 0x210);
    while (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      if (plVar4[5] != 0) {
        (**(code **)(*(long *)(plVar4[5] + 0x48) + 0x18))();
        plVar4[5] = 0;
      }
      (**(code **)(**(long **)(param_1 + 0x218) + 0x18))(*(long **)(param_1 + 0x218),plVar4,0x38,8);
      plVar4 = (long *)lVar6;
    }
    uVar1 = *(ulong *)(param_1 + 0x1f0);
    *(undefined8 *)(param_1 + 0x210) = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        do {
          lVar3 = lVar6 * 8;
          lVar6 = lVar6 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x1e8) + lVar3) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1e8) + lVar3 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1e8) + lVar3 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1e8) + lVar3 + 0x18) = 0;
        } while (uVar1 - uVar2 != lVar6);
      }
      if (uVar2 != 0) {
        lVar6 = lVar6 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x1e8) + lVar6) = 0;
          lVar6 = lVar6 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x230) = 0;
  }
  return;
}


