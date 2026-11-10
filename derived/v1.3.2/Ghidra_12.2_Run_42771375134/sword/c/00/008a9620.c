/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008a9620; name: FUN_008a9620
 */


undefined8 FUN_008a9620(long param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar6)(puVar6);
  lVar5 = FUN_00897d00();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  lVar5 = puVar6[0xb];
  (**(code **)(**(long **)(lVar5 + 0x10) + 0x50))
            (*(long **)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x1c));
  iVar2 = FUN_008783b0();
  (**(code **)(**(long **)(lVar5 + 0x10) + 0x50))
            (*(long **)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x1c));
  sVar1 = FUN_008783c0();
  iVar3 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
  if (iVar2 == 800 && sVar1 == 0) {
    if (iVar3 - 0x3afU < 2) {
      return 1;
    }
  }
  else if (iVar2 == 0x286 && sVar1 == 0) {
    if (iVar3 == 0x274) {
      return 1;
    }
  }
  else if ((iVar2 == 0x382 && sVar1 == 0) && (iVar3 == 0x636)) {
    return 1;
  }
  return 0;
}


