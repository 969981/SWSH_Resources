/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc5c80; name: FUN_00fc5c80
 */


void FUN_00fc5c80(long param_1)

{
  bool bVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  int local_64;
  
  if (-1 < *(int *)(param_1 + 0x50)) {
    lVar11 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    lVar10 = *(long *)PTR_DAT_027194d8;
    lVar14 = *(long *)(*(long *)PTR_DAT_02710798 + 0x248);
    if (lVar14 != 0) {
      plVar15 = (long *)(lVar14 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    puVar4 = PTR_DAT_02722f00;
    puVar3 = PTR_DAT_02722ef8;
    plVar15 = (long *)(param_1 + 0x58);
    do {
      if ((*plVar15 != -0x340d631b7bddd9bb) && (plVar15[1] != -0x340d631b7bddd9bb)) {
        local_64 = 0;
        do {
          lVar12 = *(long *)(lVar14 + (long)*(int *)(param_1 + 0x50) * 0xa68 + (long)local_64 * 0x18
                            + 0x60);
          uVar5 = FUN_015261d0(lVar14,(long)*(int *)(param_1 + 0x50),&local_64);
          if (((uVar5 == 0) || ((uVar5 == 4 || (uVar5 | 4) == 6) != (bool)(char)plVar15[2])) &&
             (lVar12 == plVar15[1])) {
            plVar15[1] = -0x340d631b7bddd9bb;
            plVar13 = *(long **)(lVar10 + 0xb0);
            plVar2 = *(long **)(lVar10 + 0xb8);
            if (plVar13 != plVar2) {
              lVar12 = *plVar15;
              do {
                lVar16 = *plVar13;
                plVar8 = (long *)(*(code *)**(undefined8 **)(lVar16 + 0x50))
                                           ((undefined8 *)(lVar16 + 0x50));
                if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
                  uVar7 = FUN_00e53bf0();
                  *(undefined8 *)puVar3 = uVar7;
                  __cxa_guard_release(puVar4);
                }
                for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
                  if (plVar8 == (long *)puVar3) {
                    if ((*(long *)(lVar16 + 0x1a0) == lVar12) &&
                       (uVar9 = (**(code **)(*(long *)*plVar13 + 0x88))(), (uVar9 & 1) == 0)) {
                      *(undefined4 *)(lVar16 + 0x62c) = 3;
                      goto LAB_00fc5e94;
                    }
                    break;
                  }
                }
                plVar13 = plVar13 + 1;
              } while (plVar13 != plVar2);
            }
          }
LAB_00fc5e94:
          iVar6 = local_64 + 1;
          bVar1 = local_64 < 0x6d;
          local_64 = iVar6;
        } while (bVar1);
      }
      plVar15 = plVar15 + 3;
    } while (plVar15 != (long *)(param_1 + 0x178));
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
    }
  }
  return;
}


