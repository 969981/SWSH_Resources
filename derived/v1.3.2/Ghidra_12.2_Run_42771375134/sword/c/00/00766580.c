/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00766580; name: FUN_00766580
 */


undefined8 FUN_00766580(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  Buffer *pBVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  Buffer *pBVar7;
  long *plVar8;
  size_t __n;
  Buffer *pBVar9;
  undefined8 uVar10;
  void *__dest;
  Buffer *pBVar11;
  
  lVar5 = param_1[0xc];
  *(undefined4 *)(param_1 + 9) = 2;
  param_1[0x5d] = 5;
  *param_1 = param_3;
  param_1[0x48] = 0x10;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  param_1[0x5e] = 0x8000;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  param_1[0xc] = 0;
  if (lVar5 != 0) {
    (**(code **)(*(long *)param_1[0xd] + 0x18))
              ((long *)param_1[0xd],lVar5,param_1[0xe],param_1[0xf]);
  }
  param_1[0x66] = 0xffffffffffffffff;
  param_1[100] = param_2;
  pvVar6 = (void *)param_1[0x50];
  param_1[0x6a] = 0x8000;
  param_1[0x65] = 0;
  param_1[0x67] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined1 *)((long)param_1 + 0x342) = 0;
  param_1[0x69] = 0;
  param_1[0x6b] = 0;
  if ((ulong)((param_1[0x52] - (long)pvVar6 >> 3) * -0x5555555555555555) < 0x40) {
    __n = param_1[0x51] - (long)pvVar6;
    pvVar3 = operator_new(0x600);
    lVar5 = SUB168(SEXT816((long)__n) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
    __dest = (void *)((long)pvVar3 + __n + ((lVar5 >> 2) - (lVar5 >> 0x3f)) * 0x18);
    if (0 < (long)__n) {
      memcpy(__dest,pvVar6,__n);
    }
    param_1[0x50] = __dest;
    param_1[0x51] = (long)pvVar3 + __n;
    param_1[0x52] = (long)pvVar3 + 0x600;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
  }
  pBVar11 = (Buffer *)param_1[0x53];
  if ((ulong)(param_1[0x55] - (long)pBVar11 >> 6) < 0x40) {
    pBVar7 = (Buffer *)param_1[0x54];
    pvVar6 = operator_new(0x1000);
    pBVar1 = (Buffer *)((long)pvVar6 + ((long)pBVar7 - (long)pBVar11));
    if ((long)pBVar7 - (long)pBVar11 == 0) {
      param_1[0x53] = pBVar1;
      param_1[0x54] = pBVar1;
      param_1[0x55] = (long)pvVar6 + 0x1000;
    }
    else {
      pBVar9 = pBVar1;
      do {
        pBVar9 = pBVar9 + -0x40;
        pBVar7 = pBVar7 + -0x40;
        movie::Buffer::Buffer(pBVar9,pBVar7);
      } while (pBVar11 != pBVar7);
      pBVar7 = (Buffer *)param_1[0x53];
      pBVar11 = (Buffer *)param_1[0x54];
      param_1[0x54] = pBVar1;
      param_1[0x53] = pBVar9;
      param_1[0x55] = (long)pvVar6 + 0x1000;
      while (pBVar11 != pBVar7) {
        pBVar11 = pBVar11 + -0x40;
        movie::Buffer::~Buffer(pBVar11);
      }
    }
    if (pBVar7 != (Buffer *)0x0) {
      operator_delete(pBVar7);
    }
  }
  pBVar11 = (Buffer *)param_1[0x56];
  if ((ulong)(param_1[0x58] - (long)pBVar11 >> 6) < 0x40) {
    pBVar7 = (Buffer *)param_1[0x57];
    pvVar6 = operator_new(0x1000);
    pBVar1 = (Buffer *)((long)pvVar6 + ((long)pBVar7 - (long)pBVar11));
    if ((long)pBVar7 - (long)pBVar11 == 0) {
      param_1[0x56] = pBVar1;
      param_1[0x57] = pBVar1;
      param_1[0x58] = (long)pvVar6 + 0x1000;
    }
    else {
      pBVar9 = pBVar1;
      do {
        pBVar9 = pBVar9 + -0x40;
        pBVar7 = pBVar7 + -0x40;
        movie::Buffer::Buffer(pBVar9,pBVar7);
      } while (pBVar11 != pBVar7);
      pBVar7 = (Buffer *)param_1[0x56];
      pBVar11 = (Buffer *)param_1[0x57];
      param_1[0x57] = pBVar1;
      param_1[0x56] = pBVar9;
      param_1[0x58] = (long)pvVar6 + 0x1000;
      while (pBVar11 != pBVar7) {
        pBVar11 = pBVar11 + -0x40;
        movie::Buffer::~Buffer(pBVar11);
      }
    }
    if (pBVar7 != (Buffer *)0x0) {
      operator_delete(pBVar7);
    }
  }
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x5f),false,0);
  plVar8 = (long *)param_1[0x6d];
  lVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,0x2c8,8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  FUN_00767f00(lVar5);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  lVar4 = param_1[2];
  param_1[2] = lVar5;
  if (lVar4 != 0) {
    FUN_00767fe0(lVar4);
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar4,param_1[4],param_1[5]);
    lVar5 = param_1[2];
  }
  param_1[3] = plVar8;
  param_1[4] = 0x2c8;
  param_1[5] = 8;
  if (lVar5 != 0) {
    plVar8 = (long *)param_1[0x6d];
    uVar10 = param_1[0xb];
    pvVar6 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar10,0x1000);
    lVar5 = param_1[0xc];
    param_1[0xc] = pvVar6;
    if (lVar5 == 0) {
      param_1[0xd] = plVar8;
      param_1[0xe] = uVar10;
      param_1[0xf] = 0x1000;
    }
    else {
      (**(code **)(*(long *)param_1[0xd] + 0x18))
                ((long *)param_1[0xd],lVar5,param_1[0xe],param_1[0xf]);
      pvVar6 = (void *)param_1[0xc];
      param_1[0xd] = plVar8;
      param_1[0xe] = uVar10;
      param_1[0xf] = 0x1000;
    }
    if (pvVar6 != (void *)0x0) {
      iVar2 = nn::os::CreateThread
                        ((ThreadType *)(param_1 + 0x10),(_func_void_void_ptr *)PTR_LAB_02716080,
                         param_1,pvVar6,param_1[0xb],0x10,2);
      *(undefined1 *)((long)param_1 + 0x32) = 1;
      if (iVar2 == 0) {
        nn::os::SetThreadName((ThreadType *)(param_1 + 0x10),"MovieAudioOutputHandlerThread");
      }
      uVar10 = FUN_00767ff0(param_1[2]);
      return uVar10;
    }
  }
  return 0x1002;
}


