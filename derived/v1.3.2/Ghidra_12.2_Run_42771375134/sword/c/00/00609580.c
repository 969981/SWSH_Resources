/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00609580; name: FUN_00609580
 */


undefined8
FUN_00609580(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  size_t __n;
  char local_c0;
  byte local_bf;
  char acStack_be [61];
  char local_81;
  char local_76;
  char local_6e;
  byte local_6d;
  byte local_6c;
  byte local_6b;
  byte local_6a;
  
  if ((param_2 != (undefined8 *)0x0) &&
     (((code *)param_2[5] == (code *)0x0 ||
      (lVar1 = (*(code *)param_2[5])(param_2,0,0,0), lVar1 == 0)))) {
    __n = param_2[1];
    param_2[2] = 0;
    if (__n != 0) {
      if ((code *)param_2[5] == (code *)0x0) {
        if (0x7f < __n) {
          __n = 0x80;
        }
        memcpy(&local_c0,(void *)*param_2,__n);
        param_2[2] = __n;
      }
      else {
        __n = (*(code *)param_2[5])(param_2,0,&local_c0,0x80);
        param_2[2] = __n;
      }
      if (0x7f < __n) {
        if ((((local_c0 == '\0') && (local_76 == '\0')) && (local_6e == '\0')) &&
           ((((byte)(local_bf - 1) < 0x21 && (local_81 == '\0')) &&
            ((acStack_be[local_bf] == '\0' && (-1 < (char)local_6d)))))) {
          uVar2 = FUN_006096e0(param_1,param_2,
                               ((long)(int)((uint)local_6d << 0x18) | (ulong)local_6c << 0x10 |
                                (ulong)local_6b << 8 | (ulong)local_6a) + 0xff & 0xffffffffffffff80,
                               param_3,param_4);
          return uVar2;
        }
        return 2;
      }
    }
  }
  return 0x55;
}


