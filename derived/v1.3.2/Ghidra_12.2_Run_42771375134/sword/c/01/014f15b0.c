/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f15b0; name: FUN_014f15b0
 */


void FUN_014f15b0(long param_1,long *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined8 local_100;
  long local_f8 [2];
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70 [2];
  
  if (param_2 != (long *)0x0) {
    plVar7 = *(long **)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 0x2b0);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar7;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    plVar4 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x90,8);
    if (plVar4 == (long *)0x0) {
      (**(code **)(*plVar7 + 0xb8))(plVar7);
    }
    FUN_00883c20(plVar4,plVar7);
    plVar4[1] = (long)plVar7;
    plVar4[2] = (long)plVar4;
    plVar4[3] = 0x90;
    plVar4[4] = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (plVar4 != (long *)0x0) {
      (**(code **)(plVar4[9] + 0x10))();
    }
    FUN_00885160(plVar4,(long)param_2 + 0x56);
    uVar8 = *(undefined8 *)(param_1 + 0x5d0);
    local_70[0] = (**(code **)(*plVar4 + 0x58))(plVar4,0);
    if (local_70[0] == 0) {
      FUN_014f01b0(uVar8,local_70);
    }
    else {
      plVar7 = (long *)(local_70[0] + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_014f01b0(uVar8,local_70);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      local_70[0] = 0;
    }
    lVar3 = *(long *)(param_1 + 0x5d0) + 0x108;
    local_70[0] = (**(code **)(*plVar4 + 0x58))(plVar4,1);
    if (local_70[0] == 0) {
      FUN_014f01b0(lVar3,local_70);
    }
    else {
      plVar7 = (long *)(local_70[0] + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_014f01b0(lVar3,local_70);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      local_70[0] = 0;
    }
    lVar3 = *(long *)(param_1 + 0x5d0) + 0x210;
    local_70[0] = (**(code **)(*plVar4 + 0x58))(plVar4,2);
    if (local_70[0] == 0) {
      FUN_014f01b0(lVar3,local_70);
    }
    else {
      plVar7 = (long *)(local_70[0] + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_014f01b0(lVar3,local_70);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      local_70[0] = 0;
    }
    lVar3 = *(long *)(param_1 + 0x5d0) + 0x318;
    local_70[0] = (**(code **)(*plVar4 + 0x58))(plVar4,3);
    if (local_70[0] == 0) {
      FUN_014f01b0(lVar3,local_70);
    }
    else {
      plVar7 = (long *)(local_70[0] + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_014f01b0(lVar3,local_70);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      local_70[0] = 0;
    }
    lVar3 = *(long *)(param_1 + 0x5d0) + 0x420;
    local_70[0] = (**(code **)(*plVar4 + 0x58))(plVar4,4);
    if (local_70[0] == 0) {
      FUN_014f01b0(lVar3,local_70);
    }
    else {
      plVar7 = (long *)(local_70[0] + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_014f01b0(lVar3,local_70);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      local_70[0] = 0;
    }
    lVar3 = *(long *)(param_1 + 0x5d0) + 0x528;
    local_70[0] = (**(code **)(*plVar4 + 0x58))(plVar4,5);
    if (local_70[0] == 0) {
      FUN_014f01b0(lVar3,local_70);
      lVar3 = *(long *)(param_1 + 0x528);
    }
    else {
      plVar7 = (long *)(local_70[0] + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_014f01b0(lVar3,local_70);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      local_70[0] = 0;
      lVar3 = *(long *)(param_1 + 0x528);
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f8[1] = 0;
    local_e8 = (code *)0x0;
    FUN_0168e370(lVar3,0,*(undefined1 *)((long)param_2 + 0x86d),0,local_f8 + 1);
    pcVar1 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f8[1] = 0;
      local_e8 = (code *)0x0;
      (*pcVar1)(&local_d0);
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    lVar3 = *(long *)(lVar6 + 0x2e0);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar9 = *(long *)(lVar6 + 0x2e8);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    FUN_0077d520(lVar9,(long)param_2 + 0x3c);
    FUN_014c9110(lVar3,0,lVar9,*(undefined1 *)((long)param_2 + 0x86c),
                 *(undefined1 *)((long)param_2 + 0x86b));
    FUN_0077eb10(*(undefined8 *)(param_1 + 0x5f0),param_1 + 0x610,lVar9);
    FUN_0167cce0(lVar6,&DAT_02172278,10);
    FUN_0077d520(lVar9,(long)param_2 + 0x26);
    uVar2 = FUN_008d3fc0(*(undefined1 *)((long)param_2 + 0x86b),0);
    FUN_014c7aa0(lVar3,0,lVar9,uVar2,0,0);
    FUN_0077eb10(*(undefined8 *)(param_1 + 0x5f0),param_1 + 0x618,lVar9);
    FUN_0167cce0(lVar6,&DAT_02172280,10);
    local_f8[0] = *(long *)(param_1 + 0x5f0);
    if (local_f8[0] != 0) {
      (**(code **)(*(long *)(local_f8[0] + 0x48) + 0x10))();
    }
    FUN_008c4e70(param_1 + 0x100,&DAT_02172288,local_f8,param_1 + 0x620,10);
    if (local_f8[0] != 0) {
      (**(code **)(*(long *)(local_f8[0] + 0x48) + 0x18))();
      local_f8[0] = 0;
    }
    lVar5 = FUN_0167b6b0(lVar6,&DAT_02172290);
    if (lVar5 != 0) {
      if (*param_2 == 0) {
        *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
      }
      else {
        lVar10 = 0;
        *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
        puVar11 = &DAT_02172298;
        do {
          FUN_0077d660(lVar9);
          FUN_0077d5c0(lVar9,*(undefined2 *)((long)param_2 + lVar10 + 8));
          FUN_014c7a10(lVar3,0,lVar9,0,0);
          FUN_0077eb10(*(undefined8 *)(param_1 + 0x5f0),param_1 + 0x628,lVar9);
          FUN_0167cce0(lVar6,puVar11,10);
          lVar10 = lVar10 + 2;
          puVar11 = puVar11 + 8;
        } while (lVar10 != 0x1c);
      }
      local_100 = 0xd239181af0c22507;
      uVar2 = 0x3f800000;
      if (*(char *)((long)param_2 + 0x86a) != '-') {
        uVar2 = 0;
      }
      uVar12 = 0;
      if (*(char *)((long)param_2 + 0x86a) != ',') {
        uVar12 = uVar2;
      }
      FUN_00ffd510(uVar12,param_1 + 0x100,&local_100);
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      if (plVar4 != (long *)0x0) {
        (**(code **)(plVar4[9] + 0x18))(plVar4 + 9);
      }
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


