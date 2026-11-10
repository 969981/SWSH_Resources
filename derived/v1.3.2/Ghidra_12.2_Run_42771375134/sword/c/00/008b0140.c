/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b0140; name: FUN_008b0140
 */


byte FUN_008b0140(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 auStack_40 [16];
  
  iVar1 = FUN_008c8330(*(undefined8 *)(param_1 + 0xa0));
  FUN_008885c0(auStack_40,iVar1);
  iVar2 = FUN_00888630(auStack_40,0xf);
  if (((iVar1 - 0x631U < 2) || (iVar1 == 0x4f2)) || (iVar1 == 0x439)) {
    bVar6 = false;
  }
  else {
    bVar6 = iVar1 - 0x639U < 4 || (iVar1 == 0x2bf || iVar2 != 0);
  }
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar3 = (long *)(**(code **)*puVar5)(puVar5);
  lVar4 = FUN_00897d00();
  for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
  }
  if ((*(int *)puVar5[0xb] - 1U < 2) &&
     ((iVar1 = FUN_00888630(auStack_40,0x12), iVar1 == 4 ||
      (iVar1 = FUN_00888630(auStack_40,0x12), iVar1 == 5)))) {
    bVar6 = true;
  }
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar3 = (long *)(**(code **)*puVar5)(puVar5);
  lVar4 = FUN_00897d00();
  for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
  }
  iVar1 = *(int *)(puVar5[0xb] + 0x5c);
  FUN_00888620(auStack_40);
  return bVar6 & iVar1 != 2;
}


