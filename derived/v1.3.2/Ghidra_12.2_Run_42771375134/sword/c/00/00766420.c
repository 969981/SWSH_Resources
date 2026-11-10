/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00766420; name: FUN_00766420
 */


void FUN_00766420(long param_1)

{
  void *pvVar1;
  long lVar2;
  Buffer *pBVar3;
  Buffer *pBVar4;
  
  pBVar3 = *(Buffer **)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  if (pBVar3 != (Buffer *)0x0) {
    movie::Buffer::~Buffer(pBVar3);
    (**(code **)(**(long **)(param_1 + 0x2d0) + 0x18))
              (*(long **)(param_1 + 0x2d0),pBVar3,*(undefined8 *)(param_1 + 0x2d8),
               *(undefined8 *)(param_1 + 0x2e0));
  }
  pBVar3 = *(Buffer **)(param_1 + 0x2b0);
  if (pBVar3 != (Buffer *)0x0) {
    pBVar4 = *(Buffer **)(param_1 + 0x2b8);
    if (pBVar4 == pBVar3) {
      pBVar4 = pBVar3;
    }
    else {
      do {
        pBVar4 = pBVar4 + -0x40;
        movie::Buffer::~Buffer(pBVar4);
      } while (pBVar3 != pBVar4);
      pBVar4 = *(Buffer **)(param_1 + 0x2b0);
    }
    *(Buffer **)(param_1 + 0x2b8) = pBVar3;
    operator_delete(pBVar4);
  }
  pBVar3 = *(Buffer **)(param_1 + 0x298);
  if (pBVar3 != (Buffer *)0x0) {
    pBVar4 = *(Buffer **)(param_1 + 0x2a0);
    if (pBVar4 == pBVar3) {
      pBVar4 = pBVar3;
    }
    else {
      do {
        pBVar4 = pBVar4 + -0x40;
        movie::Buffer::~Buffer(pBVar4);
      } while (pBVar3 != pBVar4);
      pBVar4 = *(Buffer **)(param_1 + 0x298);
    }
    *(Buffer **)(param_1 + 0x2a0) = pBVar3;
    operator_delete(pBVar4);
  }
  pvVar1 = *(void **)(param_1 + 0x280);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x288) = pvVar1;
    operator_delete(pvVar1);
  }
  lVar2 = *(long *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x248) = 0;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x250) + 0x18))
              (*(long **)(param_1 + 0x250),lVar2,*(undefined8 *)(param_1 + 600),
               *(undefined8 *)(param_1 + 0x260));
  }
  lVar2 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
              (*(long **)(param_1 + 0x68),lVar2,*(undefined8 *)(param_1 + 0x70),
               *(undefined8 *)(param_1 + 0x78));
  }
  lVar2 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_00767fe0(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00766564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
            (*(long **)(param_1 + 0x18),lVar2,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}


