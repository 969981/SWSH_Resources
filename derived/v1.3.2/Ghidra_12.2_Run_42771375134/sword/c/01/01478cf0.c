/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01478cf0; name: FUN_01478cf0
 */


void FUN_01478cf0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar1 = FUN_010384a0(*(undefined8 *)(param_1 + 0x88));
  if ((uVar1 & 1) != 0) {
    FUN_01038270(*(undefined8 *)(param_1 + 0x88),1);
    *(undefined4 *)(param_1 + 0x7c) = 1;
    FUN_01470b40(*(undefined8 *)(param_1 + 0x90));
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),1,1);
    lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x618);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    lVar3 = FUN_0146e370();
    for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
    }
    if (*(int *)(param_1 + 0x9c) != *(int *)(puVar4[2] + 0x10)) {
      FUN_01472540(puVar4 + -10);
    }
    FUN_01471470(*(undefined8 *)(param_1 + 0x90),0);
    if (*(char *)(*(long *)(param_1 + 0x90) + 0x760) != '\0') {
      FUN_016b2d70(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x738),1);
      return;
    }
  }
  return;
}


