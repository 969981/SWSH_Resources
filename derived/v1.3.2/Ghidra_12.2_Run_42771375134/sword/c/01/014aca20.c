/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014aca20; name: FUN_014aca20
 */


void FUN_014aca20(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0x7a0) = 0;
  if (*(long *)(param_1 + 0x9d8) == 0) {
    *(undefined8 *)(param_1 + 0x9d8) = 0;
    lVar1 = *(long *)(param_1 + 0x8c8);
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x9d8),param_1 + 0x9d0);
    lVar1 = *(long *)(param_1 + 0x9d8);
    *(undefined8 *)(param_1 + 0x9d8) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x8c8);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x8c8) = 0;
    lVar1 = *(long *)(param_1 + 0x7b8);
  }
  else {
    FUN_006e2100(lVar1,param_1 + 0x8c0);
    lVar1 = *(long *)(param_1 + 0x8c8);
    *(undefined8 *)(param_1 + 0x8c8) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x7b8);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x7b8) = 0;
    lVar1 = *(long *)(param_1 + 0x780);
    *(undefined8 *)(param_1 + 0x780) = 0;
  }
  else {
    FUN_006e2100(lVar1,param_1 + 0x7b0);
    lVar1 = *(long *)(param_1 + 0x7b8);
    *(undefined8 *)(param_1 + 0x7b8) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x780);
    *(undefined8 *)(param_1 + 0x780) = 0;
  }
  if (lVar1 != 0) {
    FUN_00784490(lVar1);
    (**(code **)(**(long **)(param_1 + 0x788) + 0x18))
              (*(long **)(param_1 + 0x788),lVar1,*(undefined8 *)(param_1 + 0x790),
               *(undefined8 *)(param_1 + 0x798));
  }
  if (*(long *)(param_1 + 0x678) == 0) {
    *(undefined8 *)(param_1 + 0x678) = 0;
    lVar1 = *(long *)(param_1 + 0x568);
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x678),param_1 + 0x670);
    lVar1 = *(long *)(param_1 + 0x678);
    *(undefined8 *)(param_1 + 0x678) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x568);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x568) = 0;
    lVar1 = *(long *)(param_1 + 0x458);
  }
  else {
    FUN_006e2100(lVar1,param_1 + 0x560);
    lVar1 = *(long *)(param_1 + 0x568);
    *(undefined8 *)(param_1 + 0x568) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x458);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x458) = 0;
    lVar1 = *(long *)(param_1 + 0x348);
  }
  else {
    FUN_006e2100(lVar1,param_1 + 0x450);
    lVar1 = *(long *)(param_1 + 0x458);
    *(undefined8 *)(param_1 + 0x458) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x348);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x348) = 0;
    lVar1 = *(long *)(param_1 + 0x238);
  }
  else {
    FUN_006e2100(lVar1,param_1 + 0x340);
    lVar1 = *(long *)(param_1 + 0x348);
    *(undefined8 *)(param_1 + 0x348) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x238);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x238) = 0;
    lVar1 = *(long *)(param_1 + 0x128);
  }
  else {
    FUN_006e2100(lVar1,param_1 + 0x230);
    lVar1 = *(long *)(param_1 + 0x238);
    *(undefined8 *)(param_1 + 0x238) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x128);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  else {
    FUN_006e2100(lVar1,param_1 + 0x120);
    lVar1 = *(long *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = 0;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x014acbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


