/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0136b920; name: FUN_0136b920
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0136b920(long param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  long *plVar13;
  undefined *puVar14;
  byte *pbVar15;
  long lVar16;
  float fVar17;
  long local_38;
  
  uVar8 = FUN_012e49d0(param_2);
  if ((((uVar8 & 1) == 0) && (uVar8 = FUN_012e8ab0(param_2), (uVar8 & 1) == 0)) &&
     (fVar17 = *(float *)(param_3 + 0x10) + DAT_01d4bfc8, bVar3 = DAT_01d4c184 <= fVar17,
     *(float *)(param_3 + 0x10) = fVar17, bVar3)) {
    *(undefined1 *)(param_3 + 0xc) = 0;
    uVar4 = FUN_012e8740(param_2);
    puVar9 = (undefined8 *)FUN_012e3520(param_2);
    uVar8 = FUN_012ba250(*puVar9,~uVar4 & 1);
    puVar14 = PTR_DAT_02727750;
    if ((uVar8 & 1) != 0) {
      lVar11 = *(long *)PTR_DAT_02727748;
      if (lVar11 == 0) {
LAB_0136badc:
        lVar16 = 0;
        uVar8 = FUN_0130a240(0);
      }
      else {
        if (*(int *)(lVar11 + 0x54) != 0) {
          piVar1 = (int *)(lVar11 + 0x54);
          puVar12 = PTR_DAT_02727758;
          iVar6 = *(int *)(lVar11 + 0x54);
          do {
            plVar13 = *(long **)(lVar11 + 0x58);
            if ((*puVar14 & 1) == 0) {
              iVar5 = __cxa_guard_acquire(puVar14);
              puVar12 = PTR_DAT_02727758;
              if (iVar5 != 0) {
                if (((*PTR_DAT_0271df20 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar5 != 0)) {
                  uVar10 = FUN_00d3ff90();
                  *(undefined8 *)PTR_DAT_0271df28 = uVar10;
                  __cxa_guard_release(PTR_DAT_0271df20);
                }
                puVar12 = PTR_DAT_02727758;
                *(undefined **)PTR_DAT_02727758 = PTR_DAT_0271df28;
                __cxa_guard_release(puVar14);
              }
            }
            while( true ) {
              if (plVar13 == (long *)0x0) goto LAB_0136badc;
              if (plVar13 == (long *)puVar12) break;
              plVar13 = (long *)*plVar13;
            }
            iVar5 = *piVar1;
            if (iVar5 == iVar6) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar16 = 0;
                if (*(long *)(lVar11 + 0x60) != 0) {
                  lVar16 = *(long *)(lVar11 + 0x60) + -0x50;
                }
                uVar8 = FUN_0130a240(lVar16);
                goto joined_r0x0136bae8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar6 = iVar5;
          } while (iVar5 != 0);
        }
        lVar16 = 0;
        uVar8 = FUN_0130a240(0);
      }
joined_r0x0136bae8:
      lVar11 = local_38;
      if ((uVar8 & 1) != 0) {
        iVar6 = FUN_0136cbd0(*(undefined8 *)(param_1 + 0x138));
        lVar11 = local_38;
        if (iVar6 != 0) {
          lVar11 = *(long *)(lVar16 + 0x68);
          if ((lVar11 != 0) && (*(int *)(lVar11 + 0x54) != 0)) {
            piVar1 = (int *)(lVar11 + 0x54);
            puVar14 = PTR_DAT_02715080;
            pbVar15 = PTR_DAT_02715078;
            iVar5 = *(int *)(lVar11 + 0x54);
            do {
              plVar13 = *(long **)(lVar11 + 0x58);
              if ((*pbVar15 & 1) == 0) {
                iVar7 = __cxa_guard_acquire(PTR_DAT_02715078);
                pbVar15 = PTR_DAT_02715078;
                puVar14 = PTR_DAT_02715080;
                if (iVar7 != 0) {
                  uVar10 = FUN_00a87090();
                  *(undefined8 *)PTR_DAT_02715080 = uVar10;
                  __cxa_guard_release(PTR_DAT_02715078);
                  pbVar15 = PTR_DAT_02715078;
                  puVar14 = PTR_DAT_02715080;
                }
              }
              while( true ) {
                if (plVar13 == (long *)0x0) goto LAB_0136bbe4;
                if (plVar13 == (long *)puVar14) break;
                plVar13 = (long *)*plVar13;
              }
              iVar7 = *piVar1;
              if (iVar7 == iVar5) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar5 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  local_38 = 0;
                  if (*(long *)(lVar11 + 0x60) != 0) {
                    local_38 = *(long *)(lVar11 + 0x60) + -0x50;
                  }
                  goto LAB_0136bbe8;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar5 = iVar7;
            } while (iVar7 != 0);
          }
LAB_0136bbe4:
          local_38 = 0;
LAB_0136bbe8:
          FUN_012e8c60(param_2,&local_38,iVar6);
          lVar11 = 0;
          if (local_38 != 0) {
            (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
            local_38 = 0;
            lVar11 = local_38;
          }
        }
      }
      local_38 = lVar11;
      if (lVar16 != 0) {
        (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
      }
    }
  }
  return;
}


