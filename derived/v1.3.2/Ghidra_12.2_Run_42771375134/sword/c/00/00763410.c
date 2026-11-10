/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00763410; name: FUN_00763410
 */


void FUN_00763410(undefined8 *param_1)

{
  MutexType *pMVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  Decoder *pDVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  EventType *pEVar13;
  undefined8 *puVar14;
  MutexType *pMVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int local_68 [2];
  
  pMVar1 = (MutexType *)(param_1 + 0xf8);
  nn::os::LockMutex(pMVar1);
  iVar7 = *(int *)(param_1 + 0x32);
  if (iVar7 < 0) {
    if (-1 < *(int *)((long)param_1 + 0x18c)) {
      iVar7 = *(int *)((long)param_1 + 0x18c);
      goto joined_r0x00763680;
    }
    *(undefined4 *)(param_1 + 0xf2) = 0x4000;
    pEVar13 = (EventType *)param_1[3];
  }
  else {
    if (*(int *)(param_1 + 0x1f) == 0) {
      nn::os::LockMutex(pMVar1);
      local_68[0] = 0;
      plVar16 = (long *)param_1[0x12];
      if ((((plVar16 != (long *)0x0) &&
           (iVar8 = (**(code **)(*plVar16 + 0x20))(plVar16,local_68), iVar8 != 0 || 0 < local_68[0])
           ) && (iVar7 < local_68[0])) &&
         ((iVar8 == 0 && (plVar16 = (long *)param_1[0x12], plVar16 != (long *)0x0)))) {
        (**(code **)(*plVar16 + 0x38))(plVar16,iVar7);
      }
      nn::os::UnlockMutex(pMVar1);
      iVar7 = *(int *)((long)param_1 + 0x18c);
joined_r0x00763680:
      if (-1 < iVar7) {
        if (*(int *)(param_1 + 0x1a) == 0) {
          nn::os::LockMutex(pMVar1);
          local_68[0] = 0;
          plVar16 = (long *)param_1[0x12];
          if (((plVar16 != (long *)0x0) &&
              (((iVar8 = (**(code **)(*plVar16 + 0x20))(plVar16,local_68), iVar8 != 0 ||
                (0 < local_68[0])) && (iVar7 < local_68[0])))) &&
             ((iVar8 == 0 && (plVar16 = (long *)param_1[0x12], plVar16 != (long *)0x0)))) {
            (**(code **)(*plVar16 + 0x38))(plVar16,iVar7);
          }
          nn::os::UnlockMutex(pMVar1);
        }
        else {
          plVar16 = (long *)*param_1;
          pDVar9 = (Decoder *)(**(code **)(*plVar16 + 0x10))(plVar16,0x10,8);
          puVar5 = PTR_DAT_02710860;
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00763e74;
          *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar16;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          uVar2 = *(undefined4 *)(param_1 + 0x1a);
          uVar3 = *(undefined4 *)(param_1 + 0xfe);
          uVar4 = *(undefined4 *)(param_1 + 0xfd);
          uVar6 = movie::GetThreadPriority();
          movie::Decoder::Decoder(pDVar9,uVar2,uVar3,uVar4,uVar6);
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          puVar14 = (undefined8 *)param_1[0x16];
          param_1[0x16] = pDVar9;
          if (puVar14 != (undefined8 *)0x0) {
            (**(code **)*puVar14)(puVar14);
            (**(code **)(*(long *)param_1[0x17] + 0x18))
                      ((long *)param_1[0x17],puVar14,param_1[0x18],param_1[0x19]);
            pDVar9 = (Decoder *)param_1[0x16];
          }
          param_1[0x17] = plVar16;
          param_1[0x18] = 0x10;
          param_1[0x19] = 8;
          if (pDVar9 == (Decoder *)0x0) goto LAB_00763bd4;
          iVar7 = (**(code **)(*(long *)pDVar9 + 0x18))(pDVar9,param_1 + 0x5d);
          if (iVar7 != 0) goto LAB_00763bc4;
          movie::MediaData::MediaData((MediaData *)local_68);
          (**(code **)(*(long *)param_1[0x12] + 0x28))
                    ((long *)param_1[0x12],*(undefined4 *)((long)param_1 + 0x18c),local_68);
          (**(code **)(*(long *)param_1[0x16] + 0x10))((long *)param_1[0x16],local_68);
          movie::MediaData::Clear();
          plVar16 = (long *)*param_1;
          uVar18 = param_1[0x12];
          uVar17 = param_1[0x16];
          uVar11 = (**(code **)(*plVar16 + 0x10))(plVar16,0x2b0,8);
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00763e74;
          *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar16;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          FUN_007652f0(uVar11,uVar18,*(undefined4 *)((long)param_1 + 0x18c),uVar17);
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          lVar10 = param_1[0x28];
          param_1[0x28] = uVar11;
          if (lVar10 != 0) {
            FUN_00765390(lVar10);
            (**(code **)(*(long *)param_1[0x29] + 0x18))
                      ((long *)param_1[0x29],lVar10,param_1[0x2a],param_1[0x2b]);
          }
          param_1[0x29] = plVar16;
          param_1[0x2a] = 0x2b0;
          param_1[0x2b] = 8;
          if (param_1[0x2c] == 0) {
            plVar16 = (long *)*param_1;
            uVar11 = (**(code **)(*plVar16 + 0x10))(plVar16,0x370,8);
            lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
            if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00763e74;
            *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar16;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
            FUN_007662f0(uVar11);
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
            lVar10 = param_1[0x2c];
            param_1[0x2c] = uVar11;
            if (lVar10 != 0) {
              FUN_00766420(lVar10);
              (**(code **)(*(long *)param_1[0x2d] + 0x18))
                        ((long *)param_1[0x2d],lVar10,param_1[0x2e],param_1[0x2f]);
            }
            param_1[0x2d] = plVar16;
            param_1[0x2e] = 0x370;
            param_1[0x2f] = 8;
          }
          if ((param_1[0x28] == 0) || (param_1[0x2c] == 0)) goto LAB_00763e54;
          FUN_00765490(param_1[0x28],param_1[0x6d]);
          *(undefined1 *)((long)param_1 + 0x794) = 0;
          movie::MediaData::~MediaData((MediaData *)local_68);
        }
      }
      plVar16 = (long *)*param_1;
      uVar11 = param_1[0x16];
      uVar17 = param_1[0x1b];
      uVar18 = param_1[0x20];
      uVar19 = param_1[0x24];
      uVar20 = param_1[0x28];
      uVar21 = param_1[0x2c];
      lVar10 = (**(code **)(*plVar16 + 0x10))(plVar16,0x588,8);
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_00763e74:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar16;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      FUN_0076aab0(lVar10,uVar11,uVar17,uVar18,uVar19,uVar20,uVar21);
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      lVar12 = param_1[0x65];
      param_1[0x65] = lVar10;
      if (lVar12 != 0) {
        FUN_0076ab50(lVar12);
        (**(code **)(*(long *)param_1[0x66] + 0x18))
                  ((long *)param_1[0x66],lVar12,param_1[0x67],param_1[0x68]);
        lVar10 = param_1[0x65];
      }
      param_1[0x66] = plVar16;
      param_1[0x67] = 0x588;
      param_1[0x68] = 8;
      if (lVar10 != 0) {
        FUN_0076ace0(lVar10,param_1[0x6d]);
        FUN_0076ae50(param_1[0x65],param_1 + 0x35,5);
        FUN_0076ae50(param_1[0x65],param_1 + 0x3a,6);
        FUN_0076ae50(param_1[0x65],param_1 + 0x3f,7);
        FUN_0076ae50(param_1[0x65],param_1 + 0x44,8);
        FUN_0076ae50(param_1[0x65],param_1 + 0x49,1);
        FUN_0076ae50(param_1[0x65],param_1 + 0x4e,2);
        FUN_0076ae50(param_1[0x65],param_1 + 0x53,3);
        FUN_0076ae50(param_1[0x65],param_1 + 0x58,4);
        FUN_0076b000(param_1[0x65]);
        plVar16 = (long *)*param_1;
        lVar10 = (**(code **)(*plVar16 + 0x10))(plVar16,0x40,8);
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00763e74;
        *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar16;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        FUN_007650a0(lVar10);
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        pMVar15 = (MutexType *)param_1[0x69];
        param_1[0x69] = lVar10;
        if (pMVar15 != (MutexType *)0x0) {
          nn::os::FinalizeMutex(pMVar15);
          (**(code **)(*(long *)param_1[0x6a] + 0x18))
                    ((long *)param_1[0x6a],pMVar15,param_1[0x6b],param_1[0x6c]);
          lVar10 = param_1[0x69];
        }
        param_1[0x6a] = plVar16;
        param_1[0x6b] = 0x40;
        param_1[0x6c] = 8;
        if (lVar10 != 0) {
          pMVar15 = (MutexType *)(param_1 + 0xf4);
          nn::os::LockMutex(pMVar15);
          iVar7 = *(int *)(param_1 + 2);
          nn::os::UnlockMutex(pMVar15);
          if ((iVar7 == 8) || (iVar7 == 2)) {
            nn::os::LockMutex(pMVar15);
            *(undefined4 *)(param_1 + 2) = 3;
            if ((EventType *)param_1[4] != (EventType *)0x0) {
              nn::os::SignalEvent((EventType *)param_1[4]);
            }
            nn::os::UnlockMutex(pMVar15);
            goto LAB_00763be8;
          }
          *(undefined4 *)(param_1 + 0xf2) = 0x100f;
          pEVar13 = (EventType *)param_1[3];
          goto joined_r0x00763bcc;
        }
      }
    }
    else {
      if (*(int *)((long)param_1 + 0x7ec) == 2) {
        *(undefined4 *)((long)param_1 + 0x7f4) = 3;
      }
      plVar16 = (long *)*param_1;
      pDVar9 = (Decoder *)(**(code **)(*plVar16 + 0x10))(plVar16,0x10,8);
      puVar5 = PTR_DAT_02710860;
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00763e74;
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar16;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      uVar2 = *(undefined4 *)(param_1 + 0x1f);
      uVar3 = *(undefined4 *)((long)param_1 + 0x7f4);
      uVar4 = *(undefined4 *)((long)param_1 + 0x7ec);
      uVar6 = movie::GetThreadPriority();
      movie::Decoder::Decoder(pDVar9,uVar2,uVar3,uVar4,uVar6);
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      puVar14 = (undefined8 *)param_1[0x1b];
      param_1[0x1b] = pDVar9;
      if (puVar14 != (undefined8 *)0x0) {
        (**(code **)*puVar14)(puVar14);
        (**(code **)(*(long *)param_1[0x1c] + 0x18))
                  ((long *)param_1[0x1c],puVar14,param_1[0x1d],param_1[0x1e]);
        pDVar9 = (Decoder *)param_1[0x1b];
      }
      param_1[0x1c] = plVar16;
      param_1[0x1d] = 0x10;
      param_1[0x1e] = 8;
      if (pDVar9 != (Decoder *)0x0) {
        iVar7 = (**(code **)(*(long *)pDVar9 + 0x18))(pDVar9,param_1 + 0x61);
        if (iVar7 == 0) {
          if (param_1[0x12] == 0) {
            *(undefined4 *)(param_1 + 0xf2) = 0;
            pEVar13 = (EventType *)param_1[3];
            goto joined_r0x00763bcc;
          }
          movie::MediaData::MediaData((MediaData *)local_68);
          (**(code **)(*(long *)param_1[0x12] + 0x28))
                    ((long *)param_1[0x12],*(undefined4 *)(param_1 + 0x32),local_68);
          (**(code **)(*(long *)param_1[0x1b] + 0x10))((long *)param_1[0x1b],local_68);
          movie::MediaData::Clear();
          plVar16 = (long *)*param_1;
          uVar18 = param_1[0x12];
          uVar17 = param_1[0x1b];
          uVar11 = (**(code **)(*plVar16 + 0x10))(plVar16,0x2b0,8);
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00763e74;
          *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar16;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          FUN_00765af0(uVar11,uVar18,*(undefined4 *)(param_1 + 0x32),uVar17);
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          lVar10 = param_1[0x20];
          param_1[0x20] = uVar11;
          if (lVar10 != 0) {
            FUN_00765b90(lVar10);
            (**(code **)(*(long *)param_1[0x21] + 0x18))
                      ((long *)param_1[0x21],lVar10,param_1[0x22],param_1[0x23]);
          }
          param_1[0x21] = plVar16;
          param_1[0x22] = 0x2b0;
          param_1[0x23] = 8;
          if (param_1[0x24] == 0) {
            plVar16 = (long *)*param_1;
            uVar11 = (**(code **)(*plVar16 + 0x10))(plVar16,0xb8,8);
            lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
            if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00763e74;
            *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar16;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
            FUN_00768950(uVar11,param_1[5],*(undefined4 *)((long)param_1 + 0x7ec),
                         *(undefined4 *)((long)param_1 + 0x7f4));
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
            lVar10 = param_1[0x24];
            param_1[0x24] = uVar11;
            if (lVar10 != 0) {
              FUN_00768a30(lVar10);
              (**(code **)(*(long *)param_1[0x25] + 0x18))
                        ((long *)param_1[0x25],lVar10,param_1[0x26],param_1[0x27]);
            }
            param_1[0x25] = plVar16;
            param_1[0x26] = 0xb8;
            param_1[0x27] = 8;
          }
          if ((param_1[0x20] != 0) && (param_1[0x24] != 0)) {
            FUN_00765c90(param_1[0x20],param_1[0x6d]);
            *(undefined1 *)((long)param_1 + 0x795) = 0;
            movie::MediaData::~MediaData((MediaData *)local_68);
            iVar7 = *(int *)((long)param_1 + 0x18c);
            goto joined_r0x00763680;
          }
LAB_00763e54:
          *(undefined4 *)(param_1 + 0xf2) = 0x1002;
          if ((EventType *)param_1[3] != (EventType *)0x0) {
            nn::os::SignalEvent((EventType *)param_1[3]);
          }
          movie::MediaData::~MediaData((MediaData *)local_68);
          goto LAB_00763be8;
        }
LAB_00763bc4:
        *(int *)(param_1 + 0xf2) = iVar7;
        pEVar13 = (EventType *)param_1[3];
        goto joined_r0x00763bcc;
      }
    }
LAB_00763bd4:
    *(undefined4 *)(param_1 + 0xf2) = 0x1002;
    pEVar13 = (EventType *)param_1[3];
  }
joined_r0x00763bcc:
  if (pEVar13 != (EventType *)0x0) {
    nn::os::SignalEvent(pEVar13);
  }
LAB_00763be8:
  nn::os::UnlockMutex(pMVar1);
  return;
}


