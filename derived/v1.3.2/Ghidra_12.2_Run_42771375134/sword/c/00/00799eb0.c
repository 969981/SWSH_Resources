/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00799eb0; name: FUN_00799eb0
 */


/* WARNING: Removing unreachable block (ram,0x0079a594) */

void FUN_00799eb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  long local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4;
  long local_1b0;
  undefined8 uStack_1a8;
  undefined1 *local_1a0;
  long local_198;
  long local_190;
  undefined8 uStack_188;
  undefined *local_180;
  long local_178;
  long local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  long local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [112];
  
  puVar6 = PTR_DAT_02710860;
  plVar13 = *(long **)(param_1 + 8);
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar9 + 0x80) < 0x10) {
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar13;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    lVar10 = (**(code **)(*plVar13 + 0x10))(plVar13,0x108,8);
    if (lVar10 == 0) {
      (**(code **)(*plVar13 + 0xb8))(plVar13);
    }
    FUN_00739060(lVar10,plVar13);
    *(long **)(lVar10 + 8) = plVar13;
    *(long *)(lVar10 + 0x10) = lVar10;
    *(undefined8 *)(lVar10 + 0x18) = 0x108;
    *(undefined8 *)(lVar10 + 0x20) = 8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x268) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x268) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x268) = 0;
    }
    *(long *)(param_1 + 0x268) = lVar10;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    local_180 = PTR_DAT_02710810 + 0x10;
    local_178 = 0;
    FUN_0010f770(&local_1b0,PTR_DAT_02710908,"shader/fog.bnsh",&DAT_01d38550);
    lVar9 = *(long *)PTR_DAT_02710788;
    lVar10 = *(long *)(lVar9 + 0x1e8);
    if (lVar10 == 0) {
      lVar10 = *(long *)(lVar9 + 8);
    }
    FUN_0010d7b0(&local_1d0,lVar9,0,&local_1b0,0,lVar10,0);
    if (local_178 != 0) {
      (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
    }
    local_178 = local_1d0;
    if (local_1d0 != 0) {
      plVar13 = (long *)(local_1d0 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      if ((local_170 != 0) || (local_f0 != 0)) {
        FUN_006e1e70(local_1d0,&local_180,1);
      }
      FUN_006e1be0(local_1d0);
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    if ((local_198 != 0) && (local_1b0 != 0)) {
      (**(code **)(*(long *)(local_1b0 + 0x48) + 0x18))();
    }
    local_1b0 = 0;
    uStack_1a8 = 0xcbf29ce484222645;
    local_1a0 = &DAT_01d38550;
    local_198 = 0;
    if (local_190 != 0) {
      (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
      local_190 = 0;
    }
    lVar9 = *(long *)(param_1 + 0x268);
    FUN_007299a0(&local_1b0,*(undefined8 *)(lVar9 + 8),1);
    FUN_00798040(lVar9,&local_180,&local_1b0);
    local_180 = PTR_DAT_02710800 + 0x10;
    if (local_178 == 0) {
      local_178 = 0;
      pcVar5 = local_e8;
    }
    else {
      FUN_006e2100(local_178,&local_180);
      lVar9 = local_178;
      local_178 = 0;
      pcVar5 = local_e8;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
        pcVar5 = local_e8;
      }
    }
    local_e8 = pcVar5;
    if (pcVar5 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar5)(auStack_d0);
    }
    pcVar5 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      local_168 = (code *)0x0;
      (*pcVar5)(&local_150);
    }
    if (local_178 != 0) {
      (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
      local_178 = 0;
    }
    local_1d0 = -0xfffffffe;
    local_1c8 = 0;
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b4 = 0;
    local_1c0 = 0xffffffff00000001;
    *(undefined4 *)(*(long *)(param_1 + 0x268) + 0xf8) = 3;
    puVar7 = PTR_DAT_027154f0;
    lVar10 = *(long *)(param_1 + 0x268);
    plVar13 = *(long **)(lVar10 + 8);
    uVar14 = *(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10);
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (*(ulong *)(lVar9 + 0x80) < 0x10) {
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar13;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      lVar11 = (**(code **)(*plVar13 + 0x10))(plVar13,0x1b0,8);
      if (lVar11 == 0) {
        (**(code **)(*plVar13 + 0xb8))(plVar13);
      }
      FUN_00721450(lVar11,&local_1d0,2,4,1,uVar14);
      *(long **)(lVar11 + 8) = plVar13;
      *(long *)(lVar11 + 0x10) = lVar11;
      *(undefined8 *)(lVar11 + 0x18) = 0x1b0;
      *(undefined8 *)(lVar11 + 0x20) = 8;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      if (*(long *)(lVar10 + 0xe8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar10 + 0xe8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar10 + 0xe8) = 0;
      }
      *(long *)(lVar10 + 0xe8) = lVar11;
      lVar10 = *(long *)(param_1 + 0x268);
      plVar13 = *(long **)(lVar10 + 8);
      uVar14 = *(undefined8 *)(*(long *)puVar7 + 0x10);
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
      if (*(ulong *)(lVar9 + 0x80) < 0x10) {
        *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar13;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        lVar11 = (**(code **)(*plVar13 + 0x10))(plVar13,0x140,8);
        if (lVar11 == 0) {
          (**(code **)(*plVar13 + 0xb8))(plVar13);
        }
        FUN_0071dad0(lVar11,6,uVar14);
        *(long **)(lVar11 + 8) = plVar13;
        *(long *)(lVar11 + 0x10) = lVar11;
        *(undefined8 *)(lVar11 + 0x18) = 0x140;
        *(undefined8 *)(lVar11 + 0x20) = 8;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
        }
        if (*(long *)(lVar10 + 0xf0) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar10 + 0xf0) + 0x48) + 0x18))();
          *(undefined8 *)(lVar10 + 0xf0) = 0;
        }
        *(long *)(lVar10 + 0xf0) = lVar11;
        lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x268) + 0xe8) + 0x98) + 0x58);
        puVar12 = (undefined8 *)thunk_FUN_0199c7e0(lVar9);
        *(undefined4 *)(puVar12 + 2) = 0;
        *puVar12 = 0xbf800000bf800000;
        puVar12[1] = 0;
        puVar12 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar9 + 0x68));
        *puVar12 = 0xbf8000003f800000;
        puVar12[1] = 0x3f80000000000000;
        *(undefined4 *)(puVar12 + 2) = 0;
        puVar12 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar9 + 0x68));
        *puVar12 = 0x3f800000bf800000;
        puVar12[1] = 0;
        *(undefined4 *)(puVar12 + 2) = 0x3f800000;
        puVar12 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar9 + 0x68));
        *puVar12 = 0x3f8000003f800000;
        puVar12[1] = 0x3f80000000000000;
        *(undefined4 *)(puVar12 + 2) = 0x3f800000;
        if (lVar9 != 0) {
          thunk_FUN_0199c800(lVar9);
        }
        lVar9 = *(long *)(*(long *)(param_1 + 0x268) + 0xf0) + 0x58;
        puVar12 = (undefined8 *)thunk_FUN_0199c7e0(lVar9);
        *puVar12 = 0x2000200010000;
        *(undefined4 *)(puVar12 + 1) = 0x30001;
        thunk_FUN_0199c800(lVar9);
        local_150 = 0;
        uStack_148 = 0;
        local_160 = 0;
        uStack_158 = 0;
        local_170 = 0;
        local_168 = (code *)0x0;
        local_180 = (undefined *)0x0;
        local_178 = 0;
        FUN_0199c0f0(&local_180);
        local_180 = (undefined *)((ulong)local_180 & 0xfffffffcffffffff);
        FUN_00739580(*(undefined8 *)(param_1 + 0x268),&local_180);
        local_1e0 = 0;
        uStack_1d8 = 0;
        local_1f0 = 0;
        uStack_1e8 = 0;
        FUN_0199c080(&local_1f0);
        bVar8 = (byte)local_1f0;
        local_190 = 0;
        uStack_188 = 0;
        local_1f0 = CONCAT26(local_1f0._6_2_,0x10000000000);
        uVar14 = local_1f0;
        local_1a0 = (undefined1 *)0x0;
        local_198 = 0;
        local_1f0._0_1_ = bVar8 | 1;
        local_1f0._5_3_ = SUB83(uVar14,5);
        local_1f0._0_5_ = CONCAT41(0x706,(byte)local_1f0);
        local_1b0 = 0;
        uStack_1a8 = 0;
        FUN_0199c0b0(&local_1b0);
        FUN_007395d0(*(undefined8 *)(param_1 + 0x268),&local_1b0,&local_1f0);
        lVar10 = *(long *)(param_1 + 0x268);
        uVar14 = *(undefined8 *)(param_1 + 0x138);
        uVar2 = *(undefined8 *)(param_1 + 0x140);
        uVar1 = *(undefined8 *)(param_1 + 0x148);
        lVar9 = *(long *)(param_1 + 0x150);
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        }
        *(undefined8 *)(lVar10 + 0x80) = uVar14;
        *(undefined8 *)(lVar10 + 0x88) = uVar2;
        *(undefined8 *)(lVar10 + 0x90) = uVar1;
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        }
        lVar11 = *(long *)(lVar10 + 0x98);
        *(long *)(lVar10 + 0x98) = lVar9;
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
        }
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
        }
        FUN_00701e00(param_2,param_1);
        FUN_00702020(param_2,*(undefined8 *)(param_1 + 0x268));
        lVar9 = *(long *)(*(long *)(param_1 + 0x268) + 0x70);
        do {
          lVar10 = lVar9;
          lVar9 = lVar10;
          if (*(long *)(lVar10 + 0x120) != 0) {
            lVar9 = *(long *)(lVar10 + 0x120);
          }
        } while (lVar9 != lVar10);
        if ((*(byte *)(lVar10 + 0x130) >> 6 & 1) != 0) {
          plVar13 = (long *)(lVar10 + 0x1e8);
          local_1f8 = param_1;
          if (((*(byte *)(lVar10 + 0x1f0) & 1) == 0) ||
             (lVar11 = *plVar13, lVar9 = nn::os::GetCurrentThread(), lVar9 != lVar11)) {
            lVar9 = nn::os::GetCurrentThread();
            do {
              if (*plVar13 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x1dc));
                  while (*plVar13 == 0) {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                    if (bVar4) {
                      *plVar13 = lVar9;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    if (cVar3 == '\0') goto LAB_0079a5b4;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = lVar9;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
LAB_0079a5b4:
            FUN_0079aad0(lVar10 + 0x168,&local_1f8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = 0;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x1dc));
          }
          else {
            FUN_0079aad0(lVar10 + 0x1a0,&local_1f8);
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


