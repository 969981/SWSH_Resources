/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb4520; name: FUN_00bb4520
 */


void FUN_00bb4520(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 local_50;
  int local_48;
  int iStack_44;
  
  param_1 = param_1 + 0x100;
  uVar1 = FUN_00ffdc80(param_1,"poke_panel");
  uVar2 = FUN_016b7980();
  iVar4 = (int)((ulong)uVar2 >> 0x20);
  if (0 < iVar4 && 0 < (int)uVar2) {
    iVar5 = 0;
    do {
      iVar6 = 0;
      do {
        local_48 = iVar6;
        iStack_44 = iVar5;
        local_50 = FUN_016b7950(uVar1,&local_48);
        lVar3 = FUN_00ffda40(param_1,&local_50);
        if (lVar3 != 0) {
          *(undefined1 *)(lVar3 + 0x142) = 0;
        }
        iVar6 = iVar6 + 1;
      } while ((int)uVar2 != iVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar4);
  }
  uVar1 = FUN_00ffdc80(param_1,"marking_panel");
  uVar2 = FUN_016b7980();
  iVar4 = (int)((ulong)uVar2 >> 0x20);
  if ((0 < iVar4) && (0 < (int)uVar2)) {
    iVar5 = 0;
    do {
      iVar6 = 0;
      do {
        local_48 = iVar6;
        iStack_44 = iVar5;
        local_50 = FUN_016b7950(uVar1,&local_48);
        lVar3 = FUN_00ffda40(param_1,&local_50);
        if (lVar3 != 0) {
          *(undefined1 *)(lVar3 + 0x142) = 0;
        }
        iVar6 = iVar6 + 1;
      } while ((int)uVar2 != iVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar4);
  }
  uVar1 = FUN_00ffdc80(param_1,"boxtray_panel_08");
  uVar2 = FUN_016b7980();
  iVar4 = (int)((ulong)uVar2 >> 0x20);
  if ((0 < iVar4) && (0 < (int)uVar2)) {
    iVar5 = 0;
    do {
      iVar6 = 0;
      do {
        local_48 = iVar6;
        iStack_44 = iVar5;
        local_50 = FUN_016b7950(uVar1,&local_48);
        lVar3 = FUN_00ffda40(param_1,&local_50);
        if (lVar3 != 0) {
          *(undefined1 *)(lVar3 + 0x142) = 0;
        }
        iVar6 = iVar6 + 1;
      } while ((int)uVar2 != iVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar4);
  }
  uVar1 = FUN_00ffdc80(param_1,"boxtray_panel_16");
  uVar2 = FUN_016b7980();
  iVar4 = (int)((ulong)uVar2 >> 0x20);
  if ((0 < iVar4) && (0 < (int)uVar2)) {
    iVar5 = 0;
    do {
      iVar6 = 0;
      do {
        local_48 = iVar6;
        iStack_44 = iVar5;
        local_50 = FUN_016b7950(uVar1,&local_48);
        lVar3 = FUN_00ffda40(param_1,&local_50);
        if (lVar3 != 0) {
          *(undefined1 *)(lVar3 + 0x142) = 0;
        }
        iVar6 = iVar6 + 1;
      } while ((int)uVar2 != iVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar4);
  }
  uVar1 = FUN_00ffdc80(param_1,"boxtray_panel_24");
  uVar2 = FUN_016b7980();
  iVar4 = (int)((ulong)uVar2 >> 0x20);
  if ((0 < iVar4) && (0 < (int)uVar2)) {
    iVar5 = 0;
    do {
      iVar6 = 0;
      do {
        local_48 = iVar6;
        iStack_44 = iVar5;
        local_50 = FUN_016b7950(uVar1,&local_48);
        lVar3 = FUN_00ffda40(param_1,&local_50);
        if (lVar3 != 0) {
          *(undefined1 *)(lVar3 + 0x142) = 0;
        }
        iVar6 = iVar6 + 1;
      } while ((int)uVar2 != iVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar4);
  }
  uVar1 = FUN_00ffdc80(param_1,"boxtray_panel_31");
  uVar2 = FUN_016b7980();
  iVar4 = (int)((ulong)uVar2 >> 0x20);
  if ((0 < iVar4) && (0 < (int)uVar2)) {
    iVar5 = 0;
    do {
      iVar6 = 0;
      do {
        local_48 = iVar6;
        iStack_44 = iVar5;
        local_50 = FUN_016b7950(uVar1,&local_48);
        lVar3 = FUN_00ffda40(param_1,&local_50);
        if (lVar3 != 0) {
          *(undefined1 *)(lVar3 + 0x142) = 0;
        }
        iVar6 = iVar6 + 1;
      } while ((int)uVar2 != iVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar4);
  }
  uVar1 = FUN_00ffdc80(param_1,"boxtray_panel_32");
  uVar2 = FUN_016b7980();
  iVar4 = (int)((ulong)uVar2 >> 0x20);
  if ((0 < iVar4) && (0 < (int)uVar2)) {
    iVar5 = 0;
    do {
      iVar6 = 0;
      do {
        local_48 = iVar6;
        iStack_44 = iVar5;
        local_50 = FUN_016b7950(uVar1,&local_48);
        lVar3 = FUN_00ffda40(param_1,&local_50);
        if (lVar3 != 0) {
          *(undefined1 *)(lVar3 + 0x142) = 0;
        }
        iVar6 = iVar6 + 1;
      } while ((int)uVar2 != iVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar4);
  }
  return;
}


