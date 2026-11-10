/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b2dc0; name: FUN_008b2dc0
 */


undefined8 FUN_008b2dc0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_40 [16];
  
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar3 = (long *)(**(code **)*puVar5)(puVar5);
  lVar4 = FUN_00897d00();
  for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
  }
  if ((*(int *)puVar5[0xb] - 1U < 2) && (*(char *)((long)puVar5[0xb] + 0x4b) == '\0')) {
    uVar1 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
    FUN_008885c0(auStack_40,uVar1);
    iVar2 = FUN_00888630(auStack_40,0x12);
    FUN_00888620(auStack_40);
    if (iVar2 == 4) {
      return 1;
    }
  }
  return 0;
}


