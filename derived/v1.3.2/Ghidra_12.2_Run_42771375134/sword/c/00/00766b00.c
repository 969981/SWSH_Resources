/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00766b00; name: FUN_00766b00
 */


int FUN_00766b00(long param_1,long param_2,undefined4 param_3,int param_4,byte param_5)

{
  MutexType *pMVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  Buffer *this;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  Buffer *this_00;
  Buffer aBStack_a0 [64];
  
  pMVar1 = (MutexType *)(param_1 + 0x2f8);
  nn::os::LockMutex(pMVar1);
  *(int *)(param_1 + 0x3c) = param_4;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  *(int *)(param_1 + 0x44) = param_4;
  *(long *)(param_1 + 8) = param_2;
  *(byte *)(param_1 + 0x278) = param_5 & 1;
  if (param_2 == 0) {
    nn::os::UnlockMutex(pMVar1);
    iVar4 = 0x1000;
  }
  else {
    if (2 < param_4) {
      *(undefined8 *)(param_1 + 0x270) = 0x300000008000;
      *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x26c) << 0xf;
    }
    plVar8 = *(long **)(param_1 + 0x368);
    this = (Buffer *)(**(code **)(*plVar8 + 0x10))(plVar8,0x40,8);
    puVar3 = PTR_DAT_02710860;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00766e58:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    movie::Buffer::Buffer(this,(long)*(int *)(param_1 + 0x270));
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    this_00 = *(Buffer **)(param_1 + 0x2c8);
    *(Buffer **)(param_1 + 0x2c8) = this;
    if (this_00 != (Buffer *)0x0) {
      movie::Buffer::~Buffer(this_00);
      (**(code **)(**(long **)(param_1 + 0x2d0) + 0x18))
                (*(long **)(param_1 + 0x2d0),this_00,*(undefined8 *)(param_1 + 0x2d8),
                 *(undefined8 *)(param_1 + 0x2e0));
      this = *(Buffer **)(param_1 + 0x2c8);
    }
    *(long **)(param_1 + 0x2d0) = plVar8;
    *(undefined8 *)(param_1 + 0x2d8) = 0x40;
    *(undefined8 *)(param_1 + 0x2e0) = 8;
    if (this != (Buffer *)0x0) {
      movie::Buffer::SetRange((int)this,0);
      plVar8 = *(long **)(param_1 + 0x368);
      iVar4 = *(int *)(param_1 + 0x268);
      pvVar6 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,(long)iVar4,1);
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00766e58;
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
      lVar7 = *(long *)(lVar5 + 0x80);
      *(long *)(lVar5 + 0x80) = lVar7 + 1;
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        memset(pvVar6,0,(long)iVar4);
      }
      *(long *)(lVar5 + 0x80) = lVar7;
      lVar5 = *(long *)(param_1 + 0x248);
      *(void **)(param_1 + 0x248) = pvVar6;
      if (lVar5 != 0) {
        (**(code **)(**(long **)(param_1 + 0x250) + 0x18))
                  (*(long **)(param_1 + 0x250),lVar5,*(undefined8 *)(param_1 + 600),
                   *(undefined8 *)(param_1 + 0x260));
        pvVar6 = *(void **)(param_1 + 0x248);
      }
      *(long **)(param_1 + 0x250) = plVar8;
      *(undefined8 *)(param_1 + 600) = 0;
      *(undefined8 *)(param_1 + 0x260) = 1;
      if (pvVar6 != (void *)0x0) {
        if (0 < *(int *)(param_1 + 0x26c)) {
          iVar9 = 0;
          iVar4 = 1;
          while( true ) {
            movie::Buffer::Buffer
                      (aBStack_a0,(void *)((long)pvVar6 + (long)iVar9),
                       (long)*(int *)(param_1 + 0x270));
            iVar2 = *(int *)(param_1 + 0x270);
            if (*(Buffer **)(param_1 + 0x2a0) == *(Buffer **)(param_1 + 0x2a8)) {
              std::vector<movie::Buffer,std::allocator<movie::Buffer>>::
              __push_back_slow_path<movie::Buffer_const&>
                        ((vector<movie::Buffer,std::allocator<movie::Buffer>> *)(param_1 + 0x298),
                         aBStack_a0);
            }
            else {
              movie::Buffer::Buffer(*(Buffer **)(param_1 + 0x2a0),aBStack_a0);
              *(long *)(param_1 + 0x2a0) = *(long *)(param_1 + 0x2a0) + 0x40;
            }
            movie::Buffer::~Buffer(aBStack_a0);
            if (*(int *)(param_1 + 0x26c) <= iVar4) break;
            iVar9 = iVar2 + iVar9;
            pvVar6 = *(void **)(param_1 + 0x248);
            iVar4 = iVar4 + 1;
          }
        }
        if (*(int *)(param_1 + 0x44) != 1) {
          *(undefined4 *)(param_1 + 0x38) = 48000;
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x3c) << 1;
          iVar4 = FUN_00768010(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x40),
                               *(int *)(param_1 + 0x3c),param_1 + 0x341);
          if (iVar4 == 0) {
            *(undefined1 *)(param_1 + 0x34) = 1;
          }
          nn::os::UnlockMutex(pMVar1);
          return iVar4;
        }
        *(undefined1 *)(param_1 + 0x342) = 1;
        *(undefined4 *)(param_1 + 0x3c) = 2;
        pvVar6 = (void *)(**(code **)(**(long **)(param_1 + 0x368) + 0x10))
                                   (*(long **)(param_1 + 0x368),*(undefined8 *)(param_1 + 0x350),
                                    0x1000);
        *(void **)(param_1 + 0x348) = pvVar6;
        if (pvVar6 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          memset(pvVar6,0,*(size_t *)(param_1 + 0x350));
        }
        nn::os::UnlockMutex(pMVar1);
      }
    }
    iVar4 = 0x1002;
  }
  return iVar4;
}


