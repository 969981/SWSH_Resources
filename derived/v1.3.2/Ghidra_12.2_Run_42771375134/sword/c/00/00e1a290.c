/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e1a290; name: FUN_00e1a290
 */


void FUN_00e1a290(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long local_68;
  long local_58;
  
  lVar13 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  uVar14 = *(undefined8 *)(param_1 + 0xe8);
  uVar7 = FUN_0100bd10(lVar13);
  plVar8 = (long *)FUN_00e1a7b0(uVar14,uVar7);
  puVar4 = PTR_DAT_027194d8;
  if (plVar8 != (long *)0x0) {
    FUN_00dbbb00(*(undefined8 *)PTR_DAT_027194d8,plVar8);
    plVar8[0x17] = param_2[1];
    plVar8[0x16] = *param_2;
    *(undefined1 *)(plVar8 + 0x18) = 1;
    plVar8[0x15] = param_3[1];
    plVar8[0x14] = *param_3;
    puVar3 = PTR_DAT_027152c0;
    *(undefined1 *)(plVar8 + 0x18) = 1;
    lVar12 = *(long *)puVar3;
    plVar8[0xbb] = *(long *)(puVar3 + 8);
    plVar8[0xba] = lVar12;
    puVar5 = PTR_DAT_0271ed00;
    puVar3 = PTR_DAT_0271ecf8;
    puVar2 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    for (puVar1 = *(undefined8 **)(*(long *)puVar4 + 0xb0); puVar1 != puVar2; puVar1 = puVar1 + 1) {
      plVar16 = (long *)*puVar1;
      plVar9 = (long *)(**(code **)plVar16[10])(plVar16 + 10);
      if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
        uVar7 = FUN_0156b190();
        *(undefined8 *)puVar5 = uVar7;
        __cxa_guard_release(puVar3);
      }
      for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        if (plVar9 == (long *)puVar5) {
          uVar10 = (**(code **)(*(long *)*puVar1 + 0x88))();
          if ((uVar10 & 1) == 0) {
            (**(code **)(*plVar16 + 0x10))(&local_58,plVar16);
            local_68 = local_58;
            local_58 = 0;
            FUN_00e45240(plVar8,&local_68);
            if (local_68 != 0) {
              (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
              local_68 = 0;
            }
            if (local_58 == 0) goto LAB_00e1a400;
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            local_58 = 0;
            plVar9 = *(long **)(*(long *)puVar4 + 0xb0);
            plVar16 = *(long **)(*(long *)puVar4 + 0xb8);
            if (plVar9 != plVar16) goto LAB_00e1a410;
            goto LAB_00e1a5b0;
          }
          break;
        }
      }
    }
LAB_00e1a400:
    plVar9 = *(long **)(*(long *)puVar4 + 0xb0);
    plVar16 = *(long **)(*(long *)puVar4 + 0xb8);
    if (plVar9 != plVar16) {
LAB_00e1a410:
      do {
        uVar10 = (**(code **)(*(long *)*plVar9 + 0x88))();
        if ((uVar10 & 1) == 0) {
          lVar15 = *plVar9;
          plVar11 = (long *)(*(code *)**(undefined8 **)(lVar15 + 0x50))
                                      ((undefined8 *)(lVar15 + 0x50));
          lVar12 = FUN_00e1ca40();
          for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
            if (plVar11 == (long *)lVar12) {
              (**(code **)(*plVar8 + 0x10))(&local_58,plVar8);
              if (*(long *)(lVar15 + 0x3b0) != 0) {
                (**(code **)(*(long *)(*(long *)(lVar15 + 0x3b0) + 0x48) + 0x18))();
                *(undefined8 *)(lVar15 + 0x3b0) = 0;
              }
              *(long *)(lVar15 + 0x3b0) = local_58;
              break;
            }
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar16);
      plVar16 = *(long **)(*(long *)puVar4 + 0xb8);
      for (plVar9 = *(long **)(*(long *)puVar4 + 0xb0); plVar9 != plVar16; plVar9 = plVar9 + 1) {
        uVar10 = (**(code **)(*(long *)*plVar9 + 0x88))();
        if ((uVar10 & 1) == 0) {
          lVar15 = *plVar9;
          plVar11 = (long *)(*(code *)**(undefined8 **)(lVar15 + 0x50))
                                      ((undefined8 *)(lVar15 + 0x50));
          lVar12 = FUN_00a89c30();
          for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
            if (plVar11 == (long *)lVar12) {
              (**(code **)(*plVar8 + 0x10))(&local_58,plVar8);
              if (*(long *)(lVar15 + 0x3a8) != 0) {
                (**(code **)(*(long *)(*(long *)(lVar15 + 0x3a8) + 0x48) + 0x18))();
                *(undefined8 *)(lVar15 + 0x3a8) = 0;
              }
              *(long *)(lVar15 + 0x3a8) = local_58;
              break;
            }
          }
        }
      }
    }
LAB_00e1a5b0:
    if ((*(long *)(param_1 + 0xf0) == 0x674edc539f9f74a6) ||
       (*(long *)(param_1 + 0xf0) == 0x5ea5c3539ab81c81)) {
      *(undefined1 *)(plVar8 + 0xc6) = 1;
    }
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  return;
}


