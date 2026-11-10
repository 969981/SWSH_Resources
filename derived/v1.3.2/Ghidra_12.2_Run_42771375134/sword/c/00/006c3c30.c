/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c3c30; name: FUN_006c3c30
 */


void FUN_006c3c30(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x188);
  plVar1 = *(long **)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(long *)(param_1 + 8) == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    lVar2 = *(long *)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 8),param_1);
    lVar2 = *(long *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    lVar2 = *(long *)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x118) + 0x18))
              (*(long **)(param_1 + 0x118),lVar2,*(undefined8 *)(param_1 + 0x120),
               *(undefined8 *)(param_1 + 0x128));
  }
  lVar2 = *(long *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x138) + 0x18))
              (*(long **)(param_1 + 0x138),lVar2,*(undefined8 *)(param_1 + 0x140),
               *(undefined8 *)(param_1 + 0x148));
  }
  plVar1 = *(long **)(param_1 + 0x158);
  plVar4 = *(long **)(param_1 + 0x160);
  while (plVar4 != plVar1) {
    plVar4 = plVar4 + -1;
    puVar3 = (undefined8 *)*plVar4;
    *plVar4 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)();
    }
  }
  *(long **)(param_1 + 0x160) = plVar1;
  return;
}


