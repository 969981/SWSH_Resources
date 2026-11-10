/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01401220; name: FUN_01401220
 */


void FUN_01401220(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  
  lVar8 = *(long *)(param_1 + 0x78);
  FUN_016b2d70(*(undefined8 *)(lVar8 + 0x688),0);
  FUN_016b2d70(*(undefined8 *)(lVar8 + 0x690),0);
  FUN_008c82b0(*(undefined8 *)(param_1 + 0x78),0);
  FUN_008c4b10(*(undefined8 *)(param_1 + 0x78),0);
  FUN_008c6ab0(*(undefined8 *)(param_1 + 0x78),1);
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 != (undefined8 *)0x0)) {
    plVar6 = (long *)(**(code **)*puVar9)(puVar9);
    lVar8 = FUN_013f9d40();
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)lVar8) {
        puVar9 = puVar9 + -10;
        goto LAB_014012b4;
      }
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_014012b4:
  FUN_013fafe0(puVar9,0x2992c264034ea158,1,0);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
  pcVar7 = *(code **)(param_1 + 0xd8);
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (*pcVar7)(param_1 + 0xf0);
  }
  puVar3 = PTR_LAB_02729678;
  puVar2 = PTR_LAB_02729670;
  puVar1 = PTR_LAB_02729668;
  *(long *)(param_1 + 0xf0) = param_1;
  puVar5 = PTR_LAB_02729688;
  puVar4 = PTR_LAB_02729680;
  *(undefined **)(param_1 + 0xf8) = puVar1;
  *(undefined8 *)(param_1 + 0x100) = 0;
  pcVar7 = *(code **)(param_1 + 0x158);
  *(undefined **)(param_1 + 0xd0) = puVar2;
  *(undefined **)(param_1 + 0xd8) = puVar3;
  *(undefined **)(param_1 + 0xe0) = puVar4;
  *(undefined **)(param_1 + 0xe8) = puVar5;
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    (*pcVar7)(param_1 + 0x170);
  }
  *(long *)(param_1 + 0x170) = param_1;
  *(undefined1 **)(param_1 + 0x150) = &LAB_01404910;
  *(undefined1 **)(param_1 + 0x158) = &LAB_014049a0;
  *(undefined1 **)(param_1 + 0x160) = &LAB_014049b0;
  *(undefined1 **)(param_1 + 0x168) = &LAB_014049c0;
  return;
}


