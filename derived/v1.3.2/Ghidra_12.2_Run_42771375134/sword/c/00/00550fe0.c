/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00550fe0; name: FUN_00550fe0
 */


int * FUN_00550fe0(int *param_1,char *param_2)

{
  undefined *puVar1;
  int iVar2;
  size_t sVar3;
  ulong *puVar4;
  ulong *__dest;
  uint uVar5;
  
  if (param_2 == (char *)0x0) {
    *param_1 = 0;
  }
  else {
    sVar3 = strlen(param_2);
    iVar2 = (int)sVar3;
    *param_1 = iVar2;
    if (iVar2 != 0) {
      if (iVar2 < 0x20) {
        uVar5 = 0x40;
      }
      else if (iVar2 < 0x40) {
        uVar5 = 0x80;
      }
      else {
        if (iVar2 < 0x200000) {
          uVar5 = iVar2 * 2 + 0x11;
        }
        else {
          uVar5 = iVar2 + 0x400001;
        }
        uVar5 = uVar5 & 0xfffffff0;
      }
      param_1[1] = uVar5;
      puVar4 = (ulong *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,(long)(int)uVar5 | 8,
                                     "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",
                                     0x66,0);
      __dest = puVar4;
      if (puVar4 != (ulong *)0x0) {
        __dest = puVar4 + 1;
        *puVar4 = (long)(int)uVar5;
      }
      *(ulong **)(param_1 + 2) = __dest;
      memcpy(__dest,param_2,(long)*param_1);
      if (param_1[1] == 0) {
        return param_1;
      }
      *(undefined1 *)(*(long *)(param_1 + 2) + (long)*param_1) = 0;
      return param_1;
    }
  }
  param_1[2] = 0;
  puVar1 = PTR_DAT_02713c18;
  param_1[3] = 0;
  if (*PTR_DAT_02713c18 != '\0') {
                    /* WARNING: Subroutine does not return */
    __assert_fail("__s_null[0] == \'\\0\'",
                  "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",0x2b,"Clear");
  }
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined **)(param_1 + 2) = puVar1;
  return param_1;
}


