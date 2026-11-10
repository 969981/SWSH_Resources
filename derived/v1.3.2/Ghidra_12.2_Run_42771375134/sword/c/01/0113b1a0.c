/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0113b1a0; name: FUN_0113b1a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0113b1a0(long param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_58;
  long local_48;
  
  if (*(long *)(param_1 + 0x368) != 0) {
    puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
    plVar9 = (long *)(**(code **)*puVar12)(puVar12);
    if (((*PTR_DAT_02717528 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_02717528), iVar8 != 0)) {
      uVar11 = FUN_00b8c810();
      *(undefined8 *)PTR_DAT_02717530 = uVar11;
      __cxa_guard_release(PTR_DAT_02717528);
    }
    for (; plVar9 != (long *)PTR_DAT_02717530; plVar9 = (long *)*plVar9) {
    }
    FUN_00ff86a0(&local_48,*(undefined8 *)(puVar12[0x9f] + 0xb0),0);
    lVar13 = *(long *)(local_48 + 0x60);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    lVar15 = *(long *)(*(long *)(param_1 + 0x368) + 0x2b0);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    lVar14 = *(long *)(lVar15 + 0x2e8);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    lVar15 = *(long *)(param_1 + 0xa0);
    cVar5 = DAT_00000068;
    if ((lVar15 != 0) && (*(int *)(lVar15 + 0x54) != 0)) {
      piVar1 = (int *)(lVar15 + 0x54);
      iVar8 = *(int *)(lVar15 + 0x54);
      do {
        while( true ) {
          uVar10 = FUN_01136750(*(undefined8 *)(lVar15 + 0x58));
          cVar5 = DAT_00000068;
          if ((uVar10 & 1) == 0) goto joined_r0x0113b308;
          iVar3 = *piVar1;
          if (iVar3 != iVar8) break;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          cVar5 = DAT_00000068;
          if (cVar4 == '\0') {
            lVar15 = *(long *)(lVar15 + 0x60);
            if (lVar15 != 0) {
              cVar5 = *(char *)(lVar15 + 0x18);
              (**(code **)(*(long *)(lVar15 + -8) + 0x18))();
            }
            goto joined_r0x0113b308;
          }
          iVar8 = iVar3;
          if (iVar3 == 0) goto joined_r0x0113b308;
        }
        ClearExclusiveLocal();
        iVar8 = iVar3;
      } while (iVar3 != 0);
    }
joined_r0x0113b308:
    if (cVar5 == '\0') {
      local_48 = -0x67a2085e55d3f937;
      FUN_0077eb10(lVar13,&local_48,lVar14);
      if (*(long *)(param_1 + 0x88) == 0) {
        local_48 = 0;
      }
      else {
        FUN_0112c100(&local_48);
      }
      FUN_01144fb0(local_48);
    }
    else {
      local_48 = -0x67a2095e55d3faea;
      FUN_0077eb10(lVar13,&local_48,lVar14);
      if (*(long *)(param_1 + 0x88) == 0) {
        local_48 = 0;
        lVar15 = *(long *)(param_1 + 0xa0);
        lVar7 = local_48;
      }
      else {
        FUN_0112c100(&local_48);
        lVar15 = *(long *)(param_1 + 0xa0);
        lVar7 = local_48;
      }
      local_48 = lVar7;
      if (lVar15 == 0) {
        FUN_01144fa0(lVar7,_DAT_0000006c);
      }
      else {
        if (*(int *)(lVar15 + 0x54) != 0) {
          piVar1 = (int *)(lVar15 + 0x54);
          iVar8 = *(int *)(lVar15 + 0x54);
          do {
            while( true ) {
              uVar10 = FUN_01136750(*(undefined8 *)(lVar15 + 0x58));
              if ((uVar10 & 1) == 0) goto LAB_0113b3dc;
              iVar3 = *piVar1;
              if (iVar3 != iVar8) break;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar8 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                lVar2 = 0;
                if (*(long *)(lVar15 + 0x60) != 0) {
                  lVar2 = *(long *)(lVar15 + 0x60) + -0x50;
                }
                FUN_01144fa0(lVar7,*(undefined4 *)(lVar2 + 0x6c));
                if (lVar2 != 0) {
                  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
                }
                goto joined_r0x0113b428;
              }
              iVar8 = iVar3;
              if (iVar3 == 0) goto LAB_0113b3dc;
            }
            ClearExclusiveLocal();
            iVar8 = iVar3;
          } while (iVar3 != 0);
        }
LAB_0113b3dc:
        FUN_01144fa0(lVar7,_DAT_0000006c);
      }
    }
joined_r0x0113b428:
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    FUN_01036e20(*(undefined8 *)(param_1 + 0x368));
    uVar11 = *(undefined8 *)(param_1 + 0x368);
    local_58 = lVar14;
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    FUN_01036db0(uVar11,0,4,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
  }
  return;
}


