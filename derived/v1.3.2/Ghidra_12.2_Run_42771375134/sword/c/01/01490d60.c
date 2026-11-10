/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01490d60; name: FUN_01490d60
 */


void FUN_01490d60(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_01490db0:
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar5 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar5)(puVar5);
      lVar2 = FUN_01481a10();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar5 = puVar5 + -10;
          goto LAB_01490db4;
        }
      }
      goto LAB_01490db0;
    }
  }
LAB_01490db4:
  FUN_014a2370(puVar5);
  lVar2 = *(long *)(param_1 + 0x88);
  switch(*(undefined4 *)(lVar2 + 0x5cc)) {
  case 0:
    goto switchD_01490ddc_caseD_0;
  case 1:
    FUN_01485970(lVar2,5);
    FUN_0148d470(*(undefined8 *)(param_1 + 0x90));
    FUN_014a2300(puVar5);
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar1 = (long *)(**(code **)*puVar5)(puVar5);
    lVar2 = FUN_01481a10();
    for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
    }
    goto LAB_01490e8c;
  case 2:
    FUN_01485970(lVar2,5);
    FUN_0148d470(*(undefined8 *)(param_1 + 0x90));
    FUN_014a2300(puVar5);
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar1 = (long *)(**(code **)*puVar5)(puVar5);
    lVar2 = FUN_01481a10();
    for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
    }
LAB_01490e8c:
    if (*(int *)puVar5[2] == 1) {
      FUN_014887d0();
    }
    else {
      FUN_014878c0(*(undefined8 *)(param_1 + 0x88));
    }
    break;
  case 3:
    uVar3 = FUN_014a22e0(puVar5);
    uVar4 = 4;
    if ((uVar3 & 1) == 0) {
      uVar4 = 1;
    }
    goto LAB_01490ed4;
  case 4:
    uVar3 = FUN_014a22e0(puVar5);
    uVar4 = 3;
    if ((uVar3 & 1) != 0) {
      uVar4 = 4;
    }
LAB_01490ed4:
    *(undefined4 *)(param_1 + 0x7c) = 6;
    *(undefined4 *)(param_1 + 0x80) = uVar4;
    break;
  case 5:
    FUN_016b2d70(*(undefined8 *)(lVar2 + 0x610),0);
    FUN_016b2d70(*(undefined8 *)(lVar2 + 0x618),0);
    FUN_016b2d70(*(undefined8 *)(lVar2 + 0x648),0);
    FUN_016b2d70(*(undefined8 *)(lVar2 + 0x640),0);
    FUN_016b2d70(*(undefined8 *)(lVar2 + 0x638),0);
    FUN_016b2d70(*(undefined8 *)(lVar2 + 0x628),0);
    FUN_016b2d70(*(undefined8 *)(lVar2 + 0x620),0);
    FUN_0148e7f0(*(undefined8 *)(param_1 + 0x90));
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
    *(undefined4 *)(param_1 + 0x7c) = 3;
    break;
  case 7:
    *(undefined4 *)(puVar5[0xc] + 0xc) = 1;
LAB_01490fa4:
    *(undefined8 *)(param_1 + 0x7c) = 0x500000006;
    break;
  case 8:
    FUN_014a23f0(puVar5);
    break;
  case 9:
    if (*(int *)puVar5[0xc] != 7) goto LAB_01490fa4;
    *(undefined4 *)(param_1 + 0x7c) = 4;
    FUN_01491310(param_1,0x1c610abe15c6794b);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x5cc) = 0;
switchD_01490ddc_caseD_0:
  return;
}


