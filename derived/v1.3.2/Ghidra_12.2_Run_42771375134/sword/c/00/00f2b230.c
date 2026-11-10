/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2b230; name: FUN_00f2b230
 */


undefined8 FUN_00f2b230(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  undefined4 extraout_s0;
  undefined4 uVar21;
  uint uVar22;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  long *local_b0;
  undefined8 *local_a0;
  undefined8 *local_98;
  byte local_90;
  undefined7 uStack_8f;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  if (*(uint *)(param_1 + 0xf70) < 4) {
    lVar17 = *(long *)PTR_DAT_027194d8;
    switch(*(uint *)(param_1 + 0xf70)) {
    case 0:
      plVar18 = *(long **)(lVar17 + 0xb0);
      plVar19 = *(long **)(lVar17 + 0xb8);
      do {
        if (plVar18 == plVar19) {
          return 0;
        }
        lVar11 = *plVar18;
        puVar15 = (undefined8 *)(lVar11 + 0x50);
        plVar6 = (long *)(**(code **)*puVar15)(puVar15);
        lVar16 = FUN_015bed20();
        for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if (plVar6 == (long *)lVar16) {
            uVar8 = (**(code **)(*(long *)*plVar18 + 0x88))();
            if ((uVar8 & 1) == 0) {
              local_70 = *(undefined8 *)(lVar11 + 0x3a0);
              lVar16 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
              if (lVar16 != 0) {
                (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
              }
              if (*(long *)(lVar16 + 0x688) == 0) {
                plVar18 = (long *)FUN_01028290();
                local_68 = *plVar18;
                if (local_68 != 0) {
                  (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
                }
              }
              else {
                FUN_006e7120(&local_68,*(long *)(lVar16 + 0x688),&local_70);
              }
              FUN_006cf0c0(&local_90,&local_68);
              if (local_68 != 0) {
                (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                local_68 = 0;
              }
              *(ulong *)(param_1 + 0xf78) = CONCAT71(uStack_8f,local_90);
              *(undefined8 *)(param_1 + 0xf80) = local_88;
              *(undefined8 *)(param_1 + 0xf88) = local_80;
              if (*(long *)(param_1 + 0xf90) != 0) {
                (**(code **)(*(long *)(*(long *)(param_1 + 0xf90) + 0x48) + 0x18))();
                *(undefined8 *)(param_1 + 0xf90) = 0;
              }
              uVar13 = local_78;
              local_78 = 0;
              *(undefined8 *)(param_1 + 0xf90) = uVar13;
              (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
              *(int *)(param_1 + 0xf70) = *(int *)(param_1 + 0xf70) + 1;
              goto LAB_00f2b2fc;
            }
            break;
          }
        }
        plVar18 = plVar18 + 1;
      } while( true );
    case 1:
LAB_00f2b2fc:
      local_a0 = (undefined8 *)(lVar17 + 0xb8);
      uVar8 = 0;
      do {
        local_98 = (undefined8 *)(param_1 + 0xf80);
        snprintf((char *)&local_90,0x20,"%s%s%02d",(char *)*local_98,"_kinoko_",(int)uVar8);
        uVar20 = 0xcbf29ce484222645;
        if (local_90 != 0) {
          uVar20 = 0xcbf29ce484222645;
          pbVar10 = (byte *)((ulong)&local_90 | 1);
          bVar2 = local_90;
          do {
            uVar20 = (uVar20 ^ bVar2) * 0x100000001b3;
            bVar2 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (bVar2 != 0);
        }
        plVar18 = *(long **)(lVar17 + 0xb0);
        plVar19 = (long *)*local_a0;
        while( true ) {
          if (plVar18 == plVar19) goto LAB_00f2b404;
          lVar16 = *plVar18;
          uVar7 = FUN_00f2cd40(lVar16 + 0x50);
          if ((((uVar7 & 1) != 0) && (*(ulong *)(lVar16 + 0x1a0) == uVar20)) &&
             (uVar7 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar7 & 1) == 0)) break;
          plVar18 = plVar18 + 1;
        }
        *(long *)(param_1 + uVar8 * 8 + 0x68) = lVar16;
        *(int *)(lVar16 + 0x5d0) = (int)uVar8;
        uVar8 = uVar8 + 1;
        *(uint *)(lVar16 + 0x37c) = *(uint *)(lVar16 + 0x37c) & 0xfffffffe;
      } while (uVar8 < 0x20);
LAB_00f2b404:
      if (*(long **)(param_1 + 0x68) == (long *)0x0) {
        return 0;
      }
      uVar8 = (**(code **)(**(long **)(param_1 + 0x68) + 0x70))();
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x70) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x70) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x78) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x78) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x80) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x80) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x88) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x88) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x90) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x90) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x98) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x98) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0xa0) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0xa8) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0xb0) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0xb8) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0xc0) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 200) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 200) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0xd0) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0xd8) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0xd8) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0xe0) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0xe8) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0xe8) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0xf0) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0xf8) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0xf8) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x100) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x100) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x108) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x108) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x110) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x110) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x118) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x118) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x120) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x120) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x128) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x128) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x130) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x130) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x138) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x138) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x140) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x140) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x148) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x148) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x150) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x150) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x158) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x158) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x160) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x160) + 0x70))(), (uVar8 & 1) == 0)) {
        return 0;
      }
      *(int *)(param_1 + 0xf70) = *(int *)(param_1 + 0xf70) + 1;
      break;
    case 2:
      break;
    case 3:
      goto switchD_00f2b27c_caseD_3;
    }
    puVar4 = PTR_DAT_0271f698;
    puVar3 = PTR_DAT_0271f690;
    local_b0 = (long *)(lVar17 + 0xb0);
    uVar8 = 0;
LAB_00f2b780:
    snprintf((char *)&local_90,0x20,"%s%s%02d",*(char **)(param_1 + 0xf80),"_kinoko_light_",
             (int)uVar8);
    uVar20 = 0xcbf29ce484222645;
    if (local_90 != 0) {
      uVar20 = 0xcbf29ce484222645;
      pbVar10 = (byte *)((ulong)&local_90 | 1);
      bVar2 = local_90;
      do {
        uVar20 = (uVar20 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar2 != 0);
    }
    plVar19 = *(long **)(lVar17 + 0xb8);
    for (plVar18 = (long *)*local_b0; plVar18 != plVar19; plVar18 = plVar18 + 1) {
      lVar16 = *plVar18;
      plVar6 = (long *)(*(code *)**(undefined8 **)(lVar16 + 0x50))((undefined8 *)(lVar16 + 0x50));
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
        uVar13 = FUN_00a8c480();
        *(undefined8 *)puVar4 = uVar13;
        __cxa_guard_release(puVar3);
      }
      for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)puVar4) {
          if ((*(ulong *)(lVar16 + 0x1a0) == uVar20) &&
             (uVar7 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar7 & 1) == 0)) {
            if (*(long *)(param_1 + uVar8 * 8 + 0x68) == 0) goto LAB_00f2b8cc;
            *(long *)(param_1 + uVar8 * 0x70 + 0x170) = lVar16;
            *(uint *)(lVar16 + 0x37c) = *(uint *)(lVar16 + 0x37c) & 0xfffffffe;
            uVar8 = uVar8 + 1;
            if (uVar8 < 0x20) goto LAB_00f2b780;
            goto LAB_00f2b8cc;
          }
          break;
        }
      }
    }
LAB_00f2b8cc:
    if (*(long **)(param_1 + 0x170) == (long *)0x0) {
      return 0;
    }
    uVar8 = (**(code **)(**(long **)(param_1 + 0x170) + 0x70))();
    if ((((((((uVar8 & 1) != 0) &&
            ((*(long **)(param_1 + 0x1e0) == (long *)0x0 ||
             (uVar8 = (**(code **)(**(long **)(param_1 + 0x1e0) + 0x70))(), (uVar8 & 1) != 0)))) &&
           ((*(long **)(param_1 + 0x250) == (long *)0x0 ||
            (uVar8 = (**(code **)(**(long **)(param_1 + 0x250) + 0x70))(), (uVar8 & 1) != 0)))) &&
          ((((*(long **)(param_1 + 0x2c0) == (long *)0x0 ||
             (uVar8 = (**(code **)(**(long **)(param_1 + 0x2c0) + 0x70))(), (uVar8 & 1) != 0)) &&
            ((*(long **)(param_1 + 0x330) == (long *)0x0 ||
             (uVar8 = (**(code **)(**(long **)(param_1 + 0x330) + 0x70))(), (uVar8 & 1) != 0)))) &&
           ((*(long **)(param_1 + 0x3a0) == (long *)0x0 ||
            (uVar8 = (**(code **)(**(long **)(param_1 + 0x3a0) + 0x70))(), (uVar8 & 1) != 0)))))) &&
         ((*(long **)(param_1 + 0x410) == (long *)0x0 ||
          (uVar8 = (**(code **)(**(long **)(param_1 + 0x410) + 0x70))(), (uVar8 & 1) != 0)))) &&
        (((((*(long **)(param_1 + 0x480) == (long *)0x0 ||
            (uVar8 = (**(code **)(**(long **)(param_1 + 0x480) + 0x70))(), (uVar8 & 1) != 0)) &&
           ((*(long **)(param_1 + 0x4f0) == (long *)0x0 ||
            (uVar8 = (**(code **)(**(long **)(param_1 + 0x4f0) + 0x70))(), (uVar8 & 1) != 0)))) &&
          ((((*(long **)(param_1 + 0x560) == (long *)0x0 ||
             (uVar8 = (**(code **)(**(long **)(param_1 + 0x560) + 0x70))(), (uVar8 & 1) != 0)) &&
            ((*(long **)(param_1 + 0x5d0) == (long *)0x0 ||
             (uVar8 = (**(code **)(**(long **)(param_1 + 0x5d0) + 0x70))(), (uVar8 & 1) != 0)))) &&
           ((((*(long **)(param_1 + 0x640) == (long *)0x0 ||
              (uVar8 = (**(code **)(**(long **)(param_1 + 0x640) + 0x70))(), (uVar8 & 1) != 0)) &&
             ((*(long **)(param_1 + 0x6b0) == (long *)0x0 ||
              (uVar8 = (**(code **)(**(long **)(param_1 + 0x6b0) + 0x70))(), (uVar8 & 1) != 0)))) &&
            ((*(long **)(param_1 + 0x720) == (long *)0x0 ||
             (uVar8 = (**(code **)(**(long **)(param_1 + 0x720) + 0x70))(), (uVar8 & 1) != 0))))))))
         && ((*(long **)(param_1 + 0x790) == (long *)0x0 ||
             (uVar8 = (**(code **)(**(long **)(param_1 + 0x790) + 0x70))(), (uVar8 & 1) != 0))))))
       && ((((((((((*(long **)(param_1 + 0x800) == (long *)0x0 ||
                   (uVar8 = (**(code **)(**(long **)(param_1 + 0x800) + 0x70))(), (uVar8 & 1) != 0))
                  && ((*(long **)(param_1 + 0x870) == (long *)0x0 ||
                      (uVar8 = (**(code **)(**(long **)(param_1 + 0x870) + 0x70))(),
                      (uVar8 & 1) != 0)))) &&
                 ((*(long **)(param_1 + 0x8e0) == (long *)0x0 ||
                  (uVar8 = (**(code **)(**(long **)(param_1 + 0x8e0) + 0x70))(), (uVar8 & 1) != 0)))
                 ) && ((*(long **)(param_1 + 0x950) == (long *)0x0 ||
                       (uVar8 = (**(code **)(**(long **)(param_1 + 0x950) + 0x70))(),
                       (uVar8 & 1) != 0)))) &&
               (((*(long **)(param_1 + 0x9c0) == (long *)0x0 ||
                 (uVar8 = (**(code **)(**(long **)(param_1 + 0x9c0) + 0x70))(), (uVar8 & 1) != 0))
                && ((*(long **)(param_1 + 0xa30) == (long *)0x0 ||
                    (uVar8 = (**(code **)(**(long **)(param_1 + 0xa30) + 0x70))(), (uVar8 & 1) != 0)
                    ))))) &&
              ((((*(long **)(param_1 + 0xaa0) == (long *)0x0 ||
                 (uVar8 = (**(code **)(**(long **)(param_1 + 0xaa0) + 0x70))(), (uVar8 & 1) != 0))
                && ((*(long **)(param_1 + 0xb10) == (long *)0x0 ||
                    (uVar8 = (**(code **)(**(long **)(param_1 + 0xb10) + 0x70))(), (uVar8 & 1) != 0)
                    ))) &&
               ((((*(long **)(param_1 + 0xb80) == (long *)0x0 ||
                  (uVar8 = (**(code **)(**(long **)(param_1 + 0xb80) + 0x70))(), (uVar8 & 1) != 0))
                 && ((*(long **)(param_1 + 0xbf0) == (long *)0x0 ||
                     (uVar8 = (**(code **)(**(long **)(param_1 + 0xbf0) + 0x70))(), (uVar8 & 1) != 0
                     )))) &&
                (((*(long **)(param_1 + 0xc60) == (long *)0x0 ||
                  (uVar8 = (**(code **)(**(long **)(param_1 + 0xc60) + 0x70))(), (uVar8 & 1) != 0))
                 && ((*(long **)(param_1 + 0xcd0) == (long *)0x0 ||
                     (uVar8 = (**(code **)(**(long **)(param_1 + 0xcd0) + 0x70))(), (uVar8 & 1) != 0
                     )))))))))) &&
             ((((*(long **)(param_1 + 0xd40) == (long *)0x0 ||
                (uVar8 = (**(code **)(**(long **)(param_1 + 0xd40) + 0x70))(), (uVar8 & 1) != 0)) &&
               ((*(long **)(param_1 + 0xdb0) == (long *)0x0 ||
                (uVar8 = (**(code **)(**(long **)(param_1 + 0xdb0) + 0x70))(), (uVar8 & 1) != 0))))
              && ((*(long **)(param_1 + 0xe20) == (long *)0x0 ||
                  (uVar8 = (**(code **)(**(long **)(param_1 + 0xe20) + 0x70))(), (uVar8 & 1) != 0)))
              ))) && ((*(long **)(param_1 + 0xe90) == (long *)0x0 ||
                      (uVar8 = (**(code **)(**(long **)(param_1 + 0xe90) + 0x70))(),
                      (uVar8 & 1) != 0)))) &&
           ((*(long **)(param_1 + 0xf00) == (long *)0x0 ||
            (uVar8 = (**(code **)(**(long **)(param_1 + 0xf00) + 0x70))(), (uVar8 & 1) != 0)))))) {
      lVar17 = 0;
      uVar8 = 0;
      do {
        lVar16 = param_1 + uVar8 * 8;
        lVar11 = *(long *)(lVar16 + 0x68);
        if (lVar11 == 0) break;
        lVar1 = param_1 + lVar17;
        lVar9 = *(long *)(lVar1 + 0x170);
        if (lVar9 == 0) break;
        *(undefined8 *)(lVar11 + 0x568) = *(undefined8 *)(lVar1 + 0x178);
        uVar13 = *(undefined8 *)(lVar1 + 0x188);
        *(undefined8 *)(lVar11 + 0x588) = *(undefined8 *)(lVar1 + 0x198);
        *(undefined8 *)(lVar11 + 0x578) = uVar13;
        uVar13 = *(undefined8 *)(lVar1 + 0x1a8);
        *(undefined8 *)(lVar11 + 0x5a8) = *(undefined8 *)(lVar1 + 0x1b8);
        *(undefined8 *)(lVar11 + 0x598) = uVar13;
        uVar13 = *(undefined8 *)(lVar1 + 0x170);
        *(undefined8 *)(lVar11 + 0x570) = *(undefined8 *)(lVar1 + 0x180);
        *(undefined8 *)(lVar11 + 0x560) = uVar13;
        uVar13 = *(undefined8 *)(lVar1 + 400);
        *(undefined8 *)(lVar11 + 0x590) = *(undefined8 *)(lVar1 + 0x1a0);
        *(undefined8 *)(lVar11 + 0x580) = uVar13;
        uVar13 = *(undefined8 *)(lVar1 + 0x1b0);
        *(undefined8 *)(lVar11 + 0x5b0) = *(undefined8 *)(lVar1 + 0x1c0);
        *(undefined8 *)(lVar11 + 0x5a0) = uVar13;
        if (*(char *)(lVar1 + 0x1d0) == '\0') {
          *(undefined4 *)(lVar1 + 0x178) = *(undefined4 *)(lVar9 + 0xd0);
          FUN_00f2bf50(param_1,uVar8 & 0xffffffff);
          *(undefined8 *)(lVar1 + 0x188) = extraout_var_00;
          *(ulong *)(lVar1 + 0x180) = CONCAT44(extraout_var,extraout_s0);
          *(undefined8 *)(lVar1 + 0x1a0) = *(undefined8 *)(lVar1 + 0x180);
          *(undefined8 *)(lVar1 + 0x1a8) = *(undefined8 *)(lVar1 + 0x188);
          uVar21 = FUN_00f2c070(param_1,uVar8 & 0xffffffff);
          *(undefined4 *)(lVar1 + 400) = uVar21;
          uVar21 = FUN_00f2c190(param_1,uVar8 & 0xffffffff);
          *(undefined4 *)(lVar1 + 0x194) = uVar21;
          uVar21 = FUN_00f2c2b0(param_1,uVar8 & 0xffffffff);
          *(undefined4 *)(lVar1 + 0x198) = uVar21;
          uVar13 = *(undefined8 *)(lVar1 + 0x188);
          *(undefined8 *)(lVar11 + 0x588) = *(undefined8 *)(lVar1 + 0x198);
          uVar12 = *(undefined8 *)(lVar1 + 400);
          *(undefined8 *)(lVar11 + 0x590) = *(undefined8 *)(lVar1 + 0x1a0);
          *(undefined8 *)(lVar11 + 0x580) = uVar12;
          uVar12 = *(undefined8 *)(lVar1 + 0x1a8);
          *(undefined8 *)(lVar11 + 0x5a8) = *(undefined8 *)(lVar1 + 0x1b8);
          uVar14 = *(undefined8 *)(lVar1 + 0x1b0);
          *(undefined8 *)(lVar11 + 0x5b0) = *(undefined8 *)(lVar1 + 0x1c0);
          *(undefined8 *)(lVar11 + 0x598) = uVar12;
          *(undefined8 *)(lVar11 + 0x5a0) = uVar14;
          *(undefined8 *)(lVar11 + 0x568) = *(undefined8 *)(lVar1 + 0x178);
          *(undefined8 *)(lVar11 + 0x578) = uVar13;
          uVar13 = *(undefined8 *)(lVar1 + 0x170);
          *(undefined8 *)(lVar11 + 0x570) = *(undefined8 *)(lVar1 + 0x180);
          *(undefined8 *)(lVar11 + 0x560) = uVar13;
          lVar11 = *(long *)(lVar16 + 0x68);
          lVar16 = param_1 + uVar8 * 0x70;
        }
        else {
          *(undefined8 *)(lVar11 + 0x568) = *(undefined8 *)(lVar1 + 0x178);
          uVar13 = *(undefined8 *)(lVar1 + 0x188);
          *(undefined8 *)(lVar11 + 0x588) = *(undefined8 *)(lVar1 + 0x198);
          *(undefined8 *)(lVar11 + 0x578) = uVar13;
          uVar13 = *(undefined8 *)(lVar1 + 0x1a8);
          *(undefined8 *)(lVar11 + 0x5a8) = *(undefined8 *)(lVar1 + 0x1b8);
          *(undefined8 *)(lVar11 + 0x598) = uVar13;
          uVar13 = *(undefined8 *)(lVar1 + 0x170);
          *(undefined8 *)(lVar11 + 0x570) = *(undefined8 *)(lVar1 + 0x180);
          *(undefined8 *)(lVar11 + 0x560) = uVar13;
          uVar13 = *(undefined8 *)(lVar1 + 400);
          *(undefined8 *)(lVar11 + 0x590) = *(undefined8 *)(lVar1 + 0x1a0);
          *(undefined8 *)(lVar11 + 0x580) = uVar13;
          uVar13 = *(undefined8 *)(lVar1 + 0x1b0);
          *(undefined8 *)(lVar11 + 0x5b0) = *(undefined8 *)(lVar1 + 0x1c0);
          *(undefined8 *)(lVar11 + 0x5a0) = uVar13;
          lVar11 = *(long *)(lVar16 + 0x68);
          lVar16 = lVar1;
        }
        if (lVar11 != 0) {
          lVar11 = *(long *)(lVar11 + 0x560);
          if (lVar11 != 0) {
            uVar22 = *(uint *)(lVar16 + 0x178);
            *(undefined1 *)(lVar11 + 0xc0) = 1;
            *(ulong *)(lVar11 + 0xd8) = (ulong)uVar22;
            *(ulong *)(lVar11 + 0xd0) = CONCAT44(uVar22,uVar22);
          }
        }
        FUN_00f2c3d0(param_1,uVar8 & 0xffffffff,lVar1 + 0x180);
        FUN_00f2c4f0(*(undefined4 *)(lVar1 + 400),param_1,uVar8 & 0xffffffff);
        FUN_00f2c610(*(undefined4 *)(lVar1 + 0x194),param_1,uVar8 & 0xffffffff);
        FUN_00f2c730(*(undefined4 *)(lVar1 + 0x198),param_1,uVar8 & 0xffffffff);
        uVar8 = uVar8 + 1;
        lVar17 = lVar17 + 0x70;
      } while (uVar8 < 0x20);
      *(int *)(param_1 + 0xf70) = *(int *)(param_1 + 0xf70) + 1;
switchD_00f2b27c_caseD_3:
      *(undefined1 *)(param_1 + 0x60) = 1;
      return 1;
    }
  }
  return 0;
}


