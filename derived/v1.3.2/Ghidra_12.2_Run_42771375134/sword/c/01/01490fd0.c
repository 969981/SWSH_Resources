/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01490fd0; name: FUN_01490fd0
 */


void FUN_01490fd0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_28;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar1 = (long *)(**(code **)*puVar6)(puVar6);
  lVar2 = FUN_01481a10();
  for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
  }
  lVar2 = puVar6[2];
  if (*(int *)(lVar2 + 0xc) == 0) {
    local_28 = 0x19c8341b593ef28c;
    lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x2b0);
    if ((lVar3 == 0) || (uVar4 = FUN_0167bc20(lVar3,&local_28), (uVar4 & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x7c) = 1;
      *(undefined4 *)(lVar2 + 0xc) = 6;
      lVar3 = *(long *)(param_1 + 0x88);
      FUN_016b2d70(*(undefined8 *)(lVar3 + 0x610),**(int **)(lVar3 + 0x5e8) != 3);
      FUN_016b2d70(*(undefined8 *)(lVar3 + 0x618),**(int **)(lVar3 + 0x5e8) != 3);
      FUN_016b2d70(*(undefined8 *)(lVar3 + 0x648),1);
      FUN_016b2d70(*(undefined8 *)(lVar3 + 0x640),1);
      FUN_016b2d70(*(undefined8 *)(lVar3 + 0x638),1);
      FUN_016b2d70(*(undefined8 *)(lVar3 + 0x628),1);
      FUN_016b2d70(*(undefined8 *)(lVar3 + 0x620),0);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
      FUN_0148cc50(*(undefined8 *)(param_1 + 0x90),0);
      FUN_014878c0(*(undefined8 *)(param_1 + 0x88));
      uVar5 = FUN_01485a70(lVar2);
      FUN_0148c570(lVar2,uVar5);
    }
  }
  return;
}


