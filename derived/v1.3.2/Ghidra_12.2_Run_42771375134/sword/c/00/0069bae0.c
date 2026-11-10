/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069bae0; name: FUN_0069bae0
 */


void FUN_0069bae0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *plVar8;
  long *plVar7;
  long lVar9;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    lVar3 = *(long *)(param_1 + 400);
    *(undefined8 *)(param_1 + 400) = 0;
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x88),param_1 + 0x80);
    lVar3 = *(long *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    lVar3 = *(long *)(param_1 + 400);
    *(undefined8 *)(param_1 + 400) = 0;
  }
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x1b0);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  else {
    lVar5 = *(long *)(lVar3 + 0x60);
    if (lVar5 != 0) {
      *(long *)(lVar3 + 0x68) = lVar5;
      (**(code **)(**(long **)(lVar3 + 0x78) + 0x18))
                (*(long **)(lVar3 + 0x78),lVar5,*(long *)(lVar3 + 0x70) - lVar5,8);
    }
    lVar5 = *(long *)(lVar3 + 0x30);
    if (lVar5 != 0) {
      *(long *)(lVar3 + 0x38) = lVar5;
      (**(code **)(**(long **)(lVar3 + 0x48) + 0x18))
                (*(long **)(lVar3 + 0x48),lVar5,*(long *)(lVar3 + 0x40) - lVar5,8);
    }
    FUN_0069e020(lVar3);
    (**(code **)(**(long **)(param_1 + 0x198) + 0x18))
              (*(long **)(param_1 + 0x198),lVar3,*(undefined8 *)(param_1 + 0x1a0),
               *(undefined8 *)(param_1 + 0x1a8));
    lVar3 = *(long *)(param_1 + 0x1b0);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  if (lVar3 != 0) {
    FUN_0069e2b0(lVar3 + 0x10);
    (**(code **)(**(long **)(param_1 + 0x1b8) + 0x18))
              (*(long **)(param_1 + 0x1b8),lVar3,*(undefined8 *)(param_1 + 0x1c0),
               *(undefined8 *)(param_1 + 0x1c8));
  }
  plVar2 = *(long **)(param_1 + 0x1d0);
  if (*(long **)(param_1 + 0x1d8) != plVar2) {
    plVar7 = *(long **)(param_1 + 0x1d8);
    do {
      plVar8 = plVar7 + -1;
      if (*plVar8 != 0) {
        (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
        plVar7[-1] = 0;
      }
      plVar7 = plVar8;
    } while (plVar2 != plVar8);
  }
  *(long **)(param_1 + 0x1d8) = plVar2;
  lVar3 = *(long *)(param_1 + 0x200);
  lVar5 = *(long *)(param_1 + 0x208);
  if (lVar5 != lVar3) {
    lVar9 = 0;
    do {
      lVar1 = lVar5 + lVar9;
      pcVar6 = *(code **)(lVar1 + -0x78);
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)(lVar1 + -0x70) = 0;
        *(undefined8 *)(lVar1 + -0x68) = 0;
        *(undefined8 *)(lVar1 + -0x80) = 0;
        *(undefined8 *)(lVar1 + -0x78) = 0;
        (*pcVar6)(lVar1 + -0x60);
      }
      pcVar6 = *(code **)(lVar1 + -0xf8);
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)(lVar1 + -0xf0) = 0;
        *(undefined8 *)(lVar1 + -0xe8) = 0;
        *(undefined8 *)(lVar1 + -0x100) = 0;
        *(undefined8 *)(lVar1 + -0xf8) = 0;
        (*pcVar6)(lVar1 + -0xe0);
      }
      lVar4 = *(long *)(lVar1 + -0x108);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
        *(long *)(lVar1 + -0x108) = 0;
      }
      lVar9 = lVar9 + -0x120;
    } while (lVar3 - lVar5 != lVar9);
  }
  *(long *)(param_1 + 0x208) = lVar3;
  lVar3 = *(long *)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + 0x10);
    if (lVar5 != 0) {
      *(long *)(lVar3 + 0x18) = lVar5;
      (**(code **)(**(long **)(lVar3 + 0x28) + 0x18))
                (*(long **)(lVar3 + 0x28),lVar5,*(long *)(lVar3 + 0x20) - lVar5,0x10);
    }
    (**(code **)(**(long **)(param_1 + 0x238) + 0x18))
              (*(long **)(param_1 + 0x238),lVar3,*(undefined8 *)(param_1 + 0x240),
               *(undefined8 *)(param_1 + 0x248));
  }
  lVar3 = *(long *)(param_1 + 0x250);
  *(undefined8 *)(param_1 + 0x250) = 0;
  if (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + 0x10);
    if (lVar5 != 0) {
      *(long *)(lVar3 + 0x18) = lVar5;
      (**(code **)(**(long **)(lVar3 + 0x28) + 0x18))
                (*(long **)(lVar3 + 0x28),lVar5,*(long *)(lVar3 + 0x20) - lVar5,0x10);
    }
    (**(code **)(**(long **)(param_1 + 600) + 0x18))
              (*(long **)(param_1 + 600),lVar3,*(undefined8 *)(param_1 + 0x260),
               *(undefined8 *)(param_1 + 0x268));
  }
  if (*(long **)(param_1 + 0x270) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x270) + 0x18))();
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x440);
  *(undefined8 *)(param_1 + 0x440) = 0;
  if (lVar3 == 0) {
    return;
  }
  FUN_006e0110(lVar3);
                    /* WARNING: Could not recover jumptable at 0x0069bd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x448) + 0x18))
            (*(long **)(param_1 + 0x448),lVar3,*(undefined8 *)(param_1 + 0x450),
             *(undefined8 *)(param_1 + 0x458));
  return;
}


