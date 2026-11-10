/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00551860; name: FUN_00551860
 */


int * FUN_00551860(int *param_1,char *param_2)

{
  undefined *puVar1;
  size_t sVar2;
  undefined *puVar3;
  
  if (param_2 != (char *)0x0) {
    sVar2 = strlen(param_2);
    if ((int)sVar2 != 0) {
      FUN_005513d0(param_1,sVar2 & 0xffffffff,0);
      *param_1 = (int)sVar2;
      memcpy(*(void **)(param_1 + 2),param_2,(long)((sVar2 << 0x20) + 0x100000000) >> 0x20);
      return param_1;
    }
  }
  puVar1 = PTR_DAT_02713c18;
  if (*PTR_DAT_02713c18 != '\0') {
                    /* WARNING: Subroutine does not return */
    __assert_fail("__s_null[0] == \'\\0\'",
                  "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",0x2b,"Clear");
  }
  puVar3 = *(undefined **)(param_1 + 2);
  if ((puVar3 != (undefined *)0x0) && (puVar3 != PTR_DAT_02713c18)) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,puVar3 + -8);
  }
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined **)(param_1 + 2) = puVar1;
  return param_1;
}


