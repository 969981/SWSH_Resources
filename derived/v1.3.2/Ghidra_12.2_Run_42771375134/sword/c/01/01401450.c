/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01401450; name: FUN_01401450
 */


void FUN_01401450(long param_1)

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
  *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x640) = 1;
  FUN_008c0ec0(*(undefined8 *)(param_1 + 0x80));
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
        goto LAB_0140151c;
      }
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_0140151c:
  FUN_013fafe0(puVar6,0xa76b75bbb3de03ed,1,1);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
  FUN_008c1200(*(undefined8 *)(param_1 + 0x80));
  pcVar3 = *(code **)(param_1 + 600);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    (*pcVar3)(param_1 + 0x270);
  }
  *(undefined1 **)(param_1 + 0x250) = &LAB_01404610;
  *(undefined1 **)(param_1 + 600) = &LAB_01404620;
  *(undefined1 **)(param_1 + 0x260) = &LAB_01404630;
  *(undefined1 **)(param_1 + 0x268) = &LAB_01404640;
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
  *(undefined1 **)(param_1 + 0xd0) = &LAB_01405ca0;
  *(undefined1 **)(param_1 + 0xd8) = &LAB_01405d10;
  pcVar3 = *(code **)(param_1 + 0x2d8);
  *(undefined1 **)(param_1 + 0xe0) = &LAB_01405d20;
  *(undefined1 **)(param_1 + 0xe8) = &LAB_01405d30;
  *(undefined4 *)(param_1 + 0x570) = 5;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    (*pcVar3)(param_1 + 0x2f0);
  }
  *(long *)(param_1 + 0x2f0) = param_1;
  *(undefined1 **)(param_1 + 0x2d0) = &LAB_01404650;
  *(undefined1 **)(param_1 + 0x2d8) = &LAB_014046f0;
  *(undefined1 **)(param_1 + 0x2e0) = &LAB_01404700;
  *(undefined1 **)(param_1 + 0x2e8) = &LAB_01404710;
  return;
}


