/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00603280; name: FUN_00603280
 */


undefined8 FUN_00603280(undefined8 *param_1,char *param_2)

{
  int iVar1;
  char *__s1;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (char *)0x0)) {
    __s1 = (char *)*param_1;
    while (__s1 != (char *)0x0) {
      iVar1 = strcmp(__s1,param_2);
      if (iVar1 == 0) {
        return param_1[1];
      }
      __s1 = (char *)param_1[2];
      param_1 = param_1 + 2;
    }
  }
  return 0;
}


