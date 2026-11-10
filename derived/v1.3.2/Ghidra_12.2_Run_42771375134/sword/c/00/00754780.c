/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00754780; name: FUN_00754780
 */


void FUN_00754780(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar4 = (long *)param_2[3];
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (long)plVar4;
  *(undefined4 *)(param_1 + 5) = 0;
  lVar2 = param_2[1] - *param_2;
  if (lVar2 != 0) {
    if (0x1745d1745d1745d < (ulong)((lVar2 >> 4) * 0x2e8ba2e8ba2e8ba3)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar2,0x10);
    if (lVar5 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    param_1[2] = lVar5 + (lVar2 >> 4) * 0x10;
    *param_1 = lVar5;
    param_1[1] = lVar5;
    puVar3 = PTR_DAT_02710860;
    lVar1 = param_2[1];
    for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0xb0) {
      lVar7 = param_1[3];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar7;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      FUN_007548c0(lVar5,lVar2);
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      lVar5 = param_1[1] + 0xb0;
      param_1[1] = lVar5;
    }
  }
  return;
}


