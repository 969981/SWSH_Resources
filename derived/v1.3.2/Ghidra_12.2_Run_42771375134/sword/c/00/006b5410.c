/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b5410; name: FUN_006b5410
 */


void FUN_006b5410(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x148) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x148) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  lVar1 = *(long *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (lVar1 != 0) {
    FUN_006b5580(param_1 + 0xf8);
  }
  lVar1 = *(long *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 200);
    if (lVar3 == lVar1) {
      lVar3 = lVar1;
    }
    else {
      do {
        lVar3 = lVar3 + -0x20;
        FUN_006b5650(param_1 + 0xd8,lVar3);
      } while (lVar1 != lVar3);
      lVar3 = *(long *)(param_1 + 0xc0);
    }
    *(long *)(param_1 + 200) = lVar1;
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x18))
              (*(long **)(param_1 + 0xd8),lVar3,*(long *)(param_1 + 0xd0) - lVar3,8);
  }
  plVar4 = *(long **)(param_1 + 0x90);
  if (plVar4 != (long *)0x0) {
    if (*(long **)(param_1 + 0x98) == plVar4) {
      plVar2 = plVar4;
    }
    else {
      plVar2 = *(long **)(param_1 + 0x98);
      do {
        plVar5 = plVar2 + -4;
        lVar1 = *plVar5;
        *plVar5 = 0;
        if (lVar1 != 0) {
          FUN_006b5410(lVar1);
          (**(code **)(*(long *)plVar2[-3] + 0x18))((long *)plVar2[-3],lVar1,plVar2[-2],plVar2[-1]);
        }
        plVar2 = plVar5;
      } while (plVar4 != plVar5);
      plVar2 = *(long **)(param_1 + 0x90);
    }
    *(long **)(param_1 + 0x98) = plVar4;
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x18))
              (*(long **)(param_1 + 0xa8),plVar2,*(long *)(param_1 + 0xa0) - (long)plVar2,8);
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x80) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x40) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}


