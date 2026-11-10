/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008010b0; name: FUN_008010b0
 */


void FUN_008010b0(undefined8 param_1)

{
  undefined8 *puVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *__src;
  size_t __n;
  ulong uVar6;
  undefined *local_68;
  undefined *puStack_60;
  undefined1 local_58;
  
  if (*(long *)PTR_DAT_02716ef0 != 2) {
    local_58 = 0;
    local_68 = PTR_DAT_02716670 + 0x10;
    puStack_60 = PTR_LAB_02716ef8;
    FUN_00801c10(PTR_DAT_02716ef0,&local_68);
  }
  uVar4 = *(undefined8 *)PTR_DAT_02716f00;
  FUN_00801420(uVar4);
  puVar5 = *(undefined8 **)PTR_DAT_02716f08;
  puVar1 = (undefined8 *)puVar5[1];
  if (puVar1 != (undefined8 *)puVar5[2]) {
    *puVar1 = param_1;
    puVar5[1] = puVar5[1] + 8;
    goto LAB_008011e0;
  }
  __src = (void *)*puVar5;
  __n = (long)puVar1 - (long)__src;
  uVar6 = ((long)__n >> 3) + 1;
  if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = (long)puVar5[2] - (long)__src;
  if ((ulong)(lVar2 >> 3) < 0xfffffffffffffff) {
    uVar3 = lVar2 >> 2;
    if (uVar6 <= uVar3) {
      uVar6 = uVar3;
    }
    if (uVar6 != 0) {
      if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      goto LAB_0080119c;
    }
    __dest = (void *)0x0;
  }
  else {
    uVar6 = 0x1fffffffffffffff;
LAB_0080119c:
    __dest = operator_new(uVar6 << 3);
  }
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *puVar5 = __dest;
  puVar5[1] = puVar1 + 1;
  puVar5[2] = (void *)((long)__dest + uVar6 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
LAB_008011e0:
  FUN_008014c0(uVar4);
  return;
}


