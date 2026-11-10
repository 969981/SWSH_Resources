/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087fcc0; name: FUN_0087fcc0
 */


void FUN_0087fcc0(undefined8 param_1)

{
  char *param3;
  long lVar1;
  size_t sVar2;
  char *param4;
  char *__s;
  char acStack_130 [255];
  undefined1 local_31;
  
  lVar1 = FUN_00866030();
  __s = *(char **)(lVar1 + 0x20);
  sVar2 = strlen(__s);
  if (sVar2 == 0) {
    param4 = "";
  }
  else {
    param4 = "";
    if (__s[sVar2 - 1] != '/') {
      param4 = "/";
    }
  }
  param3 = "";
  if (__s != (char *)0x0) {
    param3 = __s;
  }
  snprintf(acStack_130,0xff,"%s%s%s",param3,param4,"personal_total.bin");
  local_31 = 0;
  FUN_008801a0(param_1,acStack_130);
  return;
}


