/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00767360; name: FUN_00767360
 */


void FUN_00767360(long param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  size_t __n;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  Buffer *pBVar15;
  void *__dest;
  Buffer *pBVar16;
  Buffer *this;
  Buffer *pBVar17;
  undefined4 *puVar18;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x2f8));
  puVar18 = *(undefined4 **)(param_1 + 0x280);
  pBVar15 = *(Buffer **)(param_1 + 0x298);
  bVar4 = true;
  bVar5 = false;
  if (0 < (int)((ulong)(*(long *)(param_1 + 0x288) - (long)puVar18) >> 3) * -0x55555555) {
    iVar7 = (int)((ulong)(*(long *)(param_1 + 0x2a0) - (long)pBVar15) >> 6);
    bVar5 = SBORROW4(iVar7,1);
    bVar4 = iVar7 + -1 < 0;
  }
  if (bVar4 != bVar5) goto LAB_007676cc;
  uVar6 = (uint)pBVar15;
  if (*(char *)(param_1 + 0x278) != '\0') {
    iVar7 = movie::Buffer::Size();
    if (iVar7 < 1) {
LAB_007673f8:
      pBVar16 = *(Buffer **)(param_1 + 0x2c8);
    }
    else {
      iVar7 = movie::Buffer::Size();
      uVar11 = movie::Buffer::Capacity();
      if (uVar11 < (ulong)(long)iVar7) goto LAB_007673f8;
      lVar13 = movie::Buffer::Base();
      iVar7 = movie::Buffer::Offset();
      lVar14 = movie::Buffer::Base();
      iVar8 = movie::Buffer::Offset();
      iVar10 = movie::Buffer::Size();
      memcpy((void *)(lVar13 + iVar7),(void *)(lVar14 + iVar8),(long)iVar10);
      movie::Buffer::Offset();
      movie::Buffer::Size();
      movie::Buffer::SetRange(uVar6,0);
      movie::Buffer::GetInt64Data();
      pBVar16 = pBVar15;
    }
    movie::Buffer::SetInt64Data((long)pBVar16);
  }
  plVar12 = *(long **)(param_1 + 8);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x68))(plVar12,*puVar18,*(undefined8 *)(param_1 + 0x2c8));
    movie::Buffer::SetUint32Data(uVar6);
    movie::Buffer::SetInt64Data((long)pBVar15);
  }
  if (*(char *)(param_1 + 0x278) == '\0') {
    lVar13 = movie::Buffer::Base();
    iVar7 = movie::Buffer::Offset();
    lVar14 = movie::Buffer::Base();
    iVar8 = movie::Buffer::Offset();
    iVar10 = movie::Buffer::Size();
    memcpy((void *)(lVar13 + iVar7),(void *)(lVar14 + iVar8),(long)iVar10);
    movie::Buffer::Offset();
    movie::Buffer::Size();
    movie::Buffer::SetRange(uVar6,0);
    *(long *)(param_1 + 0x360) = *(long *)(param_1 + 0x360) + 1;
LAB_00767650:
    cVar2 = *(char *)(param_1 + 0x278);
joined_r0x00767654:
    if (cVar2 == '\0') goto LAB_00767728;
LAB_00767658:
    iVar7 = movie::Buffer::Size();
    if ((iVar7 == *(int *)(param_1 + 0x274)) || (iVar7 = movie::Buffer::GetUint32Data(), iVar7 == 4)
       ) goto LAB_00767728;
    plVar12 = *(long **)(param_1 + 8);
  }
  else {
    iVar7 = movie::Buffer::Size();
    if (iVar7 == 0) {
      movie::Buffer::GetInt64Data();
      movie::Buffer::SetInt64Data((long)pBVar15);
    }
    iVar7 = *(int *)(param_1 + 0x274);
    iVar8 = movie::Buffer::Size();
    uVar11 = movie::Buffer::Capacity();
    uVar9 = movie::Buffer::Size();
    if ((ulong)(long)iVar7 <= uVar11) {
      uVar11 = (long)iVar7;
    }
    uVar3 = (int)uVar11 - iVar8;
    if (uVar11 <= (ulong)(long)iVar8) {
      uVar3 = 0;
    }
    uVar1 = uVar9;
    if (uVar3 <= uVar9) {
      uVar1 = uVar3;
    }
    if ((int)uVar3 < 1 || uVar9 == 0) {
      uVar1 = 0;
    }
    if ((int)uVar1 < 1) goto LAB_00767650;
    lVar13 = movie::Buffer::Base();
    lVar14 = movie::Buffer::Base();
    iVar7 = movie::Buffer::Offset();
    memcpy((void *)(lVar13 + iVar8),(void *)(lVar14 + iVar7),(long)(int)uVar1);
    movie::Buffer::SetRange(uVar6,0);
    lVar13 = *(long *)(param_1 + 0x2c8);
    if (uVar1 < uVar9) {
      iVar7 = movie::Buffer::Offset();
      movie::Buffer::SetRange((int)lVar13,iVar7 + uVar1);
      movie::Buffer::SetInt64Data(*(long *)(param_1 + 0x2c8));
      cVar2 = *(char *)(param_1 + 0x278);
      goto joined_r0x00767654;
    }
    movie::Buffer::SetInt64Data(lVar13);
    movie::Buffer::SetInt32Data((int)*(undefined8 *)(param_1 + 0x2c8));
    movie::Buffer::SetUint32Data((uint)*(undefined8 *)(param_1 + 0x2c8));
    movie::Buffer::SetRange((int)*(undefined8 *)(param_1 + 0x2c8),0);
    if (*(char *)(param_1 + 0x278) != '\0') goto LAB_00767658;
LAB_00767728:
    if (*(Buffer **)(param_1 + 0x2b8) < *(Buffer **)(param_1 + 0x2c0)) {
      movie::Buffer::Buffer(*(Buffer **)(param_1 + 0x2b8),pBVar15);
      *(long *)(param_1 + 0x2b8) = *(long *)(param_1 + 0x2b8) + 0x40;
    }
    else {
      FUN_00767dc0(param_1 + 0x2b0,pBVar15);
    }
    pBVar16 = *(Buffer **)(param_1 + 0x298);
    pBVar17 = *(Buffer **)(param_1 + 0x2a0);
    pBVar15 = pBVar16 + 0x40;
    this = pBVar16;
    if (pBVar15 == pBVar17) {
LAB_007677a0:
      do {
        pBVar15 = pBVar15 + -0x40;
        movie::Buffer::~Buffer(pBVar15);
      } while (pBVar16 != pBVar15);
    }
    else {
      do {
        pBVar16 = this + 0x40;
        movie::Buffer::operator=(this,pBVar16);
        pBVar15 = this + 0x80;
        this = pBVar16;
      } while (pBVar15 != pBVar17);
      pBVar15 = *(Buffer **)(param_1 + 0x2a0);
      if (pBVar15 != pBVar16) goto LAB_007677a0;
    }
    *(Buffer **)(param_1 + 0x2a0) = pBVar16;
    *(long *)(param_1 + 0x360) = *(long *)(param_1 + 0x360) + 1;
    plVar12 = *(long **)(param_1 + 8);
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x78))(plVar12,*puVar18);
  }
  __dest = *(void **)(param_1 + 0x280);
  __n = *(long *)(param_1 + 0x288) - ((long)__dest + 0x18);
  if (__n != 0) {
    memmove(__dest,(void *)((long)__dest + 0x18),__n);
  }
  *(void **)(param_1 + 0x288) = (void *)((long)__dest + ((long)__n >> 3) * 8);
LAB_007676cc:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2f8));
  return;
}


