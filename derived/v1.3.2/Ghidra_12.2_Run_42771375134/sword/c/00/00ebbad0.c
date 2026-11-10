/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ebbad0; name: FUN_00ebbad0
 */


void FUN_00ebbad0(long param_1)

{
  undefined *puVar1;
  time_t tVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_DAT_0271f740;
  uVar3 = *(undefined8 *)(*(long *)PTR_DAT_0271f740 + 8);
  lVar7 = *(long *)PTR_DAT_02710848;
  local_60 = 0;
  uStack_58 = 0;
  lVar4 = *(long *)(lVar7 + 0x60);
  if (lVar4 == 0) {
    FUN_0101cb00(0,&local_60);
    lVar4 = *(long *)(lVar7 + 0x88);
  }
  else {
    plVar6 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0101cb00(lVar4,&local_60);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = *(long *)(lVar7 + 0x88);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_010672e0(&local_68,lVar4,0);
  if (*(long *)(param_1 + 0x100) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x100) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  uVar9 = local_68;
  local_68 = 0;
  *(undefined8 *)(param_1 + 0x100) = uVar9;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  lVar4 = *(long *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  local_70 = *(long *)(param_1 + 0x100);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
  }
  local_68 = 0x79479c9171128967;
  FUN_00cc0c50(&local_70,&local_68);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  lVar4 = param_1 + 0x110;
  FUN_006c6290(lVar4,uVar3,0x100,0x100);
  FUN_006c6290(param_1 + 0x228,uVar3,0x400,0x100);
  lVar7 = *(long *)(lVar7 + 0xb8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(lVar7 + 0x1e0);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar11 + 0xb8);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  lVar7 = FUN_00ec0220(&local_60,uVar3);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x610) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x610) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x610) = 0;
  }
  *(long *)(param_1 + 0x610) = lVar7;
  local_78 = lVar8;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  FUN_00fac5f0(lVar7,&local_78);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  FUN_00ec0300(uVar3,0);
  FUN_01064460(&local_60,uVar3,0);
  if (*(long *)(param_1 + 0x760) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x760) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x760) = 0;
  }
  *(long *)(param_1 + 0x760) = local_60;
  *(undefined4 *)(local_60 + 0x140) = 0x18;
  (**(code **)(**(long **)(param_1 + 0x760) + 0x68))(*(long **)(param_1 + 0x760),1);
  FUN_00702300(*(undefined8 *)(param_1 + 0x760),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x100) + 0x128) + 0x270));
  uVar9 = *(undefined8 *)PTR_DAT_0271fe18;
  local_80 = *(long *)(param_1 + 0x760);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
  }
  local_60 = *(long *)(*(long *)(param_1 + 200) + 0x78);
  uStack_58 = *(undefined8 *)(*(long *)(param_1 + 200) + 0x80);
  FUN_00faff40(uVar9,uVar3,&local_80,&local_60);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  lVar7 = FUN_00ec0680(&local_60,uVar3);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x768) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x768) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x768) = 0;
  }
  *(long *)(param_1 + 0x768) = lVar7;
  FUN_01052ad0(*(undefined8 *)(param_1 + 0x100),1);
  plVar6 = *(long **)(param_1 + 200);
  local_88 = *(long *)(param_1 + 0x100);
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
  }
  local_90 = *(long *)(param_1 + 0x108);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)puVar1;
  (**(code **)(*plVar6 + 0x10))
            (plVar6,&local_88,&local_90,lVar4,param_1 + 0x228,*(undefined8 *)(lVar7 + 0x68),
             *(undefined8 *)(lVar7 + 8),*(undefined8 *)(*(long *)PTR_DAT_0271e860 + 0x68),
             *(undefined8 *)(*(long *)PTR_DAT_0271e860 + 8));
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  plVar6 = *(long **)(param_1 + 0xd8);
  local_98 = *(long *)(param_1 + 0x100);
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x10))();
  }
  local_a0 = *(long *)(param_1 + 0x108);
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x10))();
  }
  (**(code **)(*plVar6 + 0x10))
            (plVar6,&local_98,&local_a0,lVar4,*(undefined8 *)(*(long *)puVar1 + 0xa8));
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  tVar2 = time((time_t *)0x0);
  *(time_t *)(param_1 + 0x620) = tVar2;
  *(undefined8 *)(param_1 + 0x628) = 0x82a2b175229d6a5b;
  plVar5 = *(long **)(*(long *)PTR_DAT_02710540 + 0x288);
  plVar6 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0xa0,0x10);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar5;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  FUN_016acf20(plVar6,plVar5);
  puVar1 = PTR_DAT_02720290;
  plVar6[3] = 0;
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  plVar6[0x10] = 0;
  plVar6[0x11] = 0;
  *plVar6 = (long)(puVar1 + 0x10);
  plVar6[0xe] = 0;
  plVar6[0xf] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  plVar10 = *(long **)(param_1 + 0x630);
  *(long **)(param_1 + 0x630) = plVar6;
  if (plVar10 != (long *)0x0) {
    *plVar10 = (long)(puVar1 + 0x10);
    if (plVar10[3] != 0) {
      (**(code **)(*(long *)(plVar10[3] + 0x48) + 0x18))();
      plVar10[3] = 0;
    }
    *plVar10 = (long)(PTR_DAT_02719670 + 0x10);
    if (plVar10[2] != 0) {
      (**(code **)(*(long *)(plVar10[2] + 0x48) + 0x18))();
      plVar10[2] = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x638) + 0x18))
              (*(long **)(param_1 + 0x638),plVar10,*(undefined8 *)(param_1 + 0x640),
               *(undefined8 *)(param_1 + 0x648));
  }
  *(undefined8 *)(param_1 + 0x640) = 0xa0;
  *(long **)(param_1 + 0x638) = plVar5;
  *(undefined8 *)(param_1 + 0x648) = 0x10;
  FUN_00ecbee0(*(undefined8 *)(param_1 + 0xe8),uVar3);
  return;
}


