/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00551290; name: FUN_00551290
 */


int * FUN_00551290(int *param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long *__dest;
  
  if (*param_2 == 0) {
    param_1[2] = 0;
    puVar2 = PTR_DAT_02713c18;
    param_1[3] = 0;
    if (*PTR_DAT_02713c18 != '\0') {
                    /* WARNING: Subroutine does not return */
      __assert_fail("__s_null[0] == \'\\0\'",
                    "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",0x2b,"Clear");
    }
    param_1[0] = 0;
    param_1[1] = 0;
    *(undefined **)(param_1 + 2) = puVar2;
  }
  else {
    *param_1 = *param_2;
    puVar2 = PTR_PTR_02713988;
    iVar1 = param_2[1];
    param_1[1] = iVar1;
    plVar3 = (long *)FUN_005b9a50(*(undefined8 *)puVar2,(long)iVar1 + 8,
                                  "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",0x9f,0
                                 );
    __dest = plVar3;
    if (plVar3 != (long *)0x0) {
      __dest = plVar3 + 1;
      *plVar3 = (long)iVar1;
    }
    *(long **)(param_1 + 2) = __dest;
    memcpy(__dest,*(void **)(param_2 + 2),(long)*param_1);
    if (param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("_allocated","C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",0xa1,
                    "Construct");
    }
    *(undefined1 *)(*(long *)(param_1 + 2) + (long)*param_1) = 0;
  }
  return param_1;
}


