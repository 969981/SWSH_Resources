/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f1960; name: FUN_008f1960
 */


undefined8 FUN_008f1960(long param_1,int *param_2)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  code *pcVar11;
  undefined *puVar12;
  long *plVar13;
  undefined8 local_f8;
  undefined1 *puStack_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [24];
  long local_88;
  long local_80;
  char *local_78;
  undefined1 *local_70;
  long local_68;
  long local_60;
  undefined4 local_58;
  long local_48;
  
  FUN_008f26c0();
  switch(*param_2) {
  case 0:
    FUN_009ec7f0(*(undefined8 *)(param_1 + 0x60));
    *(undefined1 *)(*(long *)(param_1 + 0x88) + 0xaee) = 6;
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(*(long *)(param_1 + 0x88) + 4);
    lVar10 = *(long *)(*(long *)(param_1 + 0x88) + 0x9e0);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    lVar5 = *(long *)(param_1 + 0x140);
    *(long *)(param_1 + 0x140) = lVar10;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
    lVar10 = *(long *)(param_1 + 0x88);
    lVar5 = *(long *)(param_1 + 0x90);
    *(undefined2 *)(param_1 + 0x164) = *(undefined2 *)(lVar10 + 0xa5a);
    *(undefined2 *)(param_1 + 0x166) = *(undefined2 *)(lVar10 + 0xa5c);
    uVar2 = *(undefined2 *)(lVar10 + 0xa5e);
    *(undefined1 *)(param_1 + 0x17d) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined2 *)(param_1 + 0x168) = uVar2;
    *(byte *)(param_1 + 0x183) = *(byte *)(param_1 + 0x183) & 0xe4;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      lVar10 = *(long *)(param_1 + 0x88);
    }
    *(undefined8 *)(param_1 + 0x16c) = 8;
    plVar13 = *(long **)(param_1 + 0x60);
    lVar10 = *(long *)(lVar10 + 0xa48);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    puVar12 = PTR_DAT_02710860;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_008f26b4;
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar13;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    lVar6 = (**(code **)(*plVar13 + 0x10))(plVar13,0x9b00,8);
    if (lVar6 == 0) {
      (**(code **)(*plVar13 + 0xb8))(plVar13);
    }
    FUN_01533120(lVar6,lVar10);
    *(long **)(lVar6 + 8) = plVar13;
    *(long *)(lVar6 + 0x10) = lVar6;
    *(undefined8 *)(lVar6 + 0x18) = 0x9b00;
    *(undefined8 *)(lVar6 + 0x20) = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x5c8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x5c8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x5c8) = 0;
    }
    *(long *)(param_1 + 0x5c8) = lVar6;
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    FUN_008f2960(param_1,*(undefined8 *)(param_1 + 0x60));
    plVar13 = *(long **)(param_1 + 0x60);
    uVar7 = FUN_00931920(*(undefined8 *)(param_1 + 0x5f0));
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar12);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_008f26b4;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar13;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    lVar5 = (**(code **)(*plVar13 + 0x10))(plVar13,0xd8,8);
    if (lVar5 == 0) {
      (**(code **)(*plVar13 + 0xb8))(plVar13);
    }
    FUN_009c8f00(lVar5,uVar7);
    *(long **)(lVar5 + 8) = plVar13;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0xd8;
    *(undefined8 *)(lVar5 + 0x20) = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x418) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x418) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x418) = 0;
    }
    plVar13 = *(long **)(param_1 + 0x60);
    *(long *)(param_1 + 0x418) = lVar5;
    uVar7 = FUN_00931920(*(undefined8 *)(param_1 + 0x5f0));
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar12);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_008f26b4;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar13;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    lVar5 = (**(code **)(*plVar13 + 0x10))(plVar13,0xd8,8);
    if (lVar5 == 0) {
      (**(code **)(*plVar13 + 0xb8))(plVar13);
    }
    FUN_009c8f00(lVar5,uVar7);
    *(long **)(lVar5 + 8) = plVar13;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0xd8;
    *(undefined8 *)(lVar5 + 0x20) = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x420) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x420) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x420) = 0;
    }
    plVar13 = *(long **)(param_1 + 0x60);
    *(long *)(param_1 + 0x420) = lVar5;
    uVar7 = FUN_00931920(*(undefined8 *)(param_1 + 0x5f0));
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar12);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_008f26b4;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar13;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    lVar5 = (**(code **)(*plVar13 + 0x10))(plVar13,0xd8,8);
    if (lVar5 == 0) {
      (**(code **)(*plVar13 + 0xb8))(plVar13);
    }
    FUN_009c8f00(lVar5,uVar7);
    *(long **)(lVar5 + 8) = plVar13;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0xd8;
    *(undefined8 *)(lVar5 + 0x20) = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x428) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x428) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x428) = 0;
    }
    plVar13 = *(long **)(param_1 + 0x60);
    *(long *)(param_1 + 0x428) = lVar5;
    uVar7 = FUN_00931920(*(undefined8 *)(param_1 + 0x5f0));
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar12);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_008f26b4;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar13;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    lVar5 = (**(code **)(*plVar13 + 0x10))(plVar13,0xd8,8);
    if (lVar5 == 0) {
      (**(code **)(*plVar13 + 0xb8))(plVar13);
    }
    FUN_009c8f00(lVar5,uVar7);
    *(long **)(lVar5 + 8) = plVar13;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0xd8;
    *(undefined8 *)(lVar5 + 0x20) = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x430) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x430) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x430) = 0;
    }
    plVar13 = *(long **)(param_1 + 0x60);
    *(long *)(param_1 + 0x430) = lVar5;
    uVar7 = FUN_00931920(*(undefined8 *)(param_1 + 0x5f0));
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar12);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_008f26b4;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar13;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    lVar5 = (**(code **)(*plVar13 + 0x10))(plVar13,0xd8,8);
    if (lVar5 == 0) {
      (**(code **)(*plVar13 + 0xb8))(plVar13);
    }
    FUN_009c8f00(lVar5,uVar7);
    *(long **)(lVar5 + 8) = plVar13;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0xd8;
    *(undefined8 *)(lVar5 + 0x20) = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x438) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x438) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x438) = 0;
    }
    lVar10 = *(long *)(param_1 + 0x88);
    *(long *)(param_1 + 0x438) = lVar5;
    if (*(char *)(lVar10 + 0x3b8) == '\0') {
      uVar4 = FUN_0150dec0(*(undefined8 *)(lVar10 + 0xa50));
      lVar10 = *(long *)(param_1 + 0x88);
    }
    else {
      uVar4 = 2;
    }
    *(undefined4 *)(param_1 + 0x160) = uVar4;
    iVar3 = FUN_0150dee0(*(undefined8 *)(lVar10 + 0xa50));
    *(undefined2 *)(param_1 + 0x5c0) = 0;
    *(undefined1 *)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(byte *)(param_1 + 0x183) = *(byte *)(param_1 + 0x183) & 0xfb | (iVar3 == 0) << 2;
    lVar10 = *(long *)(param_1 + 0x88);
    *(undefined2 *)(lVar10 + 0xb3c) = 0;
    *(undefined8 *)(lVar10 + 0xb34) = 0;
    *(undefined8 *)(lVar10 + 0xb2c) = 0;
    *(undefined8 *)(lVar10 + 0xb24) = 0;
    if (*(char *)(*(long *)(param_1 + 0x88) + 0x3bb) == '\x01') {
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb10);
      FUN_008ed590(param_1 + 0x98);
    }
    else {
      lVar10 = param_1 + 0x98;
      FUN_008ed560(lVar10);
      uVar7 = FUN_008ed5a0(lVar10);
      *(undefined8 *)(param_1 + 0xb8) = uVar7;
      uVar7 = FUN_008ed5a0(lVar10);
      *(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb10) = uVar7;
    }
    FUN_008eb7b0(param_1 + 0x98,*(undefined1 *)(*(long *)(param_1 + 0x88) + 0xa82),
                 *(undefined8 *)(param_1 + 0x60));
    FUN_009e0620(*(undefined8 *)(param_1 + 0x60));
    uVar4 = FUN_008ecc60(*(undefined8 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x154) = uVar4;
    *(undefined8 *)(param_1 + 0x158) = 0;
    if (*(char *)(*(long *)(param_1 + 0x88) + 0x3b8) != '\0') {
      uVar8 = FUN_009afb90();
      if ((uVar8 & 1) != 0) {
        FUN_011f8e00(*(undefined8 *)PTR_DAT_02710490);
      }
      uVar8 = FUN_011faab0(*(undefined8 *)PTR_DAT_02710940);
      if ((uVar8 & 1) != 0) goto LAB_008f2230;
      plVar13 = *(long **)(param_1 + 0x78);
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar12);
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_008f26b4;
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar13;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      lVar5 = (**(code **)(*plVar13 + 0x10))(plVar13,0x420,0x10);
      if (lVar5 == 0) {
        (**(code **)(*plVar13 + 0xb8))(plVar13);
      }
      FUN_009afd00(lVar5,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x88));
      *(long **)(lVar5 + 8) = plVar13;
      *(long *)(lVar5 + 0x10) = lVar5;
      *(undefined8 *)(lVar5 + 0x18) = 0x420;
      *(undefined8 *)(lVar5 + 0x20) = 0x10;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x750) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x750) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x750) = 0;
      }
      *(long *)(param_1 + 0x750) = lVar5;
      if (lVar5 != 0) {
        FUN_009b03d0(lVar5);
      }
    }
    if (*(char *)(*(long *)(param_1 + 0x88) + 0x411) != '\0') {
      uVar8 = FUN_009afb90();
      if ((uVar8 & 1) != 0) {
        FUN_011f8e00(*(undefined8 *)PTR_DAT_02710490);
      }
      uVar8 = FUN_011faab0(*(undefined8 *)PTR_DAT_02710940);
      if ((uVar8 & 1) != 0) goto LAB_008f2230;
      plVar13 = *(long **)(param_1 + 0x78);
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar12);
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_008f26b4;
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar13;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      lVar5 = (**(code **)(*plVar13 + 0x10))(plVar13,0x2550,8);
      if (lVar5 == 0) {
        (**(code **)(*plVar13 + 0xb8))(plVar13);
      }
      FUN_009ca780(lVar5,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x88));
      *(long **)(lVar5 + 8) = plVar13;
      *(long *)(lVar5 + 0x10) = lVar5;
      *(undefined8 *)(lVar5 + 0x18) = 0x2550;
      *(undefined8 *)(lVar5 + 0x20) = 8;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x758) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x758) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x758) = 0;
      }
      *(long *)(param_1 + 0x758) = lVar5;
      if (lVar5 != 0) {
        FUN_009caa00(lVar5);
      }
    }
    plVar13 = *(long **)(param_1 + 0x60);
    uVar7 = (**(code **)(*plVar13 + 0x10))(plVar13,0xa8,8);
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar12);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_008f26b4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar13;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    local_80 = *(long *)(param_1 + 0x750);
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
    }
    FUN_009debb0(uVar7,&local_80);
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    lVar10 = *(long *)(param_1 + 0x440);
    *(undefined8 *)(param_1 + 0x440) = uVar7;
    if (lVar10 != 0) {
      FUN_009dec50(lVar10);
      (**(code **)(**(long **)(param_1 + 0x448) + 0x18))
                (*(long **)(param_1 + 0x448),lVar10,*(undefined8 *)(param_1 + 0x450),
                 *(undefined8 *)(param_1 + 0x458));
    }
    *(undefined8 *)(param_1 + 0x450) = 0xa8;
    *(long **)(param_1 + 0x448) = plVar13;
    *(undefined8 *)(param_1 + 0x458) = 8;
    FUN_009e0200(*(undefined8 *)(param_1 + 0x60));
    uVar4 = FUN_0150df00(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xa50));
    *(undefined4 *)(param_1 + 0x178) = uVar4;
    FUN_008de1d0(*(undefined8 *)(param_1 + 0x60));
    FUN_012b4da0(&local_80,*(undefined8 *)(*(long *)(*(long *)PTR_DAT_027108b8 + 0x498) + 400),
                 *(undefined8 *)(*(long *)(*(long *)PTR_DAT_027108b8 + 0x498) + 0x180));
    FUN_012b4070(param_1 + 0x740,&local_80);
    uVar1 = *(uint *)(*(long *)(param_1 + 0x88) + 0xae0);
    if (-1 < (int)uVar1) {
      local_80 = -0x4cdc989c3cd1f183;
      local_78 = "g_table";
      local_70 = (undefined1 *)0x7;
      FUN_012b4250(&local_f8,param_1 + 0x740,&local_80);
      FUN_012b4190(auStack_c0,&local_f8,uVar1 & 0xffff);
      local_d8 = 0x13ba27b6b7e820e8;
      local_d0 = "fileName";
      local_c8 = 8;
      FUN_012b4250(auStack_b0,auStack_c0,&local_d8);
      local_f8 = 0xcbf29ce484222645;
      puStack_f0 = &DAT_01d38550;
      local_e8 = 0;
      local_e0 = 0;
      FUN_012b4820(auStack_a0,auStack_b0,&local_f8);
      FUN_0092fb40(&local_80,auStack_a0);
      FUN_006dccd0(&local_48,*(undefined8 *)PTR_DAT_02710788,1,&local_80,0,
                   *(undefined8 *)(param_1 + 0x60),0);
      if (*(long *)(param_1 + 0x638) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x638) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x638) = 0;
      }
      *(long *)(param_1 + 0x638) = local_48;
      if (local_48 != 0) {
        plVar13 = (long *)(local_48 + 0x48);
        (**(code **)(*plVar13 + 0x10))(plVar13);
        if ((*(long *)(param_1 + 0x640) != 0) || (*(long *)(param_1 + 0x6c0) != 0)) {
          FUN_006e1e70(local_48,param_1 + 0x630,1);
        }
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
      if ((local_68 != 0) && (local_80 != 0)) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      }
      local_80 = 0;
      local_78 = (char *)0xcbf29ce484222645;
      local_70 = &DAT_01d38550;
      local_68 = 0;
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      }
      local_60 = 0;
      local_58 = 0;
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = 0;
      }
      if (local_e0 != 0) {
        (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
      }
    }
    break;
  case 1:
    if ((*(long *)(param_1 + 0x638) != 0) && (*(char *)(*(long *)(param_1 + 0x638) + 0x170) == '\0')
       ) {
      return 0;
    }
    iVar3 = 2;
    goto LAB_008f2690;
  case 2:
    if ((*(char *)(*(long *)(param_1 + 0x88) + 0x3b8) != '\0') &&
       (uVar8 = FUN_009b1690(*(undefined8 *)(param_1 + 0x750)), (uVar8 & 1) != 0)) {
LAB_008f2230:
      bVar9 = *(byte *)(param_1 + 0x183) | 3;
LAB_008f2238:
      *(byte *)(param_1 + 0x183) = bVar9;
      return 1;
    }
    if ((*(long *)(param_1 + 0x758) != 0) &&
       (((*(byte *)(*(long *)(*(long *)(param_1 + 0x758) + 0x60) + 0xb40) >> 4 & 1) != 0 &&
        (uVar8 = FUN_009cadb0(), (uVar8 & 1) == 0)))) {
      FUN_009cadd0(*(undefined8 *)(param_1 + 0x758));
      return 0;
    }
    if ((*(long *)(param_1 + 0x750) == 0) || (uVar8 = FUN_009b0ef0(), (uVar8 & 1) == 0)) {
      lVar10 = *(long *)(param_1 + 0x88);
      if (*(char *)(lVar10 + 0x3b8) == '\0') {
        iVar3 = *(int *)(lVar10 + 4);
        goto LAB_008f2604;
      }
      if (*(long *)(param_1 + 0x758) == 0) {
        return 0;
      }
      iVar3 = *(int *)(lVar10 + 4);
      if (iVar3 != 0) {
        if (iVar3 != 2) {
          if (iVar3 != 1) goto LAB_008f2614;
          goto LAB_008f2014;
        }
        goto LAB_008f2630;
      }
LAB_008f263c:
      puVar12 = PTR_LAB_02717c90;
    }
    else {
      lVar10 = *(long *)(param_1 + 0x88);
      iVar3 = *(int *)(lVar10 + 4);
      if (*(char *)(lVar10 + 0x3b8) == '\0') {
LAB_008f2604:
        if (iVar3 == 2) {
          puVar12 = PTR_LAB_02717c98;
        }
        else {
          if (iVar3 != 1) goto LAB_008f2614;
          if (*(char *)(lVar10 + 0x3b9) == '\0') {
            puVar12 = PTR_LAB_02717ca8;
          }
          else {
            puVar12 = PTR_LAB_02717ca0;
          }
        }
      }
      else {
        if (iVar3 == 2) {
LAB_008f2630:
          puVar12 = PTR_LAB_02717c88;
          goto LAB_008f2670;
        }
        if (iVar3 == 1) {
LAB_008f2014:
          puVar12 = PTR_LAB_02717c78;
          goto LAB_008f2670;
        }
        if (iVar3 == 0) goto LAB_008f263c;
LAB_008f2614:
        puVar12 = PTR_LAB_02717c80;
      }
    }
LAB_008f2670:
    *(undefined **)(param_1 + 0xc0) = puVar12;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    FUN_008f2b30(param_1);
    FUN_008f2ca0(param_1);
    break;
  case 3:
    pcVar11 = *(code **)(param_1 + 0xc0);
    uVar8 = *(ulong *)(param_1 + 200);
    if ((pcVar11 != (code *)0x0) || (uVar8 != 0 && (uVar8 & 1) != 0)) {
      plVar13 = (long *)(param_1 + ((long)uVar8 >> 1));
      if ((uVar8 & 1) != 0) {
        pcVar11 = *(code **)(pcVar11 + *plVar13);
      }
      uVar8 = (*pcVar11)(plVar13,param_1 + 0xd0);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
    }
    if ((*(byte *)(param_1 + 0x183) & 1) == 0) {
      return 1;
    }
    bVar9 = *(byte *)(param_1 + 0x183) | 2;
    goto LAB_008f2238;
  default:
    return 0;
  }
  iVar3 = *param_2 + 1;
LAB_008f2690:
  *param_2 = iVar3;
  return 0;
}


