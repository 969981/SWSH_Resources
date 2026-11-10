/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0149ab60; name: FUN_0149ab60
 */


void FUN_0149ab60(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_28;
  
  if (*(int *)(*(long *)(param_1 + 0x80) + 0x5cc) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_0149abbc:
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar6 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar6)(puVar6);
      lVar3 = FUN_01481a10();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar6 = puVar6 + -10;
          goto LAB_0149abc0;
        }
      }
      goto LAB_0149abbc;
    }
  }
LAB_0149abc0:
  switch(*(undefined4 *)(*(long *)(param_1 + 0x80) + 0x5cc)) {
  case 1:
  case 2:
    FUN_014a2300(puVar6);
    uVar4 = FUN_014a22e0(puVar6);
    if ((uVar4 & 1) == 0) {
      FUN_0149d470(*(undefined8 *)(param_1 + 0x88));
      goto switchD_0149abe4_caseD_5;
    }
    FUN_01485970(*(undefined8 *)(param_1 + 0x80),2);
    FUN_01485840(*(undefined8 *)(param_1 + 0x80),2,0);
    uVar5 = 6;
    break;
  case 3:
    uVar5 = 0x400000006;
    break;
  case 4:
    uVar5 = 0x100000006;
    break;
  default:
    goto switchD_0149abe4_caseD_5;
  case 7:
    *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x5cd) = 1;
    local_28 = 0x2a40fa61db851249;
    lVar3 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x2b0),&local_28);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
    FUN_0149c770(*(undefined8 *)(param_1 + 0x88),1);
    FUN_0149ca10(*(undefined8 *)(param_1 + 0x88),1);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
    lVar3 = *(long *)(param_1 + 0x80);
    FUN_016b2d70(*(undefined8 *)(lVar3 + 0x610),0);
    FUN_016b2d70(*(undefined8 *)(lVar3 + 0x618),0);
    FUN_016b2d70(*(undefined8 *)(lVar3 + 0x648),0);
    FUN_016b2d70(*(undefined8 *)(lVar3 + 0x640),0);
    FUN_016b2d70(*(undefined8 *)(lVar3 + 0x638),0);
    FUN_016b2d70(*(undefined8 *)(lVar3 + 0x620),0);
    FUN_016b2d70(*(undefined8 *)(lVar3 + 0x628),0);
    lVar3 = *(long *)(param_1 + 0x80);
    if ((*(int *)(lVar3 + 0x650) == 3) && (*(char *)(*(long *)(lVar3 + 0x5e8) + 0x15) != '\0')) {
      FUN_014876d0();
    }
    FUN_016b2d70(*(undefined8 *)(lVar3 + 0x630),0);
    uVar1 = FUN_0149b6d0(puVar6[0xc]);
    if (1 < uVar1) {
      FUN_014851c0(*(undefined8 *)(param_1 + 0x80),0);
    }
    FUN_01487f40(*(undefined8 *)(param_1 + 0x80));
    lVar3 = *(long *)(*(long *)(param_1 + 0x88) + 0x640);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
    *(undefined4 *)(param_1 + 0x78) = 2;
    goto switchD_0149abe4_caseD_5;
  case 8:
    FUN_014a23f0(puVar6);
    goto switchD_0149abe4_caseD_5;
  case 9:
    if (*(int *)puVar6[0xc] == 7) {
      *(undefined4 *)(param_1 + 0x78) = 3;
      FUN_0149b270(param_1,0x1c610abe15c6794b);
      goto switchD_0149abe4_caseD_5;
    }
    uVar5 = 0x500000006;
  }
  *(undefined8 *)(param_1 + 0x78) = uVar5;
switchD_0149abe4_caseD_5:
  *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x5cc) = 0;
  return;
}


