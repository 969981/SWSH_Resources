/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f47b30; name: FUN_00f47b30
 */


void FUN_00f47b30(long param_1,uint *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined2 uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined1 uVar12;
  uint uVar13;
  long local_d0;
  ulong local_c8 [3];
  undefined2 local_ac [6];
  byte local_a0 [64];
  
  piVar5 = (int *)FUN_00f49450(*(undefined8 *)(param_1 + 0x60),param_3);
  puVar3 = PTR_DAT_02710860;
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 9) ||
     (uVar9 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[4], uVar9 == 0)) {
    uVar13 = 0;
  }
  else {
    uVar13 = (uint)*(ushort *)((long)piVar5 + uVar9);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar6 + 0x80) < 0x10) {
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_5;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    lVar7 = (**(code **)(*param_5 + 0x10))(param_5,0x80,8);
    if (lVar7 == 0) {
      (**(code **)(*param_5 + 0xb8))(param_5);
    }
    FUN_0077d050(lVar7,0x200);
    *(long **)(lVar7 + 8) = param_5;
    *(long *)(lVar7 + 0x10) = lVar7;
    *(undefined8 *)(lVar7 + 0x18) = 0x80;
    *(undefined8 *)(lVar7 + 0x20) = 8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x78) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    *(long *)(param_1 + 0x78) = lVar7;
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    if (*(ulong *)(lVar6 + 0x80) < 0x10) {
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_5;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar7 = (**(code **)(*param_5 + 0x10))(param_5,0x80,8);
      if (lVar7 == 0) {
        (**(code **)(*param_5 + 0xb8))(param_5);
      }
      FUN_0077d050(lVar7,0x200);
      *(long **)(lVar7 + 8) = param_5;
      *(long *)(lVar7 + 0x10) = lVar7;
      *(undefined8 *)(lVar7 + 0x18) = 0x80;
      *(undefined8 *)(lVar7 + 0x20) = 8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x80) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x80) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x80) = 0;
      }
      *(long *)(param_1 + 0x80) = lVar7;
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (*(ulong *)(lVar6 + 0x80) < 0x10) {
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_5;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        lVar7 = (**(code **)(*param_5 + 0x10))(param_5,0x80,8);
        if (lVar7 == 0) {
          (**(code **)(*param_5 + 0xb8))(param_5);
        }
        FUN_0077d050(lVar7,0x200);
        *(long **)(lVar7 + 8) = param_5;
        *(long *)(lVar7 + 0x10) = lVar7;
        *(undefined8 *)(lVar7 + 0x18) = 0x80;
        *(undefined8 *)(lVar7 + 0x20) = 8;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        if (*(long *)(param_1 + 0x88) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x88) = 0;
        }
        *(long *)(param_1 + 0x88) = lVar7;
        snprintf((char *)local_a0,0x40,"mes_tower_tr_%03d_01",uVar13);
        lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 0x60);
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        uVar9 = 0xcbf29ce484222645;
        local_c8[0] = 0xcbf29ce484222645;
        if (local_a0[0] != 0) {
          local_c8[0] = 0xcbf29ce484222645;
          pbVar10 = (byte *)((ulong)local_a0 | 1);
          bVar1 = local_a0[0];
          do {
            local_c8[0] = (local_c8[0] ^ bVar1) * 0x100000001b3;
            bVar1 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (bVar1 != 0);
        }
        uVar4 = FUN_0077eb10(lVar6,local_c8,*(undefined8 *)(param_1 + 0x78));
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
        snprintf((char *)local_a0,0x40,"mes_tower_tr_%03d_02",uVar13);
        lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 0x60);
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        local_c8[0] = 0xcbf29ce484222645;
        if (local_a0[0] != 0) {
          local_c8[0] = 0xcbf29ce484222645;
          pbVar10 = (byte *)((ulong)local_a0 | 1);
          bVar1 = local_a0[0];
          do {
            local_c8[0] = (local_c8[0] ^ bVar1) * 0x100000001b3;
            bVar1 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (bVar1 != 0);
        }
        FUN_0077eb10(lVar6,local_c8,*(undefined8 *)(param_1 + 0x80));
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
        snprintf((char *)local_a0,0x40,"mes_tower_tr_%03d_03",uVar13);
        lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 0x60);
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        if (local_a0[0] != 0) {
          pbVar10 = (byte *)((ulong)local_a0 | 1);
          do {
            uVar9 = (uVar9 ^ local_a0[0]) * 0x100000001b3;
            local_a0[0] = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (local_a0[0] != 0);
        }
        local_c8[0] = uVar9;
        FUN_0077eb10(lVar6,local_c8,*(undefined8 *)(param_1 + 0x88));
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
        if (5 < (param_4 & 0xffff)) {
          param_4 = 6;
        }
        uVar11 = (ulong)(param_4 & 0xffff);
        FUN_00f49550(*(undefined8 *)(param_1 + 0x60),piVar5,uVar11,local_ac);
        uVar9 = FUN_00f486e0(*(undefined8 *)(param_1 + 0x68),local_ac,local_c8,param_4);
        if ((uVar9 & 1) != 0) {
          FUN_00f49550(*(undefined8 *)(param_1 + 0x60),piVar5,uVar11,local_ac);
          uVar9 = FUN_00f486e0(*(undefined8 *)(param_1 + 0x68),local_ac,local_c8,uVar11);
          if ((uVar9 & 1) != 0) {
            FUN_00f49550(*(undefined8 *)(param_1 + 0x60),piVar5,uVar11,local_ac);
            uVar9 = FUN_00f486e0(*(undefined8 *)(param_1 + 0x68),local_ac,local_c8,uVar11);
            if ((uVar9 & 1) != 0) {
              FUN_00f49550(*(undefined8 *)(param_1 + 0x60),piVar5,uVar11,local_ac);
              uVar9 = FUN_00f486e0(*(undefined8 *)(param_1 + 0x68),local_ac,local_c8,uVar11);
              if ((uVar9 & 1) != 0) {
                FUN_00f49550(*(undefined8 *)(param_1 + 0x60),piVar5,uVar11,local_ac);
                uVar9 = FUN_00f486e0(*(undefined8 *)(param_1 + 0x68),local_ac,local_c8,uVar11);
                if ((uVar9 & 1) != 0) {
                  FUN_00f49550(*(undefined8 *)(param_1 + 0x60),piVar5,uVar11,local_ac);
                  uVar9 = FUN_00f486e0(*(undefined8 *)(param_1 + 0x68),local_ac,local_c8,uVar11);
                  if ((uVar9 & 1) != 0) {
                    FUN_00f49550(*(undefined8 *)(param_1 + 0x60),piVar5,uVar11,local_ac);
                    uVar9 = FUN_00f486e0(*(undefined8 *)(param_1 + 0x68),local_ac,local_c8,uVar11);
                    if ((uVar9 & 1) != 0) {
                      FUN_00f49550(*(undefined8 *)(param_1 + 0x60),piVar5,uVar11,local_ac);
                      uVar9 = FUN_00f486e0(*(undefined8 *)(param_1 + 0x68),local_ac,local_c8,uVar11)
                      ;
                      if ((uVar9 & 1) != 0) {
                        FUN_00f49550(*(undefined8 *)(param_1 + 0x60),piVar5,uVar11,local_ac);
                        uVar9 = FUN_00f486e0(*(undefined8 *)(param_1 + 0x68),local_ac,local_c8,
                                             uVar11);
                        if ((uVar9 & 1) != 0) {
                          FUN_00f49550(*(undefined8 *)(param_1 + 0x60),piVar5,uVar11,local_ac);
                          uVar9 = FUN_00f486e0(*(undefined8 *)(param_1 + 0x68),local_ac,local_c8,
                                               uVar11);
                          if ((uVar9 & 1) != 0) {
                            FUN_00f496e0(*(undefined8 *)(param_1 + 0x60),piVar5,uVar11,local_ac);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(**(long **)(param_2 + 10) + 0x70))();
        if ((param_4 & 0xffff) == 0) {
          uVar12 = 0;
        }
        else {
          uVar9 = 0;
          uVar13 = 0;
          do {
            FUN_00f488d0(&local_d0,*(undefined8 *)(param_1 + 0x68),local_ac[uVar9],param_5);
            (**(code **)(**(long **)(param_2 + 10) + 0x28))(*(long **)(param_2 + 10),local_d0);
            uVar8 = FUN_00f49070(*(undefined8 *)(param_1 + 0x68),local_ac[uVar9]);
            uVar2 = 1 << (ulong)((uint)uVar9 & 0x1f);
            if ((uVar8 & 1) == 0) {
              uVar2 = 0;
            }
            uVar13 = uVar2 | uVar13;
            uVar12 = (undefined1)uVar13;
            if (local_d0 != 0) {
              (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
              local_d0 = 0;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar11);
        }
        if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0xb) {
          uVar13 = 0;
        }
        else {
          uVar9 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[5];
          uVar13 = 0;
          if (uVar9 != 0) {
            uVar13 = (uint)*(ushort *)((long)piVar5 + uVar9);
          }
        }
        *param_2 = uVar13;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 0x78);
        *(undefined2 *)(param_2 + 4) = uVar4;
        *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_1 + 0x80);
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x88);
        *(undefined1 *)(param_2 + 0xc) = uVar12;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


