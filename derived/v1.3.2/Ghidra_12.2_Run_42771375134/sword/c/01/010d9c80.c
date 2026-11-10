/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d9c80; name: FUN_010d9c80
 */


undefined8 FUN_010d9c80(long param_1)

{
  uint6 uVar1;
  ulong uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong local_d80;
  long *local_d78;
  undefined8 local_d70;
  undefined8 local_d68;
  ulong local_d60;
  ulong local_d58;
  undefined8 local_d50;
  long local_d48;
  long *plStack_d40;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_011707f0();
    uVar12 = *(undefined8 *)(param_1 + 0x80);
    uVar4 = FUN_011727c0(*(undefined8 *)(param_1 + 0x98));
    FUN_010d7da0(uVar12,uVar4);
  }
  switch(*(undefined4 *)(param_1 + 0x94)) {
  case 0:
    uVar6 = FUN_010384a0(*(undefined8 *)(param_1 + 0x88));
    if ((uVar6 & 1) == 0) goto switchD_010d9ce0_default;
    if (*(long *)(param_1 + 0x98) == 0) {
LAB_010da658:
      uVar12 = *(undefined8 *)(param_1 + 0x80);
    }
    else {
      iVar5 = FUN_011727a0();
      if (iVar5 == 2) {
        FUN_010d8250(*(undefined8 *)(param_1 + 0x80));
        plVar7 = (long *)(*(long *)(*(long *)(param_1 + 0x88) + 0x5d0) + 0x60);
        (**(code **)(*plVar7 + 8))(plVar7,0);
        FUN_00ffa290(*(undefined8 *)(param_1 + 0x88),1,1);
        FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
        local_d58 = 0;
        local_d50._2_6_ = (uint6)(local_d50 >> 0x10) & 0xffffffffff00;
        local_d50 = CONCAT62(local_d50._2_6_,0x101);
        FUN_010ccbc0(&local_d80,*(undefined8 *)(param_1 + 0x78),0xf,0,0);
        local_d60 = local_d80;
        if (local_d80 != 0) {
          (**(code **)(*(long *)(local_d80 + 0x48) + 0x18))();
          local_d80 = 0;
        }
        local_d50._0_3_ = (uint3)(ushort)local_d50;
        local_d50 = local_d50 & 0xffffffffffffff00;
        local_d58 = local_d58 & 0xffffffff00000000;
        FUN_01038170(*(undefined8 *)(param_1 + 0x88),&local_d60);
        break;
      }
      if (*(long *)(param_1 + 0x98) == 0) goto LAB_010da658;
      iVar5 = FUN_011727a0();
      if (iVar5 == 3) {
        FUN_010d8250(*(undefined8 *)(param_1 + 0x80));
        plVar7 = (long *)(*(long *)(*(long *)(param_1 + 0x88) + 0x5d0) + 0x60);
        (**(code **)(*plVar7 + 8))(plVar7,0);
        FUN_00ffa290(*(undefined8 *)(param_1 + 0x88),1,1);
        FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
        uVar1 = (uint6)(local_d50 >> 0x10);
        uVar12 = *(undefined8 *)(param_1 + 0x78);
        uVar10 = 0x16;
LAB_010da3f8:
        local_d50 = CONCAT62(uVar1 & 0xffffffffff00,0x101);
        local_d58 = 0;
        FUN_010ccbc0(&local_d80,uVar12,uVar10,0,0);
        local_d60 = local_d80;
        if (local_d80 != 0) {
          (**(code **)(*(long *)(local_d80 + 0x48) + 0x18))();
          local_d80 = 0;
        }
        local_d50._0_3_ = (uint3)(ushort)local_d50;
        local_d50 = CONCAT71(local_d50._1_7_,1);
        FUN_01038170(*(undefined8 *)(param_1 + 0x88),&local_d60);
        goto LAB_010da438;
      }
      if (*(long *)(param_1 + 0x98) == 0) goto LAB_010da658;
      iVar5 = FUN_011727a0();
      if (iVar5 == 4) {
        FUN_010d8250(*(undefined8 *)(param_1 + 0x80));
        plVar7 = (long *)(*(long *)(*(long *)(param_1 + 0x88) + 0x5d0) + 0x60);
        (**(code **)(*plVar7 + 8))(plVar7,0);
        FUN_00ffa290(*(undefined8 *)(param_1 + 0x88),1,1);
        FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
        uVar1 = (uint6)(local_d50 >> 0x10);
        uVar12 = *(undefined8 *)(param_1 + 0x78);
        uVar10 = 0x17;
        goto LAB_010da3f8;
      }
      if (*(long *)(param_1 + 0x98) == 0) goto LAB_010da658;
      iVar5 = FUN_011727a0();
      uVar12 = *(undefined8 *)(param_1 + 0x80);
      if (iVar5 == 8) {
        FUN_010d8250();
        goto LAB_010da140;
      }
    }
    iVar5 = FUN_010d80a0(uVar12);
    if (iVar5 != 2) goto switchD_010d9ce0_default;
    FUN_006cf0a0(&local_d60,&DAT_02672f70);
    FUN_016d3620(&local_d60);
    if (local_d48 != 0) {
      (**(code **)(*(long *)(local_d48 + 0x48) + 0x18))();
      local_d48 = 0;
    }
    plVar7 = (long *)(*(long *)(*(long *)(param_1 + 0x88) + 0x5d0) + 0x60);
    (**(code **)(*plVar7 + 8))(plVar7,0);
    FUN_010da700(param_1,0x10);
    iVar5 = 4;
    goto LAB_010da0f0;
  case 1:
    uVar6 = FUN_010384a0(*(undefined8 *)(param_1 + 0x88));
    if ((uVar6 & 1) == 0) goto switchD_010d9ce0_default;
    FUN_010d7f30(*(undefined8 *)(param_1 + 0x80));
    nn::os::GetSystemTick();
    uVar12 = nn::os::ConvertToTimeSpan();
    *(undefined8 *)(param_1 + 0xa0) = uVar12;
    break;
  case 2:
    nn::os::GetSystemTick();
    lVar8 = nn::os::ConvertToTimeSpan();
    lVar8 = lVar8 - *(long *)(param_1 + 0xa0);
    *(long *)(param_1 + 0xa8) = lVar8;
    if (((double)lVar8 / DAT_01cd50a0 < 5.0) ||
       (iVar5 = FUN_010d80a0(*(undefined8 *)(param_1 + 0x80)), iVar5 != 1))
    goto switchD_010d9ce0_default;
    FUN_006cf0a0(&local_d60,&DAT_02672f88);
    FUN_016d3620(&local_d60);
    if (local_d48 != 0) {
      (**(code **)(*(long *)(local_d48 + 0x48) + 0x18))();
      local_d48 = 0;
    }
    FUN_00ffa290(*(undefined8 *)(param_1 + 0x88),1,1);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
    local_d58 = 0;
    local_d50._2_6_ = (uint6)(local_d50 >> 0x10) & 0xffffffffff00;
    local_d50 = CONCAT62(local_d50._2_6_,0x101);
    FUN_010ccbc0(&local_d80,*(undefined8 *)(param_1 + 0x78),0x12,0,0);
    local_d60 = local_d80;
    if (local_d80 != 0) {
      (**(code **)(*(long *)(local_d80 + 0x48) + 0x18))();
      local_d80 = 0;
    }
    local_d50._0_3_ = CONCAT12(1,(ushort)local_d50);
    local_d50 = local_d50 & 0xffffffffffffff00;
    local_d58 = local_d58 & 0xffffffff00000000;
    FUN_01038170(*(undefined8 *)(param_1 + 0x88),&local_d60);
    plVar7 = (long *)(*(long *)(*(long *)(param_1 + 0x88) + 0x5d0) + 0x60);
    (**(code **)(*plVar7 + 8))(plVar7,1);
    FUN_011727f0(*(undefined8 *)(param_1 + 0x98));
    break;
  case 3:
    if ((*(long *)(param_1 + 0x98) == 0) || (iVar5 = FUN_011727a0(), iVar5 != 6))
    goto switchD_010d9ce0_default;
    plVar7 = (long *)(*(long *)(*(long *)(param_1 + 0x88) + 0x5d0) + 0x60);
    (**(code **)(*plVar7 + 8))(plVar7,0);
    FUN_01038270(*(undefined8 *)(param_1 + 0x88),1);
    if (*(long *)(param_1 + 0x68) == 0) {
LAB_010d9f48:
      puVar13 = (undefined8 *)0x0;
    }
    else {
      puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      if (puVar13 != (undefined8 *)0x0) {
        plVar7 = (long *)(**(code **)*puVar13)(puVar13);
        lVar8 = FUN_010c8950();
        for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          if (plVar7 == (long *)lVar8) {
            puVar13 = puVar13 + -10;
            goto LAB_010d9f4c;
          }
        }
        goto LAB_010d9f48;
      }
    }
LAB_010d9f4c:
    lVar8 = FUN_010c6c10(puVar13);
    if (*(long *)(param_1 + 0x98) == 0) goto LAB_010da5ec;
    uVar12 = *(undefined8 *)(lVar8 + 8);
    FUN_01172820(&local_d60);
    cVar3 = (char)local_d60;
    lVar8 = FUN_010c6c10(puVar13);
    lVar9 = *(long *)(lVar8 + 0x30);
    if (cVar3 == '\0') {
      *(undefined8 *)(lVar8 + 0x30) = 0;
      if (lVar9 == 0) goto LAB_010da470;
      FUN_01003170(lVar9);
      (**(code **)(**(long **)(lVar8 + 0x38) + 0x18))
                (*(long **)(lVar8 + 0x38),lVar9,*(undefined8 *)(lVar8 + 0x40),
                 *(undefined8 *)(lVar8 + 0x48));
    }
    else {
      if (lVar9 != 0) {
        lVar8 = FUN_010c6c10(puVar13);
        FUN_008e6f10(*(undefined8 *)(lVar8 + 0x30));
      }
      FUN_010cbd00(&local_d80,uVar12);
      lVar8 = FUN_010c6c10(puVar13);
      uVar6 = local_d80;
      local_d80 = 0;
      lVar9 = *(long *)(lVar8 + 0x30);
      *(ulong *)(lVar8 + 0x30) = uVar6;
      if (lVar9 == 0) {
        *(undefined8 *)(lVar8 + 0x40) = local_d70;
        *(undefined8 *)(lVar8 + 0x48) = local_d68;
        *(long **)(lVar8 + 0x38) = local_d78;
        local_d80 = 0;
      }
      else {
        FUN_01003170(lVar9);
        (**(code **)(**(long **)(lVar8 + 0x38) + 0x18))
                  (*(long **)(lVar8 + 0x38),lVar9,*(undefined8 *)(lVar8 + 0x40),
                   *(undefined8 *)(lVar8 + 0x48));
        uVar6 = local_d80;
        *(long **)(lVar8 + 0x38) = local_d78;
        *(undefined8 *)(lVar8 + 0x40) = local_d70;
        *(undefined8 *)(lVar8 + 0x48) = local_d68;
        local_d80 = 0;
        if (uVar6 != 0) {
          FUN_01003170(uVar6);
          (**(code **)(*local_d78 + 0x18))(local_d78,uVar6,local_d70,local_d68);
        }
      }
      lVar8 = FUN_010c6c10(puVar13);
      FUN_0114a790(*(undefined8 *)(lVar8 + 0x30),&local_d50);
LAB_010da470:
    }
    if ((char)local_d60 != '\0') {
      FUN_01003170(&local_d50);
      local_d60 = local_d60 & 0xffffffffffffff00;
    }
    FUN_01173380(&local_d60,*(undefined8 *)(param_1 + 0x98));
    lVar8 = FUN_010c6c10(puVar13);
    FUN_010cc110(lVar8 + 0x50,&local_d60);
    uVar6 = local_d58;
    if ((char)local_d60 != '\0') {
      if (local_d58 != 0) {
        while (uVar2 = local_d50, uVar2 != uVar6) {
          if (*(long *)(uVar2 - 8) != 0) {
            (**(code **)(*(long *)(*(long *)(uVar2 - 8) + 0x48) + 0x18))();
            *(undefined8 *)(uVar2 - 8) = 0;
          }
          if (*(long *)(uVar2 - 0x10) != 0) {
            (**(code **)(*(long *)(*(long *)(uVar2 - 0x10) + 0x48) + 0x18))();
            *(undefined8 *)(uVar2 - 0x10) = 0;
          }
          local_d50 = uVar2 - 0x18;
          if (*(long *)(uVar2 - 0x18) != 0) {
            (**(code **)(*(long *)(*(long *)(uVar2 - 0x18) + 0x48) + 0x18))();
            *(undefined8 *)(uVar2 - 0x18) = 0;
          }
        }
        local_d50 = uVar6;
        (**(code **)(*plStack_d40 + 0x18))(plStack_d40,local_d58,local_d48 - local_d58,8);
      }
      local_d60 = local_d60 & 0xffffffffffffff00;
    }
    FUN_011732a0(&local_d60,*(undefined8 *)(param_1 + 0x98));
    lVar8 = FUN_010c6c10(puVar13);
    puVar11 = (ulong *)(lVar8 + 0x88);
    if (*(char *)puVar11 == '\0') {
      if ((char)local_d60 != '\0') {
        *(long *)(lVar8 + 0xa0) = local_d48;
        *(long **)(lVar8 + 0xa8) = plStack_d40;
        puVar11 = &local_d60;
        *(ulong *)(lVar8 + 0x90) = local_d58;
        *(ulong *)(lVar8 + 0x98) = local_d50;
        *(undefined1 *)(lVar8 + 0x88) = 1;
        goto LAB_010da5b0;
      }
    }
    else {
      if ((char)local_d60 != '\0') {
        *(long *)(lVar8 + 0xa0) = local_d48;
        *(long **)(lVar8 + 0xa8) = plStack_d40;
        puVar11 = &local_d60;
        *(ulong *)(lVar8 + 0x90) = local_d58;
        *(ulong *)(lVar8 + 0x98) = local_d50;
      }
LAB_010da5b0:
      *(char *)puVar11 = '\0';
    }
    FUN_01173880(&local_d60,*(undefined8 *)(param_1 + 0x98));
    lVar8 = FUN_010c6c10(puVar13);
    if (*(long *)(lVar8 + 0x28) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar8 + 0x28) + 0x48) + 0x18))();
      *(undefined8 *)(lVar8 + 0x28) = 0;
    }
    *(ulong *)(lVar8 + 0x28) = local_d60;
LAB_010da5ec:
    lVar8 = FUN_010c6c10(puVar13);
    lVar9 = *(long *)(lVar8 + 0xb0);
    *(undefined8 *)(lVar8 + 0xb0) = 0;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
    }
    lVar8 = FUN_010c6c10(puVar13);
    *(undefined4 *)(lVar8 + 0x20) = 2;
    FUN_010c6c30(puVar13,1);
    return 1;
  case 4:
    uVar6 = FUN_010386c0(*(undefined8 *)(param_1 + 0x88));
    if ((uVar6 & 1) == 0) goto switchD_010d9ce0_default;
    iVar5 = FUN_010386e0(*(undefined8 *)(param_1 + 0x88));
    if (iVar5 == 1) {
      *(undefined4 *)(param_1 + 0x94) = 0;
      FUN_00ffa290(*(undefined8 *)(param_1 + 0x88),1,1);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
      local_d58 = 0;
      local_d50._2_6_ = (uint6)(local_d50 >> 0x10) & 0xffffffffff00;
      local_d50 = CONCAT62(local_d50._2_6_,0x101);
      FUN_010ccbc0(&local_d80,*(undefined8 *)(param_1 + 0x78),0x1b,0,0);
      local_d60 = local_d80;
      if (local_d80 != 0) {
        (**(code **)(*(long *)(local_d80 + 0x48) + 0x18))();
        local_d80 = 0;
      }
      local_d50._0_3_ = (uint3)(ushort)local_d50;
      local_d50 = local_d50 & 0xffffffffffffff00;
      local_d58 = local_d58 & 0xffffffff00000000;
      FUN_01038170(*(undefined8 *)(param_1 + 0x88),&local_d60);
      plVar7 = (long *)(*(long *)(*(long *)(param_1 + 0x88) + 0x5d0) + 0x60);
      (**(code **)(*plVar7 + 8))(plVar7,1);
      FUN_010d7f30(*(undefined8 *)(param_1 + 0x80));
      goto switchD_010d9ce0_default;
    }
    if (iVar5 != 0) goto switchD_010d9ce0_default;
    FUN_01171f20(*(undefined8 *)(param_1 + 0x98),1);
    nn::os::GetSystemTick();
    uVar12 = nn::os::ConvertToTimeSpan();
    *(undefined8 *)(param_1 + 0xa0) = uVar12;
    FUN_00ffa290(*(undefined8 *)(param_1 + 0x88),1,1);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
    local_d58 = 0;
    local_d50._2_6_ = (uint6)(local_d50 >> 0x10) & 0xffffffffff00;
    local_d50 = CONCAT62(local_d50._2_6_,0x101);
    FUN_010ccbc0(&local_d80,*(undefined8 *)(param_1 + 0x78),0x11,0,0);
    local_d60 = local_d80;
    if (local_d80 != 0) {
      (**(code **)(*(long *)(local_d80 + 0x48) + 0x18))();
      local_d80 = 0;
    }
    local_d50._0_3_ = CONCAT12(1,(ushort)local_d50);
    local_d50 = local_d50 & 0xffffffffffffff00;
    local_d58 = local_d58 & 0xffffffff00000000;
    FUN_01038170(*(undefined8 *)(param_1 + 0x88),&local_d60);
    plVar7 = (long *)(*(long *)(*(long *)(param_1 + 0x88) + 0x5d0) + 0x60);
    (**(code **)(*plVar7 + 8))(plVar7,1);
    break;
  case 5:
    nn::os::GetSystemTick();
    lVar8 = nn::os::ConvertToTimeSpan();
    *(long *)(param_1 + 0xa8) = lVar8 - *(long *)(param_1 + 0xa0);
    if (((*(long *)(param_1 + 0x98) == 0) || (iVar5 = FUN_011727a0(), iVar5 != 8)) ||
       ((double)*(long *)(param_1 + 0xa8) / DAT_01cd50a0 < 3.0)) goto switchD_010d9ce0_default;
LAB_010da140:
    plVar7 = (long *)(*(long *)(*(long *)(param_1 + 0x88) + 0x5d0) + 0x60);
    (**(code **)(*plVar7 + 8))(plVar7,0);
    FUN_01038270(*(undefined8 *)(param_1 + 0x88),1);
LAB_010da438:
    iVar5 = 6;
    goto LAB_010da0f0;
  case 6:
    uVar6 = FUN_010386c0(*(undefined8 *)(param_1 + 0x88));
    if ((uVar6 & 1) != 0) {
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar13 != (undefined8 *)0x0
         )) {
        plVar7 = (long *)(**(code **)*puVar13)(puVar13);
        lVar8 = FUN_010c8950();
        for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          if (plVar7 == (long *)lVar8) {
            puVar13 = puVar13 + -10;
            goto LAB_010da1b4;
          }
        }
      }
      puVar13 = (undefined8 *)0x0;
LAB_010da1b4:
      lVar8 = FUN_010c6c10(puVar13);
      lVar9 = *(long *)(lVar8 + 0xb0);
      *(undefined8 *)(lVar8 + 0xb0) = 0;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
      }
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar13 != (undefined8 *)0x0
         )) {
        plVar7 = (long *)(**(code **)*puVar13)(puVar13);
        lVar8 = FUN_010c8950();
        for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          if (plVar7 == (long *)lVar8) {
            puVar13 = puVar13 + -10;
            goto LAB_010da214;
          }
        }
      }
      puVar13 = (undefined8 *)0x0;
LAB_010da214:
      FUN_010c6c30(puVar13,5);
      FUN_010d8040(*(undefined8 *)(param_1 + 0x80),0);
      *(undefined8 *)(param_1 + 0x90) = 2;
    }
  default:
    goto switchD_010d9ce0_default;
  }
  iVar5 = *(int *)(param_1 + 0x94) + 1;
LAB_010da0f0:
  *(int *)(param_1 + 0x94) = iVar5;
switchD_010d9ce0_default:
  FUN_010d8090(*(undefined8 *)(param_1 + 0x80));
  return 0;
}


