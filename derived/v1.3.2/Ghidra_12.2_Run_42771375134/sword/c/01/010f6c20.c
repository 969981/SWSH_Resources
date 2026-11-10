/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f6c20; name: FUN_010f6c20
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010f6c20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  long local_78;
  long local_70;
  char *pcStack_68;
  undefined8 local_60;
  long local_58;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 != (undefined8 *)0x0)) {
    plVar5 = (long *)(**(code **)*puVar9)(puVar9);
    lVar6 = FUN_010e8cf0();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar6) {
        puVar10 = puVar9 + -10;
        lVar6 = puVar9[2];
        goto joined_r0x010f71c8;
      }
    }
  }
  puVar10 = (undefined8 *)0x0;
  lVar6 = _DAT_00000060;
joined_r0x010f71c8:
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(long *)(param_1 + 0x88) = lVar6;
  lVar6 = puVar10[0xd];
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(long *)(param_1 + 0x90) = lVar6;
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar5 = (long *)(**(code **)*puVar9)(puVar9);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02717528), iVar4 != 0))
  {
    uVar8 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar8;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar5 != (long *)PTR_DAT_02717530; plVar5 = (long *)*plVar5) {
  }
  lVar6 = puVar9[0x9f];
  plVar14 = *(long **)(lVar6 + 0x80);
  for (plVar5 = *(long **)(lVar6 + 0x78); plVar14 != plVar5; plVar5 = plVar5 + 1) {
    FUN_006cf0c0(&local_70,*plVar5 + 0x5c0);
    lVar11 = local_70;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar11 == -0x4deda27bb0bc7d61) {
      if (*(long **)(lVar6 + 0x80) == plVar5) goto LAB_010f6dd8;
      goto LAB_010f6dac;
    }
  }
  plVar5 = plVar14;
  if (*(long **)(lVar6 + 0x80) != plVar14) {
LAB_010f6dac:
    lVar11 = *plVar5;
    if (lVar11 != 0) {
      uVar7 = FUN_010ef990(lVar11 + 0x50);
      if ((uVar7 & 1) == 0) {
        lVar11 = 0;
      }
      goto LAB_010f6ddc;
    }
  }
LAB_010f6dd8:
  lVar11 = 0;
LAB_010f6ddc:
  *(long *)(param_1 + 0x98) = lVar11;
  local_70 = -0x7cfc1f1e05c7572f;
  pcStack_68 = "optionbar";
  local_60 = 9;
  local_58 = 0;
  uVar8 = FUN_0089c480(lVar6,&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  *(undefined8 *)(param_1 + 0xa0) = uVar8;
  FUN_00ff86a0(&local_70,*(undefined8 *)(lVar6 + 0xb0),0);
  lVar6 = *(long *)(local_70 + 0x60);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  lVar11 = *(long *)(*(long *)(param_1 + 0xa0) + 0x2b0);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar12 = *(long *)(lVar11 + 0x2e8);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  FUN_01036e20(*(undefined8 *)(param_1 + 0xa0));
  local_70 = 0x6a1723c0e3636df8;
  FUN_0077eb10(lVar6,&local_70,lVar12);
  uVar8 = *(undefined8 *)(param_1 + 0xa0);
  local_78 = lVar12;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  FUN_01036db0(uVar8,1,1,&local_78);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  puVar3 = PTR_DAT_02710798;
  *(long *)(*(long *)(param_1 + 0x98) + 0x648) = param_1 + 0x78;
  lVar6 = *(long *)(*(long *)puVar3 + 0x210);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  plVar5 = *(long **)(param_1 + 8);
  puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x30,8);
  puVar3 = PTR_DAT_02710860;
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_010f7210:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar5;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  puVar9[4] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined4 *)(puVar9 + 5) = 0;
  puVar9[2] = 0;
  puVar9[3] = plVar5;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  plVar14 = *(long **)(param_1 + 0xa8);
  *(undefined8 **)(param_1 + 0xa8) = puVar9;
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    if (lVar11 != 0) {
      plVar14[1] = lVar11;
      (**(code **)(*(long *)plVar14[3] + 0x18))((long *)plVar14[3],lVar11,plVar14[2] - lVar11,8);
    }
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x18))
              (*(long **)(param_1 + 0xb0),plVar14,*(undefined8 *)(param_1 + 0xb8),
               *(undefined8 *)(param_1 + 0xc0));
  }
  uVar13 = 0;
  *(long **)(param_1 + 0xb0) = plVar5;
  *(undefined8 *)(param_1 + 0xb8) = 0x30;
  *(undefined8 *)(param_1 + 0xc0) = 8;
  do {
    puVar9 = (undefined8 *)FUN_01549840(lVar6,uVar13);
    if (puVar9 != (undefined8 *)0x0) {
      lVar11 = *(long *)(param_1 + 0xa8);
      puVar10 = *(undefined8 **)(lVar11 + 8);
      if (puVar10 == *(undefined8 **)(lVar11 + 0x10)) {
        FUN_010f8230(lVar11,puVar9);
      }
      else {
        uVar8 = *(undefined8 *)(lVar11 + 0x18);
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
        if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_010f7210;
        *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar8;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        *puVar10 = *puVar9;
        uVar8 = puVar9[1];
        uVar1 = puVar9[2];
        uVar2 = puVar9[4];
        puVar10[3] = puVar9[3];
        puVar10[4] = uVar2;
        puVar10[1] = uVar8;
        puVar10[2] = uVar1;
        uVar8 = puVar9[5];
        uVar1 = puVar9[6];
        uVar2 = puVar9[8];
        puVar10[7] = puVar9[7];
        puVar10[8] = uVar2;
        puVar10[5] = uVar8;
        puVar10[6] = uVar1;
        uVar8 = puVar9[9];
        uVar1 = puVar9[10];
        uVar2 = puVar9[0xc];
        puVar10[0xb] = puVar9[0xb];
        puVar10[0xc] = uVar2;
        puVar10[9] = uVar8;
        puVar10[10] = uVar1;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 0x68;
      }
    }
    uVar13 = uVar13 + 1;
    if (0x31 < uVar13) {
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
      FUN_010fa2a0(*(undefined8 *)(param_1 + 0x98));
      if (*(long *)(param_1 + 0x90) == 0) {
        local_70 = 0;
        FUN_010ee5c0(0,7);
      }
      else {
        FUN_010edb50(&local_70);
        FUN_010ee5c0(local_70,7);
      }
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
      FUN_01036f70(*(undefined8 *)(param_1 + 0xa0));
      *(undefined4 *)(param_1 + 0x80) = 0;
      return;
    }
  } while( true );
}


