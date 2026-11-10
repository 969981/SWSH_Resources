/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d6040; name: FUN_006d6040
 */


void FUN_006d6040(long param_1)

{
  int *piVar1;
  MutexType *pMVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  size_t sVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  
  lVar10 = *(long *)(param_1 + 0x380);
  if (lVar10 == 0) {
    pMVar2 = (MutexType *)(param_1 + 0x330);
    nn::os::LockMutex(pMVar2);
    if (((*(byte *)(param_1 + 0x2f8) & 1) != 0) ||
       ((*(char *)(param_1 + 0x378) != '\0' &&
        (*(char *)(*(long *)(param_1 + 0x370) + 0x160) != '\0')))) {
      nn::os::UnlockMutex(pMVar2);
      return;
    }
    plVar7 = *(long **)(param_1 + 0x300);
    plVar11 = *(long **)(param_1 + 0x308);
    if (plVar7 == plVar11) {
LAB_006d6238:
      *(undefined8 *)(param_1 + 0x380) = 0;
LAB_006d626c:
      piVar1 = (int *)(param_1 + 0x37c);
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          goto LAB_006d62bc;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_006d69a0(*(undefined8 *)(param_1 + 0x358));
      uVar9 = FUN_006d6990(*(undefined8 *)(param_1 + 0x358));
      if ((uVar9 & 1) != 0) {
        do {
          nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0x350),pMVar2);
          uVar9 = FUN_006d6990(*(undefined8 *)(param_1 + 0x358));
        } while ((uVar9 & 1) != 0);
      }
LAB_006d62bc:
      *(undefined4 *)(param_1 + 0x37c) = 0;
      plVar7 = *(long **)(param_1 + 0x300);
      plVar11 = *(long **)(param_1 + 0x308);
      if (plVar7 == plVar11) {
LAB_006d62f4:
        lVar10 = 0;
      }
      else {
        if (*(int *)(param_1 + 0x36c) != 0) {
          do {
            if ((*(byte *)(*plVar7 + 0x130) >> 1 & 1) == 0) goto LAB_006d62fc;
            plVar7 = plVar7 + 1;
          } while (plVar11 != plVar7);
          goto LAB_006d62f4;
        }
LAB_006d62fc:
        lVar10 = *plVar7;
        sVar6 = (long)plVar11 - (long)(plVar7 + 1);
        if (sVar6 != 0) {
          memmove(plVar7,plVar7 + 1,sVar6);
        }
        *(long **)(param_1 + 0x308) = plVar7 + ((long)sVar6 >> 3);
      }
      *(long *)(param_1 + 0x380) = lVar10;
    }
    else {
      if (*(int *)(param_1 + 0x36c) != 0) {
        do {
          if ((*(byte *)(*plVar7 + 0x130) >> 1 & 1) == 0) goto LAB_006d6240;
          plVar7 = plVar7 + 1;
        } while (plVar11 != plVar7);
        goto LAB_006d6238;
      }
LAB_006d6240:
      lVar10 = *plVar7;
      sVar6 = (long)plVar11 - (long)(plVar7 + 1);
      if (sVar6 != 0) {
        memmove(plVar7,plVar7 + 1,sVar6);
      }
      *(long **)(param_1 + 0x308) = plVar7 + ((long)sVar6 >> 3);
      *(long *)(param_1 + 0x380) = lVar10;
      if (lVar10 == 0) goto LAB_006d626c;
    }
    nn::os::UnlockMutex(pMVar2);
    lVar10 = *(long *)(param_1 + 0x380);
    if (lVar10 != 0) goto LAB_006d6060;
  }
  else {
LAB_006d6060:
    do {
      lVar10 = *(long *)(lVar10 + 0x58);
      if ((lVar10 == 0) || (*(int *)(lVar10 + 0x54) == 0)) {
LAB_006d60f0:
        lVar12 = 0;
      }
      else {
        piVar1 = (int *)(lVar10 + 0x54);
        iVar13 = *(int *)(lVar10 + 0x54);
        do {
          while( true ) {
            plVar11 = *(long **)(lVar10 + 0x58);
            plVar7 = (long *)FUN_006ec130();
            lVar12 = 0;
            if (plVar11 == (long *)0x0) goto LAB_006d60f4;
            while (plVar11 != plVar7) {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) {
                lVar12 = 0;
                goto LAB_006d60f4;
              }
            }
            iVar3 = *piVar1;
            if (iVar3 != iVar13) break;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              if (*(long *)(lVar10 + 0x60) == 0) goto LAB_006d60f0;
              lVar12 = *(long *)(lVar10 + 0x60) + -0x50;
              FUN_006d4bc0(lVar12,param_1 + 0x360);
              goto LAB_006d60f4;
            }
            lVar12 = 0;
            iVar13 = iVar3;
            if (iVar3 == 0) goto LAB_006d60f4;
          }
          ClearExclusiveLocal();
          lVar12 = 0;
          iVar13 = iVar3;
        } while (iVar3 != 0);
      }
LAB_006d60f4:
      uVar8 = *(undefined8 *)(param_1 + 0x380);
      *(undefined8 *)(param_1 + 0x380) = 0;
      FUN_006d1ee0(uVar8,param_1 + 0x360);
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      }
      lVar10 = *(long *)(param_1 + 0x380);
    } while (lVar10 != 0);
  }
  pMVar2 = (MutexType *)(param_1 + 0x330);
  nn::os::LockMutex(pMVar2);
  plVar7 = *(long **)(param_1 + 0x300);
  plVar11 = *(long **)(param_1 + 0x308);
  if (plVar7 != plVar11) {
    if (*(int *)(param_1 + 0x36c) == 0) {
LAB_006d61b0:
      lVar10 = *plVar7;
      sVar6 = (long)plVar11 - (long)(plVar7 + 1);
      if (sVar6 != 0) {
        memmove(plVar7,plVar7 + 1,sVar6);
      }
      *(long **)(param_1 + 0x308) = plVar7 + ((long)sVar6 >> 3);
      nn::os::UnlockMutex(pMVar2);
      *(long *)(param_1 + 0x380) = lVar10;
      if (lVar10 != 0) {
        return;
      }
      goto LAB_006d61e4;
    }
    do {
      if ((*(byte *)(*plVar7 + 0x130) >> 1 & 1) == 0) goto LAB_006d61b0;
      plVar7 = plVar7 + 1;
    } while (plVar11 != plVar7);
  }
  nn::os::UnlockMutex(pMVar2);
  *(undefined8 *)(param_1 + 0x380) = 0;
LAB_006d61e4:
  uVar8 = FUN_006d44b0(*(undefined8 *)(param_1 + 0x370),param_1 + 0x360);
  *(undefined8 *)(param_1 + 0x380) = uVar8;
  return;
}


