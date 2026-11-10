/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e19e60; name: FUN_00e19e60
 */


void FUN_00e19e60(long param_1,undefined1 param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  puVar5 = *(uint **)(*(long *)(lVar7 + 0x88) + 400);
  piVar1 = (int *)((long)puVar5 + (ulong)*puVar5);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  puVar5 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (10 - (long)*piVar1)));
  puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5 + 4);
  lVar7 = FUN_00e1a620(*(undefined8 *)(param_1 + 0xe8),(long)puVar5 + (ulong)*puVar5);
  *(undefined1 *)(lVar7 + 0x4dc) = param_2;
  plVar2 = *(long **)(*(long *)(param_1 + 0xe8) + 0xb0);
  plVar3 = *(long **)(*(long *)(param_1 + 0xe8) + 0xb8);
  while( true ) {
    if (plVar2 == plVar3) {
      return;
    }
    lVar6 = *plVar2;
    uVar4 = FUN_00e2ee10(lVar6 + 0x50);
    if (((uVar4 & 1) != 0) && (uVar4 = (**(code **)(*(long *)*plVar2 + 0x88))(), (uVar4 & 1) == 0))
    break;
    plVar2 = plVar2 + 1;
  }
  FUN_00dbb950(*(undefined8 *)(param_1 + 0xe8),lVar7,lVar6);
  return;
}


