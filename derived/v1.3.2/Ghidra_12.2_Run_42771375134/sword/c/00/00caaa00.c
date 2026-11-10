/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00caaa00; name: FUN_00caaa00
 */


void FUN_00caaa00(undefined8 param_1,long *param_2,long param_3,uint param_4)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  long local_80;
  undefined1 local_78 [16];
  long local_68;
  
  puVar7 = PTR_DAT_0271c2b8;
  if (param_4 != 0) {
    uVar16 = 0;
    do {
      plVar2 = (long *)(param_3 + uVar16 * 0x10);
      lVar15 = *plVar2;
      if (lVar15 != 0) {
        plVar14 = (long *)(lVar15 + 0x48);
        (**(code **)(*plVar14 + 0x10))(plVar14);
        piVar1 = (int *)(lVar15 + 0x54);
        if (*piVar1 != 0) {
          lVar3 = param_2[1];
          for (lVar10 = *param_2; lVar10 != lVar3; lVar10 = lVar10 + 0x60) {
            if (((*(uint *)(lVar10 + 8) & 0xfffffffe) == 2) && (*(char *)(lVar10 + 0x58) != '\0')) {
              auVar17 = FUN_014a9f30(lVar10 + 0x30);
              local_78 = auVar17;
              (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))(plVar14);
              uVar4 = *(undefined4 *)(lVar10 + 0x44);
              (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))(plVar14);
              FUN_00c896a0(&local_68,lVar15);
              uVar9 = FUN_00c8be20(local_68,local_78,uVar4);
              if (local_68 != 0) {
                (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                local_68 = 0;
              }
              (**(code **)(*plVar14 + 0x18))(plVar14);
              (**(code **)(*plVar14 + 0x18))(plVar14);
              if ((uVar9 & 1) != 0) {
                *(undefined1 *)(lVar10 + 0x58) = 0;
                goto LAB_00caac5c;
              }
            }
          }
          lVar10 = *plVar2;
          *plVar2 = 0;
          if (lVar10 != 0) {
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
          }
          local_80 = lVar15;
          (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))(plVar14);
          iVar8 = *(int *)(lVar15 + 0x54);
          while (iVar12 = iVar8, iVar8 != 0) {
            while( true ) {
              plVar13 = *(long **)(lVar15 + 0x58);
              if ((*PTR_DAT_0271c2b0 & 1) == 0) {
                iVar8 = __cxa_guard_acquire(PTR_DAT_0271c2b0);
                if (iVar8 != 0) {
                  uVar11 = FUN_00c72b60();
                  *(undefined8 *)puVar7 = uVar11;
                  __cxa_guard_release(PTR_DAT_0271c2b0);
                }
              }
              while( true ) {
                if (plVar13 == (long *)0x0) goto LAB_00caac10;
                if (plVar13 == (long *)puVar7) break;
                plVar13 = (long *)*plVar13;
              }
              iVar8 = *piVar1;
              if (iVar8 != iVar12) break;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar12 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                lVar10 = 0;
                if (*(long *)(lVar15 + 0x60) != 0) {
                  lVar10 = *(long *)(lVar15 + 0x60) + -0x50;
                }
                goto LAB_00caac14;
              }
              iVar12 = iVar8;
              if (iVar8 == 0) goto LAB_00caac10;
            }
            ClearExclusiveLocal();
          }
LAB_00caac10:
          lVar10 = 0;
LAB_00caac14:
          FUN_00ca9590(param_1,0,&local_80,*(undefined4 *)(lVar10 + 0x70));
          if (lVar10 != 0) {
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
          }
          if (local_80 != 0) {
            (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
            local_80 = 0;
          }
          *(undefined4 *)(plVar2 + 1) = 0;
        }
LAB_00caac5c:
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != param_4);
  }
  return;
}


