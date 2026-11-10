/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007678c0; name: FUN_007678c0
 */


void FUN_007678c0(long param_1)

{
  size_t __n;
  long lVar1;
  undefined4 *puVar2;
  void *__dest;
  Buffer *this;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x31) = 1;
  if (*(char *)(param_1 + 0x32) != '\0') {
    if (*(char *)(param_1 + 0x30) != '\0') {
      nn::os::WaitThread((ThreadType *)(param_1 + 0x80));
      *(undefined1 *)(param_1 + 0x30) = 0;
    }
    nn::os::DestroyThread((ThreadType *)(param_1 + 0x80));
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  FUN_007687d0(*(undefined8 *)(param_1 + 0x10));
  nn::os::LockMutex((MutexType *)(param_1 + 0x2f8));
  puVar2 = *(undefined4 **)(param_1 + 0x280);
  iVar3 = (int)((ulong)(*(long *)(param_1 + 0x288) - (long)puVar2) >> 3) * -0x55555555;
  if (0 < iVar3) {
    while( true ) {
      iVar3 = iVar3 + -1;
      (**(code **)(**(long **)(param_1 + 8) + 0x78))(*(long **)(param_1 + 8),*puVar2);
      __dest = *(void **)(param_1 + 0x280);
      __n = *(long *)(param_1 + 0x288) - ((long)__dest + 0x18);
      if (__n != 0) {
        memmove(__dest,(void *)((long)__dest + 0x18),__n);
      }
      *(void **)(param_1 + 0x288) = (void *)((long)__dest + ((long)__n >> 3) * 8);
      if (iVar3 == 0) break;
      puVar2 = *(undefined4 **)(param_1 + 0x280);
    }
  }
  if (*(long *)(param_1 + 0x348) != 0) {
    (**(code **)(**(long **)(param_1 + 0x368) + 0x18))
              (*(long **)(param_1 + 0x368),*(long *)(param_1 + 0x348),0,0);
    *(undefined8 *)(param_1 + 0x348) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x248) = 0;
  if (lVar1 != 0) {
    (**(code **)(**(long **)(param_1 + 0x250) + 0x18))
              (*(long **)(param_1 + 0x250),lVar1,*(undefined8 *)(param_1 + 600),
               *(undefined8 *)(param_1 + 0x260));
  }
  this = *(Buffer **)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  if (this != (Buffer *)0x0) {
    movie::Buffer::~Buffer(this);
    (**(code **)(**(long **)(param_1 + 0x2d0) + 0x18))
              (*(long **)(param_1 + 0x2d0),this,*(undefined8 *)(param_1 + 0x2d8),
               *(undefined8 *)(param_1 + 0x2e0));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2f8));
  return;
}


