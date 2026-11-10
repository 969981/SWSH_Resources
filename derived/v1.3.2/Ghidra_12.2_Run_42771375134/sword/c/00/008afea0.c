/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008afea0; name: FUN_008afea0
 */


bool FUN_008afea0(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined1 auStack_40 [16];
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar3 = (long *)(**(code **)*puVar6)(puVar6);
  lVar4 = FUN_00897d00();
  for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
  }
  if (*(int *)puVar6[0xb] - 1U < 2) {
    iVar1 = FUN_008c8330(*(undefined8 *)(param_1 + 0xa0));
    FUN_008885c0(auStack_40,iVar1);
    iVar2 = FUN_00888630(auStack_40,0x12);
    bVar5 = iVar1 == 0x3f || (iVar1 == 0 || iVar2 == 5);
    FUN_00888620(auStack_40);
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}


