/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01508e40; name: FUN_01508e40
 */


void FUN_01508e40(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 local_1c0;
  char *local_1b8;
  undefined8 local_1b0;
  long local_1a8;
  long local_1a0;
  undefined8 uStack_198;
  undefined1 *local_190;
  long local_188;
  long local_180;
  undefined4 local_178;
  undefined *local_170;
  long local_168;
  long local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [96];
  long local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [96];
  long local_58;
  
  puVar2 = PTR_DAT_02710860;
  plVar6 = *(long **)(param_1 + 8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x80,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar6 + 0xb8))(plVar6);
    }
    FUN_0077d050(lVar4,0x11);
    *(long **)(lVar4 + 8) = plVar6;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x80;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    local_168 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    local_170 = PTR_DAT_02710ac8 + 0x10;
    local_1c0 = 0xdfcd4fe7ee129fb2;
    local_1b8 = "common/boxname.dat";
    local_1b0 = 0x12;
    local_1a8 = 0;
    FUN_014bfd20(&local_1a0,&local_1c0,10);
    FUN_006dccd0(&local_58,*(undefined8 *)PTR_DAT_02710788,0,&local_1a0,0,plVar6,0);
    if (local_168 != 0) {
      (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
    }
    local_168 = local_58;
    if (local_58 != 0) {
      plVar8 = (long *)(local_58 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      if ((local_160 != 0) || (local_e0 != 0)) {
        FUN_006e1e70(local_58,&local_170,1);
      }
      FUN_006e1be0(local_58);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    if ((local_188 != 0) && (local_1a0 != 0)) {
      (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
    }
    local_1a0 = 0;
    uStack_198 = 0xcbf29ce484222645;
    local_190 = &DAT_01d38550;
    local_188 = 0;
    if (local_180 != 0) {
      (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
    }
    local_180 = 0;
    local_178 = 0;
    if (local_1a8 != 0) {
      (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
      local_1a8 = 0;
    }
    uVar9 = *(undefined8 *)(local_168 + 400);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,0x1d0,0x10);
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0xb8))(plVar6);
      }
      FUN_0077e290(lVar5,uVar9);
      *(long **)(lVar5 + 8) = plVar6;
      *(long *)(lVar5 + 0x10) = lVar5;
      *(undefined8 *)(lVar5 + 0x18) = 0x1d0;
      *(undefined8 *)(lVar5 + 0x20) = 0x10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      uVar7 = 0;
      lVar3 = param_1 + 0x60;
      do {
        FUN_0077e740(lVar5,uVar7 & 0xffffffff,lVar4);
        uVar9 = FUN_0077d470(lVar4);
        FUN_0077d7e0(lVar3,uVar9,0x11);
        *(undefined1 *)(param_1 + 0x570 + uVar7) = 0;
        uVar7 = uVar7 + 1;
        lVar3 = lVar3 + 0x22;
      } while (uVar7 != 0x20);
      FUN_0077e740(lVar5,0x20,lVar4);
      uVar9 = FUN_0077d470(lVar4);
      FUN_0077d7e0(param_1 + 0x4a0,uVar9,0xb);
      *(undefined4 *)(param_1 + 0x52c) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x524) = 0xffffffffffffffff;
      FUN_0077e740(lVar5,0x21,lVar4);
      uVar9 = FUN_0077d470(lVar4);
      FUN_0077d7e0(param_1 + 0x4b6,uVar9,0xb);
      *(undefined4 *)(param_1 + 0x538) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x530) = 0xffffffffffffffff;
      FUN_0077e740(lVar5,0x22,lVar4);
      uVar9 = FUN_0077d470(lVar4);
      FUN_0077d7e0(param_1 + 0x4cc,uVar9,0xb);
      *(undefined4 *)(param_1 + 0x544) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x53c) = 0xffffffffffffffff;
      FUN_0077e740(lVar5,0x23,lVar4);
      uVar9 = FUN_0077d470(lVar4);
      FUN_0077d7e0(param_1 + 0x4e2,uVar9,0xb);
      *(undefined4 *)(param_1 + 0x550) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x548) = 0xffffffffffffffff;
      FUN_0077e740(lVar5,0x24,lVar4);
      uVar9 = FUN_0077d470(lVar4);
      FUN_0077d7e0(param_1 + 0x4f8,uVar9,0xb);
      *(undefined4 *)(param_1 + 0x55c) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x554) = 0xffffffffffffffff;
      FUN_0077e740(lVar5,0x25,lVar4);
      uVar9 = FUN_0077d470(lVar4);
      FUN_0077d7e0(param_1 + 0x50e,uVar9,0xb);
      *(undefined4 *)(param_1 + 0x568) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x560) = 0xffffffffffffffff;
      if (local_168 == 0) {
        local_168 = 0;
      }
      else {
        FUN_006e2100(local_168,&local_170);
        lVar3 = local_168;
        local_168 = 0;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
        }
      }
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
      local_170 = PTR_DAT_02710a48 + 0x10;
      if (local_168 == 0) {
        local_168 = 0;
        pcVar1 = local_d8;
      }
      else {
        FUN_006e2100(local_168,&local_170);
        lVar3 = local_168;
        local_168 = 0;
        pcVar1 = local_d8;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
          pcVar1 = local_d8;
        }
      }
      local_d8 = pcVar1;
      if (pcVar1 != (code *)0x0) {
        local_d0 = 0;
        uStack_c8 = 0;
        local_e0 = 0;
        local_d8 = (code *)0x0;
        (*pcVar1)(auStack_c0);
      }
      pcVar1 = local_158;
      if (local_158 != (code *)0x0) {
        local_150 = 0;
        uStack_148 = 0;
        local_160 = 0;
        local_158 = (code *)0x0;
        (*pcVar1)(auStack_140);
      }
      if (local_168 != 0) {
        (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
        local_168 = 0;
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


