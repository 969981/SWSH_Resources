/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad3610; name: FUN_00ad3610
 */


void FUN_00ad3610(long *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long local_220;
  long local_218;
  long local_210;
  char *local_208;
  undefined8 local_200;
  long local_1f8;
  undefined8 local_1f0;
  char *pcStack_1e8;
  undefined8 local_1e0;
  long local_1d8;
  undefined8 local_1d0;
  char *local_1c8;
  undefined8 uStack_1c0;
  long local_1b8;
  undefined8 uStack_1b0;
  char *local_1a8;
  undefined8 uStack_1a0;
  long local_198;
  undefined8 uStack_190;
  char *local_188;
  undefined8 local_180;
  long local_178;
  undefined8 local_170;
  char *pcStack_168;
  undefined8 local_160;
  long local_158;
  undefined8 local_150;
  char *local_148;
  undefined8 uStack_140;
  long local_138;
  undefined8 uStack_130;
  char *local_128;
  undefined8 uStack_120;
  long local_118;
  undefined8 uStack_110;
  char *local_108;
  undefined8 uStack_100;
  long local_f8;
  undefined8 uStack_f0;
  char *local_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined8 uStack_d0;
  char *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 uStack_90;
  char *local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 uStack_70;
  char *local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 uStack_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  uVar6 = (**(code **)(*param_1 + 400))();
  if ((uVar6 & 1) != 0) {
    local_210 = 0x4c089346dbb23ff6;
    local_208 = "land_param";
    local_200 = 10;
    local_1f8 = 0;
    local_38 = 0;
    local_1f0 = 0x4e2373f16172decd;
    pcStack_1e8 = "to_ba10_waitA01";
    local_1d0 = 0x450d36f15c2e779c;
    local_1c8 = "to_ba10_waitB01";
    uStack_1c0 = 0xf;
    local_1b8 = 0;
    uStack_1b0 = 0x3bf69df156e97417;
    local_1e0 = 0xf;
    local_1d8 = 0;
    local_1a8 = "to_ba10_waitC01";
    uStack_1a0 = 0xf;
    local_170 = 0xa512b990fa78b33e;
    pcStack_168 = "to_ba20_buturi02";
    local_198 = 0;
    uStack_190 = 0xa512b890fa78b18b;
    local_188 = "to_ba20_buturi01";
    local_150 = 0xa512ba90fa78b4f1;
    local_148 = "to_ba20_buturi03";
    uStack_140 = 0x10;
    local_138 = 0;
    uStack_130 = 0xa512bb90fa78b6a4;
    local_180 = 0x10;
    local_178 = 0;
    local_160 = 0x10;
    local_158 = 0;
    local_128 = "to_ba20_buturi04";
    uStack_120 = 0x10;
    local_118 = 0;
    uStack_110 = 0x348d6009bf5aa49;
    local_108 = "to_ba21_tokusyu01";
    uStack_100 = 0x11;
    local_f8 = 0;
    uStack_f0 = 0x348d3009bf5a530;
    local_e8 = "to_ba21_tokusyu02";
    uStack_e0 = 0x11;
    local_d8 = 0;
    uStack_d0 = 0x348d4009bf5a6e3;
    local_b8 = 0;
    uStack_b0 = 0x348d9009bf5af62;
    local_a8 = "to_ba21_tokusyu04";
    uStack_a0 = 0x11;
    local_98 = 0;
    uStack_90 = 0xf675995d428af405;
    local_c8 = "to_ba21_tokusyu03";
    uStack_c0 = 0x11;
    local_88 = "to_ba30_damageS01";
    uStack_80 = 0x11;
    local_78 = 0;
    uStack_70 = 0x99ccfe87e08f503f;
    local_68 = "to_ba41_down01";
    uStack_60 = 0xe;
    local_58 = 0;
    uStack_50 = 0xca14f31f02885dc1;
    local_48 = "to_ba02_megaappeal01";
    local_40 = 0x14;
    *(int *)((long)param_1 + 0x4e4) = param_2;
    if (param_2 != 0xf) {
      lVar11 = *(long *)(param_1[0x78] + 0x528);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      local_220 = param_1[0xa2];
      if (local_220 != 0) {
        (**(code **)(*(long *)(local_220 + 0x48) + 0x10))();
      }
      FUN_00c7a630(&local_218,lVar11,&local_220);
      if (local_220 != 0) {
        (**(code **)(*(long *)(local_220 + 0x48) + 0x18))();
        local_220 = 0;
      }
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      lVar11 = local_218;
      puVar4 = PTR_DAT_02719750;
      if ((local_218 == 0) || (*(int *)(local_218 + 0x54) == 0)) {
LAB_00ad39ac:
        lVar12 = 0;
      }
      else {
        piVar1 = (int *)(local_218 + 0x54);
        puVar8 = PTR_DAT_02719758;
        iVar9 = *(int *)(local_218 + 0x54);
        do {
          while( true ) {
            plVar10 = *(long **)(lVar11 + 0x58);
            if ((*puVar4 & 1) == 0) {
              iVar5 = __cxa_guard_acquire(puVar4);
              puVar8 = PTR_DAT_02719758;
              if (iVar5 != 0) {
                uVar7 = FUN_00706e40();
                *(undefined8 *)PTR_DAT_02719758 = uVar7;
                __cxa_guard_release(puVar4);
                puVar8 = PTR_DAT_02719758;
              }
            }
            while( true ) {
              if (plVar10 == (long *)0x0) goto LAB_00ad39ac;
              if (plVar10 == (long *)puVar8) break;
              plVar10 = (long *)*plVar10;
            }
            iVar5 = *piVar1;
            if (iVar5 != iVar9) break;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar11 = *(long *)(lVar11 + 0x60);
              lVar12 = 0;
              if (lVar11 != 0) {
                lVar12 = lVar11 + -0x50;
              }
              goto LAB_00ad39b0;
            }
            lVar12 = 0;
            iVar9 = iVar5;
            if (iVar5 == 0) goto LAB_00ad39b0;
          }
          ClearExclusiveLocal();
          lVar12 = 0;
          iVar9 = iVar5;
        } while (iVar5 != 0);
      }
LAB_00ad39b0:
      FUN_00c697f0(lVar12,&local_210 + (long)param_2 * 4);
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      }
      if (param_2 != 1) {
        *(undefined1 *)((long)param_1 + 0x4ec) = 1;
      }
      FUN_00acda00(param_1);
      if (local_218 != 0) {
        (**(code **)(*(long *)(local_218 + 0x48) + 0x18))();
        local_218 = 0;
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      local_98 = 0;
    }
    if (local_b8 != 0) {
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
      local_b8 = 0;
    }
    if (local_d8 != 0) {
      (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
      local_d8 = 0;
    }
    if (local_f8 != 0) {
      (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
      local_f8 = 0;
    }
    if (local_118 != 0) {
      (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
      local_118 = 0;
    }
    if (local_138 != 0) {
      (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
      local_138 = 0;
    }
    if (local_158 != 0) {
      (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
      local_158 = 0;
    }
    if (local_178 != 0) {
      (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
      local_178 = 0;
    }
    if (local_198 != 0) {
      (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
      local_198 = 0;
    }
    if (local_1b8 != 0) {
      (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
      local_1b8 = 0;
    }
    if (local_1d8 != 0) {
      (**(code **)(*(long *)(local_1d8 + 0x48) + 0x18))();
      local_1d8 = 0;
    }
    if (local_1f8 != 0) {
      (**(code **)(*(long *)(local_1f8 + 0x48) + 0x18))();
    }
  }
  return;
}


