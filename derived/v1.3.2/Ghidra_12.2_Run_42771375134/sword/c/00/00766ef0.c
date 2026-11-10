/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00766ef0; name: FUN_00766ef0
 */


int FUN_00766ef0(undefined8 *param_1)

{
  MutexType *pMVar1;
  void **ppvVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *__src;
  undefined8 uVar11;
  void *pvVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  void *pvVar17;
  long lVar18;
  Buffer *pBVar19;
  Buffer *this;
  Buffer *pBVar20;
  Buffer *pBVar21;
  ulong uVar22;
  Buffer aBStack_c0 [64];
  undefined8 local_80;
  ulong local_78 [2];
  void *local_68;
  undefined8 local_58;
  
  FUN_00767360();
  pMVar1 = (MutexType *)(param_1 + 0x5f);
  nn::os::LockMutex(pMVar1);
  if (param_1[0x57] == param_1[0x56]) goto LAB_00766f34;
  __src = (void *)movie::Buffer::Base();
  iVar8 = movie::Buffer::Size();
  iVar9 = movie::Buffer::GetUint32Data();
  uVar11 = movie::Buffer::GetInt64Data();
  pvVar12 = (void *)movie::Buffer::Base();
  uVar13 = movie::Buffer::Capacity();
  if ((__src == (void *)0x0) || (iVar8 == 0)) {
    if (iVar9 == 4) {
      *(undefined1 *)(param_1 + 99) = 1;
      if ((EventType *)*param_1 != (EventType *)0x0) {
        nn::os::SignalEvent((EventType *)*param_1);
      }
    }
    goto LAB_00766f34;
  }
  local_58 = 0;
  local_78[1] = 0;
  local_68 = (void *)0x0;
  iVar10 = FUN_007686b0(param_1[2],&local_58,&local_68,local_78 + 1);
  if (iVar10 != 0) {
    nn::os::UnlockMutex(pMVar1);
    return iVar10;
  }
  uVar22 = (ulong)iVar8;
  param_1[10] = uVar11;
  if ((-1 < (long)param_1[0x65]) && (param_1[100] != 0)) {
    nn::os::GetSystemTick();
    uVar14 = nn::os::ConvertToTimeSpan();
    uVar16 = ((long)uVar14 >> 0x20) * 0xe353f7cf + ((uVar14 & 0xffffffff) * 0xe353f7cf >> 0x20);
    lVar18 = ((long)(((long)uVar14 >> 0x20) * 0x20c49ba5 + ((long)uVar16 >> 0x20) +
                    ((uVar14 & 0xffffffff) * 0x20c49ba5 + (uVar16 & 0xffffffff) >> 0x20)) >> 7) -
             ((long)uVar14 >> 0x3f);
    lVar15 = param_1[0x66];
    if (param_1[0x66] == -1) {
      param_1[0x66] = lVar18;
      lVar15 = lVar18;
    }
    lVar5 = 0;
    if ((long)*(int *)(param_1 + 7) != 0) {
      lVar5 = (param_1[0x67] * 1000000) / (long)*(int *)(param_1 + 7);
    }
    if (lVar18 - lVar15 <= lVar5) {
      lVar5 = lVar18 - lVar15;
    }
    param_1[0x6b] = lVar5 + param_1[0x65];
    FUN_00765110(param_1[100],lVar5 + param_1[0x65],lVar18,param_1[10]);
    if (param_1[0x66] == -1) {
      nn::os::GetSystemTick();
      uVar14 = nn::os::ConvertToTimeSpan();
      uVar16 = ((long)uVar14 >> 0x20) * 0xe353f7cf + ((uVar14 & 0xffffffff) * 0xe353f7cf >> 0x20);
      param_1[0x66] =
           ((long)(((long)uVar14 >> 0x20) * 0x20c49ba5 + ((long)uVar16 >> 0x20) +
                  ((uVar14 & 0xffffffff) * 0x20c49ba5 + (uVar16 & 0xffffffff) >> 0x20)) >> 7) -
           ((long)uVar14 >> 0x3f);
      FUN_007650e0(param_1[100],param_1[0x65]);
    }
  }
  if (*(char *)((long)param_1 + 0x342) == '\0') {
    uVar16 = 0;
    bVar7 = true;
    local_80 = param_1[0x5e];
    if (*(char *)((long)param_1 + 0x341) != '\0') goto LAB_0076719c;
LAB_007671e8:
    local_78[0] = 0;
    if (bVar7) {
      memcpy(local_68,__src,uVar22);
      uVar16 = uVar22;
    }
  }
  else {
    if (iVar8 < 2) {
      iVar8 = *(int *)((long)param_1 + 0x3c);
      cVar3 = *(char *)((long)param_1 + 0x341);
    }
    else {
      ppvVar2 = &local_68;
      if (*(char *)((long)param_1 + 0x341) != '\0') {
        ppvVar2 = (void **)(param_1 + 0x69);
      }
      pvVar17 = *ppvVar2;
      uVar14 = (ulong)*(uint *)((long)param_1 + 0x3c);
      uVar16 = 0;
      do {
        if (0 < (int)uVar14) {
          lVar18 = 0;
          do {
            *(undefined2 *)((long)pvVar17 + lVar18 * 2) = *(undefined2 *)((long)__src + uVar16 * 2);
            uVar14 = (ulong)*(int *)((long)param_1 + 0x3c);
            lVar18 = lVar18 + 1;
          } while (lVar18 < (long)uVar14);
        }
        iVar8 = (int)uVar14;
        pvVar17 = (void *)((long)pvVar17 + (long)iVar8 * 2);
        uVar16 = uVar16 + 1;
      } while (uVar16 < (uVar22 >> 1 & 0x7fffffff));
      cVar3 = *(char *)((long)param_1 + 0x341);
    }
    uVar16 = (long)iVar8 * uVar22;
    if (cVar3 == '\0') {
      local_80 = param_1[0x5e];
      bVar7 = false;
      goto LAB_007671e8;
    }
    __src = (void *)param_1[0x69];
    local_80 = param_1[0x5e];
    uVar22 = uVar16;
LAB_0076719c:
    local_78[0] = 0;
    FUN_00768500(param_1[2],local_68,__src,uVar22,local_78);
    uVar16 = local_78[0];
    FUN_007685e0(param_1[2],&local_80);
  }
  uVar14 = (ulong)*(int *)(param_1 + 9);
  uVar22 = 0;
  if (uVar14 != 0) {
    uVar22 = uVar16 / uVar14;
  }
  uVar6 = 0;
  if (uVar14 != 0) {
    uVar6 = (uVar16 * 1000) / uVar14;
  }
  param_1[0x67] = param_1[0x67] + uVar22;
  iVar8 = 0;
  if ((long)*(int *)(param_1 + 7) != 0) {
    iVar8 = (int)(uVar6 / (ulong)(long)*(int *)(param_1 + 7));
  }
  uVar4 = 0;
  if ((int)((double)iVar8 / DAT_01cd5310) != 0) {
    uVar4 = iVar8 / (int)((double)iVar8 / DAT_01cd5310);
  }
  if ((int)uVar4 < 0) {
    uVar4 = uVar4 + 1;
  }
  param_1[0x5d] = (long)((ulong)uVar4 << 0x20) >> 0x21;
  FUN_00768740(param_1[2],local_58,local_68,local_80,uVar16);
  if (iVar9 == 4) {
    *(undefined1 *)(param_1 + 99) = 1;
    if ((EventType *)*param_1 != (EventType *)0x0) {
      nn::os::SignalEvent((EventType *)*param_1);
    }
  }
  movie::Buffer::Buffer(aBStack_c0,pvVar12,uVar13);
  if ((Buffer *)param_1[0x54] == (Buffer *)param_1[0x55]) {
    std::vector<movie::Buffer,std::allocator<movie::Buffer>>::
    __push_back_slow_path<movie::Buffer_const&>
              ((vector<movie::Buffer,std::allocator<movie::Buffer>> *)(param_1 + 0x53),aBStack_c0);
  }
  else {
    movie::Buffer::Buffer((Buffer *)param_1[0x54],aBStack_c0);
    param_1[0x54] = param_1[0x54] + 0x40;
  }
  pBVar19 = (Buffer *)param_1[0x56];
  pBVar21 = (Buffer *)param_1[0x57];
  pBVar20 = pBVar19 + 0x40;
  this = pBVar19;
  if (pBVar20 == pBVar21) {
LAB_0076730c:
    do {
      pBVar20 = pBVar20 + -0x40;
      movie::Buffer::~Buffer(pBVar20);
    } while (pBVar19 != pBVar20);
  }
  else {
    do {
      pBVar19 = this + 0x40;
      movie::Buffer::operator=(this,pBVar19);
      pBVar20 = this + 0x80;
      this = pBVar19;
    } while (pBVar20 != pBVar21);
    pBVar20 = (Buffer *)param_1[0x57];
    if (pBVar20 != pBVar19) goto LAB_0076730c;
  }
  param_1[0x57] = pBVar19;
  movie::Buffer::~Buffer(aBStack_c0);
LAB_00766f34:
  nn::os::UnlockMutex(pMVar1);
  return 0;
}


