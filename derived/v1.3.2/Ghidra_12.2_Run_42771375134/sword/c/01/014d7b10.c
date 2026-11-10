/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014d7b10; name: FUN_014d7b10
 */


undefined8 FUN_014d7b10(long *param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  int *piVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  long *local_150;
  undefined4 local_148;
  long local_140;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long *local_d0;
  int local_c8;
  undefined4 uStack_c4;
  long local_c0;
  long local_70 [2];
  
  plVar8 = param_1 + 0x8371;
  if (*(byte *)(param_1 + 0x8377) == 0) {
    plVar10 = (long *)*plVar8;
    if (plVar10 != (long *)0x0) {
      if ((ulong)*(uint *)(param_1 + 0x12) < (ulong)(plVar10[1] - *plVar10 >> 2)) {
        iVar2 = *(int *)(*plVar10 + (ulong)*(uint *)(param_1 + 0x12) * 4);
        if ((int)param_1[0x13] == iVar2) {
          uVar9 = 0;
LAB_014d7fb8:
          uVar9 = uVar9 | (ulong)*(uint *)((long)param_1 + uVar9 * 0x2308 + 0x94) << 0x20;
        }
        else {
          if ((int)param_1[0x474] == iVar2) {
            uVar9 = 1;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x8d5] == iVar2) {
            uVar9 = 2;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0xd36] == iVar2) {
            uVar9 = 3;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x1197] == iVar2) {
            uVar9 = 4;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x15f8] == iVar2) {
            uVar9 = 5;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x1a59] == iVar2) {
            uVar9 = 6;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x1eba] == iVar2) {
            uVar9 = 7;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x231b] == iVar2) {
            uVar9 = 8;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x277c] == iVar2) {
            uVar9 = 9;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x2bdd] == iVar2) {
            uVar9 = 10;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x303e] == iVar2) {
            uVar9 = 0xb;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x349f] == iVar2) {
            uVar9 = 0xc;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x3900] == iVar2) {
            uVar9 = 0xd;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x3d61] == iVar2) {
            uVar9 = 0xe;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x41c2] == iVar2) {
            uVar9 = 0xf;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x4623] == iVar2) {
            uVar9 = 0x10;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x4a84] == iVar2) {
            uVar9 = 0x11;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x4ee5] == iVar2) {
            uVar9 = 0x12;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x5346] == iVar2) {
            uVar9 = 0x13;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x57a7] == iVar2) {
            uVar9 = 0x14;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x5c08] == iVar2) {
            uVar9 = 0x15;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x6069] == iVar2) {
            uVar9 = 0x16;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x64ca] == iVar2) {
            uVar9 = 0x17;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x692b] == iVar2) {
            uVar9 = 0x18;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x6d8c] == iVar2) {
            uVar9 = 0x19;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x71ed] == iVar2) {
            uVar9 = 0x1a;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x764e] == iVar2) {
            uVar9 = 0x1b;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x7aaf] == iVar2) {
            uVar9 = 0x1c;
            goto LAB_014d7fb8;
          }
          if ((int)param_1[0x7f10] == iVar2) {
            uVar9 = 0x1d;
            goto LAB_014d7fb8;
          }
          uVar9 = 0xffffffff;
        }
        (**(code **)(*param_1 + 0x10))(local_70,param_1);
        lVar3 = local_70[0];
        lVar13 = param_1[1];
        if (local_70[0] != 0) {
          (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
        }
        local_e0 = (undefined1 *)0x0;
        local_d8 = (undefined1 *)0x0;
        uVar14 = (undefined4)uVar9;
        local_c0 = lVar3;
        local_f0 = (undefined1 *)0x0;
        local_e8 = (code *)0x0;
        local_d0 = param_1;
        local_c8 = iVar2;
        uStack_c4 = uVar14;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        lVar5 = local_70[0];
        local_f0 = &LAB_014d8ce0;
        local_e8 = FUN_014d8ea0;
        local_e0 = &LAB_014d8ee0;
        local_d8 = &LAB_014d8f10;
        if (local_70[0] != 0) {
          (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
        }
        local_160 = (undefined1 *)0x0;
        puStack_158 = (undefined1 *)0x0;
        local_140 = lVar5;
        local_170 = (undefined1 *)0x0;
        local_168 = (code *)0x0;
        local_150 = param_1;
        local_148 = uVar14;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        local_170 = &LAB_014d8f40;
        local_168 = FUN_014d8fc0;
        local_160 = &LAB_014d9000;
        puStack_158 = &LAB_014d9030;
        bVar6 = FUN_01282010(iVar2,uVar9 >> 0x20,lVar13,&local_f0,&local_170);
        pcVar4 = local_168;
        *(byte *)(param_1 + 0x8377) = bVar6 & 1;
        if (local_168 != (code *)0x0) {
          local_160 = (undefined1 *)0x0;
          puStack_158 = (undefined1 *)0x0;
          local_170 = (undefined1 *)0x0;
          local_168 = (code *)0x0;
          (*pcVar4)(&local_150);
        }
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
        }
        pcVar4 = local_e8;
        if (local_e8 != (code *)0x0) {
          local_e0 = (undefined1 *)0x0;
          local_d8 = (undefined1 *)0x0;
          local_f0 = (undefined1 *)0x0;
          local_e8 = (code *)0x0;
          (*pcVar4)(&local_d0);
        }
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
        }
        if (local_70[0] == 0) goto LAB_014d7b54;
        (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
        local_70[0] = 0;
        uVar11 = 0;
        plVar8 = (long *)*plVar8;
      }
      else {
        piVar12 = *(int **)param_1[0x106d6];
        piVar1 = (int *)((long *)param_1[0x106d6])[1];
        if (piVar12 == piVar1) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          do {
            iVar2 = piVar12[1];
            if (-1 < iVar2) {
              if (*piVar12 == 0) {
                lVar3 = (long)iVar2 * 0x2308 + 0x94;
              }
              else {
                lVar3 = (long)iVar2 * 0x2308 + 0x41bbc;
                *(undefined1 *)((long)param_1 + 0x41bb9) = 1;
              }
              FUN_0154e7c0(uVar7,(long)param_1 + lVar3);
              uVar7 = uVar7 + 1;
            }
            piVar12 = piVar12 + 2;
          } while (piVar1 != piVar12);
        }
        if (*(uint *)(param_1 + 0x106da) != uVar7) {
          *(undefined1 *)((long)param_1 + 0x41bb9) = 1;
        }
        if (uVar7 < 0x1e) {
          do {
            FUN_0154e9a0(uVar7);
            uVar7 = uVar7 + 1;
          } while (uVar7 != 0x1e);
        }
        uVar11 = 1;
        plVar8 = (long *)*plVar8;
      }
      goto joined_r0x014d7cbc;
    }
    uVar11 = 0;
  }
  else {
LAB_014d7b54:
    uVar11 = 0;
    plVar8 = (long *)*plVar8;
joined_r0x014d7cbc:
    if ((plVar8 != (long *)0x0) && (uVar9 = (ulong)(plVar8[1] - *plVar8) >> 2, (int)uVar9 != 0)) {
      fVar15 = (float)NEON_ucvtf((int)param_1[0x12]);
      uVar7 = (uint)((fVar15 / (float)(uVar9 & 0xffffffff)) * DAT_01d4c6b8);
      if (99 < uVar7) {
        uVar7 = 100;
      }
      goto LAB_014d8160;
    }
  }
  uVar7 = 0;
LAB_014d8160:
  FUN_014d6c50(param_1[0xf],uVar7);
  return uVar11;
}


