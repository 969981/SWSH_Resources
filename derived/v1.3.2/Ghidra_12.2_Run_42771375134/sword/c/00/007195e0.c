/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007195e0; name: FUN_007195e0
 */


void FUN_007195e0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  plVar3 = *(long **)(param_1 + 0x110);
  if (plVar3 != (long *)0x0) {
    if (*(long **)(param_1 + 0x118) == plVar3) {
      plVar2 = plVar3;
    }
    else {
      plVar2 = *(long **)(param_1 + 0x118);
      do {
        plVar5 = plVar2 + -7;
        lVar1 = *plVar5;
        if (lVar1 != 0) {
          plVar2[-6] = lVar1;
          (**(code **)(*(long *)plVar2[-4] + 0x18))((long *)plVar2[-4],lVar1,plVar2[-5] - lVar1,4);
        }
        plVar2 = plVar5;
      } while (plVar3 != plVar5);
      plVar2 = *(long **)(param_1 + 0x110);
    }
    *(long **)(param_1 + 0x118) = plVar3;
    (**(code **)(**(long **)(param_1 + 0x128) + 0x18))
              (*(long **)(param_1 + 0x128),plVar2,*(long *)(param_1 + 0x120) - (long)plVar2,8);
  }
  lVar1 = *(long *)(param_1 + 0xe0);
  if (lVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0xe8);
    if (lVar4 == lVar1) {
      lVar4 = lVar1;
    }
    else {
      do {
        lVar4 = lVar4 + -0x4c0;
        FUN_00719980(lVar4);
      } while (lVar1 != lVar4);
      lVar4 = *(long *)(param_1 + 0xe0);
    }
    *(long *)(param_1 + 0xe8) = lVar1;
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x18))
              (*(long **)(param_1 + 0xf8),lVar4,*(long *)(param_1 + 0xf0) - lVar4,0x10);
  }
  lVar1 = *(long *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0xb8);
    if (*(long *)(param_1 + 0xb8) == lVar1) {
      lVar4 = lVar1;
    }
    else {
      do {
        lVar7 = lVar4 + -0x60;
        if (*(long *)(lVar4 + -0x28) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar4 + -0x28) + 0x48) + 0x18))();
          *(undefined8 *)(lVar4 + -0x28) = 0;
        }
        lVar4 = lVar7;
      } while (lVar1 != lVar7);
      lVar4 = *(long *)(param_1 + 0xb0);
    }
    *(long *)(param_1 + 0xb8) = lVar1;
    (**(code **)(**(long **)(param_1 + 200) + 0x18))
              (*(long **)(param_1 + 200),lVar4,*(long *)(param_1 + 0xc0) - lVar4,0x10);
  }
  FUN_00719850(param_1 + 0x80);
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x58);
    if (*(long *)(param_1 + 0x58) == lVar1) {
      lVar4 = lVar1;
    }
    else {
      do {
        lVar7 = *(long *)(lVar4 + -0x50);
        lVar6 = lVar4 + -0x60;
        if (lVar7 != 0) {
          *(long *)(lVar4 + -0x48) = lVar7;
          (**(code **)(**(long **)(lVar4 + -0x38) + 0x18))
                    (*(long **)(lVar4 + -0x38),lVar7,*(long *)(lVar4 + -0x40) - lVar7,8);
        }
        lVar4 = lVar6;
      } while (lVar1 != lVar6);
      lVar4 = *(long *)(param_1 + 0x50);
    }
    *(long *)(param_1 + 0x58) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
              (*(long **)(param_1 + 0x68),lVar4,*(long *)(param_1 + 0x60) - lVar4,0x10);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x28) == lVar1) {
    lVar4 = lVar1;
  }
  else {
    do {
      lVar7 = *(long *)(lVar4 + -0x48);
      if (lVar7 != 0) {
        *(long *)(lVar4 + -0x40) = lVar7;
        (**(code **)(**(long **)(lVar4 + -0x30) + 0x18))
                  (*(long **)(lVar4 + -0x30),lVar7,*(long *)(lVar4 + -0x38) - lVar7,4);
      }
      if (*(long *)(lVar4 + -0xd8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + -0xd8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + -0xd8) = 0;
      }
      lVar7 = lVar4 + -0x110;
      if (*(long *)(lVar4 + -0xf8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + -0xf8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + -0xf8) = 0;
      }
      lVar4 = lVar7;
    } while (lVar1 != lVar7);
    lVar4 = *(long *)(param_1 + 0x20);
  }
  *(long *)(param_1 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00719848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
            (*(long **)(param_1 + 0x38),lVar4,*(long *)(param_1 + 0x30) - lVar4,0x10);
  return;
}


