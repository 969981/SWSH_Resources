/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103e780; name: FUN_0103e780
 */


void FUN_0103e780(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = **(long **)(param_1 + 0x60);
  if ((ulong)*(uint *)(param_1 + 0xa4) <
      (ulong)(((*(long **)(param_1 + 0x60))[1] - lVar2 >> 3) * 0x6db6db6db6db6db7)) {
    uVar1 = *(undefined4 *)(lVar2 + (ulong)*(uint *)(param_1 + 0xa4) * 0x38);
    lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
    if (lVar2 == 0) {
      FUN_01539260(0,uVar1);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_01539260(lVar2,uVar1);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    lVar2 = **(long **)(param_1 + 0x60);
    if ((ulong)*(uint *)(param_1 + 0xa4) <
        (ulong)(((*(long **)(param_1 + 0x60))[1] - lVar2 >> 3) * 0x6db6db6db6db6db7)) {
      if (*(long *)(lVar2 + (ulong)*(uint *)(param_1 + 0xa4) * 0x38 + 8) == -0x7c0b76891bf9f31c) {
        FUN_0103e8a0(param_1);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


