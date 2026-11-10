/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7da70; name: FUN_00e7da70
 */


long FUN_00e7da70(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 (*param_4) [16],
                 long *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  long local_78;
  undefined8 local_70;
  ulong uStack_68;
  
  puVar3 = PTR_DAT_027194d8;
  lVar1 = *param_1;
  if (*param_5 != 0) {
    lVar1 = *param_5;
  }
  plVar8 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar15 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar8 == plVar15) {
      plVar14 = (long *)0x0;
LAB_00e7db0c:
      puVar5 = PTR_DAT_02719530;
      puVar4 = PTR_DAT_02719528;
      puVar17 = *(undefined8 **)(*(long *)puVar3 + 0xb0);
      puVar2 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      if (puVar17 != puVar2) {
        do {
          plVar15 = (long *)*puVar17;
          plVar8 = (long *)(**(code **)plVar15[10])(plVar15 + 10);
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
            uVar11 = FUN_015b5410();
            *(undefined8 *)puVar5 = uVar11;
            __cxa_guard_release(puVar4);
          }
          for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            if (plVar8 == (long *)puVar5) {
              uVar7 = (**(code **)(*(long *)*puVar17 + 0x88))();
              if ((uVar7 & 1) == 0) {
                plVar16 = plVar15 + 9;
                (**(code **)(*plVar16 + 0x10))(plVar16);
                plVar8 = *(long **)(*(long *)PTR_DAT_02710540 + 0x68);
                lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
                if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
                *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
                lVar10 = (**(code **)(*plVar8 + 0x10))(plVar8,0x98,8);
                if (lVar10 == 0) {
                  (**(code **)(*plVar8 + 0xb8))(plVar8);
                }
                FUN_00e870e0(lVar10,plVar8);
                *(long **)(lVar10 + 8) = plVar8;
                *(long *)(lVar10 + 0x10) = lVar10;
                *(undefined8 *)(lVar10 + 0x18) = 0x98;
                *(undefined8 *)(lVar10 + 0x20) = 8;
                *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
                if (lVar10 != 0) {
                  (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
                }
                auVar18 = NEON_ext(*param_4,*param_4,8,1);
                local_70 = NEON_rev64(*(undefined8 *)*param_4,4);
                uStack_68 = (ulong)auVar18._0_4_;
                uVar11 = FUN_00e7d770(lVar10,lVar1,0xcbf29ce484222645,0,param_2,&local_70,param_3,
                                      param_1);
                plVar8 = *(long **)PTR_DAT_027194d8;
                lVar12 = FUN_00e7d8e0(plVar8,uVar11);
                (**(code **)(*plVar8 + 0x38))(plVar8,1);
                (**(code **)(*plVar15 + 0x10))(&local_78,plVar15);
                lVar9 = local_78;
                local_78 = 0;
                if (lVar9 != 0) {
                  (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
                }
                lVar13 = *(long *)(lVar12 + 0x628);
                *(long *)(lVar12 + 0x628) = lVar9;
                if (lVar13 != 0) {
                  (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
                }
                *(undefined8 *)(lVar12 + 0x630) = 0;
                if (lVar9 != 0) {
                  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
                }
                if (local_78 != 0) {
                  (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
                  local_78 = 0;
                }
                if (lVar10 != 0) {
                  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
                }
                (**(code **)(*plVar16 + 0x18))(plVar16);
                goto joined_r0x00e7de1c;
              }
              break;
            }
          }
          puVar17 = puVar17 + 1;
        } while (puVar17 != puVar2);
      }
      lVar1 = -0x340d631b7bddd9bb;
joined_r0x00e7de1c:
      if (plVar14 != (long *)0x0) {
        (**(code **)(plVar14[9] + 0x18))(plVar14 + 9);
      }
      return lVar1;
    }
    plVar14 = (long *)*plVar8;
    uVar7 = FUN_01593050(plVar14 + 10);
    if ((((uVar7 & 1) != 0) && (plVar14[0x34] == lVar1)) &&
       (uVar7 = (**(code **)(*(long *)*plVar8 + 0x88))(), (uVar7 & 1) == 0)) {
      (**(code **)(plVar14[9] + 0x10))();
      (**(code **)(*plVar14 + 0x80))(plVar14);
      goto LAB_00e7db0c;
    }
    plVar8 = plVar8 + 1;
  } while( true );
}


