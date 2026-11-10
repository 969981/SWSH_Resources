/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a93c00; name: FUN_00a93c00
 */


void FUN_00a93c00(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x298);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x170) != '\0')) {
    FUN_006e2100(lVar1,param_1 + 0x290);
    lVar1 = *(long *)(param_1 + 0x298);
    *(undefined8 *)(param_1 + 0x298) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  lVar1 = *(long *)(param_1 + 0x3a8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x170) != '\0')) {
    FUN_006e2100(lVar1,param_1 + 0x3a0);
    lVar1 = *(long *)(param_1 + 0x3a8);
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  lVar1 = *(long *)(param_1 + 0x4b0);
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x168);
    *(undefined8 *)(lVar1 + 0x168) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    lVar2 = *(long *)(lVar1 + 0x150);
    *(undefined8 *)(lVar1 + 0x150) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    lVar2 = *(long *)(lVar1 + 0x158);
    *(undefined8 *)(lVar1 + 0x158) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    lVar2 = *(long *)(lVar1 + 0x160);
    *(undefined8 *)(lVar1 + 0x160) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    if (*(long *)(lVar1 + 0x48) == 0) {
      *(undefined8 *)(lVar1 + 0x48) = 0;
      lVar1 = *(long *)(param_1 + 0x4b0);
      *(undefined8 *)(param_1 + 0x4b0) = 0;
    }
    else {
      FUN_006e2100(*(long *)(lVar1 + 0x48),lVar1 + 0x40);
      lVar2 = *(long *)(lVar1 + 0x48);
      *(undefined8 *)(lVar1 + 0x48) = 0;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      lVar1 = *(long *)(param_1 + 0x4b0);
      *(undefined8 *)(param_1 + 0x4b0) = 0;
    }
    if (lVar1 != 0) {
      FUN_00784490(lVar1);
      (**(code **)(**(long **)(param_1 + 0x4b8) + 0x18))
                (*(long **)(param_1 + 0x4b8),lVar1,*(undefined8 *)(param_1 + 0x4c0),
                 *(undefined8 *)(param_1 + 0x4c8));
    }
  }
  lVar1 = *(long *)(param_1 + 0x4d0);
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x168);
    *(undefined8 *)(lVar1 + 0x168) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    lVar2 = *(long *)(lVar1 + 0x150);
    *(undefined8 *)(lVar1 + 0x150) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    lVar2 = *(long *)(lVar1 + 0x158);
    *(undefined8 *)(lVar1 + 0x158) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    lVar2 = *(long *)(lVar1 + 0x160);
    *(undefined8 *)(lVar1 + 0x160) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    if (*(long *)(lVar1 + 0x48) == 0) {
      *(undefined8 *)(lVar1 + 0x48) = 0;
      lVar1 = *(long *)(param_1 + 0x4d0);
      *(undefined8 *)(param_1 + 0x4d0) = 0;
    }
    else {
      FUN_006e2100(*(long *)(lVar1 + 0x48),lVar1 + 0x40);
      lVar2 = *(long *)(lVar1 + 0x48);
      *(undefined8 *)(lVar1 + 0x48) = 0;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      lVar1 = *(long *)(param_1 + 0x4d0);
      *(undefined8 *)(param_1 + 0x4d0) = 0;
    }
    if (lVar1 != 0) {
      FUN_00784490(lVar1);
      (**(code **)(**(long **)(param_1 + 0x4d8) + 0x18))
                (*(long **)(param_1 + 0x4d8),lVar1,*(undefined8 *)(param_1 + 0x4e0),
                 *(undefined8 *)(param_1 + 0x4e8));
    }
  }
  lVar1 = *(long *)(param_1 + 0x608);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x170) != '\0')) {
    FUN_006e2100(lVar1,param_1 + 0x600);
    lVar1 = *(long *)(param_1 + 0x608);
    *(undefined8 *)(param_1 + 0x608) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  if (*(long *)(param_1 + 0x710) != 0) {
    FUN_00adb170();
    lVar1 = *(long *)(param_1 + 0x710);
    *(undefined8 *)(param_1 + 0x710) = 0;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a93e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


