/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01495790; name: FUN_01495790
 */


void FUN_01495790(long param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte bVar10;
  undefined8 *puVar11;
  undefined8 local_38;
  
  lVar4 = *(long *)(param_1 + 0x80);
  if (*(int *)(lVar4 + 0x5cc) == 0) goto LAB_01495b80;
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_014957f0:
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar9 != (undefined8 *)0x0) {
      plVar5 = (long *)(**(code **)*puVar9)(puVar9);
      lVar4 = FUN_01481a10();
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)lVar4) {
          puVar9 = puVar9 + -10;
          goto LAB_014957f4;
        }
      }
      goto LAB_014957f0;
    }
  }
LAB_014957f4:
  switch(*(undefined4 *)(*(long *)(param_1 + 0x80) + 0x5cc)) {
  case 1:
    FUN_014a2300(puVar9);
    FUN_01495060(param_1);
    puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    lVar4 = *(long *)(param_1 + 0x80);
    plVar5 = (long *)(**(code **)*puVar11)(puVar11);
    lVar6 = FUN_01481a10();
    for (; plVar5 != (long *)lVar6; plVar5 = (long *)*plVar5) {
    }
    uVar7 = FUN_01485a70(puVar11[2]);
    uVar3 = 0;
    do {
      uVar8 = FUN_0087ede0(uVar7,uVar3);
      if ((uVar8 & 1) != 0) goto LAB_01495ad8;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x62);
    goto LAB_01495910;
  case 2:
    FUN_014a2300(puVar9);
    FUN_01495060(param_1);
    puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    lVar4 = *(long *)(param_1 + 0x80);
    plVar5 = (long *)(**(code **)*puVar11)(puVar11);
    lVar6 = FUN_01481a10();
    for (; plVar5 != (long *)lVar6; plVar5 = (long *)*plVar5) {
    }
    uVar7 = FUN_01485a70(puVar11[2]);
    uVar3 = 0;
    do {
      uVar8 = FUN_0087ede0(uVar7,uVar3);
      if ((uVar8 & 1) != 0) goto LAB_01495ad8;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x62);
LAB_01495910:
    bVar10 = 0;
    iVar1 = *(int *)(lVar4 + 0x650);
joined_r0x01495ae4:
    if (iVar1 == 2) {
      bVar2 = true;
    }
    else if (iVar1 == 3) {
      bVar2 = false;
      if (*(char *)(*(long *)(lVar4 + 0x5e8) + 0x15) != '\0') {
        uVar8 = FUN_014876d0();
        if ((uVar8 & 1) != 0) goto LAB_01495b04;
        bVar2 = **(int **)(lVar4 + 0x5e8) != 1;
      }
    }
    else {
LAB_01495b04:
      bVar2 = false;
    }
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x630),bVar10 & bVar2);
    uVar8 = FUN_014a22e0(puVar9);
    if ((uVar8 & 1) == 0) {
      FUN_01497110(*(undefined8 *)(param_1 + 0x88));
    }
    else {
      FUN_01485970(*(undefined8 *)(param_1 + 0x80),3);
      FUN_01485840(*(undefined8 *)(param_1 + 0x80),3,0);
switchD_01495818_caseD_3:
      *(undefined8 *)(param_1 + 0x78) = 6;
    }
    break;
  case 3:
    goto switchD_01495818_caseD_3;
  case 4:
    *(undefined8 *)(param_1 + 0x78) = 0x400000006;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x78) = 2;
    local_38 = 0x4b05a5fff917c398;
    lVar4 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x2b0),&local_38);
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
    FUN_014970d0(*(undefined8 *)(param_1 + 0x88),1);
    lVar4 = *(long *)(param_1 + 0x88);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5f8),1);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x600),1);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
    uVar7 = *(undefined8 *)(param_1 + 0x80);
    uVar3 = FUN_014970f0(*(undefined8 *)(param_1 + 0x88));
    FUN_01488360(uVar7,uVar3 & 1);
    lVar4 = *(long *)(param_1 + 0x80);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x610),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x618),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x648),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x640),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x638),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x620),0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x628),0);
    lVar4 = *(long *)(param_1 + 0x80);
    if ((*(int *)(lVar4 + 0x650) == 3) && (*(char *)(*(long *)(lVar4 + 0x5e8) + 0x15) != '\0')) {
      FUN_014876d0();
    }
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x630),0);
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar5 = (long *)(**(code **)*puVar9)(puVar9);
    lVar4 = FUN_01481a10();
    for (; plVar5 != (long *)lVar4; plVar5 = (long *)*plVar5) {
    }
    if (*(char *)(puVar9[2] + 0x15) != '\0') {
      FUN_014876d0();
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x88) + 0x6710);
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
    break;
  case 8:
    FUN_014a23f0(puVar9);
    break;
  case 9:
    if (*(int *)puVar9[0xc] == 7) {
      *(undefined4 *)(param_1 + 0x78) = 3;
      FUN_01496000(param_1,0x1c610abe15c6794b);
    }
    else {
      *(undefined8 *)(param_1 + 0x78) = 0x500000006;
    }
  }
  *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x5cc) = 0;
  lVar4 = *(long *)(param_1 + 0x80);
LAB_01495b80:
  uVar8 = FUN_010367c0(lVar4);
  if ((uVar8 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x78) = 0x500000006;
  }
  return;
LAB_01495ad8:
  bVar10 = 1;
  iVar1 = *(int *)(lVar4 + 0x650);
  goto joined_r0x01495ae4;
}


