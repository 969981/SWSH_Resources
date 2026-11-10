/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059ee70; name: FUN_0059ee70
 */


undefined8 FUN_0059ee70(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auStack_450 [16];
  undefined1 auStack_440 [8];
  undefined8 local_438;
  long local_38;
  
  if (param_2 != 0) {
    local_38 = param_1;
    if (*(long *)PTR_DAT_02713c38 == 0) {
      *(long *)PTR_DAT_02713c38 = param_2;
      *(undefined4 *)PTR_DAT_02713d18 = 0;
      plVar3 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x18,
                                    "C:/workspace/YEBIS_draft/src/GPU/GPUResourceManage.cpp",0x12a,0
                                   );
      plVar3[1] = 0;
      plVar3[2] = 0;
      *plVar3 = 0;
      *(long **)PTR_DAT_02713d30 = plVar3;
    }
    else {
      if (*(long *)PTR_DAT_02713c38 != param_2) {
                    /* WARNING: Subroutine does not return */
        memset(auStack_440,0,0x400);
      }
      plVar3 = *(long **)PTR_DAT_02713d30;
    }
    *(int *)PTR_DAT_02713d18 = *(int *)PTR_DAT_02713d18 + 1;
    plVar2 = (long *)*plVar3;
    plVar1 = (long *)plVar3[1];
    if ((plVar2 != plVar1) && (*plVar2 != local_38)) {
      do {
        plVar2 = plVar2 + 1;
        if (plVar1 == plVar2) goto LAB_0059f0d0;
      } while (*plVar2 != local_38);
    }
    if (plVar2 != plVar1) {
      FUN_00552a50(auStack_450,&DAT_01d00162,local_38 + 0x10);
      FUN_005528d0(auStack_440,auStack_450,"\" is already registered.\n");
      FUN_00551380(auStack_450);
      if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_027139c0 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUResourceManage.cpp(%d) : PPFX WARNING: ",
                     0x192);
        FUN_00517ae0(local_438);
      }
      FUN_00551380(auStack_440);
      plVar1 = (long *)plVar3[1];
    }
LAB_0059f0d0:
    if (plVar1 == (long *)plVar3[2]) {
      FUN_0059f330(plVar3,&local_38);
    }
    else {
      *plVar1 = local_38;
      plVar3[1] = plVar3[1] + 8;
    }
    *(undefined1 *)(local_38 + 0x28) = 1;
  }
  return 0;
}


