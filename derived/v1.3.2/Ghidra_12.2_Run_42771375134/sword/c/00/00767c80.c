/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00767c80; name: __push_back_slow_path<movie::Buffer_const&>
 */


/* void std::vector<movie::Buffer, std::allocator<movie::Buffer>
   >::__push_back_slow_path<movie::Buffer const&>(movie::Buffer const&) */

void __thiscall
std::vector<movie::Buffer,std::allocator<movie::Buffer>>::
__push_back_slow_path<movie::Buffer_const&>
          (vector<movie::Buffer,std::allocator<movie::Buffer>> *this,Buffer *param_1)

{
  Buffer *pBVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  Buffer *this_00;
  ulong uVar6;
  Buffer *pBVar7;
  Buffer *pBVar8;
  
  lVar5 = *(long *)(this + 8) - *(long *)this >> 6;
  uVar6 = lVar5 + 1;
  if (uVar6 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = *(long *)(this + 0x10) - *(long *)this;
  if ((ulong)(lVar3 >> 6) < 0x1ffffffffffffff) {
    uVar4 = lVar3 >> 5;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    if (uVar6 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00767cf4;
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
LAB_00767cf4:
  this_00 = (Buffer *)((long)pvVar2 + lVar5 * 0x40);
  pvVar2 = (void *)((long)pvVar2 + uVar6 * 0x40);
  movie::Buffer::Buffer(this_00,param_1);
  pBVar8 = *(Buffer **)this;
  pBVar7 = *(Buffer **)(this + 8);
  pBVar1 = this_00 + 0x40;
  if (pBVar7 == pBVar8) {
    *(Buffer **)this = this_00;
    *(Buffer **)(this + 8) = pBVar1;
    *(void **)(this + 0x10) = pvVar2;
  }
  else {
    do {
      this_00 = this_00 + -0x40;
      pBVar7 = pBVar7 + -0x40;
      movie::Buffer::Buffer(this_00,pBVar7);
    } while (pBVar8 != pBVar7);
    pBVar8 = *(Buffer **)this;
    pBVar7 = *(Buffer **)(this + 8);
    *(Buffer **)this = this_00;
    *(Buffer **)(this + 8) = pBVar1;
    *(void **)(this + 0x10) = pvVar2;
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


