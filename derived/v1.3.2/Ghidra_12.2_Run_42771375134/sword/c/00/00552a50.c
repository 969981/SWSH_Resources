/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00552a50; name: FUN_00552a50
 */


void FUN_00552a50(int *param_1,char *param_2,int *param_3)

{
  undefined *puVar1;
  size_t sVar2;
  long *plVar3;
  long *__dest;
  long lVar4;
  int iVar5;
  int local_40;
  int local_3c;
  undefined *local_38;
  
  if (param_2 != (char *)0x0) {
    sVar2 = strlen(param_2);
    iVar5 = (int)sVar2;
    if (iVar5 != 0) {
      FUN_00551100(&local_40,param_2,*param_3 + iVar5,0xffffffff);
      if (0 < *param_3) {
        lVar4 = 0;
        do {
          local_38[lVar4 + iVar5] = *(undefined1 *)(*(long *)(param_3 + 2) + lVar4);
          lVar4 = lVar4 + 1;
        } while (lVar4 < *param_3);
      }
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
        plVar3 = (long *)FUN_005b9a50(*(undefined8 *)puVar1,(long)local_3c + 8,
                                      "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",
                                      0x9f,0);
        __dest = plVar3;
        if (plVar3 != (long *)0x0) {
          __dest = plVar3 + 1;
          *plVar3 = (long)local_3c;
        }
        *(long **)(param_1 + 2) = __dest;
        memcpy(__dest,local_38,(long)*param_1);
        if (param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("_allocated","C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",
                        0xa1,"Construct");
        }
        *(undefined1 *)(*(long *)(param_1 + 2) + (long)*param_1) = 0;
      }
      if (local_38 == PTR_DAT_02713c18) {
        return;
      }
      if (local_38 == (undefined *)0x0) {
        return;
      }
      FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,local_38 + -8);
      return;
    }
  }
  FUN_00551290(param_1,param_3);
  return;
}


