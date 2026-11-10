/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ba850; name: FUN_008ba850
 */


void FUN_008ba850(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar1 = FUN_010384a0(*(undefined8 *)(param_1 + 0x90));
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x7c) = 4;
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    lVar3 = FUN_00897d00();
    for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
    }
    if ((1 < *(int *)puVar4[0xb] - 1U) || (*(char *)(param_1 + 0x99) != '\0')) {
      if (*(char *)(param_1 + 0x98) == '\0') {
        *(undefined4 *)(param_1 + 0x80) = 0;
        FUN_01038270(*(undefined8 *)(param_1 + 0x90),1);
        *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x810) = 0xffffffff;
      }
      else {
        *(undefined4 *)(param_1 + 0x80) = 1;
        FUN_016bfe70(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5e8));
      }
      FUN_008c9530(*(undefined8 *)(param_1 + 0x88));
      return;
    }
    *(undefined4 *)(param_1 + 0x7c) = 3;
  }
  return;
}


