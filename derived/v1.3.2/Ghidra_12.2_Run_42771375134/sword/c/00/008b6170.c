/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b6170; name: FUN_008b6170
 */


void FUN_008b6170(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_40 [16];
  
  lVar5 = *(long *)(param_1 + 0x88);
  switch(*(undefined4 *)(lVar5 + 0x5cc)) {
  case 0:
    goto switchD_008b61a8_caseD_0;
  case 1:
  case 2:
    FUN_008c61d0(lVar5,1);
    FUN_008c7d10(*(undefined8 *)(param_1 + 0x88));
    FUN_008c4b10(*(long *)(param_1 + 0x88),*(int *)(*(long *)(param_1 + 0x88) + 0x824) != 0);
    break;
  case 5:
    uVar1 = FUN_008c8330();
    FUN_008885c0(auStack_40,uVar1);
    iVar2 = FUN_00888630(auStack_40,1);
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    uVar1 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
    iVar3 = FUN_01521090(lVar5,uVar1);
    *(bool *)(param_1 + 0xa0) = iVar3 == 1;
    *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x640) = 1;
    FUN_008c0ec0(*(undefined8 *)(param_1 + 0x90));
    FUN_008c6ab0(*(undefined8 *)(param_1 + 0x88),1);
    lVar10 = *(long *)(param_1 + 0x88);
    FUN_016b2d70(*(undefined8 *)(lVar10 + 0x688),0);
    FUN_016b2d70(*(undefined8 *)(lVar10 + 0x690),0);
    FUN_008c82b0(*(undefined8 *)(param_1 + 0x88),0);
    FUN_008c4b10(*(undefined8 *)(param_1 + 0x88),0);
    uVar6 = FUN_00888de0(auStack_40);
    uVar4 = 0;
    if ((uVar6 & 1) != 0) {
      uVar4 = FUN_00888f90(auStack_40);
      uVar4 = uVar4 ^ 1;
    }
    iVar3 = FUN_00888630(auStack_40,0xc);
    if (((iVar2 < 2) || ((uVar4 & 1) != 0)) || (iVar3 != 0)) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x5d8);
      uVar1 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
      FUN_014c9900(uVar9,0,uVar1,1);
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0))
      {
        plVar7 = (long *)(**(code **)*puVar8)(puVar8);
        lVar10 = FUN_00897d00();
        for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          if (plVar7 == (long *)lVar10) {
            puVar8 = puVar8 + -10;
            goto LAB_008b63ec;
          }
        }
      }
      puVar8 = (undefined8 *)0x0;
LAB_008b63ec:
      FUN_008a6b70(puVar8,0x5da8df220eb28943,1,0);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x98),0);
      *(undefined4 *)(param_1 + 0x7c) = 3;
      FUN_008c82b0(*(undefined8 *)(param_1 + 0x88),0);
    }
    else if (*(char *)(param_1 + 0xa0) == '\0') {
      *(undefined4 *)(param_1 + 0x7c) = 6;
      FUN_008c1200(*(undefined8 *)(param_1 + 0x90));
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x5d8);
      uVar1 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
      FUN_014c9900(uVar9,0,uVar1,1);
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0))
      {
        plVar7 = (long *)(**(code **)*puVar8)(puVar8);
        lVar10 = FUN_00897d00();
        for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          if (plVar7 == (long *)lVar10) {
            puVar8 = puVar8 + -10;
            goto LAB_008b64e0;
          }
        }
      }
      puVar8 = (undefined8 *)0x0;
LAB_008b64e0:
      FUN_008a6b70(puVar8,0x5da572220eaf9a35,1,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x7c) = 7;
      FUN_014ca220(*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x5d8),0,
                   *(int *)(*(long *)(param_1 + 0x90) + 0x640) *
                   *(int *)(*(long *)(param_1 + 0x90) + 0x648),8,0,1);
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0))
      {
        plVar7 = (long *)(**(code **)*puVar8)(puVar8);
        lVar10 = FUN_00897d00();
        for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          if (plVar7 == (long *)lVar10) {
            puVar8 = puVar8 + -10;
            goto LAB_008b633c;
          }
        }
      }
      puVar8 = (undefined8 *)0x0;
LAB_008b633c:
      FUN_008a6b70(puVar8,0x5da576220eafa101,1,0);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x98),0);
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    FUN_00888620(auStack_40);
    break;
  case 6:
    *(undefined8 *)(param_1 + 0x7c) = 0xf00000009;
    FUN_00ffa160(lVar5,0,1);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x5cc) = 0;
switchD_008b61a8_caseD_0:
  return;
}


