/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b78d0; name: FUN_008b78d0
 */


void FUN_008b78d0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x88) + 0x810);
  if (iVar1 == 1) {
    *(undefined8 *)(param_1 + 0x7c) = 0xb;
    FUN_01038270(*(undefined8 *)(param_1 + 0x90),1);
    *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x810) = 0xffffffff;
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    if (*(char *)(param_1 + 0x99) == '\0') {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      plVar2 = (long *)(**(code **)*puVar5)(puVar5);
      lVar3 = FUN_00897d00();
      for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
      }
      plVar2 = *(long **)(puVar5[0xb] + 0x10);
      uVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(puVar5[0xb] + 0x1c));
      iVar1 = FUN_0087bba0(uVar4,*(undefined4 *)(param_1 + 0x9c));
      if (iVar1 == 0) {
        FUN_008b7ad0(param_1);
      }
    }
    *(undefined4 *)(param_1 + 0x7c) = 2;
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x810) = 0xffffffff;
  return;
}


