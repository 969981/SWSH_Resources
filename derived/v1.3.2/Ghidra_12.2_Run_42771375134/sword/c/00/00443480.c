/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00443480; name: FUN_00443480
 */


undefined8 FUN_00443480(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_02712fb8);
  uVar5 = param_2[1];
  if (param_2[10] == 2) {
    uVar10 = *(undefined8 *)(param_2 + 0xe);
  }
  else {
    uVar10 = 0;
  }
  lVar3 = FUN_0044a9b0(param_1 + 0x11,uVar5,uVar10);
  if (lVar3 == 0) {
    nn::os::UnlockMutex((MutexType *)PTR_DAT_02712fb8);
    uVar1 = *param_2;
    uVar5 = 0;
    uVar7 = 0xffffffff;
    if (uVar1 < 8) {
      uVar2 = 1 << (ulong)(uVar1 & 0x1f);
      if ((uVar2 & 3) == 0) {
        if ((uVar2 & 0xc) == 0) {
          if ((1 << (ulong)(uVar1 & 0x1f) & 0xc0U) == 0) goto LAB_004435ec;
          uVar5 = param_2[1];
        }
        else {
          uVar5 = param_2[0xe];
          if (param_2[0xc] != 1) {
            uVar5 = 0;
          }
        }
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = param_2[0xc];
        uVar5 = param_2[1];
      }
    }
LAB_004435ec:
    uVar1 = param_2[10];
    uVar10 = *(undefined8 *)(param_2 + 0xe);
    uVar4 = *(undefined8 *)(param_2 + 6);
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar9 = 0x36;
    uVar6 = 0x36;
    *(undefined4 *)((long)param_1 + 0xd4) = 0x36;
    if (uVar1 != 2) {
      uVar10 = 0;
    }
    goto LAB_00443658;
  }
  if ((*(byte *)(lVar3 + 0x78) & 1) != 0) {
    FUN_0044aa40(param_1 + 0x11,uVar5,uVar10);
    nn::os::UnlockMutex((MutexType *)PTR_DAT_02712fb8);
                    /* WARNING: Could not recover jumptable at 0x004435c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (**(code **)(*param_1 + 0x48))
                       (param_1,lVar3,*(undefined8 *)(param_2 + 6),*(undefined8 *)(param_2 + 8));
    return uVar10;
  }
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02712fb8);
  uVar1 = *param_2;
  uVar5 = 0;
  uVar7 = 0xffffffff;
  if (uVar1 < 8) {
    uVar2 = 1 << (ulong)(uVar1 & 0x1f);
    if ((uVar2 & 3) == 0) {
      if ((uVar2 & 0xc) == 0) {
        if ((1 << (ulong)(uVar1 & 0x1f) & 0xc0U) == 0) goto LAB_00443634;
        uVar5 = param_2[1];
      }
      else {
        uVar5 = param_2[0xe];
        if (param_2[0xc] != 1) {
          uVar5 = 0;
        }
      }
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = param_2[0xc];
      uVar5 = param_2[1];
    }
  }
LAB_00443634:
  uVar1 = param_2[10];
  uVar10 = *(undefined8 *)(param_2 + 0xe);
  uVar4 = *(undefined8 *)(param_2 + 6);
  uVar8 = *(undefined8 *)(param_2 + 8);
  uVar9 = 2;
  *(undefined4 *)((long)param_1 + 0xd4) = 2;
  if (uVar1 != 2) {
    uVar10 = 0;
  }
  uVar6 = 2;
LAB_00443658:
  FUN_0044d500(param_1 + 0x1b,uVar4,uVar5,uVar10,uVar6,uVar7,uVar8);
  return uVar9;
}


