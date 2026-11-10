/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010c0e70; name: FUN_010c0e70
 */


void FUN_010c0e70(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 local_28;
  
  *(undefined4 *)(param_1 + 0x7c) = 3;
  FUN_010bf2f0(*(undefined8 *)(param_1 + 0x90),0);
  uVar3 = 3;
  if (*(int *)(param_1 + 0x80) == 5) {
    uVar3 = 1;
  }
  FUN_010364c0(*(undefined8 *)(param_1 + 0x90),uVar3);
  FUN_010af6a0(*(undefined8 *)(param_1 + 0x88));
  FUN_010afa60(*(undefined8 *)(param_1 + 0x98),3);
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar1 = (long *)(**(code **)*puVar4)(puVar4);
  lVar2 = FUN_010aad10();
  for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
  }
  if (*(int *)(puVar4[2] + 4) == 1) {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar1 = (long *)(**(code **)*puVar4)(puVar4);
    lVar2 = FUN_010aad10();
    for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
    }
    if (*(char *)(puVar4 + 3) != '\0') {
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      plVar1 = (long *)(**(code **)*puVar4)(puVar4);
      lVar2 = FUN_010aad10();
      for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
      }
      *(undefined1 *)(puVar4 + 3) = 0;
      local_28 = 0x40a8bb4b5ca6074e;
      lVar2 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x2b0),&local_28);
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
    }
  }
  return;
}


