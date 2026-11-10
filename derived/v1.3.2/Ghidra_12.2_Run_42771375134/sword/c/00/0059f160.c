/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059f160; name: FUN_0059f160
 */


int FUN_0059f160(long param_1)

{
  long *plVar1;
  int iVar2;
  size_t __n;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  puVar3 = PTR_DAT_02713d18;
  if (*(long *)(param_1 + 0x20) != 0) {
    *(int *)PTR_DAT_02713d18 = *(int *)PTR_DAT_02713d18 + -1;
    puVar4 = PTR_DAT_02713d30;
    plVar7 = *(long **)PTR_DAT_02713d30;
    plVar5 = (long *)*plVar7;
    plVar1 = (long *)plVar7[1];
    if ((plVar5 != plVar1) && (*plVar5 != param_1)) {
      do {
        plVar5 = plVar5 + 1;
        if (plVar1 == plVar5) goto LAB_0059f214;
      } while (*plVar5 != param_1);
    }
    if (plVar5 == plVar1) {
LAB_0059f214:
      FUN_00552a50(auStack_60,"WORN: \"",param_1 + 0x10);
      FUN_005528d0(auStack_50,auStack_60,"\" is not registered.\n");
      FUN_00551380(auStack_60);
      if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139c0 != 0) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUResourceManage.cpp(%d) : PPFX WARNING: ",
                     0x1c8);
        FUN_00517ae0(local_48);
      }
      FUN_00551380(auStack_50);
      *(undefined1 *)(param_1 + 0x28) = 0;
      iVar2 = *(int *)puVar3;
    }
    else {
      __n = (long)plVar1 - (long)(plVar5 + 1);
      if (__n != 0) {
        memmove(plVar5,plVar5 + 1,__n);
      }
      plVar7[1] = (long)(plVar5 + ((long)__n >> 3));
      *(undefined1 *)(param_1 + 0x28) = 0;
      iVar2 = *(int *)puVar3;
    }
    if (0 < iVar2) {
      return iVar2;
    }
    plVar5 = *(long **)puVar4;
    *(undefined8 *)PTR_DAT_02713c38 = 0;
    *(undefined4 *)puVar3 = 0;
    if (plVar5 != (long *)0x0) {
      uVar6 = *(undefined8 *)PTR_PTR_02713988;
      if (*plVar5 != 0) {
        plVar5[1] = *plVar5;
        FUN_005b9b10(uVar6);
      }
      FUN_005b9b10(uVar6,plVar5);
      iVar2 = *(int *)puVar3;
      *(undefined8 *)puVar4 = 0;
      return iVar2;
    }
  }
  return 0;
}


