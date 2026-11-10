/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008a8060; name: FUN_008a8060
 */


bool FUN_008a8060(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar5 = (long *)(**(code **)*puVar8)(puVar8);
  lVar6 = FUN_00897d00();
  for (; plVar5 != (long *)lVar6; plVar5 = (long *)*plVar5) {
  }
  plVar5 = *(long **)(puVar8[0xb] + 0x10);
  uVar7 = (**(code **)(*plVar5 + 0x50))(plVar5,*(undefined4 *)(puVar8[0xb] + 0x1c));
  uVar2 = FUN_008783b0();
  uVar3 = FUN_008783c0(uVar7);
  FUN_008649f0(uVar2,uVar3);
  iVar4 = FUN_00864aa0();
  if (iVar4 == 2) {
    cVar1 = FUN_0087cdc0(uVar7);
    return cVar1 != '\x02';
  }
  return false;
}


