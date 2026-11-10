/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e13120; name: FUN_00e13120
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e13120(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar12;
  undefined8 *puVar11;
  long lVar13;
  long *plVar14;
  uint *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  long local_80;
  undefined1 local_78;
  long local_68;
  
  piVar9 = *(int **)(param_1 + 0x48);
  if (piVar9 != (int *)0x0) {
    lVar6 = FUN_00e13560(*(undefined8 *)(param_1 + 0xe8),piVar9);
    puVar3 = PTR_DAT_02710848;
    *(undefined4 *)(lVar6 + 0x3b0) = param_2;
    lVar10 = *(long *)(*(long *)puVar3 + 0x90);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1c0);
    if (lVar13 == 0) {
      local_80 = _DAT_00000068;
    }
    else {
      plVar14 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      lVar13 = *(long *)(lVar13 + 0x68);
      (**(code **)(*plVar14 + 0x18))(plVar14);
      local_80 = lVar13;
    }
    uVar7 = FUN_0100d460(lVar10,&local_80);
    *(undefined8 *)(lVar6 + 0x3a0) = uVar7;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    lVar6 = *(long *)(param_1 + 0xe8);
    if ((4 < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
       (uVar8 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar8 != 0)) {
      puVar15 = (uint *)((long)piVar9 + uVar8);
      puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
      if (*puVar15 != 0) {
        lVar10 = (ulong)*puVar15 << 2;
        do {
          puVar15 = puVar15 + 1;
          FUN_00e1d4e0(lVar6,(long)puVar15 + (ulong)*puVar15);
          lVar10 = lVar10 + -4;
        } while (lVar10 != 0);
        lVar6 = *(long *)(param_1 + 0xe8);
      }
    }
    puVar4 = PTR_DAT_0271ef98;
    puVar3 = PTR_DAT_0271ef90;
    puVar17 = *(undefined8 **)(lVar6 + 0xb0);
    puVar1 = *(undefined8 **)(lVar6 + 0xb8);
    if (puVar17 != puVar1) {
LAB_00e132a8:
      uVar8 = (**(code **)(*(long *)*puVar17 + 0x88))();
      if ((uVar8 & 1) == 0) {
        plVar16 = (long *)*puVar17;
        plVar14 = (long *)(**(code **)plVar16[10])(plVar16 + 10);
        if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
          uVar7 = FUN_00e1ca40();
          *(undefined8 *)puVar4 = uVar7;
          __cxa_guard_release(puVar3);
        }
        for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
          if (plVar14 == (long *)puVar4) {
            if (*(ushort *)((long)piVar9 - (long)*piVar9) < 7) {
              lVar6 = 0;
            }
            else {
              uVar8 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3];
              lVar6 = 0;
              if (uVar8 != 0) {
                lVar6 = *(long *)((long)piVar9 + uVar8);
              }
            }
            plVar16[0x75] = lVar6;
            uVar18 = 0;
            if (0x38 < *(ushort *)((long)piVar9 - (long)*piVar9)) {
              uVar8 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[0x1c];
              uVar18 = 0;
              if (uVar8 != 0) {
                uVar18 = *(undefined4 *)((long)piVar9 + uVar8);
              }
            }
            FUN_00dc7990(uVar18,plVar16);
            (**(code **)(*plVar16 + 0x10))(&local_68,plVar16);
            lVar6 = local_68;
            local_68 = 0;
            local_80 = lVar6;
            if (lVar6 != 0) {
              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
            }
            local_78 = 0;
            plVar14 = *(long **)(param_1 + 0x218);
            if (plVar14 < *(long **)(param_1 + 0x220)) {
              uVar7 = *(undefined8 *)(param_1 + 0x228);
              lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              lVar10 = local_80;
              if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar7;
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
              local_80 = 0;
              *plVar14 = lVar10;
              *(undefined1 *)(plVar14 + 1) = local_78;
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
              *(long *)(param_1 + 0x218) = *(long *)(param_1 + 0x218) + 0x10;
            }
            else {
              FUN_00e1d670(param_1 + 0x210,&local_80);
              if (local_80 != 0) {
                (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
                local_80 = 0;
              }
            }
            if (lVar6 != 0) {
              (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
            }
            if (local_68 != 0) {
              (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
              local_68 = 0;
            }
            puVar2 = *(undefined8 **)(param_1 + 0x88);
            puVar11 = *(undefined8 **)(param_1 + 0x80);
            if (*(undefined8 **)(param_1 + 0x80) != puVar2) goto LAB_00e1347c;
            lVar6 = plVar16[0x74];
            if (*(long *)(param_1 + 0x110) == lVar6) goto LAB_00e13520;
            goto LAB_00e134ac;
          }
        }
      }
      goto LAB_00e13528;
    }
  }
  return;
  while (puVar11 = puVar12, puVar2 != puVar12) {
LAB_00e1347c:
    puVar12 = puVar11 + 4;
    lVar6 = (**(code **)(*(long *)*puVar11 + 0x48))();
    lVar10 = plVar16[0x74];
    if (lVar6 == lVar10) {
      *(undefined1 *)(plVar16 + 0xcd) = 0;
      if (*(long *)(param_1 + 0x110) == lVar6) goto LAB_00e13520;
      goto LAB_00e134ac;
    }
  }
  lVar6 = lVar10;
  if (*(long *)(param_1 + 0x110) != lVar10) {
LAB_00e134ac:
    if ((((*(long *)(param_1 + 0x118) != lVar6) && (*(long *)(param_1 + 0x120) != lVar6)) &&
        (*(long *)(param_1 + 0x128) != lVar6)) &&
       (((*(long *)(param_1 + 0x130) != lVar6 && (*(long *)(param_1 + 0x138) != lVar6)) &&
        (*(long *)(param_1 + 0x140) != lVar6)))) goto LAB_00e13528;
  }
LAB_00e13520:
  FUN_00dc7b80(plVar16);
LAB_00e13528:
  puVar17 = puVar17 + 1;
  if (puVar17 == puVar1) {
    return;
  }
  goto LAB_00e132a8;
}


