/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e6d30; name: FUN_005e6d30
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_005e6d30(long *param_1,undefined4 param_2)

{
  size_t __n;
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *__src;
  long *plVar8;
  ulong uVar9;
  undefined *puVar10;
  int iVar11;
  long *plVar12;
  size_t sVar13;
  long lVar14;
  long *local_148;
  undefined *local_140;
  long local_138;
  long local_130;
  ulong local_128;
  ulong local_120;
  long *local_118;
  undefined *local_110;
  long local_108;
  long local_100;
  ulong local_f8;
  ulong local_f0;
  long *local_e8;
  char *local_e0;
  size_t local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulong local_c0;
  undefined *local_b8;
  long *local_b0;
  ulong local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  long *plStack_80;
  long local_78;
  ulong local_70;
  
  puVar10 = PTR_DAT_02713f98;
  local_b0 = (long *)param_1[1];
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = PTR_DAT_02713f98 + 0x10;
  local_78 = 0;
  local_70 = 0;
  local_88 = (long *)0x0;
  plStack_80 = (long *)0x0;
  local_98 = 0x30;
  local_90 = (long *)0x0;
  if (local_b0 == (long *)0x0) {
    local_b0 = (long *)FUN_005bc6f0();
  }
  switch(param_2) {
  case 4:
    local_c8 = 0;
    local_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = (long *)0x0;
    local_e0 = (char *)0x0;
    lVar14 = FUN_005bc740();
    if (lVar14 == 0) {
      local_e8 = (long *)FUN_005bc6f0();
    }
    else {
      local_e8 = (long *)FUN_005bc740();
    }
    local_e0 = "SiGfx_D3D11_Common_Subdiv.mi_shader_pkg";
    break;
  case 5:
    local_c8 = 0;
    local_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = (long *)0x0;
    local_e0 = (char *)0x0;
    lVar14 = FUN_005bc740();
    if (lVar14 == 0) {
      local_e8 = (long *)FUN_005bc6f0();
    }
    else {
      local_e8 = (long *)FUN_005bc740();
    }
    local_e0 = "SiGfx_D3D12_Common_Subdiv.mi_shader_pkg";
    break;
  case 6:
    local_c8 = 0;
    local_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = (long *)0x0;
    local_e0 = (char *)0x0;
    lVar14 = FUN_005bc740();
    if (lVar14 == 0) {
      local_e8 = (long *)FUN_005bc6f0();
    }
    else {
      local_e8 = (long *)FUN_005bc740();
    }
    local_e0 = "SiGfx_PS4_Common_Subdiv.mi_shader_pkg";
    local_d8 = 0x25;
    local_c8 = 0;
    local_c0 = 1;
    uVar7 = FUN_005d04d0(&local_b8,1,1);
    if ((uVar7 & 1) == 0) {
      local_a8 = 0;
      local_88 = (long *)0x0;
      plStack_80 = (long *)0x0;
    }
    else {
      FUN_005c80d0(local_90 + local_a8 * 6,&local_e8);
      local_a8 = local_a8 + 1;
      plStack_80 = local_90 + local_a8 * 6;
      local_88 = local_90;
    }
    if ((((local_c0 & 1) == 0) && (local_e0 != (char *)0x0)) && (local_e8 != (long *)0x0)) {
      (**(code **)(*local_e8 + 0x48))
                (local_e8,local_e0,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = (long *)0x0;
    local_e0 = (char *)0x0;
    lVar14 = FUN_005bc740();
    if (lVar14 == 0) {
      local_e8 = (long *)FUN_005bc6f0();
    }
    else {
      local_e8 = (long *)FUN_005bc740();
    }
    local_e0 = "SiGfx_PS4_Special.mi_shader_pkg";
    local_c0 = local_c0 | 1;
    local_d8 = 0x1f;
    local_c8 = 0;
    if (uStack_a0 <= local_a8) {
      if (local_78 == 0) {
        lVar14 = uStack_a0 * 2;
        if (lVar14 == 0) {
          lVar14 = 1;
        }
        uVar7 = FUN_005d04d0(&local_b8,lVar14,1);
      }
      else {
        uVar7 = FUN_005d04d0(&local_b8,local_78 + uStack_a0,1);
      }
      goto joined_r0x005e7728;
    }
    goto LAB_005e6f80;
  default:
    goto switchD_005e6da8_caseD_7;
  case 8:
    local_c8 = 0;
    local_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = (long *)0x0;
    local_e0 = (char *)0x0;
    lVar14 = FUN_005bc740();
    if (lVar14 == 0) {
      local_e8 = (long *)FUN_005bc6f0();
    }
    else {
      local_e8 = (long *)FUN_005bc740();
    }
    local_e0 = "SiGfx_NX_Special.mi_shader_pkg";
    local_d8 = 0x1e;
    goto LAB_005e6f28;
  }
  local_d8 = 0x27;
LAB_005e6f28:
  local_c8 = 0;
  local_c0 = 1;
  uVar7 = FUN_005d04d0(&local_b8,1,1);
joined_r0x005e7728:
  if ((uVar7 & 1) == 0) {
    local_a8 = 0;
    local_88 = (long *)0x0;
    plStack_80 = (long *)0x0;
  }
  else {
LAB_005e6f80:
    FUN_005c80d0(local_90 + local_a8 * 6,&local_e8);
    local_a8 = local_a8 + 1;
    plStack_80 = local_90 + local_a8 * 6;
    local_88 = local_90;
  }
  if ((local_c0 & 1) == 0) {
    if ((local_e0 != (char *)0x0) && (local_e8 != (long *)0x0)) {
      (**(code **)(*local_e8 + 0x48))
                (local_e8,local_e0,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
    local_e0 = (char *)0x0;
    puVar2 = PTR_DAT_02713e78;
  }
  else {
switchD_005e6da8_caseD_7:
    puVar2 = PTR_DAT_02713e78;
  }
  uVar6 = 1;
  PTR_DAT_02713e78 = puVar2;
  if (local_a8 != 0) {
    uVar6 = 1;
    if (0 < (int)local_a8) {
      lVar14 = 0;
      do {
        local_e8 = (long *)param_1[1];
        local_e0 = (char *)0x0;
        local_c8 = 0;
        local_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        if (local_e8 == (long *)0x0) {
          lVar4 = FUN_005bc740();
          if (lVar4 == 0) {
            local_e8 = (long *)FUN_005bc6f0();
          }
          else {
            local_e8 = (long *)FUN_005bc740();
          }
        }
        FUN_005c80d0(&local_e8,local_90 + lVar14 * 6);
        local_118 = (long *)param_1[1];
        local_110 = (undefined *)0x0;
        local_f8 = 0;
        local_f0 = 0;
        local_108 = 0;
        local_100 = 0;
        if (local_118 == (long *)0x0) {
          lVar4 = FUN_005bc740();
          if (lVar4 == 0) {
            local_118 = (long *)FUN_005bc6f0();
          }
          else {
            local_118 = (long *)FUN_005bc740();
          }
        }
        plVar5 = (long *)FUN_005cbff0();
        uVar6 = (**(code **)(*plVar5 + 0xd8))();
        FUN_005c80d0(&local_118,uVar6);
        uVar7 = local_108 + 1;
        if (local_f8 <= uVar7) {
          uVar7 = local_108 + 2;
          if (local_100 == 0) {
            if (uVar7 <= local_f8 * 2) {
              uVar7 = local_f8 * 2;
            }
          }
          else {
            uVar7 = local_100 + uVar7;
          }
          FUN_005c5e00(&local_118,uVar7,1);
          uVar7 = local_108 + 1;
        }
        sVar13 = local_d8;
        local_110[local_108] = 0x2f;
        local_108 = local_108 + 1;
        local_110[uVar7] = 0;
        if (local_d8 != 0) {
          uVar7 = local_108 + local_d8;
          if (local_f8 <= uVar7) {
            uVar7 = uVar7 + 1;
            if (local_100 == 0) {
              if (uVar7 <= local_f8 * 2) {
                uVar7 = local_f8 * 2;
              }
            }
            else {
              uVar7 = local_100 + uVar7;
            }
            FUN_005c5e00(&local_118,uVar7,1);
            uVar7 = local_108 + sVar13;
          }
          memcpy(local_110 + local_108,local_e0,sVar13);
          local_108 = local_108 + sVar13;
          local_110[uVar7] = 0;
        }
        puVar10 = puVar2;
        if (local_110 != (undefined *)0x0) {
          puVar10 = local_110;
        }
        uVar7 = FUN_00682e30(puVar10,1);
        if ((uVar7 & 1) == 0) {
          __src = (char *)FUN_005c9be0(7);
          if (__src == (char *)0x0) {
            iVar11 = 1;
          }
          else {
            local_148 = (long *)param_1[1];
            local_128 = 0;
            local_120 = 0;
            local_140 = (undefined *)0x0;
            local_138 = 0;
            local_130 = 0;
            if (local_148 == (long *)0x0) {
              lVar4 = FUN_005bc740();
              if (lVar4 == 0) {
                local_148 = (long *)FUN_005bc6f0();
              }
              else {
                local_148 = (long *)FUN_005bc740();
              }
            }
            FUN_005c47b0(&local_148,"%SISDK_V3%/SDK/Core/Shader/Bin");
            uVar7 = local_138 + 1;
            if (local_128 <= uVar7) {
              uVar7 = local_138 + 2;
              if (local_130 == 0) {
                if (uVar7 <= local_128 * 2) {
                  uVar7 = local_128 * 2;
                }
              }
              else {
                uVar7 = local_130 + uVar7;
              }
              FUN_005c5e00(&local_148,uVar7,1);
              uVar7 = local_138 + 1;
            }
            local_140[local_138] = 0x2f;
            local_138 = local_138 + 1;
            local_140[uVar7] = 0;
            if (*__src != '\0') {
              sVar13 = 0;
              do {
                __n = sVar13 + 1;
                lVar4 = sVar13 + 1;
                sVar13 = __n;
              } while (__src[lVar4] != '\0');
              uVar7 = local_138 + __n;
              if (local_128 <= uVar7) {
                if (local_130 == 0) {
                  uVar9 = uVar7 + 1;
                  if (uVar7 + 1 <= local_128 * 2) {
                    uVar9 = local_128 * 2;
                  }
                }
                else {
                  uVar9 = local_130 + local_138 + __n + 1;
                }
                FUN_005c5e00(&local_148,uVar9,1);
                uVar7 = local_138 + __n;
              }
              memcpy(local_140 + local_138,__src,__n);
              local_138 = local_138 + __n;
              local_140[uVar7] = 0;
            }
            uVar7 = local_138 + 1;
            if (local_128 <= uVar7) {
              uVar7 = local_138 + 2;
              if (local_130 == 0) {
                if (uVar7 <= local_128 * 2) {
                  uVar7 = local_128 * 2;
                }
              }
              else {
                uVar7 = local_130 + uVar7;
              }
              FUN_005c5e00(&local_148,uVar7,1);
              uVar7 = local_138 + 1;
            }
            sVar13 = local_d8;
            local_140[local_138] = 0x2f;
            local_138 = local_138 + 1;
            local_140[uVar7] = 0;
            if (local_d8 != 0) {
              uVar7 = local_138 + local_d8;
              if (local_128 <= uVar7) {
                uVar7 = uVar7 + 1;
                if (local_130 == 0) {
                  if (uVar7 <= local_128 * 2) {
                    uVar7 = local_128 * 2;
                  }
                }
                else {
                  uVar7 = local_130 + uVar7;
                }
                FUN_005c5e00(&local_148,uVar7,1);
                uVar7 = local_138 + sVar13;
              }
              memcpy(local_140 + local_138,local_e0,sVar13);
              local_138 = local_138 + sVar13;
              local_140[uVar7] = 0;
            }
            thunk_FUN_005c9580(&local_148);
            FUN_005ca160(&local_148,&DAT_01cf5f85,&DAT_01cdd9ff,0,0,1);
            puVar10 = puVar2;
            if (local_140 != (undefined *)0x0) {
              puVar10 = local_140;
            }
            uVar7 = FUN_00682e30(puVar10,1);
            iVar11 = 5;
            if ((uVar7 & 1) != 0) {
              FUN_005c80d0(&local_118,&local_148);
              iVar11 = 0;
            }
            if ((local_120 & 1) == 0) {
              if ((local_140 != (undefined *)0x0) && (local_148 != (long *)0x0)) {
                (**(code **)(*local_148 + 0x48))
                          (local_148,local_140,"../../../../Include\\SiCore/SiCore_String.inl",0xe1)
                ;
              }
              local_140 = (undefined *)0x0;
            }
            if (iVar11 == 0) goto LAB_005e72b8;
          }
        }
        else {
LAB_005e72b8:
          FUN_005e44b0(&local_148,&local_118,0);
          puVar10 = puVar2;
          if (local_140 != (undefined *)0x0) {
            puVar10 = local_140;
          }
          lVar4 = (**(code **)(*param_1 + 0x40))(param_1,puVar10);
          iVar11 = 5;
          if (lVar4 == 0) {
            puVar10 = puVar2;
            if (local_140 != (undefined *)0x0) {
              puVar10 = local_140;
            }
            puVar1 = puVar2;
            if (local_110 != (undefined *)0x0) {
              puVar1 = local_110;
            }
            uVar7 = (**(code **)(*param_1 + 0x28))(param_1,puVar10,puVar1);
            iVar11 = 5;
            if ((uVar7 & 1) != 0) {
              puVar10 = puVar2;
              if (local_140 != (undefined *)0x0) {
                puVar10 = local_140;
              }
              (**(code **)(*param_1 + 0x40))(param_1,puVar10);
              iVar11 = 0;
            }
          }
          if ((local_120 & 1) == 0) {
            if ((local_140 != (undefined *)0x0) && (local_148 != (long *)0x0)) {
              (**(code **)(*local_148 + 0x48))
                        (local_148,local_140,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
            }
            local_140 = (undefined *)0x0;
          }
        }
        if ((local_f0 & 1) == 0) {
          if ((local_110 != (undefined *)0x0) && (local_118 != (long *)0x0)) {
            (**(code **)(*local_118 + 0x48))
                      (local_118,local_110,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
          }
          local_110 = (undefined *)0x0;
        }
        puVar10 = PTR_DAT_02713f98;
        if ((local_c0 & 1) == 0) {
          if ((local_e0 != (char *)0x0) && (local_e8 != (long *)0x0)) {
            (**(code **)(*local_e8 + 0x48))
                      (local_e8,local_e0,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
          }
          local_e0 = (char *)0x0;
          puVar10 = PTR_DAT_02713f98;
        }
        PTR_DAT_02713f98 = puVar10;
        if ((iVar11 != 5) && (iVar11 != 0)) {
          uVar6 = 0;
          goto LAB_005e763c;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < (int)local_a8);
      uVar6 = 1;
    }
  }
LAB_005e763c:
  plVar3 = local_90;
  plVar5 = local_b0;
  local_b8 = puVar10 + 0x10;
  if ((((local_70 & 1) == 0) && (local_90 != (long *)0x0)) && (local_b0 != (long *)0x0)) {
    lVar14 = (**(code **)(*local_b0 + 0x50))(local_b0,local_90);
    if (lVar14 != 0) {
      plVar12 = plVar3;
      do {
        if ((*(byte *)(plVar12 + 5) & 1) == 0) {
          if (plVar12[1] != 0) {
            plVar8 = (long *)*plVar12;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x48))
                        (plVar8,plVar12[1],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
            }
            plVar12[1] = 0;
          }
          plVar12[1] = 0;
        }
        plVar12 = plVar12 + 6;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    (**(code **)(*plVar5 + 0x48))(plVar5,plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
  }
  return uVar6;
}


