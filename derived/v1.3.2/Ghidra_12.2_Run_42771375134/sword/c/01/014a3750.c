/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a3750; name: FUN_014a3750
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014a3750(long param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  char *pcVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  long local_1e0;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined *local_190;
  char *pcStack_188;
  long local_180;
  code *local_178;
  long local_170;
  code *local_168;
  undefined1 auStack_160 [96];
  long local_100;
  code *local_f8;
  long local_f0;
  code *local_e8;
  undefined1 auStack_e0 [96];
  long local_80;
  long lStack_78;
  
  puVar4 = PTR_DAT_02715080;
  puVar10 = PTR_DAT_02715078;
  lVar15 = *(long *)(param_1 + 0x68);
  if ((lVar15 == 0) || (*(int *)(lVar15 + 0x54) == 0)) {
LAB_014a3820:
    lVar8 = 0;
  }
  else {
    piVar1 = (int *)(lVar15 + 0x54);
    iVar14 = *(int *)(lVar15 + 0x54);
    do {
      while( true ) {
        plVar21 = *(long **)(lVar15 + 0x58);
        if (((*puVar10 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar10), iVar7 != 0)) {
          uVar9 = FUN_00a87090();
          *(undefined8 *)puVar4 = uVar9;
          __cxa_guard_release(puVar10);
        }
        while( true ) {
          if (plVar21 == (long *)0x0) goto LAB_014a3820;
          if (plVar21 == (long *)puVar4) break;
          plVar21 = (long *)*plVar21;
        }
        iVar7 = *piVar1;
        if (iVar7 != iVar14) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar8 = 0;
          if (*(long *)(lVar15 + 0x60) != 0) {
            lVar8 = *(long *)(lVar15 + 0x60) + -0x50;
          }
          goto LAB_014a3824;
        }
        lVar8 = 0;
        iVar14 = iVar7;
        if (iVar7 == 0) goto LAB_014a3824;
      }
      ClearExclusiveLocal();
      lVar8 = 0;
      iVar14 = iVar7;
    } while (iVar7 != 0);
  }
LAB_014a3824:
  lVar15 = FUN_007959b0(lVar8,&local_190);
  lVar16 = *(long *)(lVar15 + 0x108);
  if (*(long *)(lVar16 + 0x298) == *(long *)(lVar16 + 0x290)) {
    bVar3 = true;
  }
  else {
    bVar3 = true;
    uVar20 = 0;
    lVar18 = 8;
    lVar12 = 0x128;
    puVar10 = PTR_DAT_02710800 + 0x10;
    do {
      if ((ulong)((*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200) >> 4) * -0xf0f0f0f0f0f0f0f)
          <= uVar20) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      plVar21 = (long *)(*(long *)(param_1 + 200) + lVar18);
      lVar22 = *plVar21;
      if ((lVar22 == 0) || (*(char *)(lVar22 + 0x170) == '\0')) {
        bVar3 = false;
      }
      else {
        FUN_00729ec0(&local_190,plVar21 + -1,0,1);
        lVar22 = *(long *)(param_1 + 0x128) + lVar12;
        plVar21 = (long *)(lVar22 + -0x120);
        if (*plVar21 != 0) {
          (**(code **)(*(long *)(*plVar21 + 0x48) + 0x18))();
          *plVar21 = 0;
        }
        pcVar5 = pcStack_188;
        pcStack_188 = (char *)0x0;
        *plVar21 = (long)pcVar5;
        puVar17 = (undefined8 *)(lVar22 + -0x110);
        pcVar11 = (code *)*puVar17;
        if (pcVar11 != (code *)0x0) {
          *(undefined8 *)(lVar22 + -0x100) = 0;
          *(undefined8 *)(lVar22 + -0x108) = 0;
          *puVar17 = 0;
          *(undefined8 *)(lVar22 + -0x118) = 0;
          (*pcVar11)(lVar22 + -0xf8);
        }
        if (local_168 != (code *)0x0) {
          (*local_168)(auStack_160,lVar22 + -0xf8);
          pcVar11 = local_178;
          *(code **)(lVar22 + -0x100) = local_168;
          *(long *)(lVar22 + -0x108) = local_170;
          *puVar17 = local_178;
          *(long *)(lVar22 + -0x118) = local_180;
          if (local_178 != (code *)0x0) {
            local_170 = 0;
            local_168 = (code *)0x0;
            local_180 = 0;
            local_178 = (code *)0x0;
            (*pcVar11)(auStack_160);
          }
        }
        pcVar11 = *(code **)(lVar22 + -0x90);
        if (pcVar11 != (code *)0x0) {
          *(undefined8 *)(lVar22 + -0x88) = 0;
          *(undefined8 *)(lVar22 + -0x80) = 0;
          *(undefined8 *)(lVar22 + -0x98) = 0;
          *(undefined8 *)(lVar22 + -0x90) = 0;
          (*pcVar11)(lVar22 + -0x78);
        }
        if (local_e8 != (code *)0x0) {
          (*local_e8)(auStack_e0,lVar22 + -0x78);
          pcVar11 = local_f8;
          *(code **)(lVar22 + -0x80) = local_e8;
          *(long *)(lVar22 + -0x98) = local_100;
          *(code **)(lVar22 + -0x90) = local_f8;
          *(long *)(lVar22 + -0x88) = local_f0;
          if (local_f8 != (code *)0x0) {
            local_f0 = 0;
            local_e8 = (code *)0x0;
            local_100 = 0;
            local_f8 = (code *)0x0;
            (*pcVar11)(auStack_e0);
          }
        }
        *(long *)(lVar22 + -0x18) = local_80;
        *(long *)(lVar22 + -0x10) = lStack_78;
        local_190 = PTR_DAT_02710800 + 0x10;
        if (pcStack_188 == (char *)0x0) {
          pcStack_188 = (char *)0x0;
          pcVar11 = local_f8;
        }
        else {
          FUN_006e2100(pcStack_188,&local_190);
          pcVar5 = pcStack_188;
          pcStack_188 = (char *)0x0;
          pcVar11 = local_f8;
          if (pcVar5 != (char *)0x0) {
            (**(code **)(*(long *)((long)pcVar5 + 0x48) + 0x18))();
            pcVar11 = local_f8;
          }
        }
        local_f8 = pcVar11;
        if (pcVar11 != (code *)0x0) {
          local_f0 = 0;
          local_e8 = (code *)0x0;
          local_100 = 0;
          local_f8 = (code *)0x0;
          (*pcVar11)(auStack_e0);
        }
        pcVar11 = local_178;
        if (local_178 != (code *)0x0) {
          local_170 = 0;
          local_168 = (code *)0x0;
          local_180 = 0;
          local_178 = (code *)0x0;
          (*pcVar11)(auStack_160);
        }
        if (pcStack_188 != (char *)0x0) {
          (**(code **)(*(long *)(pcStack_188 + 0x48) + 0x18))();
          pcStack_188 = (char *)0x0;
        }
      }
      if ((ulong)((*(long *)(param_1 + 0x100) - *(long *)(param_1 + 0xf8) >> 4) * -0xf0f0f0f0f0f0f0f
                 ) <= uVar20) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      plVar21 = (long *)(*(long *)(param_1 + 0xf8) + lVar18);
      lVar22 = *plVar21;
      if ((lVar22 == 0) || (*(char *)(lVar22 + 0x170) == '\0')) {
        bVar3 = false;
      }
      else {
        FUN_00729ec0(&local_190,plVar21 + -1,0,0x10);
        lVar22 = *(long *)(param_1 + 0x128);
        if (*(long *)(lVar22 + lVar12) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar22 + lVar12) + 0x48) + 0x18))();
          *(undefined8 *)(lVar22 + lVar12) = 0;
        }
        pcVar5 = pcStack_188;
        pcStack_188 = (char *)0x0;
        plVar21 = (long *)(lVar22 + lVar12);
        *plVar21 = (long)pcVar5;
        pcVar11 = (code *)plVar21[2];
        if (pcVar11 != (code *)0x0) {
          plVar21[3] = 0;
          plVar21[4] = 0;
          plVar21[1] = 0;
          plVar21[2] = 0;
          (*pcVar11)(plVar21 + 5);
        }
        if (local_168 != (code *)0x0) {
          (*local_168)(auStack_160,plVar21 + 5);
          pcVar11 = local_178;
          plVar21[4] = (long)local_168;
          plVar21[1] = local_180;
          plVar21[2] = (long)local_178;
          plVar21[3] = local_170;
          if (local_178 != (code *)0x0) {
            local_170 = 0;
            local_168 = (code *)0x0;
            local_180 = 0;
            local_178 = (code *)0x0;
            (*pcVar11)(auStack_160);
          }
        }
        pcVar11 = (code *)plVar21[0x12];
        if (pcVar11 != (code *)0x0) {
          plVar21[0x13] = 0;
          plVar21[0x14] = 0;
          plVar21[0x11] = 0;
          plVar21[0x12] = 0;
          (*pcVar11)(plVar21 + 0x15);
        }
        if (local_e8 != (code *)0x0) {
          (*local_e8)(auStack_e0,plVar21 + 0x15);
          pcVar11 = local_f8;
          plVar21[0x14] = (long)local_e8;
          plVar21[0x11] = local_100;
          plVar21[0x12] = (long)local_f8;
          plVar21[0x13] = local_f0;
          if (local_f8 != (code *)0x0) {
            local_f0 = 0;
            local_e8 = (code *)0x0;
            local_100 = 0;
            local_f8 = (code *)0x0;
            (*pcVar11)(auStack_e0);
          }
        }
        plVar21[0x21] = local_80;
        plVar21[0x22] = lStack_78;
        local_190 = puVar10;
        if (pcStack_188 == (char *)0x0) {
          pcStack_188 = (char *)0x0;
          pcVar11 = local_f8;
        }
        else {
          FUN_006e2100(pcStack_188,&local_190);
          pcVar5 = pcStack_188;
          pcStack_188 = (char *)0x0;
          pcVar11 = local_f8;
          if (pcVar5 != (char *)0x0) {
            (**(code **)(*(long *)((long)pcVar5 + 0x48) + 0x18))();
            pcVar11 = local_f8;
          }
        }
        local_f8 = pcVar11;
        if (pcVar11 != (code *)0x0) {
          local_f0 = 0;
          local_e8 = (code *)0x0;
          local_100 = 0;
          local_f8 = (code *)0x0;
          (*pcVar11)(auStack_e0);
        }
        pcVar11 = local_178;
        if (local_178 != (code *)0x0) {
          local_170 = 0;
          local_168 = (code *)0x0;
          local_180 = 0;
          local_178 = (code *)0x0;
          (*pcVar11)(auStack_160);
        }
        if (pcStack_188 != (char *)0x0) {
          (**(code **)(*(long *)(pcStack_188 + 0x48) + 0x18))();
          pcStack_188 = (char *)0x0;
        }
      }
      uVar20 = uVar20 + 1;
      lVar18 = lVar18 + 0x110;
      lVar12 = lVar12 + 0x240;
    } while (uVar20 < (ulong)((*(long *)(lVar16 + 0x298) - *(long *)(lVar16 + 0x290) >> 6) *
                             -0x79435e50d79435e5));
  }
  uVar9 = FUN_00c754c0(lVar8,&local_190);
  lVar18 = *(long *)PTR_DAT_02710848;
  lVar16 = *(long *)(lVar18 + 0x70);
  if (lVar16 != 0) {
    plVar21 = (long *)(lVar16 + 0x48);
    (**(code **)(*plVar21 + 0x10))(plVar21);
    (**(code **)(*plVar21 + 0x18))(plVar21);
  }
  if (bVar3) {
    lVar12 = *(long *)(lVar15 + 800);
    iVar14 = (int)(*(long *)(lVar15 + 0x328) - lVar12 >> 3) * -0x3d70a3d7;
    if (0 < iVar14) {
      if (*(long *)(lVar15 + 0x328) != lVar12) {
        uVar20 = 0;
        do {
          lVar12 = lVar12 + uVar20 * 200;
          lVar22 = *(long *)(lVar15 + 0x368);
          lVar19 = *(long *)(lVar15 + 0x370);
          if (lVar22 == lVar19) {
LAB_014a3e08:
            lVar19 = lVar22;
          }
          else {
            lVar13 = *(long *)(param_1 + 0x128);
            do {
              if ((*(byte *)(lVar22 + 0x38) & 1) != 0) {
                FUN_0072f5b0(lVar22,lVar12,lVar13 + uVar20 * 0x240);
              }
              lVar22 = lVar22 + 0x48;
            } while (lVar19 != lVar22);
            lVar19 = *(long *)(lVar15 + 0x368);
            lVar22 = *(long *)(lVar15 + 0x370);
            if (lVar19 == lVar22) goto LAB_014a3e08;
            lVar13 = *(long *)(param_1 + 0x128);
            do {
              if ((*(byte *)(lVar19 + 0x38) & 1) != 0) {
                FUN_0072f5b0(lVar19,lVar12,lVar13 + (uVar20 << 1 | 1) * 0x120);
              }
              lVar19 = lVar19 + 0x48;
            } while (lVar22 != lVar19);
            lVar22 = *(long *)(lVar15 + 0x370);
            lVar19 = *(long *)(lVar15 + 0x368);
          }
          local_190 = (undefined *)0xd31471c07d96d705;
          pcStack_188 = "EffectTex";
          local_180 = 9;
          local_178 = (code *)0x0;
          if (lVar19 != lVar22) {
            uVar23 = *(undefined8 *)(lVar16 + 0xa20);
            do {
              if ((*(byte *)(lVar19 + 0x38) & 1) != 0) {
                FUN_0072f510(lVar19,lVar12,&local_190,uVar23,1);
              }
              lVar19 = lVar19 + 0x48;
            } while (lVar22 != lVar19);
            if (local_178 != (code *)0x0) {
              (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
              local_178 = (code *)0x0;
            }
          }
          uVar20 = uVar20 + 1;
          if ((long)iVar14 <= (long)uVar20) goto LAB_014a3ebc;
          lVar12 = *(long *)(lVar15 + 800);
        } while (uVar20 < (ulong)((*(long *)(lVar15 + 0x328) - lVar12 >> 3) * -0x70a3d70a3d70a3d7));
      }
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
LAB_014a3ebc:
    local_190 = (undefined *)0xd9eecea121f7cb8f;
    pcStack_188 = "gloop01";
    local_180 = 7;
    local_178 = (code *)0x0;
    FUN_01050390(uVar9,&local_190,0);
    if (local_178 != (code *)0x0) {
      (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
      local_178 = (code *)0x0;
    }
  }
  lVar15 = FUN_00ad95d0(&local_190,param_2);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x78) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(long *)(param_1 + 0x78) = lVar15;
  local_1a0 = 0;
  uStack_198 = 0;
  lVar15 = *(long *)(lVar18 + 0x60);
  if (lVar15 == 0) {
    uVar20 = FUN_0101cb00(0,&local_1a0);
  }
  else {
    plVar21 = (long *)(lVar15 + 0x48);
    (**(code **)(*plVar21 + 0x10))(plVar21);
    uVar20 = FUN_0101cb00(lVar15,&local_1a0);
    (**(code **)(*plVar21 + 0x18))(plVar21);
  }
  if ((uVar20 & 1) != 0) {
    local_1a8 = *(long *)(param_1 + 0x78);
    if (local_1a8 != 0) {
      (**(code **)(*(long *)(local_1a8 + 0x48) + 0x10))();
    }
    local_1b0 = lVar8;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    FUN_01025980(&local_1a8,&local_1b0,&local_1a0);
    if (local_1b0 != 0) {
      (**(code **)(*(long *)(local_1b0 + 0x48) + 0x18))();
      local_1b0 = 0;
    }
    if (local_1a8 != 0) {
      (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
      local_1a8 = 0;
    }
  }
  puVar10 = PTR_DAT_02715af8;
  iVar14 = *param_3;
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  if ((iVar14 == 0x382) && (*(char *)(lVar16 + 0xa40) != '\0')) {
    lVar15 = lVar16 + 0xa50;
  }
  else {
    lVar15 = lVar16 + 0x3c0;
  }
  pcStack_188 = *(char **)(lVar15 + 8);
  local_190 = PTR_DAT_02715af8 + 0x10;
  if (pcStack_188 != (char *)0x0) {
    (**(code **)(*(long *)((long)pcStack_188 + 0x48) + 0x10))();
  }
  local_170 = 0;
  local_168 = (code *)0x0;
  local_180 = 0;
  local_178 = (code *)0x0;
  if (*(code **)(lVar15 + 0x20) != (code *)0x0) {
    (**(code **)(lVar15 + 0x20))(lVar15 + 0x30,auStack_160);
    local_180 = *(undefined8 *)(lVar15 + 0x10);
    local_178 = *(code **)(lVar15 + 0x18);
    local_170 = *(undefined8 *)(lVar15 + 0x20);
    local_168 = *(code **)(lVar15 + 0x28);
  }
  local_f0 = 0;
  local_e8 = (code *)0x0;
  local_100 = 0;
  local_f8 = (code *)0x0;
  if (*(code **)(lVar15 + 0xa0) != (code *)0x0) {
    (**(code **)(lVar15 + 0xa0))(lVar15 + 0xb0,auStack_e0);
    local_100 = *(undefined8 *)(lVar15 + 0x90);
    local_f8 = *(code **)(lVar15 + 0x98);
    local_f0 = *(undefined8 *)(lVar15 + 0xa0);
    local_e8 = *(code **)(lVar15 + 0xa8);
  }
  local_190 = PTR_DAT_02715b00 + 0x10;
  lVar15 = FUN_014a4a30(uVar9,param_2,&local_190);
  plVar21 = (long *)(param_1 + 0x80);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  lVar18 = *plVar21;
  *plVar21 = lVar15;
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))();
  }
  local_190 = puVar10 + 0x10;
  if (pcStack_188 == (char *)0x0) {
    pcStack_188 = (char *)0x0;
    pcVar11 = local_f8;
  }
  else {
    FUN_006e2100(pcStack_188,&local_190);
    pcVar5 = pcStack_188;
    pcStack_188 = (char *)0x0;
    pcVar11 = local_f8;
    if (pcVar5 != (char *)0x0) {
      (**(code **)(*(long *)((long)pcVar5 + 0x48) + 0x18))();
      pcVar11 = local_f8;
    }
  }
  local_f8 = pcVar11;
  if (pcVar11 != (code *)0x0) {
    local_f0 = 0;
    local_e8 = (code *)0x0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar11)(auStack_e0);
  }
  pcVar11 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = 0;
    local_168 = (code *)0x0;
    local_180 = 0;
    local_178 = (code *)0x0;
    (*pcVar11)(auStack_160);
  }
  if (pcStack_188 != (char *)0x0) {
    (**(code **)(*(long *)((long)pcStack_188 + 0x48) + 0x18))();
  }
  pcStack_188 = *(char **)(*(long *)(param_1 + 0x270) + 0xb8);
  local_190 = *(undefined **)(*(long *)(param_1 + 0x270) + 0xb0);
  lVar15 = *(long *)(param_1 + 0x80);
  FUN_0075e340(lVar15 + 0xc0,&local_190);
  *(undefined1 *)(lVar15 + 0xf0) = 1;
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  puVar10 = (undefined *)FUN_014a9250(&local_190,param_2,plVar21);
  if (puVar10 != (undefined *)0x0) {
    (**(code **)(*(long *)(puVar10 + 0x48) + 0x10))();
  }
  local_190 = puVar10;
  FUN_006d9640(uVar9,&local_190);
  if (local_190 != (undefined *)0x0) {
    (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
    local_190 = (undefined *)0x0;
  }
  if (puVar10 != (undefined *)0x0) {
    (**(code **)(*(long *)(puVar10 + 0x48) + 0x10))();
  }
  lVar15 = *(long *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar10;
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))();
    puVar10 = *(undefined **)(param_1 + 0x88);
  }
  puVar4 = PTR_DAT_02715090;
  if ((iVar14 == 0x382) && (*(char *)(lVar16 + 0xa40) != '\0')) {
    lVar15 = lVar16 + 0xb60;
  }
  else {
    lVar15 = lVar16 + 0x4d0;
  }
  pcStack_188 = *(char **)(lVar15 + 8);
  local_190 = PTR_DAT_02715090 + 0x10;
  if (pcStack_188 != (char *)0x0) {
    (**(code **)(*(long *)((long)pcStack_188 + 0x48) + 0x10))();
  }
  local_170 = 0;
  local_168 = (code *)0x0;
  local_180 = 0;
  local_178 = (code *)0x0;
  if (*(code **)(lVar15 + 0x20) != (code *)0x0) {
    (**(code **)(lVar15 + 0x20))(lVar15 + 0x30,auStack_160);
    local_180 = *(undefined8 *)(lVar15 + 0x10);
    local_178 = *(code **)(lVar15 + 0x18);
    local_170 = *(undefined8 *)(lVar15 + 0x20);
    local_168 = *(code **)(lVar15 + 0x28);
  }
  local_f0 = 0;
  local_e8 = (code *)0x0;
  local_100 = 0;
  local_f8 = (code *)0x0;
  if (*(code **)(lVar15 + 0xa0) != (code *)0x0) {
    (**(code **)(lVar15 + 0xa0))(lVar15 + 0xb0,auStack_e0);
    local_100 = *(undefined8 *)(lVar15 + 0x90);
    local_f8 = *(code **)(lVar15 + 0x98);
    local_f0 = *(undefined8 *)(lVar15 + 0xa0);
    local_e8 = *(code **)(lVar15 + 0xa8);
  }
  local_190 = PTR_DAT_02715070 + 0x10;
  FUN_0069ae40(puVar10,param_2,&local_190,1);
  local_190 = puVar4 + 0x10;
  if (pcStack_188 == (char *)0x0) {
    pcStack_188 = (char *)0x0;
    pcVar11 = local_f8;
  }
  else {
    FUN_006e2100(pcStack_188,&local_190);
    pcVar5 = pcStack_188;
    pcStack_188 = (char *)0x0;
    pcVar11 = local_f8;
    if (pcVar5 != (char *)0x0) {
      (**(code **)(*(long *)((long)pcVar5 + 0x48) + 0x18))();
      pcVar11 = local_f8;
    }
  }
  local_f8 = pcVar11;
  if (pcVar11 != (code *)0x0) {
    local_f0 = 0;
    local_e8 = (code *)0x0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar11)(auStack_e0);
  }
  pcVar11 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = 0;
    local_168 = (code *)0x0;
    local_180 = 0;
    local_178 = (code *)0x0;
    (*pcVar11)(auStack_160);
  }
  if (pcStack_188 != (char *)0x0) {
    (**(code **)(*(long *)((long)pcStack_188 + 0x48) + 0x18))();
    pcStack_188 = (char *)0x0;
  }
  FUN_0069c550(DAT_01d4bec4,*(undefined8 *)(param_1 + 0x88));
  uVar23 = _UNK_01d4a138;
  uVar9 = _DAT_01d4a130;
  fVar24 = *(float *)(*(long *)(param_1 + 0x270) + 0xc0);
  lVar15 = *(long *)(param_1 + 0x78);
  *(undefined1 *)(lVar15 + 0xc0) = 1;
  fVar25 = (float)uVar9;
  fVar26 = (float)((ulong)uVar9 >> 0x20);
  fVar27 = (float)uVar23;
  fVar28 = (float)((ulong)uVar23 >> 0x20);
  *(ulong *)(lVar15 + 0xd8) = CONCAT44(fVar28 * fVar24,fVar27 * fVar24);
  *(ulong *)(lVar15 + 0xd0) = CONCAT44(fVar26 * fVar24,fVar25 * fVar24);
  lVar15 = FUN_00ad95d0(&local_190,param_2);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  *(long *)(param_1 + 0x98) = lVar15;
  local_1b8 = lVar15;
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))((long *)(lVar15 + 0x48));
  }
  local_1c0 = lVar8;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  FUN_01025980(&local_1b8,&local_1c0,&local_1a0);
  if (local_1c0 != 0) {
    (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
    local_1c0 = 0;
  }
  if (local_1b8 != 0) {
    (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
    local_1b8 = 0;
  }
  fVar24 = *(float *)(*(long *)(param_1 + 0x270) + 0xd0);
  lVar15 = *(long *)(param_1 + 0x98);
  *(undefined1 *)(lVar15 + 0xc0) = 1;
  *(ulong *)(lVar15 + 0xd8) = CONCAT44(fVar28 * fVar24,fVar27 * fVar24);
  *(ulong *)(lVar15 + 0xd0) = CONCAT44(fVar26 * fVar24,fVar25 * fVar24);
  lVar15 = *(long *)(param_1 + 0x98);
  puVar10 = (undefined *)FUN_014a9340(&local_190,*(undefined8 *)(lVar15 + 8));
  if (puVar10 != (undefined *)0x0) {
    (**(code **)(*(long *)(puVar10 + 0x48) + 0x10))();
  }
  local_190 = puVar10;
  FUN_006d9640(lVar15,&local_190);
  if (local_190 != (undefined *)0x0) {
    (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
    local_190 = (undefined *)0x0;
  }
  if (puVar10 != (undefined *)0x0) {
    (**(code **)(*(long *)(puVar10 + 0x48) + 0x10))();
  }
  lVar15 = *(long *)(param_1 + 0xa8);
  *(undefined **)(param_1 + 0xa8) = puVar10;
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))();
    puVar10 = *(undefined **)(param_1 + 0xa8);
  }
  FUN_00794370(puVar10,lVar16 + 0x5e0);
  FUN_00794670(*(undefined8 *)(param_1 + 0xa8));
  bVar6 = FUN_007946a0(*(undefined8 *)(param_1 + 0xa8),1);
  *(byte *)(param_1 + 0xc0) = bVar6 & 1;
  lVar15 = FUN_00ad95d0(&local_190,param_2);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(long *)(param_1 + 0x90) = lVar15;
  local_1c8 = lVar15;
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))((long *)(lVar15 + 0x48));
  }
  local_1d0 = lVar8;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  FUN_01025980(&local_1c8,&local_1d0,&local_1a0);
  if (local_1d0 != 0) {
    (**(code **)(*(long *)(local_1d0 + 0x48) + 0x18))();
    local_1d0 = 0;
  }
  if (local_1c8 != 0) {
    (**(code **)(*(long *)(local_1c8 + 0x48) + 0x18))();
    local_1c8 = 0;
  }
  fVar24 = *(float *)(*(long *)(param_1 + 0x270) + 0xcc);
  lVar15 = *(long *)(param_1 + 0x90);
  *(undefined1 *)(lVar15 + 0xc0) = 1;
  *(ulong *)(lVar15 + 0xd8) = CONCAT44(fVar28 * fVar24,fVar27 * fVar24);
  *(ulong *)(lVar15 + 0xd0) = CONCAT44(fVar26 * fVar24,fVar25 * fVar24);
  lVar15 = *(long *)(param_1 + 0x90);
  puVar10 = (undefined *)FUN_014a9340(&local_190,*(undefined8 *)(lVar15 + 8));
  if (puVar10 != (undefined *)0x0) {
    (**(code **)(*(long *)(puVar10 + 0x48) + 0x10))();
  }
  local_190 = puVar10;
  FUN_006d9640(lVar15,&local_190);
  if (local_190 != (undefined *)0x0) {
    (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
    local_190 = (undefined *)0x0;
  }
  if (puVar10 != (undefined *)0x0) {
    (**(code **)(*(long *)(puVar10 + 0x48) + 0x10))();
  }
  lVar15 = *(long *)(param_1 + 0xb0);
  *(undefined **)(param_1 + 0xb0) = puVar10;
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))();
    puVar10 = *(undefined **)(param_1 + 0xb0);
  }
  puVar4 = PTR_DAT_027164e0;
  if ((iVar14 == 0x382) && (*(char *)(lVar16 + 0xa40) != '\0')) {
    lVar15 = lVar16 + 0xc70;
  }
  else {
    lVar15 = lVar16 + 0x6f0;
  }
  pcStack_188 = *(char **)(lVar15 + 8);
  local_190 = PTR_DAT_027164e0 + 0x10;
  if (pcStack_188 != (char *)0x0) {
    (**(code **)(*(long *)((long)pcStack_188 + 0x48) + 0x10))();
  }
  local_170 = 0;
  local_168 = (code *)0x0;
  local_180 = 0;
  local_178 = (code *)0x0;
  if (*(code **)(lVar15 + 0x20) != (code *)0x0) {
    (**(code **)(lVar15 + 0x20))(lVar15 + 0x30,auStack_160);
    local_180 = *(undefined8 *)(lVar15 + 0x10);
    local_178 = *(code **)(lVar15 + 0x18);
    local_170 = *(undefined8 *)(lVar15 + 0x20);
    local_168 = *(code **)(lVar15 + 0x28);
  }
  local_f0 = 0;
  local_e8 = (code *)0x0;
  local_100 = 0;
  local_f8 = (code *)0x0;
  if (*(code **)(lVar15 + 0xa0) != (code *)0x0) {
    (**(code **)(lVar15 + 0xa0))(lVar15 + 0xb0,auStack_e0);
    local_100 = *(undefined8 *)(lVar15 + 0x90);
    local_f8 = *(code **)(lVar15 + 0x98);
    local_f0 = *(undefined8 *)(lVar15 + 0xa0);
    local_e8 = *(code **)(lVar15 + 0xa8);
  }
  local_190 = PTR_DAT_027164d8 + 0x10;
  FUN_00794370(puVar10,&local_190);
  local_190 = puVar4 + 0x10;
  if (pcStack_188 == (char *)0x0) {
    pcStack_188 = (char *)0x0;
    pcVar11 = local_f8;
  }
  else {
    FUN_006e2100(pcStack_188,&local_190);
    pcVar5 = pcStack_188;
    pcStack_188 = (char *)0x0;
    pcVar11 = local_f8;
    if (pcVar5 != (char *)0x0) {
      (**(code **)(*(long *)((long)pcVar5 + 0x48) + 0x18))();
      pcVar11 = local_f8;
    }
  }
  local_f8 = pcVar11;
  if (pcVar11 != (code *)0x0) {
    local_f0 = 0;
    local_e8 = (code *)0x0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar11)(auStack_e0);
  }
  pcVar11 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = 0;
    local_168 = (code *)0x0;
    local_180 = 0;
    local_178 = (code *)0x0;
    (*pcVar11)(auStack_160);
  }
  if (pcStack_188 != (char *)0x0) {
    (**(code **)(*(long *)((long)pcStack_188 + 0x48) + 0x18))();
    pcStack_188 = (char *)0x0;
  }
  FUN_00794670(*(undefined8 *)(param_1 + 0xb0));
  bVar6 = FUN_007946a0(*(undefined8 *)(param_1 + 0xb0),1);
  *(byte *)(param_1 + 0xc1) = bVar6 & 1;
  lVar15 = FUN_00ad95d0(&local_190,param_2);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  *(long *)(param_1 + 0xa0) = lVar15;
  local_1d8 = lVar15;
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))((long *)(lVar15 + 0x48));
  }
  local_1e0 = lVar8;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  FUN_01025980(&local_1d8,&local_1e0,&local_1a0);
  if (local_1e0 != 0) {
    (**(code **)(*(long *)(local_1e0 + 0x48) + 0x18))();
    local_1e0 = 0;
  }
  if (local_1d8 != 0) {
    (**(code **)(*(long *)(local_1d8 + 0x48) + 0x18))();
    local_1d8 = 0;
  }
  lVar15 = *(long *)(param_1 + 0xa0);
  puVar10 = (undefined *)FUN_014a9340(&local_190,*(undefined8 *)(lVar15 + 8));
  if (puVar10 != (undefined *)0x0) {
    (**(code **)(*(long *)(puVar10 + 0x48) + 0x10))();
  }
  local_190 = puVar10;
  FUN_006d9640(lVar15,&local_190);
  if (local_190 != (undefined *)0x0) {
    (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
    local_190 = (undefined *)0x0;
  }
  if (puVar10 != (undefined *)0x0) {
    (**(code **)(*(long *)(puVar10 + 0x48) + 0x10))();
  }
  lVar15 = *(long *)(param_1 + 0xb8);
  *(undefined **)(param_1 + 0xb8) = puVar10;
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))();
    puVar10 = *(undefined **)(param_1 + 0xb8);
  }
  FUN_00794370(puVar10,lVar16 + 0x800);
  bVar6 = FUN_007946a0(*(undefined8 *)(param_1 + 0xb8),1);
  *(byte *)(param_1 + 0xc2) = bVar6 & 1;
  *(undefined1 *)(param_1 + 0x75) = 0;
  if (*(long *)(param_1 + 0x288) == 0) {
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined1 *)(param_1 + 0x400) = 1;
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x288),param_1 + 0x280);
    lVar15 = *(long *)(param_1 + 0x288);
    *(undefined8 *)(param_1 + 0x288) = 0;
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))();
    }
    *(undefined1 *)(param_1 + 0x400) = 1;
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return;
}


