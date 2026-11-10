/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ea02c0; name: FUN_00ea02c0
 */


undefined8 FUN_00ea02c0(long *param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 local_38;
  
  if ((int)param_1[0x101] == 0) {
    plVar9 = (long *)param_1[0x3e];
    plVar1 = (long *)param_1[0x3d];
    do {
      if (plVar1 == plVar9) {
        return 0;
      }
      lVar11 = *plVar1;
      uVar6 = FUN_00df2390(lVar11 + 0x50);
      plVar1 = plVar1 + 1;
    } while ((uVar6 & 1) == 0);
    if ((*(char *)(lVar11 + 0x68) == '\0') && (uVar6 = FUN_00debf90(lVar11), (uVar6 & 1) == 0)) {
      if (4 < *(uint *)(lVar11 + 0x60)) {
        return 0;
      }
      if ((1 << (ulong)(*(uint *)(lVar11 + 0x60) & 0x1f) & 0x16U) == 0) {
        return 0;
      }
      uVar6 = FUN_00e46320(param_1);
      if ((uVar6 & 1) == 0) {
        lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
        }
        iVar2 = FUN_01521090(lVar11,0x439);
        iVar3 = FUN_01521090(lVar11,0x4f2);
        iVar4 = FUN_01521090(lVar11,0x632);
        iVar5 = FUN_01521090(lVar11,0x631);
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
        }
        if (iVar2 != 0 || iVar4 + iVar3 + iVar5 != 0) {
          return 1;
        }
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x188))(param_1,PTR_DAT_0271e8a0,0);
        if (iVar2 != 1) {
          return 0;
        }
        uVar6 = FUN_00f2eea0(0);
        if ((uVar6 & 1) == 0) {
          if ((((long *)param_1[0x83] == (long *)param_1[0x84]) ||
              (lVar11 = *(long *)param_1[0x83], lVar11 == 0)) ||
             (puVar12 = *(undefined8 **)(lVar11 + 0x60), puVar12 == (undefined8 *)0x0)) {
            puVar8 = (undefined8 *)0x0;
          }
          else {
            puVar7 = (undefined8 *)(**(code **)*puVar12)(puVar12);
            if (((*PTR_DAT_027150a8 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar2 != 0)) {
              uVar10 = FUN_00706e40();
              *(undefined8 *)PTR_DAT_027150b0 = uVar10;
              __cxa_guard_release(PTR_DAT_027150a8);
            }
            puVar8 = (undefined8 *)0x0;
            if (puVar7 != (undefined8 *)0x0) {
              do {
                if (puVar7 == (undefined8 *)PTR_DAT_027150b0) {
                  puVar8 = puVar12 + -10;
                  goto LAB_00ea0494;
                }
                puVar7 = (undefined8 *)*puVar7;
              } while (puVar7 != (undefined8 *)0x0);
              puVar8 = (undefined8 *)0x0;
            }
          }
LAB_00ea0494:
          local_38 = FUN_0069d2b0(puVar8);
          plVar9 = (long *)FUN_006b92e0(&local_38);
          if (*plVar9 == 0x248cb78e45b7cfed) {
            return 1;
          }
          plVar9 = (long *)FUN_006b92e0(&local_38);
          if (*plVar9 == 0xade7f9ba76923fc) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


