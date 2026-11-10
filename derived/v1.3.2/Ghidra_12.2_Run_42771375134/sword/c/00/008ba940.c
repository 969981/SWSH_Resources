/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ba940; name: FUN_008ba940
 */


void FUN_008ba940(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  cVar1 = *(char *)(param_1 + 0x99);
  plVar3 = (long *)(**(code **)*puVar7)(puVar7);
  lVar4 = FUN_00897d00();
  for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
  }
  if (*(char *)(puVar7[0xb] + 0x2b) == '\0') {
    uVar6 = 1;
    if (cVar1 == '\0') {
      uVar6 = 2;
    }
    lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    uVar2 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
    uVar5 = FUN_01520ef0(lVar4,uVar2,uVar6);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    if ((uVar5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x98) = 1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x98) = 0;
  return;
}


