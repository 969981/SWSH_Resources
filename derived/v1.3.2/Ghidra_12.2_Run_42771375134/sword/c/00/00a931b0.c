/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a931b0; name: FUN_00a931b0
 */


void FUN_00a931b0(long param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  
  FUN_00a92b10(param_1,1);
  plVar3 = *(long **)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (plVar3 != (long *)0x0) {
    *plVar3 = (long)(PTR_DAT_027196d8 + 0x10);
    if (plVar3[1] == 0) {
      plVar3[1] = 0;
      pcVar2 = (code *)plVar3[0x13];
    }
    else {
      FUN_006e2100(plVar3[1],plVar3);
      lVar1 = plVar3[1];
      plVar3[1] = 0;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
      pcVar2 = (code *)plVar3[0x13];
    }
    if (pcVar2 != (code *)0x0) {
      plVar3[0x14] = 0;
      plVar3[0x15] = 0;
      plVar3[0x12] = 0;
      plVar3[0x13] = 0;
      (*pcVar2)(plVar3 + 0x16);
    }
    pcVar2 = (code *)plVar3[3];
    if (pcVar2 != (code *)0x0) {
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      (*pcVar2)(plVar3 + 6);
    }
    if (plVar3[1] != 0) {
      (**(code **)(*(long *)(plVar3[1] + 0x48) + 0x18))();
      plVar3[1] = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x138) + 0x18))
              (*(long **)(param_1 + 0x138),plVar3,*(undefined8 *)(param_1 + 0x140),
               *(undefined8 *)(param_1 + 0x148));
  }
  plVar3 = *(long **)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (plVar3 != (long *)0x0) {
    *plVar3 = (long)(PTR_DAT_02710a48 + 0x10);
    if (plVar3[1] == 0) {
      plVar3[1] = 0;
      pcVar2 = (code *)plVar3[0x13];
    }
    else {
      FUN_006e2100(plVar3[1],plVar3);
      lVar1 = plVar3[1];
      plVar3[1] = 0;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
      pcVar2 = (code *)plVar3[0x13];
    }
    if (pcVar2 != (code *)0x0) {
      plVar3[0x14] = 0;
      plVar3[0x15] = 0;
      plVar3[0x12] = 0;
      plVar3[0x13] = 0;
      (*pcVar2)(plVar3 + 0x16);
    }
    pcVar2 = (code *)plVar3[3];
    if (pcVar2 != (code *)0x0) {
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      (*pcVar2)(plVar3 + 6);
    }
    if (plVar3[1] != 0) {
      (**(code **)(*(long *)(plVar3[1] + 0x48) + 0x18))();
      plVar3[1] = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x158) + 0x18))
              (*(long **)(param_1 + 0x158),plVar3,*(undefined8 *)(param_1 + 0x160),
               *(undefined8 *)(param_1 + 0x168));
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    *(undefined4 *)(param_1 + 0x104) = 2;
    FUN_00a93ef0(param_1);
    return;
  }
  *(undefined4 *)(param_1 + 0x104) = 4;
  return;
}


