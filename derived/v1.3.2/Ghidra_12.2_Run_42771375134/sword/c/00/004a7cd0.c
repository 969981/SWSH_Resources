/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a7cd0; name: FUN_004a7cd0
 */


void FUN_004a7cd0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                 undefined4 param_5,ushort param_6,ushort param_7)

{
  size_t __n;
  char *__dest;
  size_t sVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)((long)param_1 + 0xc);
  if (((uVar2 & 0x7c) == 4) && (param_1[2] != 0)) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    uVar2 = *(ushort *)((long)param_1 + 0xc);
    param_1[2] = 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0xffffffff00000000;
  param_1[2] = 0;
  *(ushort *)((long)param_1 + 0xc) = uVar2 & 0xf800;
  *(undefined4 *)(param_1 + 3) = param_3;
  if (param_4 != (char *)0x0) {
    __n = strlen(param_4);
    __dest = (char *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,__n + 1);
    param_1[2] = __dest;
    if (__dest != (char *)0x0) {
      sVar1 = strlen(param_4);
      if (sVar1 + 1 <= __n) {
        __n = sVar1 + 1;
      }
      strncpy(__dest,param_4,__n);
      __dest[__n] = '\0';
    }
  }
  *(undefined4 *)param_1 = param_2;
  *(undefined4 *)((long)param_1 + 4) = param_5;
  *(undefined4 *)(param_1 + 1) = 0;
  *(ushort *)((long)param_1 + 0xc) =
       (param_7 & 1) << 8 | (param_6 & 1) << 9 | *(ushort *)((long)param_1 + 0xc) & 0xf800 | 0x84;
  return;
}


