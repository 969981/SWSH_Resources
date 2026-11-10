/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b9890; name: FUN_010b9890
 */


void FUN_010b9890(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long local_48;
  
  uVar7 = FUN_010384a0(*(undefined8 *)(param_1 + 0xa8));
  if ((uVar7 & 1) != 0) {
    iVar6 = FUN_010386e0(*(undefined8 *)(param_1 + 0xa8));
    if (iVar6 == 1) {
      *(undefined4 *)(param_1 + 0x7c) = 1;
      FUN_01038270(*(undefined8 *)(param_1 + 0xa8),1);
      if (*(int *)(param_1 + 0x80) == 0) {
        FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
        lVar10 = *(long *)(param_1 + 0x88);
        FUN_016b2d70(*(undefined8 *)(lVar10 + 0x5f0),1);
        FUN_016b2d70(*(undefined8 *)(lVar10 + 0x5f8),1);
        FUN_016b2d70(*(undefined8 *)(lVar10 + 0x600),*(undefined1 *)(lVar10 + 0x620));
        FUN_016b2d70(*(undefined8 *)(lVar10 + 0x608),1);
        lVar10 = *(long *)(param_1 + 0x88);
        lVar11 = *(long *)PTR_DAT_027108d8;
        FUN_016b2d70(*(undefined8 *)(lVar10 + 0x5e0),*(int *)(lVar11 + 0x11aec) != 0);
        iVar6 = *(int *)(lVar11 + 0x11aec);
        uVar9 = *(undefined8 *)(lVar10 + 0x5e8);
      }
      else {
        FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
        lVar10 = *(long *)(param_1 + 0x90);
        FUN_016b2d70(*(undefined8 *)(lVar10 + 0x1a80),1);
        FUN_016b2d70(*(undefined8 *)(lVar10 + 0x1a88),1);
        FUN_016b2d70(*(undefined8 *)(lVar10 + 0x1a90),1);
        FUN_016b2d70(*(undefined8 *)(lVar10 + 0x1a98),1);
        FUN_016b2d70(*(undefined8 *)(lVar10 + 0x1aa0),1);
        lVar10 = *(long *)(param_1 + 0x90);
        lVar11 = *(long *)PTR_DAT_027108d8;
        FUN_016b2d70(*(undefined8 *)(lVar10 + 0x1a70),*(int *)(lVar11 + 0x11aec) != 0);
        iVar6 = *(int *)(lVar11 + 0x11aec);
        uVar9 = *(undefined8 *)(lVar10 + 0x1a78);
      }
      FUN_016b2d70(uVar9,iVar6 != 0);
      FUN_010bc6f0(param_1,1,1);
      FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),1,1);
      lVar10 = *(long *)(param_1 + 0x88);
      FUN_016b2d70(*(undefined8 *)(lVar10 + 0x5f0),1);
      FUN_016b2d70(*(undefined8 *)(lVar10 + 0x5f8),1);
      FUN_016b2d70(*(undefined8 *)(lVar10 + 0x600),*(undefined1 *)(lVar10 + 0x620));
      FUN_016b2d70(*(undefined8 *)(lVar10 + 0x608),1);
    }
    else if (iVar6 == 0) {
      FUN_010bc320(param_1,0x30b9fd570c93d56d,0,1,0,0);
      puVar5 = PTR_DAT_02710880;
      *(undefined4 *)(param_1 + 0x7c) = 9;
      uVar9 = *(undefined8 *)(*(long *)puVar5 + 0xc0);
      iVar6 = FUN_01196cf0(uVar9);
      if (iVar6 == 1) {
        (**(code **)(**(long **)(*(long *)PTR_DAT_02710798 + 0x1d0) + 0x10))(&local_48);
        if ((local_48 == 0) || (*(int *)(local_48 + 0x54) == 0)) {
          plVar13 = (long *)0x0;
        }
        else {
          piVar1 = (int *)(local_48 + 0x54);
          iVar6 = *(int *)(local_48 + 0x54);
          while( true ) {
            plVar12 = *(long **)(local_48 + 0x58);
            plVar8 = (long *)FUN_00d8bd10();
            plVar13 = (long *)0x0;
            if (plVar12 == (long *)0x0) break;
            while (plVar12 != plVar8) {
              plVar12 = (long *)*plVar12;
              if (plVar12 == (long *)0x0) {
                plVar13 = (long *)0x0;
                goto LAB_010b9b1c;
              }
            }
            iVar2 = *piVar1;
            if (iVar2 == iVar6) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar6 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                plVar13 = (long *)0x0;
                if (*(long *)(local_48 + 0x60) != 0) {
                  plVar13 = (long *)(*(long *)(local_48 + 0x60) + -0x50);
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            plVar13 = (long *)0x0;
            iVar6 = iVar2;
            if (iVar2 == 0) break;
          }
        }
LAB_010b9b1c:
        (**(code **)(*plVar13 + 0x38))(plVar13);
        if (plVar13 != (long *)0x0) {
          (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
        }
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))((long *)(local_48 + 0x48));
        }
      }
      FUN_01196ce0(uVar9,0,0);
    }
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),1,1);
  }
  return;
}


