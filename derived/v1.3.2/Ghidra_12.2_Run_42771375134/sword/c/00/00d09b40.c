/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d09b40; name: FUN_00d09b40
 */


void FUN_00d09b40(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long local_70;
  char *local_68;
  undefined8 local_60;
  long local_58;
  
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar6 = (long *)(**(code **)*puVar9)(puVar9);
  puVar3 = PTR_DAT_02717528;
  puVar2 = (undefined8 *)PTR_DAT_02717530;
  if ((*PTR_DAT_02717528 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_02717528);
    puVar2 = (undefined8 *)PTR_DAT_02717530;
    if (iVar5 != 0) {
      uVar8 = FUN_00b8c810();
      *(undefined8 *)PTR_DAT_02717530 = uVar8;
      __cxa_guard_release(PTR_DAT_02717528);
      puVar2 = (undefined8 *)PTR_DAT_02717530;
    }
  }
  for (; plVar6 != puVar2; plVar6 = (long *)*plVar6) {
  }
  lVar10 = puVar9[0x9f];
  plVar1 = *(long **)(lVar10 + 0x80);
  PTR_DAT_02717530 = (undefined *)puVar2;
  for (plVar6 = *(long **)(lVar10 + 0x78); plVar1 != plVar6; plVar6 = plVar6 + 1) {
    FUN_006cf0c0(&local_70,*plVar6 + 0x5c0);
    lVar4 = local_70;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar4 == 0xf736fd1edafce6e) {
      if (*(long **)(lVar10 + 0x80) == plVar6) goto LAB_00d09c3c;
      goto LAB_00d09c10;
    }
  }
  plVar6 = plVar1;
  if (*(long **)(lVar10 + 0x80) != plVar1) {
LAB_00d09c10:
    lVar10 = *plVar6;
    if (lVar10 != 0) {
      uVar7 = FUN_008a3e00(lVar10 + 0x50);
      if ((uVar7 & 1) == 0) {
        lVar10 = 0;
      }
      goto LAB_00d09c40;
    }
  }
LAB_00d09c3c:
  lVar10 = 0;
LAB_00d09c40:
  *(long *)(param_1 + 0x80) = lVar10;
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar6 = (long *)(**(code **)*puVar9)(puVar9);
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), iVar5 != 0)) {
    uVar8 = FUN_00b8c810();
    *puVar2 = uVar8;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar6 != puVar2; plVar6 = (long *)*plVar6) {
  }
  local_70 = 0x1e0b16eaeac74211;
  local_68 = "OptionBar";
  local_60 = 9;
  local_58 = 0;
  uVar8 = FUN_0089c480(puVar9[0x9f],&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  *(undefined8 *)(param_1 + 0x88) = uVar8;
  FUN_00d09d80(param_1);
  return;
}


