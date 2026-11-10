/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01490bf0; name: FUN_01490bf0
 */


undefined8 FUN_01490bf0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  uVar1 = FUN_01036fd0(*(undefined8 *)(param_1 + 0xa0));
  uVar2 = FUN_010367c0(*(undefined8 *)(param_1 + 0x88));
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar3 = (long *)(**(code **)*puVar7)(puVar7);
  lVar4 = FUN_01481a10();
  for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
  }
  uVar1 = uVar1 & (uVar2 ^ 1);
  if (*(int *)(puVar7 + 4) == 1) {
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  else {
    uVar2 = FUN_010367c0(*(undefined8 *)(param_1 + 0x90));
    uVar5 = FUN_010367c0(*(undefined8 *)(param_1 + 0xb0));
    uVar6 = FUN_010367c0(*(undefined8 *)(param_1 + 0xa8));
    if ((uVar1 & (uVar2 ^ 0xffffffff) & 1) == 0) {
      return 0;
    }
    if ((uVar5 & 1) != 0) {
      return 0;
    }
    if ((uVar6 & 1) != 0) {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = 1;
  FUN_016b2d70(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x600),1);
  lVar4 = *(long *)(param_1 + 0x88);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x610),**(int **)(lVar4 + 0x5e8) != 3);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x618),**(int **)(lVar4 + 0x5e8) != 3);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x648),1);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x640),1);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x638),1);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x628),1);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x620),0);
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),1,1);
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),1,1);
  return 1;
}


