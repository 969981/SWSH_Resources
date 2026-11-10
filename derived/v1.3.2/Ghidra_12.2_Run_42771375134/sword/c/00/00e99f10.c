/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e99f10; name: FUN_00e99f10
 */


void FUN_00e99f10(undefined8 param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(param_2 + 0x298);
  if (lVar4 == 0) {
    lVar4 = FUN_00e5ecc0(param_2,0xffffffff);
    *(long *)(param_2 + 0x298) = lVar4;
  }
  FUN_00dc7290(param_1,lVar4,PTR_DAT_02715088);
  FUN_00dc84d0(*(undefined8 *)(param_2 + 0x298),0x122);
  lVar4 = *(long *)(param_2 + 0x298);
  if (*(long *)(lVar4 + 0x80) != 0) {
    plVar7 = (long *)(*(long *)(lVar4 + 0x80) + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar4 = *(long *)(param_2 + 0x298);
  }
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x80), lVar4 != 0)) {
    plVar7 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    puVar8 = *(undefined8 **)(lVar4 + 0x60);
    if (puVar8 != (undefined8 *)0x0) {
      plVar5 = (long *)(**(code **)*puVar8)(puVar8);
      if (((*PTR_DAT_02715280 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_02715280), iVar3 != 0)) {
        uVar9 = FUN_01590a70();
        *(undefined8 *)PTR_DAT_02715288 = uVar9;
        __cxa_guard_release(PTR_DAT_02715280);
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)PTR_DAT_02715288) {
          puVar8 = puVar8 + -10;
          goto LAB_00e9a008;
        }
      }
      puVar8 = (undefined8 *)0x0;
    }
LAB_00e9a008:
    (**(code **)(*plVar7 + 0x18))(plVar7);
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
    puVar8[0x3e] = puVar8[0x3d];
    FUN_00e46690(puVar8);
    if ((param_3 & 1) == 0) {
      return;
    }
    lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    bVar2 = FUN_01510f00(lVar6,0x903b22367526a53c);
    *(byte *)(param_2 + 0x6a1) = bVar2 & 1;
    if (((bVar2 & 1) != 0) && (*(char *)(param_2 + 0x6a2) == '\0')) {
      puVar1 = (undefined8 *)puVar8[0x3e];
      if (puVar1 == (undefined8 *)puVar8[0x3f]) {
        FUN_015c3280(puVar8 + 0x3d,PTR_DAT_0271fc60);
        if (lVar6 == 0) {
          return;
        }
        goto LAB_00e9a0bc;
      }
      uVar9 = puVar8[0x40];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar9;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar1 = 0x7abdda2367dcab90;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      puVar8[0x3e] = puVar8[0x3e] + 8;
    }
    if (lVar6 != 0) {
LAB_00e9a0bc:
                    /* WARNING: Could not recover jumptable at 0x00e9a0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      return;
    }
  }
  return;
}


