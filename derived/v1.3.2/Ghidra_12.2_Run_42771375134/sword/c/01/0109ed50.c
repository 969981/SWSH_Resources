/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109ed50; name: FUN_0109ed50
 */


void FUN_0109ed50(long param_1)

{
  char *param3;
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  byte *pbVar7;
  float fVar8;
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  if (*(char *)(param_1 + 0x15c) != '\0') {
    iVar2 = *(int *)(param_1 + 0x14c);
    if ((*(int *)(param_1 + 0x158) == iVar2) &&
       (*(int *)(param_1 + 0x150) == *(int *)(param_1 + 0x148))) {
      *(undefined1 *)(param_1 + 0x15c) = 0;
      *(undefined4 *)(param_1 + 0x160) = 0;
    }
    else if (*(int *)(param_1 + 0x17c) == 1) {
      uVar3 = *(uint *)(param_1 + 0x16c);
      uVar4 = (ulong)uVar3;
      if (*(int *)(param_1 + 0x178) + 1U <= uVar3) {
        uVar3 = *(int *)(param_1 + 0x178) + 1;
      }
      fVar8 = (float)uVar3 / (float)uVar4;
      *(uint *)(param_1 + 0x178) = uVar3;
      if (1.0 <= fVar8) {
        uVar3 = *(uint *)(param_1 + 0x174);
        uVar4 = 0xcbf29ce484222645;
        if (uVar3 == 100) {
          FUN_0109e790(param_1,iVar2 + 1);
          local_78 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          local_c0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          if (*(char *)(param_1 + 0xc4) == '\0') {
            snprintf((char *)&local_d8,100,"anime_%s","gauge_scale");
          }
          else {
            snprintf((char *)&local_d8,100,"anime_%s_%s",(char *)(param_1 + 0xc4),"gauge_scale");
          }
          if ((byte)local_d8 != 0) {
            pbVar7 = (byte *)((ulong)&local_d8 | 1);
            do {
              uVar4 = (uVar4 ^ (byte)local_d8) * 0x100000001b3;
              local_d8._0_1_ = *pbVar7;
              pbVar7 = pbVar7 + 1;
            } while ((byte)local_d8 != 0);
          }
          local_d8 = uVar4;
          FUN_00ffd510(DAT_01d4c6b8,*(long *)(param_1 + 0x138) + 0x100,&local_d8);
          *(undefined4 *)(param_1 + 0x148) = 0;
          FUN_0109eb80(param_1,1);
          if (*(char *)(param_1 + 0x168) != '\0') {
            local_f0 = 0x59af50e7612d9237;
            local_e8 = "Play_UI_common_lv_gauge_full";
            local_e0 = 0x1c;
            FUN_006cf0a0(&local_d8,&local_f0);
            FUN_016d3620(&local_d8);
            if (local_c0 != 0) {
              (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
              local_c0 = 0;
            }
            if ((*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x14c)) ||
               (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x148))) {
              local_f0 = 0x322294e5e903cc3;
              local_e8 = "Play_UI_common_lv_gauge_up";
              local_e0 = 0x1a;
              FUN_006cf0a0(&local_d8,&local_f0);
              FUN_016d3620(&local_d8);
              if (local_c0 != 0) {
                (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
              }
            }
          }
          *(undefined4 *)(param_1 + 0x17c) = 0;
          *(undefined4 *)(param_1 + 0x164) = 0x40d00000;
          return;
        }
        local_78 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        if (*(char *)(param_1 + 0xc4) == '\0') {
          snprintf((char *)&local_d8,100,"anime_%s","gauge_scale");
        }
        else {
          snprintf((char *)&local_d8,100,"anime_%s_%s",(char *)(param_1 + 0xc4),"gauge_scale");
        }
        if ((byte)local_d8 != 0) {
          pbVar7 = (byte *)((ulong)&local_d8 | 1);
          do {
            uVar4 = (uVar4 ^ (byte)local_d8) * 0x100000001b3;
            local_d8._0_1_ = *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while ((byte)local_d8 != 0);
        }
        lVar5 = *(long *)(param_1 + 0x138);
        local_d8 = uVar4;
      }
      else {
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        uVar3 = (uint)(fVar8 * fVar8 * (float)(*(int *)(param_1 + 0x174) -
                                              *(uint *)(param_1 + 0x170)) +
                      (float)*(uint *)(param_1 + 0x170));
        if (99 < uVar3) {
          uVar3 = 100;
        }
        if (*(char *)(param_1 + 0xc4) == '\0') {
          snprintf((char *)&local_d8,100,"anime_%s","gauge_scale");
        }
        else {
          snprintf((char *)&local_d8,100,"anime_%s_%s",(char *)(param_1 + 0xc4),"gauge_scale");
        }
        uVar4 = 0xcbf29ce484222645;
        if ((byte)local_d8 != 0) {
          pbVar7 = (byte *)((ulong)&local_d8 | 1);
          do {
            uVar4 = (uVar4 ^ (byte)local_d8) * 0x100000001b3;
            local_d8._0_1_ = *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while ((byte)local_d8 != 0);
        }
        lVar5 = *(long *)(param_1 + 0x138);
        local_d8 = uVar4;
      }
      FUN_00ffd510((float)(100 - uVar3),lVar5 + 0x100,&local_d8);
      *(uint *)(param_1 + 0x148) = uVar3;
    }
    else if (*(int *)(param_1 + 0x17c) == 0) {
      fVar8 = *(float *)(param_1 + 0x164) + *(float *)(param_1 + 0x160);
      *(float *)(param_1 + 0x160) = fVar8;
      if (1.0 <= fVar8) {
        param3 = (char *)(param_1 + 0xc4);
        if (*(int *)(param_1 + 0x158) == iVar2) goto LAB_0109ee38;
        do {
          iVar6 = *(int *)(param_1 + 0x148);
          while( true ) {
            uVar3 = iVar6 + 1;
            *(float *)(param_1 + 0x160) = fVar8 + -1.0;
            if (uVar3 < 100) {
              local_78 = 0;
              local_88 = 0;
              uStack_80 = 0;
              local_98 = 0;
              uStack_90 = 0;
              uVar3 = (uVar3 & 0xff) % 100;
              local_a8 = 0;
              uStack_a0 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_c8 = 0;
              local_c0 = 0;
              local_d8 = 0;
              uStack_d0 = 0;
              if (*param3 == '\0') {
                snprintf((char *)&local_d8,100,"anime_%s","gauge_scale");
                bVar1 = (byte)local_d8;
              }
              else {
                snprintf((char *)&local_d8,100,"anime_%s_%s",param3,"gauge_scale");
                bVar1 = (byte)local_d8;
              }
              local_d8 = 0xcbf29ce484222645;
              if (bVar1 != 0) {
                local_d8 = 0xcbf29ce484222645;
                pbVar7 = (byte *)((ulong)&local_d8 | 1);
                do {
                  local_d8 = (local_d8 ^ bVar1) * 0x100000001b3;
                  bVar1 = *pbVar7;
                  pbVar7 = pbVar7 + 1;
                } while (bVar1 != 0);
              }
              FUN_00ffd510((float)(100 - uVar3),*(long *)(param_1 + 0x138) + 0x100,&local_d8);
              *(uint *)(param_1 + 0x148) = uVar3;
              fVar8 = *(float *)(param_1 + 0x160);
            }
            else {
              FUN_0109e790(param_1,iVar2 + 1);
              FUN_0109eb80(param_1,1);
              local_78 = 0;
              local_88 = 0;
              uStack_80 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_c8 = 0;
              local_c0 = 0;
              local_d8 = 0;
              uStack_d0 = 0;
              if (*(char *)(param_1 + 0xc4) == '\0') {
                snprintf((char *)&local_d8,100,"anime_%s","gauge_scale");
                bVar1 = (byte)local_d8;
              }
              else {
                snprintf((char *)&local_d8,100,"anime_%s_%s",param3,"gauge_scale");
                bVar1 = (byte)local_d8;
              }
              local_d8 = 0xcbf29ce484222645;
              if (bVar1 != 0) {
                local_d8 = 0xcbf29ce484222645;
                pbVar7 = (byte *)((ulong)&local_d8 | 1);
                do {
                  local_d8 = (local_d8 ^ bVar1) * 0x100000001b3;
                  bVar1 = *pbVar7;
                  pbVar7 = pbVar7 + 1;
                } while (bVar1 != 0);
              }
              FUN_00ffd510((float)(100 - uVar3 % 100),*(long *)(param_1 + 0x138) + 0x100,&local_d8);
              *(uint *)(param_1 + 0x148) = uVar3 % 100;
              if (*(char *)(param_1 + 0x168) != '\0') {
                local_f0 = 0x59af50e7612d9237;
                local_e8 = "Play_UI_common_lv_gauge_full";
                local_e0 = 0x1c;
                FUN_006cf0a0(&local_d8,&local_f0);
                FUN_016d3620(&local_d8);
                if (local_c0 != 0) {
                  (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
                  local_c0 = 0;
                }
                if ((*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x14c)) ||
                   (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x148))) {
                  local_f0 = 0x322294e5e903cc3;
                  local_e8 = "Play_UI_common_lv_gauge_up";
                  local_e0 = 0x1a;
                  FUN_006cf0a0(&local_d8,&local_f0);
                  FUN_016d3620(&local_d8);
                  if (local_c0 != 0) {
                    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
                    local_c0 = 0;
                  }
                }
              }
              fVar8 = *(float *)(param_1 + 0x160);
            }
            if (fVar8 < 1.0) {
              return;
            }
            iVar2 = *(int *)(param_1 + 0x14c);
            if (*(int *)(param_1 + 0x158) != iVar2) break;
LAB_0109ee38:
            iVar6 = *(int *)(param_1 + 0x148);
            if (*(int *)(param_1 + 0x150) == iVar6) {
              return;
            }
          }
        } while( true );
      }
    }
  }
  return;
}


