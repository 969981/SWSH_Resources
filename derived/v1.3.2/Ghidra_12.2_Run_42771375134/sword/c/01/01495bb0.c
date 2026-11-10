/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01495bb0; name: FUN_01495bb0
 */


void FUN_01495bb0(long param_1)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_28;
  
  lVar6 = *(long *)(param_1 + 0x88);
  iVar1 = *(int *)(lVar6 + 0x790);
  if (iVar1 == 2) {
    *(undefined4 *)(lVar6 + 0x790) = 3;
    FUN_01488360(*(undefined8 *)(param_1 + 0x80),1);
    return;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(lVar6 + 0x790) = 3;
    FUN_01488360(*(undefined8 *)(param_1 + 0x80),0);
    return;
  }
  if (iVar1 == 0) {
    bVar2 = true;
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(undefined4 *)(lVar6 + 0x790) = 3;
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x80),0);
    lVar6 = *(long *)(param_1 + 0x80);
    FUN_016b2d70(*(undefined8 *)(lVar6 + 0x610),**(int **)(lVar6 + 0x5e8) != 3);
    FUN_016b2d70(*(undefined8 *)(lVar6 + 0x618),**(int **)(lVar6 + 0x5e8) != 3);
    FUN_016b2d70(*(undefined8 *)(lVar6 + 0x648),1);
    FUN_016b2d70(*(undefined8 *)(lVar6 + 0x640),1);
    FUN_016b2d70(*(undefined8 *)(lVar6 + 0x638),1);
    FUN_016b2d70(*(undefined8 *)(lVar6 + 0x620),1);
    FUN_016b2d70(*(undefined8 *)(lVar6 + 0x628),0);
    lVar6 = *(long *)(param_1 + 0x80);
    if (*(int *)(lVar6 + 0x650) != 2) {
      if (((*(int *)(lVar6 + 0x650) == 3) && (*(char *)(*(long *)(lVar6 + 0x5e8) + 0x15) != '\0'))
         && (uVar4 = FUN_014876d0(), (uVar4 & 1) == 0)) {
        bVar2 = **(int **)(lVar6 + 0x5e8) != 1;
      }
      else {
        bVar2 = false;
      }
    }
    FUN_016b2d70(*(undefined8 *)(lVar6 + 0x630),bVar2);
    FUN_014970d0(*(undefined8 *)(param_1 + 0x88),0);
    local_28 = 0x4b05a5fff917c398;
    lVar6 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x2b0),&local_28);
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
    lVar6 = *(long *)(param_1 + 0x88);
    FUN_016b2d70(*(undefined8 *)(lVar6 + 0x5f8),0);
    FUN_016b2d70(*(undefined8 *)(lVar6 + 0x600),0);
    FUN_014881d0(*(undefined8 *)(param_1 + 0x80),1);
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar5 = (long *)(**(code **)*puVar7)(puVar7);
    lVar6 = FUN_01481a10();
    for (; plVar5 != (long *)lVar6; plVar5 = (long *)*plVar5) {
    }
    bVar3 = 0;
    if (*(char *)(puVar7[2] + 0x15) != '\0') {
      bVar3 = FUN_014876d0();
      bVar3 = ~bVar3 & 1;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x88) + 0x6710);
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe | bVar3;
  }
  return;
}


