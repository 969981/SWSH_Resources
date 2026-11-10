/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ec080; name: operator+
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::string std::TEMPNAMEPLACEHOLDERVALUE(std::string const&, char const*) */

void std::operator+(string *param_1,char *param_2)

{
  size_t sVar1;
  ulong *in_x8;
  size_t __n;
  string *__src;
  char *__dest;
  ulong uVar2;
  
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  if (((byte)*param_1 & 1) == 0) {
    __n = (size_t)((byte)*param_1 >> 1);
    sVar1 = strlen(param_2);
    __src = param_1 + 1;
    uVar2 = __n + sVar1;
  }
  else {
    __n = *(size_t *)(param_1 + 8);
    sVar1 = strlen(param_2);
    __src = *(string **)(param_1 + 0x10);
    uVar2 = __n + sVar1;
  }
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar2 < 0x17) {
    __dest = (char *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
  }
  else {
    uVar2 = uVar2 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    *in_x8 = uVar2 | 1;
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
  }
  if (__n != 0) {
    memcpy(__dest,__src,__n);
  }
  __dest[__n] = '\0';
  std::string::append((char *)in_x8,(ulong)param_2);
  return;
}


