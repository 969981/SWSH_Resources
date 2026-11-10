/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b96f00; name: FUN_00b96f00
 */


void FUN_00b96f00(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  FUN_01713fb0(*(undefined8 *)(param_1 + 0x80));
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_01713f00(*(undefined8 *)(param_1 + 0x80));
  }
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 == 2) {
    uVar2 = FUN_01716790(*(undefined8 *)(param_1 + 0x80));
    if ((uVar2 & 1) != 0) {
      if (*(int *)(param_1 + 0x90) == 0) goto LAB_00b96fb8;
      if (*(char *)(param_1 + 0x8c) == '\0') {
        plVar3 = *(long **)(*(long *)(param_1 + 0x80) + 0x198);
        (**(code **)(*plVar3 + 0x70))(plVar3,1,0);
        *(undefined4 *)(param_1 + 0x88) = 0;
        return;
      }
      FUN_01713f70(*(long *)(param_1 + 0x80),(int *)(param_1 + 0x90),1);
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return;
    }
    if (*(char *)(param_1 + 0x8c) == '\0') {
      return;
    }
    *(undefined4 *)(param_1 + 0x88) = 1;
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_01713f70(*(undefined8 *)(param_1 + 0x80),(int *)(param_1 + 0x90),1);
    *(undefined4 *)(param_1 + 0x88) = 2;
    return;
  }
LAB_00b96fb8:
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}


