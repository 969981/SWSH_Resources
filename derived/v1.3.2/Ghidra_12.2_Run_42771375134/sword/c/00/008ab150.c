/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ab150; name: FUN_008ab150
 */


undefined8 FUN_008ab150(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar3 = (long *)(**(code **)*puVar6)(puVar6);
  lVar4 = FUN_00897d00();
  for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
  }
  if (*(int *)(puVar6[0xb] + 0x20) == -1) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(**(long **)(puVar6[0xb] + 0x10) + 0x50))();
  }
  uVar1 = FUN_008783b0(uVar5);
  iVar2 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
  if ((uVar1 == 0x317) && (iVar2 == 0x3af)) {
    return 1;
  }
  if ((uVar1 == 0x318) && (iVar2 == 0x3b0)) {
    return 1;
  }
  if (uVar1 - 0x283 < 2) {
    if (iVar2 == 0x274) {
      return 1;
    }
  }
  else if (((uVar1 | 1) == 0x381) && (iVar2 == 0x636)) {
    return 1;
  }
  return 0;
}


