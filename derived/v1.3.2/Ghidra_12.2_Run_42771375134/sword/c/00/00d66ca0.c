/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d66ca0; name: FUN_00d66ca0
 */


void FUN_00d66ca0(long param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long local_268;
  long local_260;
  undefined1 *puStack_258;
  undefined8 local_250;
  undefined5 uStack_248;
  undefined3 local_243;
  undefined5 uStack_240;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined1 *puStack_1f8;
  undefined8 local_1f0;
  long local_1e8;
  undefined *local_1e0;
  long local_1d8;
  undefined8 local_1d0;
  code *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [96];
  undefined8 local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [96];
  undefined1 local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined1 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = FUN_00a89ad0(*(undefined8 *)PTR_DAT_027194d8,&local_260);
  puVar2 = PTR_DAT_0271e240;
  if (lVar3 != 0) {
    lVar7 = *(long *)(lVar3 + 0x3b8);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x778) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x778) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x778) = 0;
    }
    *(long *)(param_1 + 0x778) = lVar7;
    lVar3 = *(long *)(lVar3 + 0x400);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x780) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x780) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x780) = 0;
    }
    *(long *)(param_1 + 0x780) = lVar3;
    *(undefined1 *)(param_1 + 0x78c) = 1;
LAB_00d6715c:
    puVar8 = (undefined8 *)(param_1 + 0x780);
    *(undefined1 *)(param_1 + 0x78d) = *(undefined1 *)(param_2 + 0x430);
    *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(lVar3 + 0x7c);
    if (*(char *)(param_2 + 0x431) == '\0') {
      FUN_00daaec0(lVar3,0);
      FUN_00dab450(*puVar8,0,0);
      FUN_00dab450(*puVar8,4,0);
      FUN_00dab450(*puVar8,1,0);
      FUN_00dab450(*puVar8,2,0);
      FUN_00dab450(*puVar8,3,0);
    }
    return;
  }
  lVar7 = *(long *)PTR_DAT_0271e240;
  plVar4 = *(long **)(param_1 + 0x90);
  *(undefined8 *)(lVar7 + 0x20) = 0x1c800;
  *(long **)(lVar7 + 0x10) = plVar4;
  lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x1c800,8);
  *(long *)(lVar7 + 0x18) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar7 + 0x10) + 0xb8))();
    lVar3 = *(long *)(lVar7 + 0x18);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,0x1c748,0);
  *(long *)(lVar7 + 8) = lVar3;
  lVar9 = *(long *)puVar2;
  plVar4 = *(long **)(param_1 + 0x90);
  *(long **)(lVar9 + 0x30) = plVar4;
  *(undefined8 *)(lVar9 + 0x40) = 0x5800;
  lVar7 = (**(code **)(*plVar4 + 0x10))(plVar4,0x5800,8);
  *(long *)(lVar9 + 0x38) = lVar7;
  if (lVar7 == 0) {
    (**(code **)(**(long **)(lVar9 + 0x30) + 0xb8))();
    lVar7 = *(long *)(lVar9 + 0x38);
  }
  FUN_00760770(lVar7,lVar7 + 0xb8,0x5748,0);
  *(long *)(lVar9 + 0x28) = lVar7;
  puVar2 = PTR_DAT_02710860;
  plVar4 = *(long **)(param_1 + 0x90);
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar9 + 0x80) < 0x10) {
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar4;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,0xae50,0x10);
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4);
    }
    FUN_00da3e90(lVar5,lVar3,lVar7);
    *(long **)(lVar5 + 8) = plVar4;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0xae50;
    *(undefined8 *)(lVar5 + 0x20) = 0x10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x780) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x780) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x780) = 0;
    }
    *(long *)(param_1 + 0x780) = lVar5;
    plVar4 = *(long **)(param_1 + 0x90);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar7 = (**(code **)(*plVar4 + 0x10))(plVar4,0x7b0,0x10);
      if (lVar7 == 0) {
        (**(code **)(*plVar4 + 0xb8))(plVar4);
      }
      FUN_0074bce0(lVar7,*(undefined8 *)(param_1 + 0x90));
      *(long **)(lVar7 + 8) = plVar4;
      *(long *)(lVar7 + 0x10) = lVar7;
      *(undefined8 *)(lVar7 + 0x18) = 0x7b0;
      *(undefined8 *)(lVar7 + 0x20) = 0x10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x778) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x778) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x778) = 0;
      }
      *(long *)(param_1 + 0x778) = lVar7;
      local_260 = -0x340d631b7bddd9bb;
      puStack_258 = &DAT_01d38550;
      uStack_240 = 0;
      local_250 = 0;
      uStack_248 = 0;
      local_243 = 0;
      local_210 = 0;
      uStack_208 = 0;
      local_1d8 = 0;
      local_220 = 0;
      uStack_218 = 0;
      local_230 = 0;
      uStack_228 = 0;
      local_200 = 0xcbf29ce484222645;
      puStack_1f8 = &DAT_01d38550;
      local_1f0 = 0;
      local_1e8 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_150 = 0;
      local_148 = (code *)0x0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_1d0 = 0;
      local_1c8 = (code *)0x0;
      local_1e0 = PTR_DAT_02710818 + 0x10;
      local_d0 = 0;
      local_cc = 2;
      local_c4 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      local_a0 = 0x3f800000;
      local_90 = 0;
      uStack_68 = 0;
      local_70 = 0;
      local_84 = 0;
      local_8c = 0;
      FUN_0074be30(lVar7,&local_260,*(undefined8 *)(param_1 + 0x90));
      uVar6 = *(undefined8 *)(param_1 + 0x780);
      local_268 = *(long *)(param_1 + 0x778);
      if (local_268 != 0) {
        (**(code **)(*(long *)(local_268 + 0x48) + 0x10))();
      }
      FUN_00da63f0(uVar6,&local_268,*(undefined8 *)(param_1 + 0x90));
      if (local_268 != 0) {
        (**(code **)(*(long *)(local_268 + 0x48) + 0x18))();
        local_268 = 0;
      }
      *(undefined1 *)(param_1 + 0x78c) = 0;
      local_1e0 = PTR_DAT_02710808 + 0x10;
      if (local_1d8 == 0) {
        local_1d8 = 0;
        pcVar1 = local_148;
      }
      else {
        FUN_006e2100(local_1d8,&local_1e0);
        lVar3 = local_1d8;
        local_1d8 = 0;
        pcVar1 = local_148;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
          pcVar1 = local_148;
        }
      }
      local_148 = pcVar1;
      if (pcVar1 != (code *)0x0) {
        local_140 = 0;
        uStack_138 = 0;
        local_150 = 0;
        local_148 = (code *)0x0;
        (*pcVar1)(auStack_130);
      }
      pcVar1 = local_1c8;
      if (local_1c8 != (code *)0x0) {
        local_1c0 = 0;
        uStack_1b8 = 0;
        local_1d0 = 0;
        local_1c8 = (code *)0x0;
        (*pcVar1)(auStack_1b0);
      }
      if (local_1d8 != 0) {
        (**(code **)(*(long *)(local_1d8 + 0x48) + 0x18))();
        local_1d8 = 0;
      }
      if (local_1e8 != 0) {
        (**(code **)(*(long *)(local_1e8 + 0x48) + 0x18))();
        local_1e8 = 0;
      }
      if (CONCAT35(local_243,uStack_248) != 0) {
        (**(code **)(*(long *)(CONCAT35(local_243,uStack_248) + 0x48) + 0x18))();
        uStack_248 = 0;
        local_243 = 0;
      }
      lVar3 = *(long *)(param_1 + 0x780);
      goto LAB_00d6715c;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


