/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006acf30; name: FUN_006acf30
 */


void FUN_006acf30(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  void *__dest;
  void *__src;
  void *pvVar9;
  ulong uVar10;
  
  lVar4 = param_1[1] - *param_1 >> 4;
  uVar10 = 0x111111111111111;
  uVar1 = lVar4 * -0x1111111111111111 + 1;
  if (0x111111111111111 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1 >> 4;
  if ((ulong)(lVar5 * -0x1111111111111111) < 0x88888888888888) {
    uVar6 = lVar5 * -0x2222222222222222;
    uVar10 = uVar1;
    if (uVar1 <= uVar6) {
      uVar10 = uVar6;
    }
    if (uVar10 == 0) {
      lVar5 = 0;
      goto LAB_006ad000;
    }
  }
  lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar10 * 0xf0,0x10);
  if (lVar5 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_006ad000:
  puVar2 = PTR_DAT_02710860;
  lVar7 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_006ad144:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar7;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  pvVar9 = (void *)(lVar5 + lVar4 * 0x10);
  FUN_006ad150(pvVar9,*param_2,*param_3,*param_4,*param_5);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  pvVar8 = (void *)*param_1;
  __src = (void *)param_1[1];
  __dest = pvVar9;
  if (__src != pvVar8) {
    do {
      lVar3 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_006ad144;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar3;
      __src = (void *)((long)__src + -0xf0);
      __dest = (void *)((long)__dest + -0xf0);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      memcpy(__dest,__src,0xf0);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    } while (pvVar8 != __src);
    pvVar8 = (void *)*param_1;
  }
  *param_1 = (long)__dest;
  param_1[1] = (long)pvVar9 + 0xf0;
  lVar4 = param_1[2];
  param_1[2] = lVar5 + uVar10 * 0xf0;
  if (pvVar8 == (void *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006ad120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pvVar8,lVar4 - (long)pvVar8,0x10);
  return;
}


