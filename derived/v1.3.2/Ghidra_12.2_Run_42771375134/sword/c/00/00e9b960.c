/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9b960; name: FUN_00e9b960
 */


void FUN_00e9b960(long param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  
  if (*(char *)(param_1 + 0x644) == '\0') {
    return;
  }
  lVar10 = *(long *)(param_1 + 0x588);
  if (lVar10 == 0) {
LAB_00e9ba0c:
    lVar11 = 0;
  }
  else {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))((long *)(lVar10 + 0x48));
    if (*(int *)(lVar10 + 0x54) == 0) goto LAB_00e9ba0c;
    piVar1 = (int *)(lVar10 + 0x54);
    iVar6 = *(int *)(lVar10 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar10 + 0x58);
        plVar7 = (long *)FUN_0156b190();
        lVar11 = 0;
        if (plVar12 == (long *)0x0) goto LAB_00e9ba10;
        while (plVar12 != plVar7) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) {
            lVar11 = 0;
            goto LAB_00e9ba10;
          }
        }
        iVar3 = *piVar1;
        if (iVar3 != iVar6) break;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar11 = 0;
          if (*(long *)(lVar10 + 0x60) != 0) {
            lVar11 = *(long *)(lVar10 + 0x60) + -0x50;
          }
          goto LAB_00e9ba10;
        }
        lVar11 = 0;
        iVar6 = iVar3;
        if (iVar3 == 0) goto LAB_00e9ba10;
      }
      ClearExclusiveLocal();
      lVar11 = 0;
      iVar6 = iVar3;
    } while (iVar3 != 0);
  }
LAB_00e9ba10:
  plVar7 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x50))();
  if (((*PTR_DAT_0271ecf8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0271ecf8), iVar6 != 0))
  {
    uVar9 = FUN_0156b190();
    *(undefined8 *)PTR_DAT_0271ed00 = uVar9;
    __cxa_guard_release(PTR_DAT_0271ecf8);
  }
  for (; plVar7 != (long *)PTR_DAT_0271ed00; plVar7 = (long *)*plVar7) {
  }
  uVar2 = *(uint *)(lVar11 + 0x4d8);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  if ((float)uVar2 <= *(float *)(param_1 + 0x678)) {
    return;
  }
  *(float *)(param_1 + 0x678) = *(float *)(param_1 + 0x678) + *(float *)(param_1 + 0x67c);
  if (*(char *)(param_1 + 0x680) == '\0') {
    lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    FUN_01511210(lVar11,0x6da5083557f29628,(int)*(float *)(param_1 + 0x678));
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
  }
  if (*(float *)(param_1 + 0x678) < (float)uVar2) {
    return;
  }
  uVar8 = FUN_00e46320(param_1);
  if ((uVar8 & 1) == 0) {
    return;
  }
  lVar10 = *(long *)(param_1 + 0x588);
  if (lVar10 == 0) {
LAB_00e9bbbc:
    lVar11 = 0;
  }
  else {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))((long *)(lVar10 + 0x48));
    if (*(int *)(lVar10 + 0x54) == 0) goto LAB_00e9bbbc;
    piVar1 = (int *)(lVar10 + 0x54);
    iVar6 = *(int *)(lVar10 + 0x54);
    while( true ) {
      plVar12 = *(long **)(lVar10 + 0x58);
      plVar7 = (long *)FUN_0156b190();
      lVar11 = 0;
      if (plVar12 == (long *)0x0) break;
      while (plVar12 != plVar7) {
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) {
          lVar11 = 0;
          goto LAB_00e9bbc0;
        }
      }
      iVar3 = *piVar1;
      if (iVar3 == iVar6) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar11 = 0;
          if (*(long *)(lVar10 + 0x60) != 0) {
            lVar11 = *(long *)(lVar10 + 0x60) + -0x50;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      lVar11 = 0;
      iVar6 = iVar3;
      if (iVar3 == 0) break;
    }
  }
LAB_00e9bbc0:
  local_60 = 0xe2cf8b19888d9026;
  FUN_00dc04c0(lVar11,&local_60,1,0,0);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  lVar10 = *(long *)(param_1 + 0x588);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))((long *)(lVar10 + 0x48));
    if (*(int *)(lVar10 + 0x54) != 0) {
      piVar1 = (int *)(lVar10 + 0x54);
      iVar6 = *(int *)(lVar10 + 0x54);
      while( true ) {
        plVar12 = *(long **)(lVar10 + 0x58);
        plVar7 = (long *)FUN_0156b190();
        lVar11 = 0;
        if (plVar12 == (long *)0x0) break;
        while (plVar12 != plVar7) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) {
            lVar11 = 0;
            goto LAB_00e9bc90;
          }
        }
        iVar3 = *piVar1;
        if (iVar3 == iVar6) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar6 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar11 = 0;
            if (*(long *)(lVar10 + 0x60) != 0) {
              lVar11 = *(long *)(lVar10 + 0x60) + -0x50;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        lVar11 = 0;
        iVar6 = iVar3;
        if (iVar3 == 0) break;
      }
      goto LAB_00e9bc90;
    }
  }
  lVar11 = 0;
LAB_00e9bc90:
  local_60 = 0x73e9feb1a72e2f94;
  FUN_00dc04c0(lVar11,&local_60,1,0,0);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  local_60 = 0xff7d42cbd1340445;
  local_58 = "Play_PL_Foley_Bicycle_Charged";
  local_50 = 0x1d;
  local_48 = 0;
  FUN_00db42e0(param_1,&local_60,1);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


