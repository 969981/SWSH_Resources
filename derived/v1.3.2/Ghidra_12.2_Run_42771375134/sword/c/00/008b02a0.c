/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b02a0; name: FUN_008b02a0
 */


byte FUN_008b02a0(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_40 [16];
  
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar3 = (long *)(**(code **)*puVar5)(puVar5);
  lVar4 = FUN_00897d00();
  for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
  }
  if ((*(int *)puVar5[0xb] - 1U < 2) ||
     (*(int *)(*(long *)(param_1 + 0xa0) + (long)*(int *)(*(long *)(param_1 + 0xa0) + 0x640) * 4 +
              0x64c) == 8)) {
    bVar1 = 0;
  }
  else {
    uVar2 = FUN_008c8330();
    FUN_008885c0(auStack_40,uVar2);
    bVar1 = FUN_008891e0(auStack_40);
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar3 = (long *)(**(code **)*puVar5)(puVar5);
    lVar4 = FUN_00897d00();
    for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
    }
    bVar1 = bVar1 & *(int *)(puVar5[0xb] + 0x5c) != 1;
    FUN_00888620(auStack_40);
  }
  return bVar1;
}


