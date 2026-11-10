/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b9690; name: FUN_008b9690
 */


void FUN_008b9690(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_1 + 0x98) == '\0') {
    if ((*(char *)(param_1 + 0x99) != '\0') &&
       (uVar3 = FUN_010384a0(*(undefined8 *)(param_1 + 0x90)), (uVar3 & 1) != 0)) {
      FUN_01038270(*(undefined8 *)(param_1 + 0x90),1);
      *(undefined8 *)(param_1 + 0x7c) = 2;
      *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x810) = 0xffffffff;
      FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),1,1);
      return;
    }
  }
  else {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar1 = (long *)(**(code **)*puVar4)(puVar4);
    lVar2 = FUN_00897d00();
    for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
    }
    if ((*(int *)(puVar4[0xb] + 0x24) != 0x4e) ||
       (uVar3 = FUN_010384a0(*(undefined8 *)(param_1 + 0x90)), (uVar3 & 1) != 0)) {
      *(undefined8 *)(param_1 + 0x7c) = 0xf00000002;
      *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x810) = 0xffffffff;
    }
  }
  return;
}


