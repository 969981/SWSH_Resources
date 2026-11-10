/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01023ee0; name: FUN_01023ee0
 */


void FUN_01023ee0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  long local_220;
  undefined8 local_218;
  undefined1 *local_210;
  long local_208;
  long local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined1 *local_1d8;
  long local_1d0;
  long local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined *local_1b0 [2];
  undefined *local_1a0;
  long local_198;
  undefined8 local_190;
  code *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [96];
  undefined8 local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [96];
  undefined1 auStack_90 [16];
  long local_80;
  long local_78;
  undefined4 local_6c [3];
  
  local_6c[0] = 0x80;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_01024434:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,0x1c0,0x10);
  if (lVar6 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_0075ab70(lVar6,PTR_No1_02723780,local_6c);
  *(long **)(lVar6 + 8) = param_2;
  *(long *)(lVar6 + 0x10) = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 0x1c0;
  *(undefined8 *)(lVar6 + 0x20) = 0x10;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *(long *)(param_1 + 8) = lVar6;
  local_1b0[0]._0_4_ = 0;
  while( true ) {
    FUN_0075b740(&local_78,lVar6,local_1b0,1);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    if (0x3e < (int)local_1b0[0]) break;
    lVar6 = *(long *)(param_1 + 8);
    local_1b0[0]._0_4_ = (int)local_1b0[0] + 1;
  }
  iVar4 = 0x40;
  do {
    local_1b0[0]._0_4_ = iVar4;
    FUN_0075b740(&local_80,*(undefined8 *)(param_1 + 8),local_1b0,2);
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x80);
  local_198 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  puVar1 = PTR_DAT_027237b8 + 0x10;
  local_110 = 0;
  local_108 = (code *)0x0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  local_188 = (code *)0x0;
  local_1a0 = PTR_DAT_02710ac8 + 0x10;
  local_1b0[0] = puVar1;
  FUN_012b4040(auStack_90);
  FUN_01024e10(local_1b0,param_2);
  iVar4 = FUN_01024fb0(local_1b0);
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      local_1f0 = 0xcbf29ce484222645;
      local_1e8 = 0;
      local_1e0 = 0xcbf29ce484222645;
      local_1d8 = &DAT_01d38550;
      local_1c0 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1b8 = 0xffffffff;
      local_1f0 = FUN_01025010(local_1b0,iVar8);
      FUN_010250f0(&local_220,local_1b0,iVar8);
      if ((local_1d0 != 0) && (local_1e8 != 0)) {
        (**(code **)(*(long *)(local_1e8 + 0x48) + 0x18))();
      }
      local_1e8 = 0;
      local_1e0 = 0xcbf29ce484222645;
      local_1d8 = &DAT_01d38550;
      local_1d0 = 0;
      if (local_1c8 != 0) {
        (**(code **)(*(long *)(local_1c8 + 0x48) + 0x18))();
      }
      local_1c8 = local_200;
      local_1e0 = local_218;
      local_1d8 = local_210;
      local_200 = 0;
      local_1d0 = local_208;
      local_1c0 = local_1f8;
      if (local_208 == 0) {
        local_1e8 = local_220;
      }
      else {
        if (local_1e8 != 0) {
          (**(code **)(*(long *)(local_1e8 + 0x48) + 0x18))();
        }
        local_1e8 = local_220;
      }
      local_220 = 0;
      local_218 = 0xcbf29ce484222645;
      local_210 = &DAT_01d38550;
      local_208 = 0;
      if (local_200 != 0) {
        (**(code **)(*(long *)(local_200 + 0x48) + 0x18))();
        local_200 = 0;
      }
      puVar2 = *(undefined8 **)(param_1 + 0x28);
      if (puVar2 == *(undefined8 **)(param_1 + 0x30)) {
        FUN_01024b20(param_1 + 0x20,&local_1f0);
      }
      else {
        uVar9 = *(undefined8 *)(param_1 + 0x38);
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        lVar5 = local_1c8;
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01024434;
        *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar9;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        puVar2[2] = 0xcbf29ce484222645;
        puVar2[3] = &DAT_01d38550;
        *(undefined4 *)(puVar2 + 6) = 0;
        *puVar2 = local_1f0;
        puVar2[1] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[2] = local_1e0;
        puVar2[3] = local_1d8;
        puVar2[4] = local_1d0;
        if (local_1c8 == 0) {
          puVar2[5] = 0;
          *(undefined4 *)(puVar2 + 6) = local_1c0;
          if (local_1d0 == 0) goto LAB_01024304;
LAB_0102427c:
          lVar5 = local_1e8;
          if (local_1e8 != 0) {
            (**(code **)(*(long *)(local_1e8 + 0x48) + 0x10))();
          }
          lVar7 = puVar2[1];
          puVar2[1] = lVar5;
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
          }
        }
        else {
          (**(code **)(*(long *)(local_1c8 + 0x48) + 0x10))();
          lVar7 = puVar2[5];
          puVar2[5] = lVar5;
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
          }
          *(undefined4 *)(puVar2 + 6) = local_1c0;
          if (local_1d0 != 0) goto LAB_0102427c;
LAB_01024304:
          puVar2[1] = local_1e8;
        }
        puVar2[7] = local_1b8;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 0x40;
      }
      if ((local_1d0 != 0) && (local_1e8 != 0)) {
        (**(code **)(*(long *)(local_1e8 + 0x48) + 0x18))();
      }
      local_1d0 = 0;
      local_1d8 = &DAT_01d38550;
      local_1e0 = 0xcbf29ce484222645;
      local_1e8 = 0;
      if (local_1c8 != 0) {
        local_1d0 = 0;
        local_1d8 = &DAT_01d38550;
        local_1e0 = 0xcbf29ce484222645;
        local_1e8 = 0;
        (**(code **)(*(long *)(local_1c8 + 0x48) + 0x18))();
        local_1c8 = 0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar4);
  }
  FUN_01024f60(local_1b0);
  local_1a0 = PTR_DAT_02710a48 + 0x10;
  if (local_198 == 0) {
    local_198 = 0;
    local_1b0[0] = puVar1;
    pcVar3 = local_108;
  }
  else {
    local_1b0[0] = puVar1;
    FUN_006e2100(local_198,&local_1a0);
    lVar5 = local_198;
    local_198 = 0;
    pcVar3 = local_108;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      pcVar3 = local_108;
    }
  }
  local_108 = pcVar3;
  if (pcVar3 != (code *)0x0) {
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    local_108 = (code *)0x0;
    (*pcVar3)(auStack_f0);
  }
  pcVar3 = local_188;
  if (local_188 != (code *)0x0) {
    local_180 = 0;
    uStack_178 = 0;
    local_190 = 0;
    local_188 = (code *)0x0;
    (*pcVar3)(auStack_170);
  }
  if (local_198 != 0) {
    (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
  }
  return;
}


