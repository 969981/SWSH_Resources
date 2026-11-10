/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e6690; name: FUN_005e6690
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_005e6690(long *param_1,undefined4 param_2)

{
  size_t __n;
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  size_t sVar11;
  long *local_e0;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  ulong local_c0;
  ulong local_b8;
  long *local_b0;
  undefined *local_a8;
  long local_a0;
  long local_98;
  ulong local_90;
  ulong local_88;
  long *local_80;
  void *local_78;
  size_t local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong local_58;
  
  plVar5 = (long *)FUN_005cbff0();
  lVar6 = (**(code **)(*plVar5 + 0xd8))();
  if (*(char *)(lVar6 + 0x60) == '\0') {
    return 1;
  }
  local_80 = (long *)param_1[1];
  local_78 = (void *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (local_80 == (long *)0x0) {
    lVar6 = FUN_005bc740();
    if (lVar6 == 0) {
      local_80 = (long *)FUN_005bc6f0();
    }
    else {
      local_80 = (long *)FUN_005bc740();
    }
  }
  switch(param_2) {
  case 2:
    pcVar9 = "SiGfx_OGL_Common.mi_shader_pkg";
    break;
  case 3:
    pcVar9 = "SiGfx_OGLES3_Common.mi_shader_pkg";
    break;
  case 4:
    pcVar9 = "SiGfx_D3D11_Common.mi_shader_pkg";
    break;
  case 5:
    pcVar9 = "SiGfx_D3D12_Common.mi_shader_pkg";
    break;
  case 6:
    pcVar9 = "SiGfx_PS4_Common.mi_shader_pkg";
    break;
  case 7:
    pcVar9 = "SiGfx_Vulkan_Common.mi_shader_pkg";
    break;
  case 8:
    pcVar9 = "SiGfx_NX_Common.mi_shader_pkg";
    break;
  default:
    goto switchD_005e671c_default;
  }
  FUN_005c47b0(&local_80,pcVar9);
switchD_005e671c_default:
  if (local_70 == 0) {
    uVar7 = 0;
    goto joined_r0x005e67ac;
  }
  local_b0 = (long *)param_1[1];
  local_a8 = (undefined *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  if (local_b0 == (long *)0x0) {
    lVar6 = FUN_005bc740();
    if (lVar6 == 0) {
      local_b0 = (long *)FUN_005bc6f0();
    }
    else {
      local_b0 = (long *)FUN_005bc740();
    }
  }
  plVar5 = (long *)FUN_005cbff0();
  uVar7 = (**(code **)(*plVar5 + 0xd8))();
  FUN_005c80d0(&local_b0,uVar7);
  uVar8 = local_a0 + 1;
  if (local_90 <= uVar8) {
    uVar8 = local_a0 + 2;
    if (local_98 == 0) {
      if (uVar8 <= local_90 * 2) {
        uVar8 = local_90 * 2;
      }
    }
    else {
      uVar8 = local_98 + uVar8;
    }
    FUN_005c5e00(&local_b0,uVar8,1);
    uVar8 = local_a0 + 1;
  }
  sVar11 = local_70;
  local_a8[local_a0] = 0x2f;
  local_a0 = local_a0 + 1;
  local_a8[uVar8] = 0;
  if (local_70 != 0) {
    uVar8 = local_a0 + local_70;
    if (local_90 <= uVar8) {
      uVar8 = uVar8 + 1;
      if (local_98 == 0) {
        if (uVar8 <= local_90 * 2) {
          uVar8 = local_90 * 2;
        }
      }
      else {
        uVar8 = local_98 + uVar8;
      }
      FUN_005c5e00(&local_b0,uVar8,1);
      uVar8 = local_a0 + sVar11;
    }
    memcpy(local_a8 + local_a0,local_78,sVar11);
    local_a0 = local_a0 + sVar11;
    local_a8[uVar8] = 0;
  }
  puVar3 = PTR_DAT_02713e78;
  puVar4 = PTR_DAT_02713e78;
  if (local_a8 != (undefined *)0x0) {
    puVar4 = local_a8;
  }
  uVar8 = FUN_00682e30(puVar4,1);
  if ((uVar8 & 1) == 0) {
    pcVar9 = (char *)FUN_005c9be0(7);
    if (pcVar9 == (char *)0x0) {
      uVar7 = 0;
    }
    else {
      local_e0 = (long *)param_1[1];
      local_c0 = 0;
      local_b8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_d8 = (undefined *)0x0;
      if (local_e0 == (long *)0x0) {
        lVar6 = FUN_005bc740();
        if (lVar6 == 0) {
          local_e0 = (long *)FUN_005bc6f0();
        }
        else {
          local_e0 = (long *)FUN_005bc740();
        }
      }
      FUN_005c47b0(&local_e0,"%SISDK_V3%/SDK/Core/Shader/Bin");
      uVar8 = local_d0 + 1;
      if (local_c0 <= uVar8) {
        uVar8 = local_d0 + 2;
        if (local_c8 == 0) {
          if (uVar8 <= local_c0 * 2) {
            uVar8 = local_c0 * 2;
          }
        }
        else {
          uVar8 = local_c8 + uVar8;
        }
        FUN_005c5e00(&local_e0,uVar8,1);
        uVar8 = local_d0 + 1;
      }
      local_d8[local_d0] = 0x2f;
      local_d0 = local_d0 + 1;
      local_d8[uVar8] = 0;
      if (*pcVar9 != '\0') {
        sVar11 = 0;
        do {
          __n = sVar11 + 1;
          lVar6 = sVar11 + 1;
          sVar11 = __n;
        } while (pcVar9[lVar6] != '\0');
        uVar8 = local_d0 + __n;
        if (local_c0 <= uVar8) {
          if (local_c8 == 0) {
            uVar10 = uVar8 + 1;
            if (uVar8 + 1 <= local_c0 * 2) {
              uVar10 = local_c0 * 2;
            }
          }
          else {
            uVar10 = local_c8 + local_d0 + __n + 1;
          }
          FUN_005c5e00(&local_e0,uVar10,1);
          uVar8 = local_d0 + __n;
        }
        memcpy(local_d8 + local_d0,pcVar9,__n);
        local_d0 = local_d0 + __n;
        local_d8[uVar8] = 0;
      }
      uVar8 = local_d0 + 1;
      if (local_c0 <= uVar8) {
        uVar8 = local_d0 + 2;
        if (local_c8 == 0) {
          if (uVar8 <= local_c0 * 2) {
            uVar8 = local_c0 * 2;
          }
        }
        else {
          uVar8 = local_c8 + uVar8;
        }
        FUN_005c5e00(&local_e0,uVar8,1);
        uVar8 = local_d0 + 1;
      }
      sVar11 = local_70;
      local_d8[local_d0] = 0x2f;
      local_d0 = local_d0 + 1;
      local_d8[uVar8] = 0;
      if (local_70 != 0) {
        uVar8 = local_d0 + local_70;
        if (local_c0 <= uVar8) {
          uVar8 = uVar8 + 1;
          if (local_c8 == 0) {
            if (uVar8 <= local_c0 * 2) {
              uVar8 = local_c0 * 2;
            }
          }
          else {
            uVar8 = local_c8 + uVar8;
          }
          FUN_005c5e00(&local_e0,uVar8,1);
          uVar8 = local_d0 + sVar11;
        }
        memcpy(local_d8 + local_d0,local_78,sVar11);
        local_d0 = local_d0 + sVar11;
        local_d8[uVar8] = 0;
      }
      thunk_FUN_005c9580(&local_e0);
      FUN_005ca160(&local_e0,&DAT_01cf5f85,&DAT_01cdd9ff,0,0,1);
      puVar4 = puVar3;
      if (local_d8 != (undefined *)0x0) {
        puVar4 = local_d8;
      }
      uVar8 = FUN_00682e30(puVar4,1);
      bVar1 = (uVar8 & 1) != 0;
      if (bVar1) {
        FUN_005c80d0(&local_b0,&local_e0);
      }
      if ((local_b8 & 1) == 0) {
        if ((local_d8 != (undefined *)0x0) && (local_e0 != (long *)0x0)) {
          (**(code **)(*local_e0 + 0x48))
                    (local_e0,local_d8,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
        }
        local_d8 = (undefined *)0x0;
      }
      if (bVar1) goto LAB_005e68d8;
      uVar7 = 0;
    }
  }
  else {
LAB_005e68d8:
    FUN_005e44b0(&local_e0,&local_b0,0);
    puVar4 = puVar3;
    if (local_d8 != (undefined *)0x0) {
      puVar4 = local_d8;
    }
    lVar6 = (**(code **)(*param_1 + 0x40))(param_1,puVar4);
    if (lVar6 == 0) {
      puVar4 = puVar3;
      if (local_d8 != (undefined *)0x0) {
        puVar4 = local_d8;
      }
      puVar2 = puVar3;
      if (local_a8 != (undefined *)0x0) {
        puVar2 = local_a8;
      }
      uVar8 = (**(code **)(*param_1 + 0x28))(param_1,puVar4,puVar2);
      if ((uVar8 & 1) != 0) {
        if (local_d8 != (undefined *)0x0) {
          puVar3 = local_d8;
        }
        (**(code **)(*param_1 + 0x40))(param_1,puVar3);
        FUN_005e6d30(param_1,param_2);
        goto LAB_005e695c;
      }
      uVar7 = 0;
    }
    else {
LAB_005e695c:
      uVar7 = 1;
    }
    if ((local_b8 & 1) == 0) {
      if ((local_d8 != (undefined *)0x0) && (local_e0 != (long *)0x0)) {
        (**(code **)(*local_e0 + 0x48))
                  (local_e0,local_d8,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      local_d8 = (undefined *)0x0;
    }
  }
  if ((local_88 & 1) == 0) {
    if ((local_a8 != (undefined *)0x0) && (local_b0 != (long *)0x0)) {
      (**(code **)(*local_b0 + 0x48))
                (local_b0,local_a8,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
    local_a8 = (undefined *)0x0;
  }
joined_r0x005e67ac:
  if ((((local_58 & 1) == 0) && (local_78 != (void *)0x0)) && (local_80 != (long *)0x0)) {
    (**(code **)(*local_80 + 0x48))
              (local_80,local_78,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
  }
  return uVar7;
}


