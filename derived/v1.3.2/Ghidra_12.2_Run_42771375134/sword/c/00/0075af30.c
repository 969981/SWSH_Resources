/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075af30; name: FUN_0075af30
 */


void FUN_0075af30(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  VibrationTarget *this;
  long lVar5;
  VibrationNodeConnection *this_00;
  VibrationDeviceHandle *pVVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  VibrationNode *pVVar10;
  long local_78;
  long local_70;
  int local_64;
  
  iVar4 = nn::hid::GetNpadStyleSet((uint *)(param_1 + 0x60));
  if ((iVar4 != 0) && (*(int *)(param_1 + 100) != iVar4)) {
    *(int *)(param_1 + 100) = iVar4;
    FUN_0075b4d0(param_1);
    pVVar6 = (VibrationDeviceHandle *)(param_1 + 0x70);
    iVar4 = nn::hid::GetVibrationDeviceHandles
                      (pVVar6,2,(uint *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    *(int *)(param_1 + 0x68) = iVar4;
    if (0 < iVar4) {
      lVar7 = 0;
      do {
        nn::hid::InitializeVibrationDevice(pVVar6);
        puVar3 = PTR_DAT_02710860;
        lVar7 = lVar7 + 1;
        pVVar6 = pVVar6 + 4;
      } while (lVar7 < *(int *)(param_1 + 0x68));
      if (0 < *(int *)(param_1 + 0x68)) {
        local_70 = param_1 + 0x78;
        local_78 = param_1 + 0x98;
        lVar7 = 0;
        pVVar6 = (VibrationDeviceHandle *)(param_1 + 0x70);
        do {
          nn::os::LockMutex((MutexType *)&DAT_029f3840);
          plVar8 = *(long **)(param_1 + 8);
          this = (VibrationTarget *)(**(code **)(*plVar8 + 0x10))(plVar8,0x48,8);
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
          if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_0075b180:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          nn::hid::VibrationTarget::VibrationTarget(this,pVVar6);
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
          nn::hid::VibrationTarget::GetVibrationDeviceInfo((VibrationDeviceInfo *)this);
          plVar9 = *(long **)(param_1 + 8);
          plVar2 = &local_70;
          if (local_64 != 1) {
            plVar2 = &local_78;
          }
          pVVar10 = *(VibrationNode **)*plVar2;
          this_00 = (VibrationNodeConnection *)(**(code **)(*plVar9 + 0x10))(plVar9,0x38,8);
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
          if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_0075b180;
          *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar9;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          nn::hid::VibrationNodeConnection::VibrationNodeConnection
                    (this_00,pVVar10,(VibrationNode *)this);
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
          if (*(char *)(param_1 + 0x6c) == '\0') {
            nn::hid::VibrationTarget::UnsetVibrationDeviceHandle();
          }
          if (1 < *(ulong *)(param_1 + 0x138)) goto LAB_0075b180;
          puVar1 = (undefined8 *)(param_1 + 0xb8 + *(ulong *)(param_1 + 0x138) * 0x40);
          *puVar1 = this;
          puVar1[1] = plVar8;
          puVar1[2] = 0x48;
          puVar1[3] = 8;
          puVar1[4] = this_00;
          puVar1[5] = plVar9;
          puVar1[6] = 0x38;
          puVar1[7] = 8;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          nn::os::UnlockMutex((MutexType *)&DAT_029f3840);
          lVar7 = lVar7 + 1;
          pVVar6 = pVVar6 + 4;
        } while (lVar7 < *(int *)(param_1 + 0x68));
      }
    }
  }
  return;
}


