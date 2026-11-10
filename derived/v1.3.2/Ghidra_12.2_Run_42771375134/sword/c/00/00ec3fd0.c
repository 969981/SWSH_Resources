/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec3fd0; name: FUN_00ec3fd0
 */


void FUN_00ec3fd0(void)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  ulong *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  
  puVar6 = PTR_DAT_0271fb10;
  puVar5 = PTR_DAT_0271fb08;
  puVar4 = PTR_DAT_02710848;
  puVar3 = PTR_DAT_02710798;
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar1 == plVar2) {
      return;
    }
    if (((*(byte *)(*plVar1 + 0x38c) >> 6 & 1) != 0) &&
       (uVar10 = (**(code **)(*(long *)*plVar1 + 0x88))(), (uVar10 & 1) == 0)) {
      plVar14 = (long *)*plVar1;
      plVar11 = (long *)(**(code **)plVar14[10])(plVar14 + 10);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        uVar9 = FUN_00ec9d20();
        *(undefined8 *)puVar6 = uVar9;
        __cxa_guard_release(puVar5);
      }
      for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        if (plVar11 == (long *)puVar6) {
          local_68 = plVar14[0x31];
          if ((local_68 != -0x340d631b7bddd9bb) &&
             (uVar10 = (**(code **)(*plVar14 + 0x178))(), (uVar10 & 1) != 0)) {
            lVar15 = *(long *)(*(long *)puVar4 + 0x90);
            if (lVar15 != 0) {
              (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
            }
            lVar13 = *(long *)(*(long *)puVar3 + 0x1b8);
            if (lVar13 != 0) {
              (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
            }
            if (lVar15 != 0) {
              (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
            }
            iVar8 = FUN_015114c0(lVar13,plVar14[0x7c]);
            if (iVar8 == (int)plVar14[0x7d]) {
              local_70 = *(long *)(*(long *)puVar4 + 0xb8);
              if (local_70 != 0) {
                (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
              }
              local_78 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
              local_98 = local_98 & 0xffffffff00000000;
              lVar15 = FUN_01563020(&local_a0,local_78,&local_78,&local_70,&local_98);
              if (lVar15 != 0) {
                (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
              }
              lVar16 = *(long *)(local_70 + 0x1c8);
              if (lVar16 != 0) {
                (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
              }
              puVar12 = (ulong *)FUN_01564580(lVar16,&local_68);
              local_98 = *puVar12;
              local_90 = puVar12[1];
              local_88 = puVar12[2];
              local_80 = puVar12[3];
              if (local_80 != 0) {
                (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
              }
              if (lVar16 != 0) {
                (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
              }
              lVar16 = *(long *)(local_70 + 0x1c0);
              if (lVar16 != 0) {
                (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
              }
              FUN_015a9ef0(&local_a0,lVar16,&local_98);
              lVar7 = local_a0;
              if (local_a0 != 0) {
                (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
                local_a0 = 0;
              }
              if (lVar16 != 0) {
                (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
              }
              if (lVar7 != 0) {
                FUN_0010d170(&local_a0,local_90);
                FUN_015633c0(lVar15,&local_a0);
                if (local_a0 != 0) {
                  (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
                  local_a0 = 0;
                }
                FUN_01563500(lVar15,local_68);
              }
              if (local_80 != 0) {
                (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
                local_80 = 0;
              }
              if (lVar15 != 0) {
                (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
              }
              if (local_70 != 0) {
                (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
                local_70 = 0;
              }
            }
            if (lVar13 != 0) {
              (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
            }
          }
          break;
        }
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


