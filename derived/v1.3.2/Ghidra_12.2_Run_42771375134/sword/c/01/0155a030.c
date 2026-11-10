/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0155a030; name: FUN_0155a030
 */


undefined8 FUN_0155a030(long param_1,long *param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  size_t __n;
  bool bVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  void *__dest;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  uint *__dest_00;
  uint uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined *local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 local_120;
  uint *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  char local_f8 [4];
  uint local_f4;
  uint *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined *puStack_d8;
  long local_d0;
  long lStack_c8;
  undefined1 local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  long lStack_88;
  uint *local_80;
  undefined *local_78;
  uint local_70;
  uint uStack_6c;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x78));
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    puVar1 = (uint *)(PTR_DAT_0272ae78 + 0x10);
    puVar2 = PTR_DAT_0272a770 + 0x10;
    puVar3 = PTR_DAT_0272a778 + 0x10;
    puVar4 = PTR_DAT_0272ae80 + 0x10;
    puVar5 = PTR_DAT_0272a768 + 0x10;
    puVar6 = PTR_DAT_0272a780 + 0x10;
    do {
      plVar10 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
      plVar11 = (long *)(**(code **)(*plVar10 + 0x28))();
      uVar12 = (**(code **)(*plVar11 + 0x10))(plVar11,1,plVar10[1]);
      if ((uVar12 & 1) == 0) {
        nn::os::LockMutex((MutexType *)(param_1 + 0x78));
        FUN_014fe170(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_f0);
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
        uVar15 = 1;
        goto LAB_0155a878;
      }
      plVar10 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
      plVar11 = (long *)(**(code **)(*plVar10 + 0x28))();
      uVar12 = (**(code **)(*plVar11 + 0x10))(plVar11,4,plVar10[1]);
      if ((uVar12 & 1) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = (**(code **)(*plVar10 + 0x10))(plVar10,&local_f0,4,0);
        uVar12 = uVar12 & 0xffffffff;
      }
      lVar13 = (**(code **)(*param_2 + 0x10))(param_2);
      *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 4;
      local_f8[0] = '\0';
      if ((uVar12 & 1) == 0) break;
      local_f4 = (uint)local_f0;
      local_f8[0] = '\x01';
      local_140 = (long)local_f0 << 0x20;
      local_148 = (undefined *)0x0;
      local_150 = puVar2;
      if ((uint)local_f0 == 0) {
        uVar18 = 0;
        local_f0 = puVar1;
      }
      else {
        uVar12 = ((ulong)local_f0 & 0xffffffff) -
                 ((ulong)((uint)local_f0 >> 1) & 0x5555555555555555);
        local_f0._0_4_ = (uint)local_f0 ^ (uint)local_f0 << 2;
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        local_f0._0_4_ = (uint)local_f0 ^ (uint)local_f0 >> 0xf;
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        uVar18 = (uint)local_f0 ^ (uint)local_f0 << 0xd;
        local_140 = (ulong)uVar18 << 0x20;
        local_f0 = puVar1;
        if (uVar12 != 1) {
          uVar18 = uVar18 ^ uVar18 << 2;
          uVar18 = uVar18 ^ uVar18 >> 0xf;
          uVar18 = uVar18 ^ uVar18 << 0xd;
          local_140 = (ulong)uVar18 << 0x20;
          if (uVar12 != 2) {
            FUN_014fc490(&local_150);
            for (lVar13 = uVar12 - 3; lVar13 != 0; lVar13 = lVar13 + -1) {
              (**(code **)(local_150 + 0x10))(&local_150);
            }
            local_140._4_4_ = (uint)((ulong)local_140 >> 0x20);
            uVar18 = local_140._4_4_;
          }
        }
      }
      local_140 = CONCAT44(local_140._4_4_,uVar18);
      local_e0 = param_2[2];
      local_c0 = (undefined1)param_2[6];
      local_d0 = param_2[4];
      lStack_c8 = param_2[5];
      local_a8 = param_2[9];
      local_b8 = param_2[7];
      lStack_b0 = param_2[8];
      local_a0 = PTR_DAT_0272a770 + 0x10;
      local_90 = local_140;
      local_e8 = puVar4;
      puStack_d8 = puVar3;
      puStack_98 = local_148;
      lStack_88 = local_e0;
      auVar20 = FUN_0155bf60(&local_f0);
      uVar12 = auVar20._8_8_;
      if ((auVar20._0_8_ & 0xff) == 0) {
LAB_0155a4b8:
        bVar9 = true;
      }
      else {
        plVar10 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
        plVar11 = (long *)(**(code **)(*plVar10 + 0x28))();
        uVar14 = (**(code **)(*plVar11 + 0x10))(plVar11,uVar12,plVar10[1]);
        if ((uVar14 & 1) == 0) goto LAB_0155a4b8;
        __dest_00 = *(uint **)(param_1 + 8);
        puVar8 = *(uint **)(param_1 + 0x10);
        if ((puVar8 != __dest_00) && (*__dest_00 != local_f4)) {
          do {
            __dest_00 = __dest_00 + 8;
            if (puVar8 == __dest_00) goto LAB_0155a4d0;
          } while (*__dest_00 != local_f4);
        }
        if (__dest_00 == puVar8) {
LAB_0155a4d0:
          FUN_014fde70(&local_f0,param_1,(ulong)local_f8 | 4,uVar12);
          __dest_00 = local_f0;
          if (local_f0 != (uint *)0x0) goto LAB_0155a74c;
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
          bVar9 = true;
        }
        else {
          uVar19 = *(undefined8 *)(__dest_00 + 2);
          uVar15 = *(undefined8 *)(__dest_00 + 6);
          local_e0._4_4_ = *__dest_00;
          local_e8 = (undefined *)0x0;
          puVar8 = (uint *)(PTR_DAT_0272a770 + 0x10);
          local_150 = puVar5;
          if (local_e0._4_4_ == 0) {
LAB_0155a3ec:
            local_f0 = puVar8;
          }
          else {
            uVar14 = (ulong)local_e0._4_4_ - ((ulong)(local_e0._4_4_ >> 1) & 0x5555555555555555);
            local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ << 2;
            uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
            local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ >> 0xf;
            local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ << 0xd;
            uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar14 == 1) goto LAB_0155a3ec;
            local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ << 2;
            local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ >> 0xf;
            local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ << 0xd;
            local_e0._0_4_ = 0;
            if (uVar14 == 2) goto LAB_0155a3ec;
            local_f0 = puVar8;
            FUN_014fc490(&local_f0);
            for (lVar13 = uVar14 - 3; lVar13 != 0; lVar13 = lVar13 + -1) {
              (**(code **)(local_f0 + 4))(&local_f0);
            }
          }
          local_e0 = CONCAT44(local_e0._4_4_,local_e0._4_4_);
          local_140 = 0;
          puVar7 = PTR_DAT_0272a778 + 0x10;
          local_108 = local_e0;
          uStack_100 = 0;
          local_120 = 0;
          local_148 = puVar6;
          local_138 = puVar7;
          uStack_130 = uVar19;
          local_128 = uVar15;
          local_118 = puVar8;
          uStack_110 = local_e8;
          uVar15 = FUN_014fd950(&local_150);
          local_f0 = (uint *)(PTR_DAT_0272ae78 + 0x10);
          local_78 = (undefined *)0x0;
          local_70 = 0;
          uStack_6c = local_f4;
          local_80 = puVar8;
          if (local_f4 == 0) {
            uVar18 = 0;
          }
          else {
            uVar14 = (ulong)local_f4 - ((ulong)(local_f4 >> 1) & 0x5555555555555555);
            uVar18 = local_f4 ^ local_f4 << 2;
            uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
            uVar18 = uVar18 ^ uVar18 >> 0xf;
            uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            uVar18 = uVar18 ^ uVar18 << 0xd;
            uStack_6c = uVar18;
            if (uVar14 != 1) {
              uVar18 = uVar18 ^ uVar18 << 2;
              uVar18 = uVar18 ^ uVar18 >> 0xf;
              uVar18 = uVar18 ^ uVar18 << 0xd;
              uStack_6c = uVar18;
              if (uVar14 != 2) {
                FUN_014fc490(&local_80);
                uVar18 = uStack_6c;
                for (lVar13 = uVar14 - 3; uStack_6c = uVar18, lVar13 != 0; lVar13 = lVar13 + -1) {
                  (**(code **)(local_80 + 4))(&local_80);
                  uVar18 = uStack_6c;
                }
              }
            }
          }
          local_e0 = param_2[2];
          local_c0 = (undefined1)param_2[6];
          local_d0 = param_2[4];
          lStack_c8 = param_2[5];
          local_a8 = param_2[9];
          local_b8 = param_2[7];
          lStack_b0 = param_2[8];
          local_90 = CONCAT44(uStack_6c,uVar18);
          local_a0 = PTR_DAT_0272a770 + 0x10;
          local_e8 = PTR_DAT_0272ae80 + 0x10;
          puStack_d8 = puVar7;
          puStack_98 = local_78;
          lStack_88 = local_e0;
          local_70 = uVar18;
          uVar19 = FUN_014fd950(&local_f0);
          uVar18 = (uint)uVar15;
          if ((uVar18 & 0xff) == ((uint)uVar19 & 0xff)) {
            if ((uVar18 & 0xff) == 5) {
              uVar16 = (uint)((ulong)uVar15 >> 8);
              if (((uVar16 & 0xff) == 3) || ((uVar16 - 8 & 0xff) < 10)) {
                uVar16 = (uint)((ulong)uVar19 >> 8);
                uVar17 = uVar16 & 0xff;
                if (((uVar18 >> 8 & 0xff) == uVar17) && (uVar17 == 3 || (uVar16 - 8 & 0xff) < 10))
                goto LAB_0155a688;
              }
              goto LAB_0155a69c;
            }
            if ((9 < (uVar18 - 8 & 0xff)) && (1 < (uVar18 - 3 & 0xff))) goto LAB_0155a69c;
            if ((uVar18 & 0xff) == 4) {
LAB_0155a688:
              if (((((uint)((ulong)uVar19 >> 0x10) | (uint)((ulong)uVar15 >> 0x10)) & 0xff) != 0) &&
                 ((int)((ulong)uVar15 >> 0x20) != (int)((ulong)uVar19 >> 0x20))) goto LAB_0155a69c;
            }
          }
          else {
LAB_0155a69c:
            plVar10 = *(long **)(param_1 + 0x58);
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x58))(plVar10,(ulong)local_f8 | 4);
            }
          }
          if (*(ulong *)(__dest_00 + 4) < uVar12) {
            plVar10 = *(long **)(param_1 + 0x58);
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x18))(plVar10,__dest_00);
            }
            __dest = (void *)(**(code **)(**(long **)(param_1 + 0x38) + 0x10))
                                       (*(long **)(param_1 + 0x38),uVar12);
            if (__dest == (void *)0x0) {
              __n = *(long *)(param_1 + 0x10) - (long)(__dest_00 + 8);
              if (__n != 0) {
                memmove(__dest_00,__dest_00 + 8,__n);
              }
              *(uint **)(param_1 + 0x10) = __dest_00 + ((long)__n >> 5) * 8;
              bVar9 = true;
              goto joined_r0x0155a500;
            }
            memcpy(__dest,*(void **)(__dest_00 + 2),*(size_t *)(__dest_00 + 6));
            (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
                      (*(long **)(param_1 + 0x38),*(undefined8 *)(__dest_00 + 2),
                       *(undefined8 *)(__dest_00 + 4));
            *(void **)(__dest_00 + 2) = __dest;
            *(ulong *)(__dest_00 + 4) = uVar12;
            *(ulong *)(__dest_00 + 6) = uVar12;
          }
          else {
            if ((*(ulong *)(__dest_00 + 4) != uVar12) && (*(ulong *)(__dest_00 + 6) != uVar12)) {
              plVar10 = *(long **)(param_1 + 0x58);
              if (plVar10 != (long *)0x0) {
                (**(code **)(*plVar10 + 0x20))(plVar10,__dest_00);
              }
              *(ulong *)(__dest_00 + 6) = uVar12;
            }
LAB_0155a74c:
            __dest = *(void **)(__dest_00 + 2);
          }
          plVar10 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
          if (__dest != (void *)0x0) {
            plVar11 = (long *)(**(code **)(*plVar10 + 0x28))();
            uVar14 = (**(code **)(*plVar11 + 0x10))(plVar11,uVar12,plVar10[1]);
            if ((uVar14 & 1) != 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10,__dest,uVar12,0);
            }
          }
          lVar13 = (**(code **)(*param_2 + 0x10))(param_2);
          *(ulong *)(lVar13 + 8) = *(long *)(lVar13 + 8) + uVar12;
          plVar10 = *(long **)(param_1 + 0x58);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x48))(plVar10,__dest_00);
          }
          bVar9 = false;
        }
      }
joined_r0x0155a500:
      if (local_f8[0] != '\0') {
        local_f8[0] = '\0';
      }
    } while (!bVar9);
    uVar15 = 0;
  }
  else {
    if (*(long **)(param_1 + 0x58) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x60))();
    }
    uVar15 = 0;
  }
LAB_0155a878:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
  return uVar15;
}


