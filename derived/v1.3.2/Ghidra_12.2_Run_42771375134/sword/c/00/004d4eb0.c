/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d4eb0; name: FUN_004d4eb0
 */


long FUN_004d4eb0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x88;
  if (*(int *)(param_1 + 0x348) == 1) {
    plVar1 = *(long **)(param_1 + 0x130);
    if (plVar1 != (long *)0x0) {
      if ((*(short *)(param_1 + 0x140) == 0) && (*(short *)(param_1 + 0x340) == 0)) {
        if (*(long *)(param_1 + 0x2c8) == 0) {
          (**(code **)(*plVar1 + 0x40))(plVar1,lVar2);
        }
        else {
          (**(code **)(*plVar1 + 0x40))(plVar1,lVar2,0,param_1 + 0x2c8);
          lVar2 = param_1 + 0x2c8;
        }
      }
      else if ((*(short *)(param_1 + 0x142) == 0) && (*(short *)(param_1 + 0x342) == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(undefined2 *)(param_1 + 0x142) = *(undefined2 *)(param_1 + 0x140);
    }
    plVar1 = *(long **)(param_1 + 0x1b0);
    if (plVar1 != (long *)0x0) {
      if ((*(short *)(param_1 + 0x1c0) == 0) && (*(short *)(param_1 + 0x340) == 0)) {
        if (*(long *)(param_1 + 0x2e0) == 0) {
          (**(code **)(*plVar1 + 0x40))(plVar1,lVar2);
        }
        else {
          (**(code **)(*plVar1 + 0x40))(plVar1,lVar2,0,param_1 + 0x2e0);
          lVar2 = param_1 + 0x2e0;
        }
      }
      else if ((*(short *)(param_1 + 0x1c2) == 0) && (*(short *)(param_1 + 0x342) == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(undefined2 *)(param_1 + 0x1c2) = *(undefined2 *)(param_1 + 0x1c0);
    }
    plVar1 = *(long **)(param_1 + 0x230);
    if (plVar1 != (long *)0x0) {
      if ((*(short *)(param_1 + 0x240) == 0) && (*(short *)(param_1 + 0x340) == 0)) {
        if (*(long *)(param_1 + 0x2f8) == 0) {
          (**(code **)(*plVar1 + 0x40))(plVar1,lVar2);
        }
        else {
          (**(code **)(*plVar1 + 0x40))(plVar1,lVar2,0,param_1 + 0x2f8);
          lVar2 = param_1 + 0x2f8;
        }
      }
      else if ((*(short *)(param_1 + 0x242) == 0) && (*(short *)(param_1 + 0x342) == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(undefined2 *)(param_1 + 0x242) = *(undefined2 *)(param_1 + 0x240);
    }
    plVar1 = *(long **)(param_1 + 0x2b0);
    if (plVar1 != (long *)0x0) {
      if ((*(short *)(param_1 + 0x2c0) == 0) && (*(short *)(param_1 + 0x340) == 0)) {
        if (*(long *)(param_1 + 0x310) == 0) {
          (**(code **)(*plVar1 + 0x40))(plVar1,lVar2);
        }
        else {
          (**(code **)(*plVar1 + 0x40))(plVar1,lVar2,0,param_1 + 0x310);
          lVar2 = param_1 + 0x310;
        }
      }
      else if ((*(short *)(param_1 + 0x2c2) == 0) && (*(short *)(param_1 + 0x342) == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(undefined2 *)(param_1 + 0x2c2) = *(undefined2 *)(param_1 + 0x2c0);
    }
  }
  else if (*(short *)(param_1 + 0x340) == 0) {
    if ((*(short *)(param_1 + 0x2c0) == 0) && (*(long *)(param_1 + 0x310) != 0)) {
      lVar2 = param_1 + 0x310;
    }
    else if ((*(short *)(param_1 + 0x240) == 0) && (*(long *)(param_1 + 0x2f8) != 0)) {
      lVar2 = param_1 + 0x2f8;
    }
    else if ((*(short *)(param_1 + 0x1c0) == 0) && (*(long *)(param_1 + 0x2e0) != 0)) {
      lVar2 = param_1 + 0x2e0;
    }
    else if ((*(short *)(param_1 + 0x140) == 0) && (*(long *)(param_1 + 0x2c8) != 0)) {
      lVar2 = param_1 + 0x2c8;
    }
  }
  return lVar2;
}


