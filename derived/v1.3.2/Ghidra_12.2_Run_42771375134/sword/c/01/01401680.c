/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01401680; name: FUN_01401680
 */


void FUN_01401680(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  lVar4 = *(long *)(param_1 + 0x78);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x688),0);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x690),0);
  FUN_008c82b0(*(undefined8 *)(param_1 + 0x78),1);
  FUN_008c4b10(*(undefined8 *)(param_1 + 0x78),0);
  FUN_008c6ab0(*(undefined8 *)(param_1 + 0x78),1);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8);
  uVar1 = FUN_008c8330(*(undefined8 *)(param_1 + 0x78));
  FUN_014c9900(uVar5,0,uVar1,1);
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar6)(puVar6);
    lVar4 = FUN_013f9d40();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar4) {
        puVar6 = puVar6 + -10;
        goto LAB_01401738;
      }
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_01401738:
  FUN_013fafe0(puVar6,0xa76b73bbb3de0087,1,0);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
  if (*(int *)(param_1 + 0x570) == 4) {
    FUN_008c9980(*(undefined8 *)(param_1 + 0x78),0);
  }
  pcVar3 = *(code **)(param_1 + 0xd8);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (*pcVar3)(param_1 + 0xf0);
  }
  *(long *)(param_1 + 0xf0) = param_1;
  *(undefined1 **)(param_1 + 0xd0) = &LAB_01405b40;
  *(undefined1 **)(param_1 + 0xd8) = &LAB_01405ba0;
  pcVar3 = *(code **)(param_1 + 0x158);
  *(undefined1 **)(param_1 + 0xe0) = &LAB_01405bb0;
  *(undefined1 **)(param_1 + 0xe8) = &LAB_01405bc0;
  *(undefined4 *)(param_1 + 0x570) = 2;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    (*pcVar3)(param_1 + 0x170);
  }
  *(long *)(param_1 + 0x170) = param_1;
  *(undefined1 **)(param_1 + 0x150) = &LAB_01404720;
  *(undefined1 **)(param_1 + 0x158) = &LAB_014048e0;
  *(undefined1 **)(param_1 + 0x160) = &LAB_014048f0;
  *(undefined1 **)(param_1 + 0x168) = &LAB_01404900;
  return;
}


