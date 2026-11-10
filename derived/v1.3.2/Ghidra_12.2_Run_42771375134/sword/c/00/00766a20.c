/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00766a20; name: FUN_00766a20
 */


undefined8 FUN_00766a20(long param_1)

{
  long lVar1;
  Buffer *pBVar2;
  Buffer *pBVar3;
  
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2f8));
  lVar1 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (lVar1 != 0) {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
              (*(long **)(param_1 + 0x68),lVar1,*(undefined8 *)(param_1 + 0x70),
               *(undefined8 *)(param_1 + 0x78));
  }
  pBVar3 = *(Buffer **)(param_1 + 0x298);
  pBVar2 = *(Buffer **)(param_1 + 0x2a0);
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_1 + 0x280);
  while (pBVar2 != pBVar3) {
    pBVar2 = pBVar2 + -0x40;
    movie::Buffer::~Buffer(pBVar2);
  }
  *(Buffer **)(param_1 + 0x2a0) = pBVar3;
  pBVar3 = *(Buffer **)(param_1 + 0x2b0);
  pBVar2 = *(Buffer **)(param_1 + 0x2b8);
  while (pBVar2 != pBVar3) {
    pBVar2 = pBVar2 + -0x40;
    movie::Buffer::~Buffer(pBVar2);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  *(Buffer **)(param_1 + 0x2b8) = pBVar3;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar1 != 0) {
    FUN_00767fe0(lVar1);
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
              (*(long **)(param_1 + 0x18),lVar1,*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28));
  }
  return 0;
}


