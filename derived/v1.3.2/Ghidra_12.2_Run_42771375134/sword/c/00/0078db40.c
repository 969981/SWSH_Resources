/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0078db40; name: FUN_0078db40
 */


void FUN_0078db40(long *param_1,ulong param_2)

{
  long *plVar1;
  void *__s;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  __s = (void *)param_1[1];
  plVar1 = param_1 + 3;
  if (param_2 <= (ulong)((param_1[2] - (long)__s >> 3) * -0x7d05f417d05f417d)) {
    lVar3 = *plVar1;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar3;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
      memset(__s,0,0x158);
    }
    goto LAB_0078dddc;
  }
  lVar5 = (long)__s - *param_1 >> 3;
  uVar6 = 0xbe82fa0be82fa0;
  param_2 = lVar5 * -0x7d05f417d05f417d + param_2;
  if (0xbe82fa0be82fa0 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar3 * -0x7d05f417d05f417d) < 0x5f417d05f417d0) {
    uVar4 = lVar3 * 0x5f417d05f417d06;
    uVar6 = param_2;
    if (param_2 <= uVar4) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) goto LAB_0078dc88;
    lVar3 = 0;
  }
  else {
LAB_0078dc88:
    lVar3 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar6 * 0x158,8);
    if (lVar3 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xb8))();
    }
  }
  lVar7 = *plVar1;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar7;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
    memset((void *)(lVar3 + lVar5 * 8),0,0x158);
  }
LAB_0078dddc:
                    /* WARNING: Subroutine does not return */
  abort();
}


