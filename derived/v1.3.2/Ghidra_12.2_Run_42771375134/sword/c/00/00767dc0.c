/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00767dc0; name: FUN_00767dc0
 */


void FUN_00767dc0(long *param_1,Buffer *param_2)

{
  Buffer *pBVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  Buffer *this;
  ulong uVar6;
  Buffer *pBVar7;
  Buffer *pBVar8;
  
  lVar5 = param_1[1] - *param_1 >> 6;
  uVar6 = lVar5 + 1;
  if (uVar6 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1;
  if ((ulong)(lVar3 >> 6) < 0x1ffffffffffffff) {
    uVar4 = lVar3 >> 5;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    if (uVar6 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00767e34;
    }
    if (uVar6 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    uVar6 = 0x3ffffffffffffff;
  }
  pvVar2 = operator_new(uVar6 << 6);
LAB_00767e34:
  this = (Buffer *)((long)pvVar2 + lVar5 * 0x40);
  pvVar2 = (void *)((long)pvVar2 + uVar6 * 0x40);
  movie::Buffer::Buffer(this,param_2);
  pBVar8 = (Buffer *)*param_1;
  pBVar7 = (Buffer *)param_1[1];
  pBVar1 = this + 0x40;
  if (pBVar7 == pBVar8) {
    *param_1 = (long)this;
    param_1[1] = (long)pBVar1;
    param_1[2] = (long)pvVar2;
  }
  else {
    do {
      this = this + -0x40;
      pBVar7 = pBVar7 + -0x40;
      movie::Buffer::Buffer(this,pBVar7);
    } while (pBVar8 != pBVar7);
    pBVar8 = (Buffer *)*param_1;
    pBVar7 = (Buffer *)param_1[1];
    *param_1 = (long)this;
    param_1[1] = (long)pBVar1;
    param_1[2] = (long)pvVar2;
    while (pBVar7 != pBVar8) {
      pBVar7 = pBVar7 + -0x40;
      movie::Buffer::~Buffer(pBVar7);
    }
  }
  if (pBVar8 == (Buffer *)0x0) {
    return;
  }
  operator_delete(pBVar8);
  return;
}


