/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b8290; name: FUN_006b8290
 */


void FUN_006b8290(long *param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  undefined4 *local_70;
  long *local_68;
  long local_60;
  long local_58;
  
  lVar6 = *param_5;
  lVar7 = *param_4;
  if ((lVar6 - lVar7 & 0xfffffffffffffffcU) == 4) {
    puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
    puVar3 = PTR_DAT_02710860;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar7 + 0x80) < 0x10) {
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      *puVar4 = 0;
      *(undefined8 *)(puVar4 + 0x16) = 0;
      *(undefined8 *)(puVar4 + 0x18) = 0;
      *(undefined8 *)(puVar4 + 0x12) = 0;
      *(undefined8 *)(puVar4 + 0x14) = 0;
      *(undefined8 *)(puVar4 + 0xe) = 0;
      *(undefined8 *)(puVar4 + 0x10) = 0;
      *(undefined8 *)(puVar4 + 10) = 0;
      *(undefined8 *)(puVar4 + 0xc) = 0;
      *(undefined8 *)(puVar4 + 6) = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
      *(undefined8 *)(puVar4 + 2) = 0;
      *(undefined8 *)(puVar4 + 4) = 0;
      *param_1 = (long)puVar4;
      param_1[1] = (long)param_2;
      param_1[2] = 0x68;
      param_1[3] = 8;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      puVar12 = (uint *)*param_4;
      uVar2 = *puVar12;
      uVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x40,8);
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (*(ulong *)(lVar7 + 0x80) < 0x10) {
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        FUN_006b8ab0(uVar5,param_3,(long)puVar12 + (ulong)uVar2);
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        lVar6 = *param_1;
        lVar7 = *(long *)(lVar6 + 8);
        *(undefined8 *)(lVar6 + 8) = uVar5;
        if (lVar7 != 0) {
          if (*(long *)(lVar7 + 0x28) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar7 + 0x28) + 0x48) + 0x18))();
            *(undefined8 *)(lVar7 + 0x28) = 0;
          }
          if (*(long *)(lVar7 + 0x20) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar7 + 0x20) + 0x48) + 0x18))();
            *(undefined8 *)(lVar7 + 0x20) = 0;
          }
          (**(code **)(**(long **)(lVar6 + 0x10) + 0x18))
                    (*(long **)(lVar6 + 0x10),lVar7,*(undefined8 *)(lVar6 + 0x18),
                     *(undefined8 *)(lVar6 + 0x20));
        }
        *(long **)(lVar6 + 0x10) = param_2;
        *(undefined8 *)(lVar6 + 0x18) = 0x40;
        *(undefined8 *)(lVar6 + 0x20) = 8;
        return;
      }
    }
  }
  else {
    lVar11 = lVar7 + 4;
    lVar1 = lVar11;
    if (lVar11 != lVar6) {
      lVar13 = lVar11;
      do {
        uVar8 = (ulong)*(uint *)(lVar7 + 4);
        lVar1 = lVar7 + (uVar8 - (long)*(int *)(lVar7 + uVar8 + 4));
        if (((0xc < *(ushort *)(lVar1 + 4)) &&
            (uVar9 = (ulong)*(ushort *)(lVar1 + 0x10), uVar9 != 0)) &&
           (lVar1 = lVar13, *(int *)(lVar7 + uVar8 + uVar9 + 4) == 1)) break;
        lVar13 = lVar7 + 8;
        lVar7 = lVar7 + 4;
        lVar1 = lVar6;
      } while (lVar6 + -4 != lVar7);
    }
    if (lVar6 == lVar1) {
      puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (*(ulong *)(lVar7 + 0x80) < 0x10) {
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        *(undefined8 *)(puVar4 + 0x16) = 0;
        *(undefined8 *)(puVar4 + 0x18) = 0;
        *puVar4 = 1;
        *(undefined8 *)(puVar4 + 0x12) = 0;
        *(undefined8 *)(puVar4 + 0x14) = 0;
        *(undefined8 *)(puVar4 + 0xe) = 0;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(undefined8 *)(puVar4 + 10) = 0;
        *(undefined8 *)(puVar4 + 0xc) = 0;
        *(undefined8 *)(puVar4 + 6) = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        *(undefined8 *)(puVar4 + 2) = 0;
        *(undefined8 *)(puVar4 + 4) = 0;
        local_60 = 0x68;
        local_58 = 8;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        lStack_b8 = *param_4;
        local_c0 = lVar11;
        local_70 = puVar4;
        local_68 = param_2;
        FUN_006b8290(&local_b0,param_2,param_3,&lStack_b8,&local_c0);
        uVar5 = local_b0;
        local_b0 = 0;
        lVar7 = *(long *)(puVar4 + 10);
        *(undefined8 *)(puVar4 + 10) = uVar5;
        if (lVar7 != 0) {
          FUN_006b5720(lVar7 + 0x48);
          FUN_006b5720(lVar7 + 0x28);
          lVar6 = *(long *)(lVar7 + 8);
          *(undefined8 *)(lVar7 + 8) = 0;
          if (lVar6 != 0) {
            if (*(long *)(lVar6 + 0x28) != 0) {
              (**(code **)(*(long *)(*(long *)(lVar6 + 0x28) + 0x48) + 0x18))();
              *(undefined8 *)(lVar6 + 0x28) = 0;
            }
            if (*(long *)(lVar6 + 0x20) != 0) {
              (**(code **)(*(long *)(*(long *)(lVar6 + 0x20) + 0x48) + 0x18))();
              *(undefined8 *)(lVar6 + 0x20) = 0;
            }
            (**(code **)(**(long **)(lVar7 + 0x10) + 0x18))
                      (*(long **)(lVar7 + 0x10),lVar6,*(undefined8 *)(lVar7 + 0x18),
                       *(undefined8 *)(lVar7 + 0x20));
          }
          (**(code **)(**(long **)(puVar4 + 0xc) + 0x18))
                    (*(long **)(puVar4 + 0xc),lVar7,*(undefined8 *)(puVar4 + 0xe),
                     *(undefined8 *)(puVar4 + 0x10));
        }
        *(undefined8 *)(puVar4 + 0xe) = uStack_a0;
        *(undefined8 *)(puVar4 + 0x10) = local_98;
        *(undefined8 *)(puVar4 + 0xc) = local_a8;
        FUN_006b5720(&local_b0);
        local_d0 = *param_5;
        lStack_c8 = lVar11;
        FUN_006b8290(&local_b0,param_2,param_3,&lStack_c8,&local_d0);
        uVar5 = local_b0;
        local_b0 = 0;
        lVar7 = *(long *)(puVar4 + 0x12);
        *(undefined8 *)(puVar4 + 0x12) = uVar5;
        if (lVar7 == 0) {
          puVar10 = puVar4;
        }
        else {
          FUN_006b5720(lVar7 + 0x48);
          FUN_006b5720(lVar7 + 0x28);
          lVar6 = *(long *)(lVar7 + 8);
          *(undefined8 *)(lVar7 + 8) = 0;
          if (lVar6 != 0) {
            if (*(long *)(lVar6 + 0x28) != 0) {
              (**(code **)(*(long *)(*(long *)(lVar6 + 0x28) + 0x48) + 0x18))();
              *(undefined8 *)(lVar6 + 0x28) = 0;
            }
            if (*(long *)(lVar6 + 0x20) != 0) {
              (**(code **)(*(long *)(*(long *)(lVar6 + 0x20) + 0x48) + 0x18))();
              *(undefined8 *)(lVar6 + 0x20) = 0;
            }
            (**(code **)(**(long **)(lVar7 + 0x10) + 0x18))
                      (*(long **)(lVar7 + 0x10),lVar6,*(undefined8 *)(lVar7 + 0x18),
                       *(undefined8 *)(lVar7 + 0x20));
          }
          (**(code **)(**(long **)(puVar4 + 0x14) + 0x18))
                    (*(long **)(puVar4 + 0x14),lVar7,*(undefined8 *)(puVar4 + 0x16),
                     *(undefined8 *)(puVar4 + 0x18));
          puVar10 = local_70;
        }
        *(undefined8 *)(puVar4 + 0x16) = uStack_a0;
        *(undefined8 *)(puVar4 + 0x18) = local_98;
        *(undefined8 *)(puVar4 + 0x14) = local_a8;
        FUN_006b5720(&local_b0);
        local_70 = (undefined4 *)0x0;
        param_1[2] = local_60;
        param_1[3] = local_58;
        *param_1 = (long)puVar10;
        param_1[1] = (long)local_68;
        goto LAB_006b8910;
      }
    }
    else {
      puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (*(ulong *)(lVar7 + 0x80) < 0x10) {
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        *(undefined8 *)(puVar4 + 0x16) = 0;
        *(undefined8 *)(puVar4 + 0x18) = 0;
        *puVar4 = 2;
        *(undefined8 *)(puVar4 + 0x12) = 0;
        *(undefined8 *)(puVar4 + 0x14) = 0;
        *(undefined8 *)(puVar4 + 0xe) = 0;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(undefined8 *)(puVar4 + 10) = 0;
        *(undefined8 *)(puVar4 + 0xc) = 0;
        *(undefined8 *)(puVar4 + 6) = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        *(undefined8 *)(puVar4 + 2) = 0;
        *(undefined8 *)(puVar4 + 4) = 0;
        *param_1 = (long)puVar4;
        param_1[1] = (long)param_2;
        param_1[2] = 0x68;
        param_1[3] = 8;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        lStack_78 = *param_4;
        local_80 = lVar1;
        FUN_006b8290(&local_70,param_2,param_3,&lStack_78,&local_80);
        puVar4 = local_70;
        lVar6 = *param_1;
        local_70 = (undefined4 *)0x0;
        lVar7 = *(long *)(lVar6 + 0x28);
        *(undefined4 **)(lVar6 + 0x28) = puVar4;
        if (lVar7 != 0) {
          FUN_006b5720(lVar7 + 0x48);
          FUN_006b5720(lVar7 + 0x28);
          lVar11 = *(long *)(lVar7 + 8);
          *(undefined8 *)(lVar7 + 8) = 0;
          if (lVar11 != 0) {
            if (*(long *)(lVar11 + 0x28) != 0) {
              (**(code **)(*(long *)(*(long *)(lVar11 + 0x28) + 0x48) + 0x18))();
              *(undefined8 *)(lVar11 + 0x28) = 0;
            }
            if (*(long *)(lVar11 + 0x20) != 0) {
              (**(code **)(*(long *)(*(long *)(lVar11 + 0x20) + 0x48) + 0x18))();
              *(undefined8 *)(lVar11 + 0x20) = 0;
            }
            (**(code **)(**(long **)(lVar7 + 0x10) + 0x18))
                      (*(long **)(lVar7 + 0x10),lVar11,*(undefined8 *)(lVar7 + 0x18),
                       *(undefined8 *)(lVar7 + 0x20));
          }
          (**(code **)(**(long **)(lVar6 + 0x30) + 0x18))
                    (*(long **)(lVar6 + 0x30),lVar7,*(undefined8 *)(lVar6 + 0x38),
                     *(undefined8 *)(lVar6 + 0x40));
        }
        *(long *)(lVar6 + 0x38) = local_60;
        *(long *)(lVar6 + 0x40) = local_58;
        *(long **)(lVar6 + 0x30) = local_68;
        FUN_006b5720(&local_70);
        local_90 = *param_5;
        lStack_88 = lVar1;
        FUN_006b8290(&local_70,param_2,param_3,&lStack_88,&local_90);
        puVar4 = local_70;
        local_70 = (undefined4 *)0x0;
        lVar7 = *(long *)(lVar6 + 0x48);
        *(undefined4 **)(lVar6 + 0x48) = puVar4;
        if (lVar7 != 0) {
          FUN_006b5720(lVar7 + 0x48);
          FUN_006b5720(lVar7 + 0x28);
          lVar11 = *(long *)(lVar7 + 8);
          *(undefined8 *)(lVar7 + 8) = 0;
          if (lVar11 != 0) {
            if (*(long *)(lVar11 + 0x28) != 0) {
              (**(code **)(*(long *)(*(long *)(lVar11 + 0x28) + 0x48) + 0x18))();
              *(undefined8 *)(lVar11 + 0x28) = 0;
            }
            if (*(long *)(lVar11 + 0x20) != 0) {
              (**(code **)(*(long *)(*(long *)(lVar11 + 0x20) + 0x48) + 0x18))();
              *(undefined8 *)(lVar11 + 0x20) = 0;
            }
            (**(code **)(**(long **)(lVar7 + 0x10) + 0x18))
                      (*(long **)(lVar7 + 0x10),lVar11,*(undefined8 *)(lVar7 + 0x18),
                       *(undefined8 *)(lVar7 + 0x20));
          }
          (**(code **)(**(long **)(lVar6 + 0x50) + 0x18))
                    (*(long **)(lVar6 + 0x50),lVar7,*(undefined8 *)(lVar6 + 0x58),
                     *(undefined8 *)(lVar6 + 0x60));
        }
        *(long *)(lVar6 + 0x58) = local_60;
        *(long *)(lVar6 + 0x60) = local_58;
        *(long **)(lVar6 + 0x50) = local_68;
LAB_006b8910:
        FUN_006b5720(&local_70);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


