/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00551eb0; name: FUN_00551eb0
 */


int * FUN_00551eb0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar4 = PTR_DAT_02713c18;
  iVar3 = param_2;
  if (param_2 < 2) {
    iVar3 = 1;
  }
  if ((-1 < param_3) && (iVar3 <= *param_1)) {
    iVar1 = *param_1 + 1;
    iVar2 = iVar1 - iVar3;
    if (iVar3 + param_3 <= iVar1) {
      iVar2 = param_3;
    }
    if (1 < param_2) {
      memmove(*(void **)(param_1 + 2),(void *)((long)*(void **)(param_1 + 2) + (long)(iVar3 + -1)),
              (long)iVar2);
    }
    FUN_005513d0(param_1,iVar2,1);
    *param_1 = iVar2;
    if (param_1[1] != 0) {
      *(undefined1 *)(*(long *)(param_1 + 2) + (long)iVar2) = 0;
    }
    return param_1;
  }
  if (*PTR_DAT_02713c18 != '\0') {
                    /* WARNING: Subroutine does not return */
    __assert_fail("__s_null[0] == \'\\0\'",
                  "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",0x2b,"Clear");
  }
  puVar5 = *(undefined **)(param_1 + 2);
  if ((puVar5 != (undefined *)0x0) && (puVar5 != PTR_DAT_02713c18)) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,puVar5 + -8);
  }
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined **)(param_1 + 2) = puVar4;
  return param_1;
}


