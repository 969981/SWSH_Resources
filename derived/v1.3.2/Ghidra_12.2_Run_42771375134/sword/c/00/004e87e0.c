/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e87e0; name: FUN_004e87e0
 */


void FUN_004e87e0(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  size_t sVar1;
  void *__dest;
  char *__s;
  ulong __n;
  
  __s = *(char **)(param_2 + 10);
  if ((*(long *)(param_1 + 6) != 0) && (*(char *)(param_1 + 8) != '\0')) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
    *(undefined1 *)(param_1 + 8) = 0;
  }
  *(char **)(param_1 + 6) = __s;
  if ((__s != (char *)0x0) && (*(char *)(param_1 + 8) == '\0')) {
    sVar1 = strlen(__s);
    if ((int)sVar1 == 0) {
      *(undefined8 *)(param_1 + 6) = 0;
    }
    else {
      __n = (ulong)((int)sVar1 + 1);
      __dest = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02713640,__n);
      *(void **)(param_1 + 6) = __dest;
      if (__dest != (void *)0x0) {
        memcpy(__dest,__s,__n);
        *(undefined1 *)(param_1 + 8) = 1;
      }
    }
  }
  param_1[0x12] = param_2[6];
  param_1[0x13] = param_2[7];
  param_1[0x15] = param_2[8];
  param_1[0x16] = param_2[9];
  *param_1 = param_2[3];
  param_1[1] = param_2[4];
  param_1[2] = param_2[5];
  param_1[3] = *param_2;
  param_1[4] = param_2[1];
  param_1[5] = param_2[2];
  param_1[0x18] = param_2[0xe];
  FUN_004e84d0(param_1,*(undefined1 *)(param_2 + 0xf),param_3);
  return;
}


