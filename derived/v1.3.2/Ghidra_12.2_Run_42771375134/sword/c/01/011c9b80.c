/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011c9b80; name: FUN_011c9b80
 */


void FUN_011c9b80(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long local_170;
  long local_168;
  undefined1 *local_160;
  code *local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  long local_140;
  long lStack_138;
  undefined8 local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  long local_c0;
  long lStack_b8;
  long *local_60;
  long *local_58;
  long local_48;
  
  if (*(long *)(param_1 + 0x410) != 0) {
    FUN_011d4910();
  }
  if (((*(long *)(param_1 + 0x120) != 0) && (FUN_011cd5a0(), *(char *)(param_1 + 0x430) == '\0')) &&
     (*(char *)(*(long *)(param_1 + 0x120) + 0x4d) != '\0')) {
    FUN_011f8e00(*(undefined8 *)PTR_DAT_02710490);
    *(undefined8 *)(param_1 + 0x140) = 0x100000009;
    *(undefined1 *)(param_1 + 0x430) = 1;
  }
  if (*(long *)(param_1 + 0x2b0) != 0) {
    FUN_011d56e0();
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    FUN_011dae40();
  }
  if (*(char *)(param_1 + 0x418) != '\0') {
    if (*(char *)(param_1 + 0x419) == '\0') {
      FUN_011cde80(*(undefined8 *)(param_1 + 0x120));
    }
    *(undefined1 *)(param_1 + 0x418) = 0;
  }
  switch(*(undefined4 *)(param_1 + 0x140)) {
  case 1:
    pcVar5 = *(code **)(param_1 + 0x2e8);
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x2f0) = 0;
      *(undefined8 *)(param_1 + 0x2f8) = 0;
      *(undefined8 *)(param_1 + 0x2e0) = 0;
      *(undefined8 *)(param_1 + 0x2e8) = 0;
      (*pcVar5)(param_1 + 0x300);
    }
    *(long *)(param_1 + 0x300) = param_1;
    *(undefined1 **)(param_1 + 0x2e0) = &LAB_011cc350;
    *(undefined1 **)(param_1 + 0x2e8) = &LAB_011cc480;
    *(undefined1 **)(param_1 + 0x2f0) = &LAB_011cc490;
    *(undefined1 **)(param_1 + 0x2f8) = &LAB_011cc4a0;
    pcVar5 = *(code **)(param_1 + 0x388);
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x390) = 0;
      *(undefined8 *)(param_1 + 0x398) = 0;
      *(undefined8 *)(param_1 + 0x380) = 0;
      *(undefined8 *)(param_1 + 0x388) = 0;
      (*pcVar5)(param_1 + 0x3a0);
    }
    *(long *)(param_1 + 0x3a0) = param_1;
    uVar10 = *(undefined8 *)(param_1 + 0x2b0);
    local_48 = *(long *)(param_1 + 0x68);
    *(undefined1 **)(param_1 + 0x380) = &LAB_011cc4b0;
    *(undefined1 **)(param_1 + 0x388) = &LAB_011cc4d0;
    *(undefined1 **)(param_1 + 0x390) = &LAB_011cc4e0;
    *(undefined1 **)(param_1 + 0x398) = &LAB_011cc4f0;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    uVar4 = FUN_011d5410(uVar10,&local_48,param_1 + 0x2d0,param_1 + 0x370);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x144) = 1;
      *(undefined4 *)(param_1 + 0x140) = 9;
    }
    else {
      *(undefined4 *)(param_1 + 0x140) = 2;
    }
    break;
  case 3:
    FUN_011d5480(*(undefined8 *)(param_1 + 0x2b0),param_1 + 0x2d0,param_1 + 0x370);
    if (*(int *)(param_1 + 0x144) == 0) {
      *(undefined4 *)(param_1 + 0x140) = 4;
      return;
    }
    goto LAB_011c9f88;
  case 4:
    uVar4 = FUN_012092f0(*(undefined8 *)PTR_DAT_02710880);
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x140) = 6;
    }
    else {
      plVar8 = *(long **)(param_1 + 8);
      local_58 = (long *)0x0;
      local_60 = plVar8;
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      plVar3 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x90,8);
      if (plVar3 == (long *)0x0) {
        (**(code **)(*plVar8 + 0xb8))(plVar8);
      }
      FUN_00883c20(plVar3,plVar8);
      plVar3[1] = (long)plVar8;
      plVar3[2] = (long)plVar3;
      plVar3[3] = 0x90;
      plVar3[4] = 8;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      if (plVar3 != (long *)0x0) {
        (**(code **)(plVar3[9] + 0x10))();
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*(long *)((long)local_58 + 0x48) + 0x18))();
      }
      local_58 = plVar3;
      (**(code **)(*plVar3 + 0x28))(plVar3,*(undefined8 *)(param_1 + 0x68));
      (**(code **)(*plVar3 + 0x28))(plVar3,*(undefined8 *)(param_1 + 0x70));
      lVar9 = *(long *)(param_1 + 0x58);
      local_c0 = param_1;
      lStack_b8 = lVar9;
      if (lVar9 != 0) {
        plVar8 = (long *)(lVar9 + 0x48);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        if (lVar9 != 0) {
          puStack_c8 = (undefined1 *)0x0;
          local_d0 = (undefined1 *)0x0;
          local_d8 = (code *)0x0;
          local_e0 = (undefined1 *)0x0;
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        }
      }
      local_e0 = &LAB_011cc500;
      local_d8 = FUN_011cc560;
      local_d0 = &LAB_011cc5a0;
      puStack_c8 = &LAB_011cc5d0;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      local_150 = (undefined1 *)0x0;
      puStack_148 = (undefined1 *)0x0;
      local_160 = (undefined1 *)0x0;
      local_158 = (code *)0x0;
      local_140 = param_1;
      lStack_138 = lVar9;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      local_160 = &LAB_011cc600;
      local_158 = FUN_011cc630;
      local_150 = &LAB_011cc670;
      puStack_148 = &LAB_011cc6a0;
      uVar4 = FUN_0129fd80(&local_60,&local_e0,&local_160);
      pcVar5 = local_158;
      if (local_158 != (code *)0x0) {
        local_150 = (undefined1 *)0x0;
        puStack_148 = (undefined1 *)0x0;
        local_160 = (undefined1 *)0x0;
        local_158 = (code *)0x0;
        (*pcVar5)(&local_140);
      }
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
      }
      pcVar5 = local_d8;
      if (local_d8 != (code *)0x0) {
        local_d0 = (undefined1 *)0x0;
        puStack_c8 = (undefined1 *)0x0;
        local_e0 = (undefined1 *)0x0;
        local_d8 = (code *)0x0;
        (*pcVar5)(&local_c0);
      }
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
      }
      if ((uVar4 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x144) = 3;
        *(undefined4 *)(param_1 + 0x140) = 9;
      }
      else {
        *(undefined4 *)(param_1 + 0x140) = 5;
      }
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(local_58[9] + 0x18))();
      }
    }
    break;
  case 6:
    pcVar5 = *(code **)(param_1 + 0x188);
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(param_1 + 400) = 0;
      *(undefined8 *)(param_1 + 0x198) = 0;
      *(undefined8 *)(param_1 + 0x180) = 0;
      *(undefined8 *)(param_1 + 0x188) = 0;
      (*pcVar5)(param_1 + 0x1a0);
    }
    *(long *)(param_1 + 0x1a0) = param_1;
    *(undefined1 **)(param_1 + 0x180) = &LAB_011cc6d0;
    *(undefined1 **)(param_1 + 0x188) = &LAB_011cc6e0;
    pcVar5 = *(code **)(param_1 + 0x228);
    *(undefined1 **)(param_1 + 400) = &LAB_011cc6f0;
    *(undefined1 **)(param_1 + 0x198) = &LAB_011cc700;
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x230) = 0;
      *(undefined8 *)(param_1 + 0x238) = 0;
      *(undefined8 *)(param_1 + 0x220) = 0;
      *(undefined8 *)(param_1 + 0x228) = 0;
      (*pcVar5)(param_1 + 0x240);
    }
    *(long *)(param_1 + 0x240) = param_1;
    uVar10 = *(undefined8 *)(param_1 + 0x148);
    local_168 = *(long *)(param_1 + 0x68);
    *(undefined1 **)(param_1 + 0x220) = &LAB_011cc710;
    *(undefined1 **)(param_1 + 0x228) = &LAB_011cc730;
    *(undefined1 **)(param_1 + 0x230) = &LAB_011cc740;
    *(undefined1 **)(param_1 + 0x238) = &LAB_011cc750;
    if (local_168 != 0) {
      (**(code **)(*(long *)(local_168 + 0x48) + 0x10))();
    }
    local_170 = *(long *)(param_1 + 0x70);
    if (local_170 != 0) {
      (**(code **)(*(long *)(local_170 + 0x48) + 0x10))();
    }
    uVar4 = FUN_011dab90(uVar10,&local_168,&local_170,param_1 + 0x170,param_1 + 0x210);
    if (local_170 != 0) {
      (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
      local_170 = 0;
    }
    if (local_168 != 0) {
      (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
    }
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x144) = 2;
      *(undefined4 *)(param_1 + 0x140) = 9;
    }
    else {
      *(undefined4 *)(param_1 + 0x140) = 7;
    }
    break;
  case 8:
    FUN_011dac60(*(undefined8 *)(param_1 + 0x148),param_1 + 0x170,param_1 + 0x210);
LAB_011c9f88:
    *(undefined4 *)(param_1 + 0x140) = 9;
    break;
  case 9:
    uVar2 = *(uint *)(param_1 + 0x42c);
    lVar9 = *(long *)(param_1 + 0x60);
    if (*(int *)(param_1 + 0x144) == 0) {
      lVar7 = *(long *)(param_1 + 0x70);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0x48);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      puVar6 = *(undefined8 **)(lVar9 + 0x60);
      puVar1 = *(undefined8 **)(lVar9 + 0x68);
      if (puVar6 == puVar1) {
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
          goto LAB_011ca320;
        }
      }
      else {
        uVar4 = (ulong)uVar2 << 0x20 | 1;
        local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,7);
        local_d8 = (code *)lVar7;
        local_d0 = (undefined1 *)uVar4;
        (**(code **)(*(long *)*puVar6 + 8))((long *)*puVar6,&local_e0);
        if (local_d8 != (code *)0x0) {
          (**(code **)(*(long *)((long)local_d8 + 0x48) + 0x18))();
        }
        while( true ) {
          local_d8 = (code *)0x0;
          puVar6 = puVar6 + 1;
          if (puVar6 == puVar1) break;
          local_e0._4_4_ = (undefined4)((ulong)local_e0 >> 0x20);
          local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,7);
          local_d8 = (code *)0x0;
          local_d0 = (undefined1 *)uVar4;
          (**(code **)(*(long *)*puVar6 + 8))((long *)*puVar6,&local_e0);
          if (local_d8 != (code *)0x0) {
            (**(code **)(*(long *)((long)local_d8 + 0x48) + 0x18))();
          }
        }
        if (lVar7 != 0) {
LAB_011ca320:
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
        }
      }
    }
    else {
      puVar6 = *(undefined8 **)(lVar9 + 0x60);
      puVar1 = *(undefined8 **)(lVar9 + 0x68);
      if (puVar6 != puVar1) {
        do {
          local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,8);
          local_d8 = (code *)0x0;
          local_d0 = (undefined1 *)((ulong)uVar2 << 0x20 | 1);
          (**(code **)(*(long *)*puVar6 + 8))((long *)*puVar6,&local_e0);
          if (local_d8 != (code *)0x0) {
            (**(code **)(*(long *)((long)local_d8 + 0x48) + 0x18))();
          }
          puVar6 = puVar6 + 1;
        } while (puVar1 != puVar6);
      }
    }
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  return;
}


