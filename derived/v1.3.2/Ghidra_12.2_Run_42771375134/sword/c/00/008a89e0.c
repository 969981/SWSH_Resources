/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008a89e0; name: FUN_008a89e0
 */


ulong FUN_008a89e0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar8)(puVar8);
  lVar5 = FUN_00897d00();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  plVar4 = *(long **)(puVar8[0xb] + 0x10);
  uVar6 = (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined4 *)(puVar8[0xb] + 0x1c));
  uVar2 = FUN_008783b0();
  uVar3 = FUN_008783c0(uVar6);
  FUN_008649f0(uVar2,uVar3);
  uVar7 = FUN_00864aa0();
  if ((int)uVar7 != 0) {
    cVar1 = FUN_0087cdc0(uVar6);
    uVar7 = (ulong)(cVar1 != '\x02');
  }
  return uVar7;
}


