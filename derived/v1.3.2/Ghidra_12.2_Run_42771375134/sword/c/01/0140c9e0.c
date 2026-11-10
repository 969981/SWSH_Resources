/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0140c9e0; name: FUN_0140c9e0
 */


void FUN_0140c9e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 auStack_b8 [24];
  long local_a0;
  long local_98;
  char *local_90;
  undefined1 *local_88;
  long local_80;
  long local_78;
  undefined4 local_70;
  long local_68;
  
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x548);
  plVar8 = *(long **)(param_1 + 8);
  local_98 = -0x2606eebd7c6a14f8;
  local_90 = "system_msgwin";
  local_88 = (undefined1 *)0xd;
  local_80 = 0;
  uVar5 = FUN_01410650(uVar9,&local_98);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  local_98 = -0x606a57e0dce67cb3;
  local_90 = "talk_msgwin";
  local_88 = (undefined1 *)0xb;
  local_80 = 0;
  uVar9 = FUN_014107a0(uVar9,&local_98);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,0x1b0,0x10);
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar7 + 0x80) < 0x10) {
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    FUN_01415c40(uVar6,plVar8);
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    puVar10 = *(undefined8 **)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = uVar6;
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10);
      (**(code **)(**(long **)(param_1 + 0x98) + 0x18))
                (*(long **)(param_1 + 0x98),puVar10,*(undefined8 *)(param_1 + 0xa0),
                 *(undefined8 *)(param_1 + 0xa8));
      uVar6 = *(undefined8 *)(param_1 + 0x90);
    }
    *(long **)(param_1 + 0x98) = plVar8;
    *(undefined8 *)(param_1 + 0xa0) = 0x1b0;
    *(undefined8 *)(param_1 + 0xa8) = 0x10;
    FUN_01416080(uVar6,uVar5);
    FUN_01416090(*(undefined8 *)(param_1 + 0x90),uVar9);
    puVar3 = PTR_DAT_027297a8;
    puVar1 = PTR_DAT_02710788;
    lVar11 = 0;
    lVar7 = param_1 + 0xb0;
    do {
      FUN_006cf0a0(auStack_b8,puVar3 + lVar11);
      FUN_014c0480(&local_98,auStack_b8,10);
      FUN_010138d0(&local_68,*(undefined8 *)puVar1,1,&local_98,0,*(undefined8 *)(param_1 + 8),0);
      if (*(long *)(lVar7 + 8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar7 + 8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar7 + 8) = 0;
      }
      lVar4 = local_68;
      *(long *)(lVar7 + 8) = local_68;
      if (local_68 != 0) {
        plVar8 = (long *)(local_68 + 0x48);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        if ((*(long *)(lVar7 + 0x10) != 0) || (*(long *)(lVar7 + 0x90) != 0)) {
          FUN_006e1e70(lVar4,lVar7,1);
        }
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      if ((local_80 != 0) && (local_98 != 0)) {
        (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      }
      local_98 = 0;
      local_90 = (char *)0xcbf29ce484222645;
      local_88 = &DAT_01d38550;
      local_80 = 0;
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      }
      local_78 = 0;
      local_70 = 0;
      if (local_a0 != 0) {
        (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
        local_a0 = 0;
      }
      puVar2 = PTR_DAT_02710860;
      lVar11 = lVar11 + 0x18;
      lVar7 = lVar7 + 0x110;
    } while (lVar11 != 0x78);
    plVar8 = *(long **)(param_1 + 8);
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar7 + 0x80) < 0x10) {
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar8;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      lVar11 = (**(code **)(*plVar8 + 0x10))(plVar8,0x80,8);
      if (lVar11 == 0) {
        (**(code **)(*plVar8 + 0xb8))(plVar8);
      }
      FUN_0077d050(lVar11,0x80);
      *(long **)(lVar11 + 8) = plVar8;
      *(long *)(lVar11 + 0x10) = lVar11;
      *(undefined8 *)(lVar11 + 0x18) = 0x80;
      *(undefined8 *)(lVar11 + 0x20) = 8;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x600) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x600) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x600) = 0;
      }
      *(long *)(param_1 + 0x600) = lVar11;
      plVar8 = *(long **)(param_1 + 8);
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (*(ulong *)(lVar7 + 0x80) < 0x10) {
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar8;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        lVar11 = (**(code **)(*plVar8 + 0x10))(plVar8,0x80,8);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0xb8))(plVar8);
        }
        FUN_0077d050(lVar11,0x100);
        *(long **)(lVar11 + 8) = plVar8;
        *(long *)(lVar11 + 0x10) = lVar11;
        *(undefined8 *)(lVar11 + 0x18) = 0x80;
        *(undefined8 *)(lVar11 + 0x20) = 8;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
        }
        if (*(long *)(param_1 + 0x618) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x618) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x618) = 0;
        }
        *(long *)(param_1 + 0x618) = lVar11;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


