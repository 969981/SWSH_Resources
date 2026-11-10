/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138e530; name: FUN_0138e530
 */


void FUN_0138e530(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 local_60 [16];
  
  puVar2 = PTR_DAT_02715080;
  puVar1 = PTR_DAT_02715078;
  auVar11._8_8_ = local_60._8_8_;
  auVar11._0_8_ = local_60._0_8_;
  if (*(long *)(param_1 + 0x400) != 0) {
    plVar10 = *(long **)(param_1 + 0x3d0);
    local_60 = auVar11;
    for (plVar9 = *(long **)(param_1 + 0x3c8); plVar9 != plVar10; plVar9 = plVar9 + 1) {
      if ((*plVar9 == 0) || (puVar8 = *(undefined8 **)(*plVar9 + 0x60), puVar8 == (undefined8 *)0x0)
         ) {
        lVar5 = FUN_01394880(0,local_60);
      }
      else {
        plVar4 = (long *)(**(code **)*puVar8)(puVar8);
        if ((*puVar1 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(puVar1);
          if (iVar3 != 0) {
            uVar6 = FUN_00a87090();
            *(undefined8 *)puVar2 = uVar6;
            __cxa_guard_release(puVar1);
          }
        }
        for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
          if (plVar4 == (long *)puVar2) {
            lVar5 = FUN_01394880(puVar8 + -10,local_60);
            goto joined_r0x0138e59c;
          }
        }
        lVar5 = FUN_01394880(0,local_60);
      }
joined_r0x0138e59c:
      if (lVar5 != 0) {
        uVar6 = FUN_0137a220(*(undefined8 *)(param_1 + 0x400),local_60);
        uVar7 = FUN_012dcaa0();
        auVar11 = FUN_01382750(uVar6);
        local_60 = auVar11;
        FUN_01382cf0(uVar6);
        FUN_0137bba0(lVar5,uVar7,local_60);
      }
    }
  }
  puVar2 = PTR_DAT_02715080;
  puVar1 = PTR_DAT_02715078;
  if (*(long *)(param_1 + 0x408) != 0) {
    plVar10 = *(long **)(param_1 + 0x3d0);
    for (plVar9 = *(long **)(param_1 + 0x3c8); plVar9 != plVar10; plVar9 = plVar9 + 1) {
      if ((*plVar9 == 0) || (puVar8 = *(undefined8 **)(*plVar9 + 0x60), puVar8 == (undefined8 *)0x0)
         ) {
        lVar5 = FUN_01394880(0,local_60);
      }
      else {
        plVar4 = (long *)(**(code **)*puVar8)(puVar8);
        if ((*puVar1 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(puVar1);
          if (iVar3 != 0) {
            uVar6 = FUN_00a87090();
            *(undefined8 *)puVar2 = uVar6;
            __cxa_guard_release(puVar1);
          }
        }
        for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
          if (plVar4 == (long *)puVar2) {
            lVar5 = FUN_01394880(puVar8 + -10,local_60);
            goto joined_r0x0138e6b8;
          }
        }
        lVar5 = FUN_01394880(0,local_60);
      }
joined_r0x0138e6b8:
      if (lVar5 != 0) {
        uVar6 = FUN_0137a220(*(undefined8 *)(param_1 + 0x408),local_60);
        uVar7 = FUN_012dcaa0();
        auVar11 = FUN_01382750(uVar6);
        local_60 = auVar11;
        FUN_01382cf0(uVar6);
        FUN_0137bba0(lVar5,uVar7,local_60);
      }
    }
  }
  puVar2 = PTR_DAT_02715080;
  puVar1 = PTR_DAT_02715078;
  if (*(long *)(param_1 + 0x410) != 0) {
    plVar10 = *(long **)(param_1 + 0x3d0);
    for (plVar9 = *(long **)(param_1 + 0x3c8); plVar9 != plVar10; plVar9 = plVar9 + 1) {
      if ((*plVar9 == 0) || (puVar8 = *(undefined8 **)(*plVar9 + 0x60), puVar8 == (undefined8 *)0x0)
         ) {
        lVar5 = FUN_01394880(0,local_60);
      }
      else {
        plVar4 = (long *)(**(code **)*puVar8)(puVar8);
        if ((*puVar1 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(puVar1);
          if (iVar3 != 0) {
            uVar6 = FUN_00a87090();
            *(undefined8 *)puVar2 = uVar6;
            __cxa_guard_release(puVar1);
          }
        }
        for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
          if (plVar4 == (long *)puVar2) {
            lVar5 = FUN_01394880(puVar8 + -10,local_60);
            goto joined_r0x0138e7d4;
          }
        }
        lVar5 = FUN_01394880(0,local_60);
      }
joined_r0x0138e7d4:
      if (lVar5 != 0) {
        uVar6 = FUN_0137a220(*(undefined8 *)(param_1 + 0x410),local_60);
        uVar7 = FUN_012dcaa0();
        auVar11 = FUN_01382750(uVar6);
        local_60 = auVar11;
        FUN_01382cf0(uVar6);
        FUN_0137bba0(lVar5,uVar7,local_60);
      }
    }
  }
  puVar2 = PTR_DAT_02715080;
  puVar1 = PTR_DAT_02715078;
  if (*(long *)(param_1 + 0x418) != 0) {
    plVar10 = *(long **)(param_1 + 0x3d0);
    for (plVar9 = *(long **)(param_1 + 0x3c8); plVar9 != plVar10; plVar9 = plVar9 + 1) {
      if ((*plVar9 == 0) || (puVar8 = *(undefined8 **)(*plVar9 + 0x60), puVar8 == (undefined8 *)0x0)
         ) {
        lVar5 = FUN_01394880(0,local_60);
      }
      else {
        plVar4 = (long *)(**(code **)*puVar8)(puVar8);
        if ((*puVar1 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(puVar1);
          if (iVar3 != 0) {
            uVar6 = FUN_00a87090();
            *(undefined8 *)puVar2 = uVar6;
            __cxa_guard_release(puVar1);
          }
        }
        for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
          if (plVar4 == (long *)puVar2) {
            lVar5 = FUN_01394880(puVar8 + -10,local_60);
            goto joined_r0x0138e8f0;
          }
        }
        lVar5 = FUN_01394880(0,local_60);
      }
joined_r0x0138e8f0:
      if (lVar5 != 0) {
        uVar6 = FUN_0137a220(*(undefined8 *)(param_1 + 0x418),local_60);
        uVar7 = FUN_012dcaa0();
        auVar11 = FUN_01382750(uVar6);
        local_60 = auVar11;
        FUN_01382cf0(uVar6);
        FUN_0137bba0(lVar5,uVar7,local_60);
      }
    }
  }
  return;
}


