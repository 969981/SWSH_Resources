/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c3e10; name: FUN_012c3e10
 */


void FUN_012c3e10(undefined8 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  size_t __n;
  undefined *puVar1;
  undefined2 *puVar2;
  long lVar3;
  ulong uVar4;
  void *__dest;
  undefined2 *puVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  ulong uVar8;
  
  uVar4 = param_1[2];
  __dest = (void *)*param_1;
  uVar8 = (long)param_3 - (long)param_2 >> 1;
  if (uVar8 <= (ulong)((long)(uVar4 - (long)__dest) >> 1)) {
    uVar4 = param_1[1] - (long)__dest >> 1;
    puVar2 = (undefined2 *)((long)param_2 + (param_1[1] - (long)__dest));
    puVar5 = puVar2;
    if (uVar8 <= uVar4) {
      puVar5 = param_3;
    }
    __n = (long)puVar5 - (long)param_2;
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    puVar1 = PTR_DAT_02710860;
    if (uVar4 < uVar8) {
      if (puVar5 != param_3) {
        puVar5 = (undefined2 *)param_1[1];
        do {
          uVar6 = param_1[3];
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_012c400c;
          *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar6;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          puVar7 = puVar2 + 1;
          *puVar5 = *puVar2;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          puVar5 = (undefined2 *)(param_1[1] + 2);
          param_1[1] = puVar5;
          puVar2 = puVar7;
        } while (param_3 != puVar7);
      }
    }
    else {
      param_1[1] = (void *)((long)__dest + ((long)__n >> 1) * 2);
    }
    return;
  }
  if (__dest != (void *)0x0) {
    param_1[1] = __dest;
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],__dest,uVar4 - (long)__dest,2);
    uVar4 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  if (-1 < (long)param_3 - (long)param_2) {
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    if (0x3ffffffffffffffe < (ulong)((long)uVar4 >> 1)) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (-1 < (long)uVar8) {
      puVar2 = (undefined2 *)
               (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar8 << 1,2);
      if (puVar2 == (undefined2 *)0x0) {
        (**(code **)(*(long *)param_1[3] + 0xb8))();
      }
      param_1[2] = puVar2 + uVar8;
      *param_1 = puVar2;
      param_1[1] = puVar2;
      puVar1 = PTR_DAT_02710860;
      while( true ) {
        if (param_2 == param_3) {
          return;
        }
        uVar6 = param_1[3];
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar3 + 0x80)) break;
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar6;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        *puVar2 = *param_2;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        puVar2 = (undefined2 *)(param_1[1] + 2);
        param_1[1] = puVar2;
        param_2 = param_2 + 1;
      }
LAB_012c400c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_length_error();
}


