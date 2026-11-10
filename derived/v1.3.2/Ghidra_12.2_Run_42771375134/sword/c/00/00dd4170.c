/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd4170; name: FUN_00dd4170
 */


void FUN_00dd4170(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  local_28 = *(long *)(param_1 + 0x70);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  uVar1 = FUN_00dcc8f0(param_2,uVar2,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if ((uVar1 & 1) != 0) {
    if (*(int *)(param_1 + 0x130) != 7) {
      FUN_00dce7e0(param_2);
    }
    for (plVar3 = *(long **)(param_1 + 0x160); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      FUN_00dcfa90(param_2,plVar3 + 2,plVar3 + 6);
    }
    for (plVar3 = *(long **)(param_1 + 0x1b8); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      FUN_00dcfae0(*(undefined4 *)(plVar3 + 6),param_2,plVar3 + 2);
    }
    for (plVar3 = *(long **)(param_1 + 0x210); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      FUN_00dcfb40(param_2,plVar3 + 2,*(undefined1 *)(plVar3 + 6));
    }
  }
  return;
}


