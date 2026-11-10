/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007eac10; name: FUN_007eac10
 */


void FUN_007eac10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 char *param_5)

{
  size_t __n;
  void *__dest;
  ulong uVar1;
  ulong local_68;
  size_t local_60;
  void *local_58;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = (void *)0x0;
  __n = strlen(param_5);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_68 = CONCAT71(local_68._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_68 | 1);
    if (__n == 0) goto LAB_007eacac;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar1);
    local_68 = uVar1 | 1;
    local_60 = __n;
    local_58 = __dest;
  }
  memcpy(__dest,param_5,__n);
LAB_007eacac:
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_007eaaf0(param_1,param_2,param_3,param_4,&local_68);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  return;
}


