/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005513d0; name: FUN_005513d0
 */


void FUN_005513d0(int *param_1,int param_2,int param_3)

{
  undefined *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong *puVar5;
  
  if (*param_1 != param_2) {
    if (param_2 < 0x20) {
      uVar4 = 0x40;
    }
    else if (param_2 < 0x40) {
      uVar4 = 0x80;
    }
    else if (param_2 < 0x200000) {
      uVar4 = param_2 * 2 + 0x11U & 0xfffffff0;
    }
    else {
      uVar4 = param_2 + 0x400001U & 0xfffffff0;
    }
    if (param_2 < param_1[1]) {
      if ((int)(uVar4 * 4) < param_1[1]) {
        param_1[1] = uVar4;
        puVar1 = PTR_PTR_02713988;
        puVar2 = (ulong *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,(long)(int)uVar4 | 8,
                                       "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",
                                       0x131,0);
        puVar5 = puVar2;
        if (puVar2 != (ulong *)0x0) {
          puVar5 = puVar2 + 1;
          *puVar2 = (long)(int)uVar4;
        }
        if (param_3 != 0) {
          if (param_2 < param_1[1]) {
            memcpy(puVar5,*(void **)(param_1 + 2),(long)param_2);
            *(undefined1 *)((long)puVar5 + (long)param_2) = 0;
          }
          else {
            memcpy(puVar5,*(void **)(param_1 + 2),(long)param_1[1] - 1);
            *(undefined1 *)((long)puVar5 + (long)param_1[1] + -1) = 0;
          }
        }
        puVar3 = *(undefined **)(param_1 + 2);
        if ((puVar3 != PTR_DAT_02713c18) && (puVar3 != (undefined *)0x0)) {
          FUN_005b9b10(*(undefined8 *)puVar1,puVar3 + -8);
        }
        *(ulong **)(param_1 + 2) = puVar5;
      }
    }
    else {
      param_1[1] = uVar4;
      puVar1 = PTR_PTR_02713988;
      puVar2 = (ulong *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,(long)(int)uVar4 | 8,
                                     "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",
                                     0x10f,0);
      puVar5 = puVar2;
      if (puVar2 != (ulong *)0x0) {
        puVar5 = puVar2 + 1;
        *puVar2 = (long)(int)uVar4;
      }
      if (param_3 != 0) {
        if (param_2 < *param_1) {
          memcpy(puVar5,*(void **)(param_1 + 2),(long)param_2);
          *(undefined1 *)((long)puVar5 + (long)param_2) = 0;
        }
        else {
          memcpy(puVar5,*(void **)(param_1 + 2),(long)*param_1 + 1);
        }
      }
      puVar3 = *(undefined **)(param_1 + 2);
      if ((puVar3 != PTR_DAT_02713c18) && (puVar3 != (undefined *)0x0)) {
        FUN_005b9b10(*(undefined8 *)puVar1,puVar3 + -8);
      }
      *(ulong **)(param_1 + 2) = puVar5;
    }
  }
  return;
}


