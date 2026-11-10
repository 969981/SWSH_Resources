/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00be7c50; name: FUN_00be7c50
 */


void FUN_00be7c50(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  puVar1 = PTR_DAT_0271b900 + 0xd0;
  puVar2 = PTR_DAT_0271b900 + 0x110;
  *param_1 = (long)(PTR_DAT_0271b900 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  plVar3 = (long *)param_1[0x106];
  if (param_1 + 0x102 == plVar3) {
    pcVar5 = *(code **)(*plVar3 + 0x20);
LAB_00be7cac:
    (*pcVar5)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar3 + 0x28);
    goto LAB_00be7cac;
  }
  plVar3 = (long *)param_1[0xfe];
  if (param_1 + 0xfa == plVar3) {
    pcVar5 = *(code **)(*plVar3 + 0x20);
LAB_00be7cd8:
    (*pcVar5)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar3 + 0x28);
    goto LAB_00be7cd8;
  }
  plVar3 = (long *)param_1[0xf6];
  if (param_1 + 0xf2 == plVar3) {
    pcVar5 = *(code **)(*plVar3 + 0x20);
LAB_00be7d04:
    (*pcVar5)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar3 + 0x28);
    goto LAB_00be7d04;
  }
  plVar3 = (long *)param_1[0xee];
  if (param_1 + 0xea == plVar3) {
    pcVar5 = *(code **)(*plVar3 + 0x20);
LAB_00be7d30:
    (*pcVar5)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar3 + 0x28);
    goto LAB_00be7d30;
  }
  plVar3 = (long *)param_1[0xe6];
  if (param_1 + 0xe2 == plVar3) {
    pcVar5 = *(code **)(*plVar3 + 0x20);
LAB_00be7d5c:
    (*pcVar5)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar3 + 0x28);
    goto LAB_00be7d5c;
  }
  plVar3 = (long *)param_1[0xde];
  if (param_1 + 0xda == plVar3) {
    pcVar5 = *(code **)(*plVar3 + 0x20);
LAB_00be7d88:
    (*pcVar5)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar3 + 0x28);
    goto LAB_00be7d88;
  }
  plVar3 = (long *)param_1[0xd6];
  if (param_1 + 0xd2 == plVar3) {
    pcVar5 = *(code **)(*plVar3 + 0x20);
LAB_00be7db4:
    (*pcVar5)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar3 + 0x28);
    goto LAB_00be7db4;
  }
  plVar3 = (long *)param_1[0xce];
  if (param_1 + 0xca == plVar3) {
    pcVar5 = *(code **)(*plVar3 + 0x20);
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB_00be7de4;
    pcVar5 = *(code **)(*plVar3 + 0x28);
  }
  (*pcVar5)();
LAB_00be7de4:
  lVar6 = param_1[0xc2];
  param_1[0xc2] = 0;
  if (lVar6 != 0) {
    uVar4 = param_1[0xc4];
    if (0x19f < uVar4) {
      uVar8 = 0;
      lVar7 = lVar6 + 0x40;
      puVar1 = PTR_DAT_027192f0 + 0x10;
      do {
        pcVar5 = *(code **)(lVar7 + -0x18);
        *(undefined **)(lVar7 + -0x40) = puVar1;
        if (pcVar5 != (code *)0x0) {
          *(undefined8 *)(lVar7 + -0x10) = 0;
          *(undefined8 *)(lVar7 + -8) = 0;
          *(undefined8 *)(lVar7 + -0x20) = 0;
          *(undefined8 *)(lVar7 + -0x18) = 0;
          (*pcVar5)(lVar7);
        }
        if (*(long *)(lVar7 + -0x28) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar7 + -0x28) + 0x48) + 0x18))();
          *(undefined8 *)(lVar7 + -0x28) = 0;
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x1a0;
      } while (uVar8 < uVar4 / 0x1a0);
      uVar4 = param_1[0xc4];
    }
    (**(code **)(*(long *)param_1[0xc3] + 0x18))((long *)param_1[0xc3],lVar6,uVar4,param_1[0xc5]);
  }
  if (param_1[0xbf] != 0) {
    (**(code **)(*(long *)(param_1[0xbf] + 0x48) + 0x18))();
    param_1[0xbf] = 0;
  }
  if (param_1[0xbe] != 0) {
    (**(code **)(*(long *)(param_1[0xbe] + 0x48) + 0x18))();
    param_1[0xbe] = 0;
  }
  if (param_1[0xbd] != 0) {
    (**(code **)(*(long *)(param_1[0xbd] + 0x48) + 0x18))();
    param_1[0xbd] = 0;
  }
  if (param_1[0xbc] != 0) {
    (**(code **)(*(long *)(param_1[0xbc] + 0x48) + 0x18))();
    param_1[0xbc] = 0;
  }
  if (param_1[0xba] != 0) {
    (**(code **)(*(long *)(param_1[0xba] + 0x48) + 0x18))();
    param_1[0xba] = 0;
  }
  FUN_00ff9a90(param_1);
  return;
}


