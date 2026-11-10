/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec90f0; name: FUN_00ec90f0
 */


void FUN_00ec90f0(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  
  lVar16 = *(long *)(*param_2 + 0x90);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  puVar3 = PTR_DAT_02710798;
  lVar17 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
  }
  cVar6 = FUN_01539200(lVar17);
  if (cVar6 < '\0') {
    FUN_01539220(lVar17);
    puVar14 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    uVar12 = *puVar14;
    uVar1 = puVar14[1];
    uVar15 = uVar1 ^ uVar12;
    *puVar14 = uVar15 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar15 << 0x10;
    puVar14[1] = uVar15 >> 0x1b | uVar15 << 0x25;
    if (((int)uVar1 + (int)uVar12 & 1U) == 0) {
      plVar18 = *(long **)(lVar16 + 0x58);
      if (plVar18 != (long *)0x0) {
        (**(code **)(plVar18[9] + 0x10))();
      }
      lVar9 = (**(code **)(*plVar18 + 0x50))(plVar18,0);
      if (lVar9 != 0) {
        FUN_014a9c50();
      }
      lVar9 = (**(code **)(*plVar18 + 0x50))(plVar18,1);
      if (lVar9 != 0) {
        FUN_014a9c50();
      }
      lVar9 = (**(code **)(*plVar18 + 0x50))(plVar18,2);
      if (lVar9 != 0) {
        FUN_014a9c50();
      }
      lVar9 = (**(code **)(*plVar18 + 0x50))(plVar18,3);
      if (lVar9 != 0) {
        FUN_014a9c50();
      }
      lVar9 = (**(code **)(*plVar18 + 0x50))(plVar18,4);
      if (lVar9 != 0) {
        FUN_014a9c50();
      }
      lVar9 = (**(code **)(*plVar18 + 0x50))(plVar18,5);
      if (lVar9 != 0) {
        FUN_014a9c50();
      }
      (**(code **)(plVar18[9] + 0x18))(plVar18 + 9);
    }
  }
  puVar5 = PTR_DAT_0271fc50;
  puVar4 = PTR_DAT_0271fc48;
  plVar18 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar18 == plVar2) {
joined_r0x00ec9320:
      if (lVar17 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
      }
      if (lVar16 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00ec935c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
      return;
    }
    lVar9 = *plVar18;
    puVar19 = (undefined8 *)(lVar9 + 0x50);
    plVar11 = (long *)(**(code **)*puVar19)(puVar19);
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
      uVar10 = FUN_01590f40();
      *(undefined8 *)puVar5 = uVar10;
      __cxa_guard_release(puVar4);
    }
    for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if (plVar11 == (long *)puVar5) {
        if ((*(char *)(lVar9 + 0xd58) != '\0') &&
           (uVar12 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar12 & 1) == 0)) {
          lVar9 = *(long *)(*(long *)puVar3 + 0x1e8);
          if (lVar9 != 0) {
            (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
          }
          uVar8 = *(int *)(lVar9 + 0x150) + 1;
          *(uint *)(lVar9 + 0x150) = uVar8;
          if (0xfe < uVar8) {
            *(undefined4 *)(lVar9 + 0x150) = 0;
            lVar13 = FUN_00fa42c0();
            if ((lVar13 != 0) && (uVar8 = FUN_0087d3e0(), uVar8 < 0xb4)) {
              FUN_0087d3f0(lVar13,uVar8 + 1);
            }
          }
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
          goto joined_r0x00ec9320;
        }
        break;
      }
    }
    plVar18 = plVar18 + 1;
  } while( true );
}


