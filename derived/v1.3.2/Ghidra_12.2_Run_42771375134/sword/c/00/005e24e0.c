/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e24e0; name: FUN_005e24e0
 */


void FUN_005e24e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (0 < *(int *)(param_1 + 0x11c)) {
    lVar3 = 0;
    plVar4 = (long *)(param_1 + 0x128);
    do {
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 0x18))();
        *plVar4 = 0;
      }
      if ((long *)plVar4[-1] != (long *)0x0) {
        (**(code **)(*(long *)plVar4[-1] + 0x18))();
        plVar4[-1] = 0;
      }
      lVar3 = lVar3 + 1;
      plVar4 = plVar4 + 2;
    } while (lVar3 < *(int *)(param_1 + 0x11c));
  }
  if (*(long **)(param_1 + 0x110) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x110) + 0x18))();
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  if (*(long **)(param_1 + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x108) + 0x18))();
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (0 < *(int *)(param_1 + 0x170)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x188) + lVar2;
      if (*(long *)(lVar1 + 0x18) != 0) {
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x38) = 0;
        *(undefined8 *)(lVar1 + 0x40) = 0;
      }
      *(undefined8 *)(lVar1 + 0x58) = 0;
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x68;
    } while (lVar3 < *(int *)(param_1 + 0x170));
  }
  if (0 < *(int *)(param_1 + 0x1c0)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x1d8) + lVar2;
      if (*(long *)(lVar1 + 0x18) != 0) {
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x38) = 0;
        *(undefined8 *)(lVar1 + 0x40) = 0;
      }
      *(undefined8 *)(lVar1 + 0x58) = 0;
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x68;
    } while (lVar3 < *(int *)(param_1 + 0x1c0));
  }
  if (0 < *(int *)(param_1 + 0x210)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x228) + lVar2;
      if (*(long *)(lVar1 + 0x18) != 0) {
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x38) = 0;
        *(undefined8 *)(lVar1 + 0x40) = 0;
      }
      *(undefined8 *)(lVar1 + 0x58) = 0;
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x68;
    } while (lVar3 < *(int *)(param_1 + 0x210));
  }
  if (0 < *(int *)(param_1 + 0x260)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x278) + lVar2;
      if (*(long *)(lVar1 + 0x18) != 0) {
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x38) = 0;
        *(undefined8 *)(lVar1 + 0x40) = 0;
      }
      *(undefined8 *)(lVar1 + 0x58) = 0;
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x68;
    } while (lVar3 < *(int *)(param_1 + 0x260));
  }
  return;
}


