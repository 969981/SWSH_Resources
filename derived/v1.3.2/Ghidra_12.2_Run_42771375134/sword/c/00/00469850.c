/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00469850; name: FUN_00469850
 */


long * FUN_00469850(int *param_1,long *param_2,long param_3,long param_4,undefined4 param_5,
                   byte param_6)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_00404750(*(undefined4 *)PTR_DAT_02712e28,0x2b0,0x10);
  if (plVar2 != (long *)0x0) {
    plVar2[4] = 0;
    puVar1 = PTR_DAT_02713120;
    plVar2[2] = 0x3f8000003f800000;
    plVar2[3] = 0x3f8000003f800000;
    *(undefined4 *)(plVar2 + 5) = 0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    plVar2[9] = (long)param_2;
    plVar2[10] = param_3;
    plVar2[0xb] = param_4;
    plVar2[0xc] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = (long)(puVar1 + 0x130);
    puVar1 = PTR_DAT_027130b0 + 0x10;
    *(undefined4 *)(plVar2 + 0x12) = 0;
    *(undefined4 *)(plVar2 + 0x11) = 0;
    plVar2[0x1a] = 0;
    plVar2[0xf] = 0;
    plVar2[0x10] = 0;
    plVar2[0xd] = (long)puVar1;
    plVar2[0xe] = 0;
    *(undefined1 *)(plVar2 + 0x13) = 0xff;
    *(undefined1 *)(plVar2 + 0x14) = 0xff;
    plVar2[0x17] = 0;
    plVar2[0x18] = 0;
    plVar2[0x15] = 0;
    plVar2[0x16] = 0;
    plVar2[0x1c] = (long)(PTR_DAT_02713128 + 0x10);
    plVar2[0x1d] = 0;
    FUN_004cd2e0(plVar2 + 0x1e);
    plVar2[0x52] = -0x3a7fffffc0800000;
    plVar2[0x53] = 0xc5800000;
    *(undefined4 *)(plVar2 + 0x54) = param_5;
    *(byte *)((long)plVar2 + 0x2a4) =
         param_6 & 1 | (param_6 & 1) << 1 | *(byte *)((long)plVar2 + 0x2a4) & 0xf8;
    if (*(long *)(param_3 + 0x70) == 0) {
      lVar3 = (**(code **)(*param_2 + 0x10))(param_2);
    }
    else {
      lVar3 = *(long *)(param_3 + 0x78);
    }
    plVar2[0x19] = lVar3;
    FUN_004d4600(param_3,plVar2);
    if (*(long *)(param_1 + 2) == 0) {
      *(long **)(param_1 + 2) = plVar2;
      plVar2[8] = 0;
    }
    else {
      plVar2[8] = *(long *)(param_1 + 2);
      *(long **)(param_1 + 2) = plVar2;
    }
    *param_1 = *param_1 + 1;
  }
  return plVar2;
}


