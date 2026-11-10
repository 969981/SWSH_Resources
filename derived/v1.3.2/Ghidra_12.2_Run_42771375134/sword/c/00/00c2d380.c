/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c2d380; name: FUN_00c2d380
 */


ulong FUN_00c2d380(long *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 *local_530;
  long local_528;
  long local_520;
  long *local_518;
  ulong local_510;
  undefined1 auStack_508 [384];
  undefined8 local_388;
  char local_380 [20];
  char local_36c;
  undefined4 local_368;
  char local_364;
  long local_360;
  char local_358;
  undefined4 local_354;
  char local_350;
  undefined8 local_34c;
  char local_344;
  undefined4 local_340;
  char local_33c;
  long local_338;
  char local_330;
  undefined4 local_32c;
  char local_328;
  undefined8 local_324;
  char local_31c;
  undefined4 local_318;
  char local_314;
  long local_310;
  char local_308;
  undefined4 local_304;
  char local_300;
  undefined8 local_2fc;
  undefined8 local_2f4;
  undefined2 local_2ec;
  long local_2e8;
  long local_2e0 [35];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  char local_160 [8];
  undefined1 auStack_158 [280];
  
  uVar7 = *(ulong *)PTR_DAT_02718f20;
  if (uVar7 != 0) {
    if ((param_1[0xd] != 0) &&
       (puVar8 = *(undefined8 **)(param_1[0xd] + 0x60), puVar8 != (undefined8 *)0x0)) {
      plVar3 = (long *)(**(code **)*puVar8)(puVar8);
      lVar4 = FUN_00be66c0();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          FUN_00c1cf00(&local_510,puVar8 + -10);
          goto joined_r0x00c2d4d4;
        }
      }
    }
    FUN_00c1cf00(&local_510,0);
joined_r0x00c2d4d4:
    if (local_510 != 0) {
      puVar8 = *(undefined8 **)(local_510 + 0x60);
      if (puVar8 != (undefined8 *)0x0) {
        plVar3 = (long *)(**(code **)*puVar8)(puVar8);
        lVar4 = FUN_00bd9700();
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          if (plVar3 == (long *)lVar4) {
            plVar3 = puVar8 + -10;
            goto joined_r0x00c2d4e4;
          }
        }
      }
      plVar3 = (long *)0x0;
joined_r0x00c2d4e4:
      if (local_510 != 0) {
        (**(code **)(*(long *)(local_510 + 0x48) + 0x18))();
        local_510 = 0;
      }
      if ((plVar3 != (long *)0x0) &&
         ((**(code **)(*plVar3 + 0x50))(&local_2e8,plVar3), local_2e8 != 0)) {
        uVar5 = FUN_00bda0d0(plVar3);
        if ((uVar5 & 0xff) == 0) {
          bVar2 = false;
        }
        else {
          (**(code **)(*plVar3 + 0x48))(local_380,plVar3,*(undefined1 *)((long)param_1 + 0xac));
          if (local_380[0] == '\0') {
            uVar7 = 0x10;
          }
          else {
            puVar8 = (undefined8 *)((ulong)local_380 | 4);
            if ((char)param_1[0x16] == '\0') {
              uVar1 = *puVar8;
              *(undefined8 *)((long)param_1 + 0xbc) = puVar8[1];
              *(undefined8 *)((long)param_1 + 0xb4) = uVar1;
              *(undefined1 *)((long)param_1 + 0xc4) = 0;
              if (local_36c != '\0') {
                *(undefined4 *)(param_1 + 0x19) = local_368;
                *(undefined1 *)((long)param_1 + 0xcc) = 0;
                if (local_364 != '\0') {
                  param_1[0x1a] = local_360;
                  *(undefined1 *)((long)param_1 + 0xcc) = 1;
                }
                *(undefined1 *)((long)param_1 + 0xc4) = 1;
              }
              *(undefined1 *)(param_1 + 0x1b) = 0;
              if (local_358 != '\0') {
                *(undefined4 *)((long)param_1 + 0xdc) = local_354;
                *(undefined1 *)(param_1 + 0x1c) = 0;
                if (local_350 != '\0') {
                  *(undefined8 *)((long)param_1 + 0xe4) = local_34c;
                  *(undefined1 *)(param_1 + 0x1c) = 1;
                }
                *(undefined1 *)(param_1 + 0x1b) = 1;
              }
              *(undefined1 *)((long)param_1 + 0xec) = 0;
              if (local_344 != '\0') {
                *(undefined4 *)(param_1 + 0x1e) = local_340;
                *(undefined1 *)((long)param_1 + 0xf4) = 0;
                if (local_33c != '\0') {
                  param_1[0x1f] = local_338;
                  *(undefined1 *)((long)param_1 + 0xf4) = 1;
                }
                *(undefined1 *)((long)param_1 + 0xec) = 1;
              }
              *(undefined1 *)(param_1 + 0x20) = 0;
              if (local_330 != '\0') {
                *(undefined4 *)((long)param_1 + 0x104) = local_32c;
                *(undefined1 *)(param_1 + 0x21) = 0;
                if (local_328 != '\0') {
                  *(undefined8 *)((long)param_1 + 0x10c) = local_324;
                  *(undefined1 *)(param_1 + 0x21) = 1;
                }
                *(undefined1 *)(param_1 + 0x20) = 1;
              }
              *(undefined1 *)((long)param_1 + 0x114) = 0;
              if (local_31c != '\0') {
                *(undefined4 *)(param_1 + 0x23) = local_318;
                *(undefined1 *)((long)param_1 + 0x11c) = 0;
                if (local_314 != '\0') {
                  param_1[0x24] = local_310;
                  *(undefined1 *)((long)param_1 + 0x11c) = 1;
                }
                *(undefined1 *)((long)param_1 + 0x114) = 1;
              }
              *(undefined1 *)(param_1 + 0x25) = 0;
              if (local_308 != '\0') {
                *(undefined4 *)((long)param_1 + 300) = local_304;
                *(undefined1 *)(param_1 + 0x26) = 0;
                if (local_300 != '\0') {
                  *(undefined8 *)((long)param_1 + 0x134) = local_2fc;
                  *(undefined1 *)(param_1 + 0x26) = 1;
                }
                *(undefined1 *)(param_1 + 0x25) = 1;
              }
              *(undefined8 *)((long)param_1 + 0x13c) = local_2f4;
              *(undefined2 *)((long)param_1 + 0x144) = local_2ec;
              *(undefined1 *)(param_1 + 0x16) = 1;
            }
            else {
              FUN_00c2f5b0(param_1 + 0x16,puVar8);
            }
            FUN_00c2eb60(local_160,param_1);
            if (local_160[0] == '\0') {
              bVar2 = false;
LAB_00c2d7e8:
              local_510 = local_510 & 0xffffffffffffff00;
            }
            else {
              local_168 = 0;
              local_170 = 0;
              local_178 = 0;
              local_180 = 0;
              local_188 = 0;
              local_190 = 0;
              local_198 = 0;
              local_1a0 = 0;
              local_1a8 = 0;
              local_1b0 = 0;
              local_1b8 = 0;
              local_1c0 = 0;
              local_1c8 = 0;
              memcpy(local_2e0,auStack_158,0x118);
              memcpy(auStack_508,local_2e0,0x180);
              local_388 = 0x118;
              local_510 = CONCAT71(local_510._1_7_,1);
              plVar3 = param_1 + 0x11;
              (**(code **)(*param_1 + 0x10))(local_2e0,param_1);
              local_520 = local_2e0[0];
              local_518 = plVar3;
              if ((local_2e0[0] != 0) &&
                 ((**(code **)(*(long *)(local_2e0[0] + 0x48) + 0x10))(), local_2e0[0] != 0)) {
                (**(code **)(*(long *)(local_2e0[0] + 0x48) + 0x18))();
                local_2e0[0] = 0;
              }
              FUN_011fcf30(uVar7,&local_520);
              if (local_520 != 0) {
                (**(code **)(*(long *)(local_520 + 0x48) + 0x18))();
                local_520 = 0;
              }
              *(undefined1 *)((long)param_1 + 0x259) = 0;
              local_528 = local_2e8;
              local_530 = auStack_508;
              bVar2 = true;
              uVar7 = FUN_011fcfc0(uVar7,puVar8,&local_528,&local_530,1,
                                   (double)(uVar5 >> 0x10 & 0xffff));
              uVar6 = 0x12;
              if ((uVar7 & 1) != 0) {
                uVar6 = 1;
              }
              uVar7 = (ulong)uVar6;
              if ((char)local_510 != '\0') goto LAB_00c2d7e8;
            }
            if (local_380[0] != '\0') {
              if (local_308 != '\0') {
                if (local_300 != '\0') {
                  local_300 = '\0';
                }
                local_308 = '\0';
              }
              if (local_31c != '\0') {
                if (local_314 != '\0') {
                  local_314 = '\0';
                }
                local_31c = '\0';
              }
              if (local_330 != '\0') {
                if (local_328 != '\0') {
                  local_328 = '\0';
                }
                local_330 = '\0';
              }
              if (local_344 != '\0') {
                if (local_33c != '\0') {
                  local_33c = '\0';
                }
                local_344 = '\0';
              }
              if (local_358 != '\0') {
                if (local_350 != '\0') {
                  local_350 = '\0';
                }
                local_358 = '\0';
              }
              if (local_36c != '\0') {
                if (local_364 != '\0') {
                  local_364 = '\0';
                }
                local_36c = '\0';
              }
              local_380[0] = '\0';
            }
            if (!bVar2) {
              bVar2 = false;
              goto joined_r0x00c2d4f4;
            }
          }
          bVar2 = true;
        }
joined_r0x00c2d4f4:
        if (local_2e8 != 0) {
          (**(code **)(*(long *)(local_2e8 + 0x48) + 0x18))();
        }
        if (bVar2) goto LAB_00c2d8c0;
      }
    }
  }
  uVar7 = 0x10;
LAB_00c2d8c0:
  return uVar7 & 0xffffffff;
}


