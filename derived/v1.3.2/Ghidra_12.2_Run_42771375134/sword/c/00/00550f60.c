/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00550f60; name: FUN_00550f60
 */


undefined8 * FUN_00550f60(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_02713c18;
  if (*PTR_DAT_02713c18 != '\0') {
                    /* WARNING: Subroutine does not return */
    __assert_fail("__s_null[0] == \'\\0\'",
                  "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",0x2b,"Clear");
  }
  puVar2 = (undefined *)param_1[1];
  if ((puVar2 != (undefined *)0x0) && (puVar2 != PTR_DAT_02713c18)) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,puVar2 + -8);
  }
  *param_1 = 0;
  param_1[1] = puVar1;
  return param_1;
}


