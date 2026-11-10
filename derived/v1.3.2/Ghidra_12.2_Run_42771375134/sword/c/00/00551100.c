/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00551100; name: FUN_00551100
 */


int * FUN_00551100(int *param_1,char *param_2,int param_3,int param_4)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong *__dest;
  uint uVar3;
  undefined *puVar4;
  size_t sVar5;
  
  puVar1 = PTR_DAT_02713c18;
  if (param_2 == (char *)0x0) {
    if (*PTR_DAT_02713c18 != '\0') {
                    /* WARNING: Subroutine does not return */
      __assert_fail("__s_null[0] == \'\\0\'",
                    "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",0x2b,"Clear");
    }
    puVar4 = *(undefined **)(param_1 + 2);
    if ((puVar4 != (undefined *)0x0) && (puVar4 != PTR_DAT_02713c18)) {
      FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,puVar4 + -8);
    }
    param_1[0] = 0;
    param_1[1] = 0;
    *(undefined **)(param_1 + 2) = puVar1;
    return param_1;
  }
  if (param_4 < 0) {
    sVar5 = strlen(param_2);
    param_4 = (int)sVar5;
    *param_1 = param_3;
  }
  else {
    *param_1 = param_3;
  }
  if (param_3 < 0x20) {
    uVar3 = 0x40;
  }
  else if (param_3 < 0x40) {
    uVar3 = 0x80;
  }
  else {
    if (param_3 < 0x200000) {
      uVar3 = param_3 * 2 + 0x11;
    }
    else {
      uVar3 = param_3 + 0x400001;
    }
    uVar3 = uVar3 & 0xfffffff0;
  }
  param_1[1] = uVar3;
  puVar2 = (ulong *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,(long)(int)uVar3 | 8,
                                 "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",0x7d,0)
  ;
  __dest = puVar2;
  if (puVar2 != (ulong *)0x0) {
    __dest = puVar2 + 1;
    *puVar2 = (long)(int)uVar3;
  }
  *(ulong **)(param_1 + 2) = __dest;
  if (param_4 < *param_1) {
    sVar5 = (size_t)param_4;
    memcpy(__dest,param_2,sVar5);
                    /* WARNING: Subroutine does not return */
    memset((void *)(*(long *)(param_1 + 2) + sVar5),0x20,(long)*param_1 - sVar5);
  }
  memcpy(__dest,param_2,(long)*param_1);
  if (param_1[1] != 0) {
    *(undefined1 *)(*(long *)(param_1 + 2) + (long)*param_1) = 0;
  }
  return param_1;
}


