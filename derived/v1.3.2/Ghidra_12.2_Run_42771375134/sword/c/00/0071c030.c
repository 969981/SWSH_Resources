/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0071c030; name: FUN_0071c030
 */


void FUN_0071c030(long *param_1,ulong param_2)

{
  void *__s;
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  __s = (void *)param_1[1];
  if (param_2 <= (ulong)((param_1[2] - (long)__s >> 6) * -0x79435e50d79435e5)) {
    lVar2 = param_1[3];
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar4 + 0x80) < 0x10) {
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar2;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
      memset(__s,0,0x4c0);
    }
    goto LAB_0071c2e8;
  }
  lVar4 = (long)__s - *param_1 >> 6;
  uVar5 = 0x35e50d79435e50;
  param_2 = lVar4 * -0x79435e50d79435e5 + param_2;
  if (0x35e50d79435e50 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = param_1[2] - *param_1 >> 6;
  if ((ulong)(lVar2 * -0x79435e50d79435e5) < 0x1af286bca1af28) {
    uVar3 = lVar2 * 0xd79435e50d79436;
    uVar5 = param_2;
    if (param_2 <= uVar3) {
      uVar5 = uVar3;
    }
    if (uVar5 != 0) goto LAB_0071c0dc;
    lVar2 = 0;
  }
  else {
LAB_0071c0dc:
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar5 * 0x4c0,0x10);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
  }
  lVar6 = param_1[3];
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar1 + 0x80) < 0x10) {
    *(long *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = lVar6;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
    memset((void *)(lVar2 + lVar4 * 0x40),0,0x4c0);
  }
LAB_0071c2e8:
                    /* WARNING: Subroutine does not return */
  abort();
}


