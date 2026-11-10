/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00801da0; name: FUN_00801da0
 */


long * FUN_00801da0(long *param_1,long param_2,long param_3,long param_4,long param_5,int param_6)

{
  ulong __n;
  long lVar1;
  long lVar2;
  void *__s;
  ulong uVar3;
  ulong local_68;
  ulong local_60;
  void *pvStack_58;
  
  if (param_1 != (long *)0x0) {
    __n = *(long *)(param_5 + 0x18) - (param_4 - param_2);
    lVar2 = param_3 - param_2;
    if (__n == 0 || *(long *)(param_5 + 0x18) < param_4 - param_2) {
      __n = 0;
    }
    if ((lVar2 < 1) ||
       (lVar1 = (**(code **)(*param_1 + 0x60))(param_1,param_2,lVar2), lVar1 == lVar2)) {
      if (0 < (long)__n) {
        local_60 = 0;
        pvStack_58 = (void *)0x0;
        local_68 = 0;
        if (__n < 0x17) {
          local_68 = (ulong)(byte)((int)__n << 1);
          __s = (void *)((ulong)&local_68 | 1);
        }
        else {
          uVar3 = __n + 0x10 & 0xfffffffffffffff0;
          __s = operator_new(uVar3);
          local_68 = uVar3 | 1;
          local_60 = __n;
          pvStack_58 = __s;
        }
                    /* WARNING: Subroutine does not return */
        memset(__s,param_6,__n);
      }
      param_4 = param_4 - param_3;
      if ((param_4 < 1) ||
         (lVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_3,param_4), lVar2 == param_4)) {
        *(undefined8 *)(param_5 + 0x18) = 0;
        return param_1;
      }
    }
  }
  return (long *)0x0;
}


