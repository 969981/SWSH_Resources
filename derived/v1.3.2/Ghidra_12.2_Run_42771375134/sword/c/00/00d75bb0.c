/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d75bb0; name: FUN_00d75bb0
 */


void FUN_00d75bb0(long *param_1,void *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  void *__dest;
  void *pvVar8;
  long lVar9;
  void *__src;
  ulong uVar10;
  
  lVar4 = param_1[1] - *param_1 >> 3;
  uVar10 = 0xc7ce0c7ce0c7ce;
  uVar1 = lVar4 * -0x7063e7063e7063e7 + 1;
  if (0xc7ce0c7ce0c7ce < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar5 * -0x7063e7063e7063e7) < 0x63e7063e7063e7) {
    uVar6 = lVar5 * 0x1f3831f3831f3832;
    uVar10 = uVar1;
    if (uVar1 <= uVar6) {
      uVar10 = uVar6;
    }
    if (uVar10 == 0) {
      lVar5 = 0;
      goto LAB_00d75c88;
    }
  }
  lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar10 * 0x148,8);
  if (lVar5 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_00d75c88:
  puVar2 = PTR_DAT_02710860;
  lVar9 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00d75dd4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar9;
  __dest = (void *)(lVar5 + lVar4 * 8);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  memcpy(__dest,param_2,0x148);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  pvVar7 = (void *)*param_1;
  __src = (void *)param_1[1];
  pvVar8 = __dest;
  if (__src != pvVar7) {
    do {
      lVar3 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00d75dd4;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar3;
      __src = (void *)((long)__src + -0x148);
      pvVar8 = (void *)((long)pvVar8 + -0x148);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      memcpy(pvVar8,__src,0x148);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    } while (pvVar7 != __src);
    pvVar7 = (void *)*param_1;
  }
  *param_1 = (long)pvVar8;
  param_1[1] = (long)__dest + 0x148;
  lVar4 = param_1[2];
  param_1[2] = lVar5 + uVar10 * 0x148;
  if (pvVar7 == (void *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d75db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pvVar7,lVar4 - (long)pvVar7,8);
  return;
}


