/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013e14e0; name: FUN_013e14e0
 */


void FUN_013e14e0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long local_d8;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long local_b0;
  long lStack_a8;
  long local_48;
  
  lVar11 = *(long *)(param_1 + 0x60);
  plVar6 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x50))((undefined8 *)(lVar11 + 0x50));
  lVar7 = FUN_0132d9a0();
  for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    if (plVar6 == (long *)lVar7) goto LAB_013e153c;
  }
  lVar11 = 0;
LAB_013e153c:
  lVar7 = param_1 + 0x68;
  FUN_00ff5170(lVar7,*(undefined8 *)(param_1 + 8));
  (**(code **)(*(long *)(param_1 + 0x68) + 0x10))(lVar7,0x20000);
  plVar6 = (long *)(**(code **)(*(long *)(param_1 + 0x68) + 0x18))(lVar7);
  uVar8 = (**(code **)(*(long *)(param_1 + 0x68) + 0x18))(lVar7);
  puVar9 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0xf0,8);
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar6;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *(undefined4 *)(puVar9 + 6) = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined4 *)(puVar9 + 0xb) = 0;
  *(undefined4 *)(puVar9 + 0x12) = 0;
  *(undefined4 *)(puVar9 + 0x17) = 0;
  puVar9[0x1c] = 0;
  *(undefined4 *)(puVar9 + 0x1d) = 0;
  puVar9[4] = uVar8;
  puVar9[5] = 0;
  puVar9[7] = 0;
  puVar9[8] = 0;
  puVar9[9] = uVar8;
  puVar9[10] = 0;
  puVar9[0xe] = 0;
  puVar9[0xf] = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0;
  puVar9[0x10] = uVar8;
  puVar9[0x11] = 0;
  puVar9[0x13] = 0;
  puVar9[0x14] = 0;
  puVar9[0x15] = uVar8;
  puVar9[0x16] = 0;
  puVar9[0x18] = puVar9 + 0x18;
  puVar9[0x19] = puVar9 + 0x18;
  puVar9[0x1a] = 0;
  puVar9[0x1b] = uVar8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  lVar7 = *(long *)(param_1 + 0x220);
  *(undefined8 **)(param_1 + 0x220) = puVar9;
  if (lVar7 != 0) {
    if (*(long *)(lVar7 + 0xd0) != 0) {
      lVar1 = *(long *)(lVar7 + 0xc0);
      plVar3 = *(long **)(lVar7 + 200);
      *(undefined8 *)(*plVar3 + 8) = *(undefined8 *)(lVar1 + 8);
      **(long **)(lVar1 + 8) = *plVar3;
      *(undefined8 *)(lVar7 + 0xd0) = 0;
      while (plVar3 != (long *)(lVar7 + 0xc0)) {
        plVar2 = (long *)plVar3[1];
        if (plVar3[2] != 0) {
          (**(code **)(*(long *)(plVar3[2] + 0x48) + 0x18))();
          plVar3[2] = 0;
        }
        (**(code **)(**(long **)(lVar7 + 0xd8) + 0x18))(*(long **)(lVar7 + 0xd8),plVar3,0x18,8);
        plVar3 = plVar2;
      }
    }
    FUN_013e4470(lVar7 + 0x60);
    FUN_013e4470(lVar7);
    (**(code **)(**(long **)(param_1 + 0x228) + 0x18))
              (*(long **)(param_1 + 0x228),lVar7,*(undefined8 *)(param_1 + 0x230),
               *(undefined8 *)(param_1 + 0x238));
  }
  *(long **)(param_1 + 0x228) = plVar6;
  *(undefined8 *)(param_1 + 0x230) = 0xf0;
  *(undefined8 *)(param_1 + 0x238) = 8;
  lVar7 = *(long *)(lVar11 + 0x3d8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_d0 = &LAB_013e40f0;
  local_c8 = FUN_013e4230;
  local_c0 = &LAB_013e4240;
  local_b8 = &LAB_013e4250;
  local_b0 = param_1;
  lStack_a8 = lVar11;
  FUN_0136df80(lVar7,&local_d0);
  pcVar4 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar4)(&local_b0);
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  lVar7 = *(long *)(lVar11 + 0x3d8);
  if (lVar7 == 0) {
    FUN_0136dba0(0);
  }
  else {
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0136dba0(lVar7);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN_0132f7f0(&local_48,lVar11);
  uVar10 = FUN_01329830(local_48);
  if ((uVar10 & 1) == 0) {
    uVar5 = 0;
    lVar7 = local_d8;
  }
  else {
    FUN_0132f7f0(&local_d8,lVar11);
    uVar5 = FUN_01329820(local_d8);
    uVar5 = uVar5 ^ 1;
    lVar7 = 0;
    if (local_d8 != 0) {
      (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
      local_d8 = 0;
      lVar7 = local_d8;
    }
  }
  local_d8 = lVar7;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if ((uVar5 & 1) != 0) {
    uVar8 = *(undefined8 *)PTR_DAT_027185f8;
    uVar10 = FUN_0120e5f0(uVar8);
    if (((uVar10 & 1) != 0) || (uVar10 = FUN_0120e5d0(uVar8), (uVar10 & 1) == 0)) {
      lVar7 = *(long *)(lVar11 + 0x3d8);
      if (lVar7 == 0) {
        FUN_0136df70(0,1);
      }
      else {
        plVar6 = (long *)(lVar7 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0136df70(lVar7,1);
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
  }
  return;
}


