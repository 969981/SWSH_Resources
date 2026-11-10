/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00781030; name: FUN_00781030
 */


void FUN_00781030(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x70);
    if (*(long *)(param_1 + 0x70) == lVar2) {
      lVar1 = lVar2;
    }
    else {
      do {
        if (*(long *)(lVar1 + -0x10) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar1 + -0x10) + 0x48) + 0x18))();
          *(undefined8 *)(lVar1 + -0x10) = 0;
        }
        lVar3 = lVar1 + -0x50;
        if (*(long *)(lVar1 + -0x30) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar1 + -0x30) + 0x48) + 0x18))();
          *(undefined8 *)(lVar1 + -0x30) = 0;
        }
        lVar1 = lVar3;
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x68);
    }
    *(long *)(param_1 + 0x70) = lVar2;
    (**(code **)(**(long **)(param_1 + 0x80) + 0x18))
              (*(long **)(param_1 + 0x80),lVar1,*(long *)(param_1 + 0x78) - lVar1,8);
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    if (*(long *)(param_1 + 0x40) == lVar2) {
      lVar1 = lVar2;
    }
    else {
      do {
        if (*(long *)(lVar1 + -0x10) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar1 + -0x10) + 0x48) + 0x18))();
          *(undefined8 *)(lVar1 + -0x10) = 0;
        }
        lVar3 = lVar1 + -0x50;
        if (*(long *)(lVar1 + -0x30) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar1 + -0x30) + 0x48) + 0x18))();
          *(undefined8 *)(lVar1 + -0x30) = 0;
        }
        lVar1 = lVar3;
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x38);
    }
    *(long *)(param_1 + 0x40) = lVar2;
    (**(code **)(**(long **)(param_1 + 0x50) + 0x18))
              (*(long **)(param_1 + 0x50),lVar1,*(long *)(param_1 + 0x48) - lVar1,8);
  }
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) == lVar2) {
    lVar1 = lVar2;
  }
  else {
    do {
      if (*(long *)(lVar1 + -0x10) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + -0x10) + 0x48) + 0x18))();
        *(undefined8 *)(lVar1 + -0x10) = 0;
      }
      lVar3 = lVar1 + -0x50;
      if (*(long *)(lVar1 + -0x30) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + -0x30) + 0x48) + 0x18))();
        *(undefined8 *)(lVar1 + -0x30) = 0;
      }
      lVar1 = lVar3;
    } while (lVar2 != lVar3);
    lVar1 = *(long *)(param_1 + 8);
  }
  *(long *)(param_1 + 0x10) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x007811d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),lVar1,*(long *)(param_1 + 0x18) - lVar1,8);
  return;
}


