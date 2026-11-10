/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e1ab80; name: FUN_00e1ab80
 */


void FUN_00e1ab80(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long local_e8;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long *aplStack_c0 [12];
  
  puVar2 = PTR_DAT_027194d8;
  lVar4 = FUN_00a89ad0(*(undefined8 *)PTR_DAT_027194d8,&local_e0);
  if (lVar4 != 0) {
    FUN_00e38a70(lVar4,*(undefined8 *)(*(long *)PTR_DAT_027194e0 + 0x50));
    local_e8 = *(long *)(lVar4 + 0x3b8);
    if (local_e8 != 0) {
      plVar6 = (long *)(local_e8 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb0);
    puVar1 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    if (puVar8 != puVar1) {
      do {
        uVar5 = (**(code **)(*(long *)*puVar8 + 0x88))();
        if ((uVar5 & 1) == 0) {
          plVar7 = (long *)*puVar8;
          plVar6 = (long *)(**(code **)plVar7[10])(plVar7 + 10);
          lVar4 = FUN_0156b190();
          for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            if (plVar6 == (long *)lVar4) {
              local_c8 = &LAB_00e2ef40;
              local_e0 = &LAB_00e2ef00;
              local_d8 = FUN_00e2ef20;
              local_d0 = &LAB_00e2ef30;
              aplStack_c0[0] = &local_e8;
              (**(code **)(*plVar7 + 0x100))(plVar7,&local_e0);
              pcVar3 = local_d8;
              if (local_d8 != (code *)0x0) {
                local_d0 = (undefined1 *)0x0;
                local_c8 = (undefined1 *)0x0;
                local_e0 = (undefined1 *)0x0;
                local_d8 = (code *)0x0;
                (*pcVar3)(aplStack_c0);
              }
              break;
            }
          }
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar1);
    }
    lVar4 = *(long *)(*(long *)PTR_DAT_027194e0 + 0x108);
    if (lVar4 != 0) {
      puVar8 = *(undefined8 **)(*(long *)PTR_DAT_027194e0 + 0x100);
      lVar4 = lVar4 << 3;
      do {
        uVar5 = (**(code **)(*(long *)*puVar8 + 0x40))();
        if ((uVar5 & 1) == 0) {
          local_d0 = &LAB_00e2ef80;
          local_c8 = &LAB_00e2ef90;
          local_e0 = &LAB_00e2ef50;
          local_d8 = FUN_00e2ef70;
          aplStack_c0[0] = &local_e8;
          FUN_00dcd4a0(*puVar8,&local_e0);
          pcVar3 = local_d8;
          if (local_d8 != (code *)0x0) {
            local_d0 = (undefined1 *)0x0;
            local_c8 = (undefined1 *)0x0;
            local_e0 = (undefined1 *)0x0;
            local_d8 = (code *)0x0;
            (*pcVar3)(aplStack_c0);
          }
        }
        puVar8 = puVar8 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
  }
  return;
}


