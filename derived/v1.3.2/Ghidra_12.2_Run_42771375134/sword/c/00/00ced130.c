/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ced130; name: FUN_00ced130
 */


void FUN_00ced130(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar4 = (long *)(**(code **)*puVar7)(puVar7);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_02717528), iVar3 != 0))
  {
    uVar5 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar5;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar4 != (long *)PTR_DAT_02717530; plVar4 = (long *)*plVar4) {
  }
  lVar8 = puVar7[0x9f];
  local_80 = 0x3580421b089f739b;
  local_78 = "ChikaShopViewTop";
  local_70 = 0x10;
  local_68 = 0;
  uVar5 = FUN_00ce9b30(lVar8,&local_80);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  FUN_006cf0a0(&local_80,PTR_DAT_027176e0);
  uVar5 = FUN_0089c480(lVar8,&local_80);
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  plVar10 = *(long **)(lVar8 + 0x80);
  for (plVar4 = *(long **)(lVar8 + 0x78); plVar10 != plVar4; plVar4 = plVar4 + 1) {
    FUN_006cf0c0(&local_80,*plVar4 + 0x5c0);
    lVar9 = local_80;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if (lVar9 == -0x643f186ccccffaf1) {
      if (*(long **)(lVar8 + 0x80) != plVar4) goto LAB_00ced294;
      goto LAB_00ced2c0;
    }
  }
  plVar4 = plVar10;
  if (*(long **)(lVar8 + 0x80) != plVar10) {
LAB_00ced294:
    lVar9 = *plVar4;
    if (lVar9 != 0) {
      uVar6 = FUN_008bdaf0(lVar9 + 0x50);
      if ((uVar6 & 1) == 0) {
        lVar9 = 0;
      }
      goto LAB_00ced2c4;
    }
  }
LAB_00ced2c0:
  lVar9 = 0;
LAB_00ced2c4:
  *(long *)(param_1 + 0x88) = lVar9;
  FUN_00ff86a0(&local_80,*(undefined8 *)(lVar8 + 0xb0),1);
  lVar8 = *(long *)(local_80 + 0x60);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(long *)(param_1 + 0x90) = lVar8;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  puVar2 = PTR_DAT_02717468;
  puVar1 = PTR_DAT_02710860;
  *(long *)(param_1 + 0x98) = lVar8;
  uVar6 = 0;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)puVar2;
  plVar4 = (long *)(param_1 + 0xe8);
  do {
    plVar10 = *(long **)(param_1 + 8);
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar9 = (**(code **)(*plVar10 + 0x10))(plVar10,0x80,8);
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0xb8))(plVar10);
    }
    FUN_0077d050(lVar9,0x80);
    *(long **)(lVar9 + 8) = plVar10;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(undefined8 *)(lVar9 + 0x18) = 0x80;
    *(undefined8 *)(lVar9 + 0x20) = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    if (*plVar4 != 0) {
      (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
      *plVar4 = 0;
    }
    uVar6 = uVar6 + 1;
    *plVar4 = lVar9;
    plVar4 = plVar4 + 1;
  } while (uVar6 < 7);
  *(undefined1 *)(param_1 + 0xe0) = 1;
  local_80 = 0x6526dd9522d517f7;
  local_78 = (char *)0x6526dc9522d51644;
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x90),&local_80,*(undefined8 *)(param_1 + 0xe8));
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0xe8);
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x90),&local_78,*(undefined8 *)(param_1 + 0xf0));
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  return;
}


