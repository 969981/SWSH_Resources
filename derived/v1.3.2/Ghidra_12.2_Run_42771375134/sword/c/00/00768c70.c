/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00768c70; name: FUN_00768c70
 */


undefined8 FUN_00768c70(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  size_t sVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  int local_b8;
  int local_b4;
  MediaData aMStack_b0 [12];
  undefined4 local_a4;
  Buffer aBStack_a0 [64];
  
  movie::Buffer::Buffer(aBStack_a0);
  pMVar1 = (MutexType *)(param_1 + 7);
  nn::os::LockMutex(pMVar1);
  puVar3 = (undefined4 *)param_1[4];
  if (((int)((ulong)(param_1[5] - (long)puVar3) >> 3) * -0x55555555 < 1) ||
     (*(char *)(param_1 + 0x13) != '\0')) {
    nn::os::UnlockMutex(pMVar1);
    FUN_00769db0(param_1[2],param_2,param_3,*(undefined4 *)(param_1 + 0x16));
  }
  else {
    local_a4 = 0;
    *(undefined4 *)(param_1 + 0x16) = 0;
    uVar10 = *(undefined8 *)(puVar3 + 2);
    iVar8 = puVar3[4];
    uVar5 = *puVar3;
    uVar9 = FUN_00768fe0(param_1,uVar10);
    if ((iVar8 == 4) && ((uVar9 & 1) != 0)) {
      *(undefined1 *)(param_1 + 0xd) = 1;
      if (0 < *(int *)(param_1 + 0x11)) {
        *(int *)(param_1 + 0x11) = *(int *)(param_1 + 0x11) + -1;
      }
      if ((EventType *)*param_1 != (EventType *)0x0) {
        nn::os::SignalEvent((EventType *)*param_1);
      }
      (**(code **)(*(long *)param_1[1] + 0x78))((long *)param_1[1],uVar5);
      pvVar4 = (void *)param_1[4];
      sVar7 = param_1[5] - ((long)pvVar4 + 0x18);
      if (sVar7 != 0) {
        memmove(pvVar4,(void *)((long)pvVar4 + 0x18),sVar7);
      }
      param_1[5] = (void *)((long)pvVar4 + ((long)sVar7 >> 3) * 8);
      nn::os::UnlockMutex(pMVar1);
    }
    else {
      param_1[0x14] = uVar10;
      movie::MediaData::MediaData(aMStack_b0);
      iVar8 = (**(code **)(*(long *)param_1[1] + 0x90))((long *)param_1[1],*puVar3,aMStack_b0);
      if (iVar8 == 0) {
        local_b4 = 0;
        iVar8 = *(int *)(param_1 + 0xc);
        uVar9 = movie::MediaData::FindInt32((char *)aMStack_b0,(int *)"width");
        local_b8 = 0;
        iVar6 = *(int *)((long)param_1 + 100);
        if ((uVar9 & 1) == 0) {
          local_b4 = iVar8;
        }
        uVar9 = movie::MediaData::FindInt32((char *)aMStack_b0,(int *)"height");
        if ((uVar9 & 1) == 0) {
          local_b8 = iVar6;
        }
        if ((local_b4 != *(int *)(param_1 + 0xc)) || (local_b8 != *(int *)((long)param_1 + 100))) {
          *(int *)(param_1 + 0xc) = local_b4;
          *(int *)((long)param_1 + 100) = local_b8;
          FUN_0076a170(param_1[2],local_b4);
        }
        movie::MediaData::FindInt32((char *)aMStack_b0,(int *)"nv12-y-stride");
        movie::MediaData::FindInt32((char *)aMStack_b0,(int *)"nv12-uv-offset");
        movie::MediaData::FindInt32((char *)aMStack_b0,(int *)"nv12-y-offset");
        movie::MediaData::Clear();
        iVar8 = (**(code **)(*(long *)param_1[1] + 0x20))((long *)param_1[1],aMStack_b0);
        if (iVar8 == 0) {
          movie::MediaData::FindInt32((char *)aMStack_b0,(int *)"nv12-colorspace");
        }
        uVar2 = *(int *)(param_1 + 0xc) * *(int *)((long)param_1 + 100) * 3;
        if ((int)uVar2 < 0) {
          uVar2 = uVar2 + 1;
        }
        param_1[0xb] = (long)((ulong)uVar2 << 0x20) >> 0x21;
        FUN_0076a6f0(param_1[2],param_3);
        uVar9 = FUN_0199c7e0();
        movie::Buffer::SetDataAndCapacity(aBStack_a0,uVar9);
        movie::Buffer::SetRange((int)aBStack_a0,0);
        iVar8 = (**(code **)(*(long *)param_1[1] + 0x68))((long *)param_1[1],*puVar3,aBStack_a0);
        if (iVar8 == 0) {
          (**(code **)(*(long *)param_1[1] + 0x78))((long *)param_1[1],*puVar3);
          pvVar4 = (void *)param_1[4];
          sVar7 = param_1[5] - ((long)pvVar4 + 0x18);
          if (sVar7 != 0) {
            memmove(pvVar4,(void *)((long)pvVar4 + 0x18),sVar7);
          }
          param_1[5] = (void *)((long)pvVar4 + ((long)sVar7 >> 3) * 8);
          *(undefined1 *)(param_1[2] + 0x1d0) = 1;
        }
      }
      if (puVar3[4] == 4) {
        *(undefined1 *)(param_1 + 0xd) = 1;
        if ((EventType *)*param_1 != (EventType *)0x0) {
          nn::os::SignalEvent((EventType *)*param_1);
        }
      }
      nn::os::UnlockMutex(pMVar1);
      FUN_00769db0(param_1[2],param_2,param_3,*(undefined4 *)(param_1 + 0x16));
      movie::MediaData::~MediaData(aMStack_b0);
    }
  }
  movie::Buffer::~Buffer(aBStack_a0);
  return 0;
}


