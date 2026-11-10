/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087fd60; name: FUN_0087fd60
 */


void FUN_0087fd60(undefined8 param_1,int param_2)

{
  char *param3;
  int iVar1;
  long lVar2;
  size_t sVar3;
  char *param4;
  char *__s;
  char acStack_170 [63];
  undefined1 local_131;
  char acStack_130 [255];
  undefined1 local_31;
  
  iVar1 = snprintf(acStack_170,0x3f,"waza%04d.wazabin",param_2);
  local_131 = 0;
  lVar2 = FUN_00866030(iVar1);
  __s = *(char **)(lVar2 + 0x28);
  sVar3 = strlen(__s);
  if (sVar3 == 0) {
    param4 = "";
  }
  else {
    param4 = "";
    if (__s[sVar3 - 1] != '/') {
      param4 = "/";
    }
  }
  param3 = "";
  if (__s != (char *)0x0) {
    param3 = __s;
  }
  snprintf(acStack_130,0xff,"%s%s%s",param3,param4,acStack_170);
  local_31 = 0;
  FUN_008801a0(param_1,acStack_130);
  return;
}


