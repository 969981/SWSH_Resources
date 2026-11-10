/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0149a960; name: FUN_0149a960
 */


undefined8 FUN_0149a960(long param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  uVar2 = FUN_010367c0(*(undefined8 *)(param_1 + 0x80));
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar8)(puVar8);
  lVar5 = FUN_01481a10();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  if (*(int *)(puVar8 + 4) == 1) {
    if ((uVar2 & 1) != 0) {
      return 0;
    }
  }
  else {
    uVar3 = FUN_010367c0(*(undefined8 *)(param_1 + 0x88));
    uVar7 = FUN_010367c0(*(undefined8 *)(param_1 + 0x98));
    uVar6 = FUN_010367c0(*(undefined8 *)(param_1 + 0xa0));
    if (((uVar2 | uVar3) & 1) != 0) {
      return 0;
    }
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    if ((uVar6 & 1) != 0) {
      return 0;
    }
  }
  lVar5 = *(long *)(param_1 + 0x88);
  FUN_016b2d70(*(undefined8 *)(lVar5 + 0x628),1);
  FUN_016b2d70(*(undefined8 *)(lVar5 + 0x630),1);
  FUN_016b2d70(*(undefined8 *)(lVar5 + 0x5e0),1);
  FUN_016b2d70(*(undefined8 *)(lVar5 + 0x638),*(char *)(*(long *)(lVar5 + 0x5d8) + 0x14) == '\0');
  lVar5 = *(long *)(param_1 + 0x80);
  bVar1 = true;
  *(undefined4 *)(param_1 + 0x78) = 1;
  FUN_016b2d70(*(undefined8 *)(lVar5 + 0x610),**(int **)(lVar5 + 0x5e8) != 3);
  FUN_016b2d70(*(undefined8 *)(lVar5 + 0x618),**(int **)(lVar5 + 0x5e8) != 3);
  FUN_016b2d70(*(undefined8 *)(lVar5 + 0x648),1);
  FUN_016b2d70(*(undefined8 *)(lVar5 + 0x640),1);
  FUN_016b2d70(*(undefined8 *)(lVar5 + 0x638),1);
  FUN_016b2d70(*(undefined8 *)(lVar5 + 0x620),1);
  FUN_016b2d70(*(undefined8 *)(lVar5 + 0x628),1);
  lVar5 = *(long *)(param_1 + 0x80);
  if (*(int *)(lVar5 + 0x650) != 2) {
    if (((*(int *)(lVar5 + 0x650) == 3) && (*(char *)(*(long *)(lVar5 + 0x5e8) + 0x15) != '\0')) &&
       (uVar7 = FUN_014876d0(), (uVar7 & 1) == 0)) {
      bVar1 = **(int **)(lVar5 + 0x5e8) != 1;
    }
    else {
      bVar1 = false;
    }
  }
  FUN_016b2d70(*(undefined8 *)(lVar5 + 0x630),bVar1);
  FUN_00ffa160(*(long *)(param_1 + 0x88),1,1);
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x80),1,1);
  return 1;
}


