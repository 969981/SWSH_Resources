/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004361b0; name: FUN_004361b0
 */


undefined4 * FUN_004361b0(undefined8 *param_1,undefined2 param_2,int param_3)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_64 [4];
  
  piVar1 = (int *)((long)param_1 + 0x94);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar3 = param_3 + 3U & 0xfffffffc;
  uVar11 = (ulong)uVar3;
  plVar2 = param_1 + 1;
  uVar7 = (ulong)(uVar3 + 4);
  puVar9 = (undefined4 *)param_1[1];
  puVar8 = (undefined4 *)*param_1;
  if (puVar9 < puVar8) goto LAB_0043627c;
LAB_0043620c:
  if (uVar7 < (ulong)(param_1[3] - (long)puVar9)) {
    while ((undefined4 *)*plVar2 == puVar9) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = (long)puVar9 + uVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto joined_r0x004362c8;
    }
  }
  else {
    if ((ulong)((long)puVar8 - param_1[2]) <= uVar7) {
      puVar9 = (undefined4 *)0x0;
LAB_004362cc:
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_004362dc:
      puVar6 = PTR_DAT_02712af0;
      if (puVar9 == (undefined4 *)0x0) {
        uVar7 = (ulong)(uVar3 + 4);
        do {
          if (*(uint *)(param_1 + 4) < uVar3) {
            return (undefined4 *)0x0;
          }
          nn::os::LockMutex((MutexType *)puVar6);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          while( true ) {
            puVar9 = (undefined4 *)param_1[1];
            puVar8 = (undefined4 *)*param_1;
            if (puVar9 < puVar8) goto LAB_004363d4;
            while (uVar7 < (ulong)(param_1[3] - (long)puVar9)) {
              while ((undefined4 *)*plVar2 == puVar9) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = (long)puVar9 + uVar11;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto joined_r0x004363f8;
              }
              while( true ) {
                ClearExclusiveLocal();
                puVar9 = (undefined4 *)param_1[1];
                puVar8 = (undefined4 *)*param_1;
                if (puVar8 <= puVar9) break;
LAB_004363d4:
                if ((ulong)((long)puVar8 - (long)puVar9) <= uVar7) {
                  puVar9 = (undefined4 *)0x0;
                  goto LAB_0043641c;
                }
                while ((undefined4 *)*plVar2 == puVar9) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar5) {
                    *plVar2 = (long)puVar9 + uVar11;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') goto joined_r0x004363f8;
                }
              }
            }
            if ((ulong)((long)puVar8 - param_1[2]) <= uVar7) break;
            while ((undefined4 *)*plVar2 == puVar9) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = param_1[2] + uVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                if (puVar9 + 1 <= (undefined4 *)param_1[3]) {
                  *puVar9 = 0x370004;
                }
                puVar9 = (undefined4 *)param_1[2];
joined_r0x004363f8:
                if (puVar9 == (undefined4 *)0x0) goto LAB_0043641c;
                goto LAB_0043642c;
              }
            }
            ClearExclusiveLocal();
          }
          puVar9 = (undefined4 *)0x0;
LAB_0043641c:
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_0043642c:
          if (puVar9 != (undefined4 *)0x0) {
            nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
            break;
          }
          if (0 < *piVar1) {
            uVar10 = 0;
            do {
              nn::os::SleepThread((uVar10 >> 7) * 1000000);
              uVar10 = (ulong)((int)uVar10 + 1);
            } while (0 < *piVar1);
          }
          DataMemoryBarrier(2,3);
          FUN_00436990(param_1,1,auStack_64);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          while( true ) {
            puVar9 = (undefined4 *)param_1[1];
            puVar8 = (undefined4 *)*param_1;
            if (puVar9 < puVar8) goto LAB_00436508;
            while (uVar7 < (ulong)(param_1[3] - (long)puVar9)) {
              while ((undefined4 *)*plVar2 == puVar9) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = (long)puVar9 + uVar11;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto joined_r0x0043652c;
              }
              while( true ) {
                ClearExclusiveLocal();
                puVar9 = (undefined4 *)param_1[1];
                puVar8 = (undefined4 *)*param_1;
                if (puVar8 <= puVar9) break;
LAB_00436508:
                if ((ulong)((long)puVar8 - (long)puVar9) <= uVar7) {
                  puVar9 = (undefined4 *)0x0;
                  goto LAB_00436550;
                }
                while ((undefined4 *)*plVar2 == puVar9) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar5) {
                    *plVar2 = (long)puVar9 + uVar11;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') goto joined_r0x0043652c;
                }
              }
            }
            if ((ulong)((long)puVar8 - param_1[2]) <= uVar7) break;
            while ((undefined4 *)*plVar2 == puVar9) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = param_1[2] + uVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                if (puVar9 + 1 <= (undefined4 *)param_1[3]) {
                  *puVar9 = 0x370004;
                }
                puVar9 = (undefined4 *)param_1[2];
joined_r0x0043652c:
                if (puVar9 == (undefined4 *)0x0) goto LAB_00436550;
                goto LAB_00436560;
              }
            }
            ClearExclusiveLocal();
          }
          puVar9 = (undefined4 *)0x0;
LAB_00436550:
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_00436560:
          nn::os::UnlockMutex((MutexType *)puVar6);
        } while (puVar9 == (undefined4 *)0x0);
      }
      *(undefined2 *)((long)puVar9 + 2) = param_2;
      *(short *)puVar9 = (short)uVar3;
      return puVar9;
    }
    while ((undefined4 *)*plVar2 == puVar9) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = param_1[2] + uVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        if (puVar9 + 1 <= (undefined4 *)param_1[3]) {
          *puVar9 = 0x370004;
        }
        puVar9 = (undefined4 *)param_1[2];
joined_r0x004362c8:
        if (puVar9 == (undefined4 *)0x0) goto LAB_004362cc;
        goto LAB_004362dc;
      }
    }
  }
  while( true ) {
    ClearExclusiveLocal();
    puVar9 = (undefined4 *)param_1[1];
    puVar8 = (undefined4 *)*param_1;
    if (puVar8 <= puVar9) break;
LAB_0043627c:
    if ((ulong)((long)puVar8 - (long)puVar9) <= uVar7) {
      puVar9 = (undefined4 *)0x0;
      goto LAB_004362cc;
    }
    while ((undefined4 *)*plVar2 == puVar9) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = (long)puVar9 + uVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto joined_r0x004362c8;
    }
  }
  goto LAB_0043620c;
}


