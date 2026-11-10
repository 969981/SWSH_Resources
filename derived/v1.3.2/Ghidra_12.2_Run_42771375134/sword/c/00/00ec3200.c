/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec3200; name: FUN_00ec3200
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ec3200(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long local_58;
  
  *(undefined4 *)(param_2 + 0x18) = 0;
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
joined_r0x00ec3238:
  if (plVar1 == plVar2) {
    uVar10 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
    bVar3 = false;
    lVar8 = 0;
    uVar9 = FUN_01020290(uVar10,0x400000000);
    if ((uVar9 & 1) != 0) {
LAB_00ec329c:
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 2;
    }
LAB_00ec32a8:
    uVar9 = FUN_01020290(uVar10,0x8000000000);
    if ((uVar9 & 1) != 0) {
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 0x40;
    }
    lVar15 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    lVar14 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    }
    lVar15 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
    if (lVar15 == 0) {
      local_58 = 0;
      bVar6 = _DAT_00000068 == 0;
    }
    else {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
      FUN_01127680(&local_58,lVar15);
      bVar6 = *(long *)(local_58 + 0x68) == 0;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
    }
    uVar9 = FUN_01510f00(lVar14,0x11f4e1cbde0eef6f);
    uVar11 = FUN_016b1c90(*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x630));
    if ((((bVar6) && ((uVar9 & 1) != 0)) && ((uVar11 & 1) != 0)) &&
       ((uVar9 = FUN_01020290(uVar10,0x800000000), (uVar9 & 1) != 0 &&
        (uVar9 = FUN_00ecee70(), (uVar9 & 1) != 0)))) {
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 0x20;
    }
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    }
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
    }
    if ((bVar3) && (*(char *)(lVar8 + 0x644) != '\0')) {
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 8;
    }
    return;
  }
  lVar8 = FUN_00e813b0(*plVar1 + 0x50);
  if ((lVar8 == 0) || (uVar9 = (**(code **)(*(long *)*plVar1 + 0x88))(), (uVar9 & 1) != 0))
  goto LAB_00ec3264;
  uVar10 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  uVar9 = FUN_01020290(uVar10,0x1002000000000);
  puVar5 = PTR_DAT_0271edd0;
  puVar4 = PTR_DAT_0271edc8;
  if ((uVar9 & 1) != 0) {
    plVar2 = *(long **)(lVar8 + 0x1f0);
    for (plVar1 = *(long **)(lVar8 + 0x1e8); plVar1 != plVar2; plVar1 = plVar1 + 1) {
      plVar13 = (long *)(*(code *)**(undefined8 **)(*plVar1 + 0x50))();
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        uVar12 = FUN_00e32f80();
        *(undefined8 *)puVar5 = uVar12;
        __cxa_guard_release(puVar4);
      }
      for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
        if (plVar13 == (long *)puVar5) goto LAB_00ec34f4;
      }
    }
    *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 1;
  }
LAB_00ec34f4:
  bVar3 = true;
  uVar9 = FUN_01020290(uVar10,0x400000000);
  if ((uVar9 & 1) == 0) goto LAB_00ec32a8;
  goto LAB_00ec329c;
LAB_00ec3264:
  plVar1 = plVar1 + 1;
  goto joined_r0x00ec3238;
}


