/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00722e10; name: FUN_00722e10
 */


void FUN_00722e10(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *__src;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[2] - lVar3 >> 4) * -0x79435e50d79435e5) < param_2) {
    lVar4 = param_1[1];
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x130,0x10);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    puVar1 = PTR_DAT_02710860;
    pvVar5 = (void *)(lVar2 + (lVar4 - lVar3 >> 4) * 0x10);
    pvVar6 = (void *)*param_1;
    __src = (void *)param_1[1];
    pvVar7 = pvVar5;
    if (__src != pvVar6) {
      do {
        lVar4 = param_1[3];
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar4;
        __src = (void *)((long)__src + -0x130);
        pvVar7 = (void *)((long)pvVar7 + -0x130);
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        memcpy(pvVar7,__src,0x130);
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      } while (pvVar6 != __src);
      pvVar6 = (void *)*param_1;
    }
    lVar3 = param_1[2];
    param_1[2] = lVar2 + param_2 * 0x130;
    *param_1 = (long)pvVar7;
    param_1[1] = (long)pvVar5;
    if (pvVar6 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00722f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pvVar6,lVar3 - (long)pvVar6,0x10)
      ;
      return;
    }
  }
  return;
}


