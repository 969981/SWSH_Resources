/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066d1b0; name: FUN_0066d1b0
 */


void FUN_0066d1b0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0xc68);
  if (0 < (int)uVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0xc80) + lVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
        *(undefined8 *)(*(long *)(param_1 + 0xc80) + lVar3 * 8) = 0;
        uVar2 = *(undefined8 *)(param_1 + 0xc68);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0xcb8);
  if (0 < (int)uVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0xcd0) + lVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
        *(undefined8 *)(*(long *)(param_1 + 0xcd0) + lVar3 * 8) = 0;
        uVar2 = *(undefined8 *)(param_1 + 0xcb8);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0xd08);
  if (0 < (int)uVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0xd20) + lVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
        *(undefined8 *)(*(long *)(param_1 + 0xd20) + lVar3 * 8) = 0;
        uVar2 = *(undefined8 *)(param_1 + 0xd08);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0xd58);
  if (0 < (int)uVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0xd70) + lVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
        *(undefined8 *)(*(long *)(param_1 + 0xd70) + lVar3 * 8) = 0;
        uVar2 = *(undefined8 *)(param_1 + 0xd58);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0xda8);
  if (0 < (int)uVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0xdc0) + lVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
        *(undefined8 *)(*(long *)(param_1 + 0xdc0) + lVar3 * 8) = 0;
        uVar2 = *(undefined8 *)(param_1 + 0xda8);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0xdf8);
  if (0 < (int)uVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0xe10) + lVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
        *(undefined8 *)(*(long *)(param_1 + 0xe10) + lVar3 * 8) = 0;
        uVar2 = *(undefined8 *)(param_1 + 0xdf8);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uVar2);
  }
  return;
}


