/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e61f0; name: FUN_007e61f0
 */


void FUN_007e61f0(long param_1,char *param_2)

{
  size_t __n;
  string *this;
  void *__dest;
  ulong uVar1;
  string *psVar2;
  ulong local_58;
  size_t local_50;
  void *local_48;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
  psVar2 = *(string **)PTR_DAT_02716d10;
  local_50 = 0;
  local_48 = (void *)0x0;
  local_58 = 0;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_58 = CONCAT71(local_58._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_58 | 1);
    if (__n == 0) goto LAB_007e6298;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar1);
    local_58 = uVar1 | 1;
    local_50 = __n;
    local_48 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_007e6298:
  *(undefined1 *)((long)__dest + __n) = 0;
  this = *(string **)(param_1 + 0x30);
  if (this == psVar2) {
    FUN_009b58d0((undefined8 *)(param_1 + 0x30));
  }
  else {
    std::string::operator=(this,(string *)&local_58);
  }
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  return;
}


