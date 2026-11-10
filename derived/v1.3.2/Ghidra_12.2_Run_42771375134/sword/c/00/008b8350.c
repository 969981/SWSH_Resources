/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b8350; name: FUN_008b8350
 */


void FUN_008b8350(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x98) + 0x618);
  if (iVar1 == 0) {
    uVar4 = 3;
  }
  else {
    if (iVar1 == 2) {
      return;
    }
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_00897d00();
    for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
    }
    if (*(char *)(puVar5[0xb] + 0x2b) == '\0') {
      uVar4 = 1;
    }
    else {
      FUN_01038270(*(undefined8 *)(param_1 + 0x90),1);
      uVar4 = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x80) = uVar4;
  *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x618) = 2;
  FUN_008c1e40(*(undefined8 *)(param_1 + 0x98),1);
  FUN_008c1f70(*(undefined8 *)(param_1 + 0x98),0);
  return;
}


