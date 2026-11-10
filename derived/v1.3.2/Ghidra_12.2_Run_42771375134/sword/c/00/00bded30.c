/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bded30; name: FUN_00bded30
 */


void FUN_00bded30(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  void *__src;
  void *pvVar1;
  undefined *puVar2;
  long *plVar3;
  void *__dest;
  long lVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  plVar3 = (long *)*param_3;
  param_1[3] = plVar3;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  lVar4 = param_2[1] - *param_2;
  if (lVar4 != 0) {
    if (0x1ecc07b301ecc0 < (ulong)((lVar4 >> 4) * 0x133f84cfe133f84d)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
    if (__dest == (void *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    param_1[2] = (void *)((long)__dest + (lVar4 >> 4) * 0x10);
    *param_1 = __dest;
    param_1[1] = __dest;
    puVar2 = PTR_DAT_02710860;
    pvVar1 = (void *)param_2[1];
    for (__src = (void *)*param_2; __src != pvVar1; __src = (void *)((long)__src + 0x850)) {
      uVar5 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar5;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      memcpy(__dest,__src,0x850);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      __dest = (void *)(param_1[1] + 0x850);
      param_1[1] = __dest;
    }
  }
  return;
}


