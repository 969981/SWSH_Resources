/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005516e0; name: FUN_005516e0
 */


void FUN_005516e0(int *param_1,int *param_2,int *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long *__dest;
  int local_40;
  int local_3c;
  undefined *local_38;
  
  if (*param_2 == 0) {
    FUN_00551290(param_1,param_3);
  }
  else if (*param_3 == 0) {
    FUN_00551290(param_1,param_2);
  }
  else {
    FUN_00551100(&local_40,*(undefined8 *)(param_2 + 2),*param_3 + *param_2,0xffffffff);
    memcpy(local_38 + *param_2,*(void **)(param_3 + 2),(long)*param_3);
    puVar1 = PTR_PTR_02713988;
    if (local_40 == 0) {
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
    }
    else {
      *param_1 = local_40;
      param_1[1] = local_3c;
      plVar2 = (long *)FUN_005b9a50(*(undefined8 *)puVar1,(long)local_3c + 8,
                                    "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",0x9f
                                    ,0);
      __dest = plVar2;
      if (plVar2 != (long *)0x0) {
        __dest = plVar2 + 1;
        *plVar2 = (long)local_3c;
      }
      *(long **)(param_1 + 2) = __dest;
      memcpy(__dest,local_38,(long)*param_1);
      if (param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("_allocated","C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",0xa1,
                      "Construct");
      }
      *(undefined1 *)(*(long *)(param_1 + 2) + (long)*param_1) = 0;
    }
    if ((local_38 != PTR_DAT_02713c18) && (local_38 != (undefined *)0x0)) {
      FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,local_38 + -8);
    }
  }
  return;
}


