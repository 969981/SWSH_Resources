/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00506370; name: FUN_00506370
 */


undefined8 FUN_00506370(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  void *__s;
  long lVar7;
  ulong __n;
  
  puVar3 = PTR_DAT_02712e28;
  *(uint *)(param_1 + 0x10) = param_2;
  puVar6 = (undefined8 *)
           FUN_00404690(*(undefined4 *)puVar3,
                        -(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 | (ulong)param_2 << 4);
  *(undefined8 **)(param_1 + 0x20) = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x28) = puVar6 + (int)param_2;
    *puVar6 = 0;
    **(undefined8 **)(param_1 + 0x28) = 0;
    uVar2 = *(int *)(param_1 + 0x10) * (*(uint *)(*(long *)(param_1 + 0x18) + 4) & 0xfffffffc) + 0xf
    ;
    if ((uVar2 & 0xfffffff0) == 0) {
      **(undefined8 **)(param_1 + 0x28) = 0;
    }
    else {
      __n = (ulong)(uVar2 & 0xfffffff0);
      __s = (void *)FUN_00404690(*(undefined4 *)puVar3,__n);
      **(undefined8 **)(param_1 + 0x28) = __s;
      puVar4 = PTR_DAT_027138c8;
      if (__s != (void *)0x0) {
        if (*(long *)PTR_DAT_027138c8 == 0) {
          lVar7 = FUN_00404750(*(undefined4 *)puVar3,0x2000,0x10);
          *(long *)puVar4 = lVar7;
          if (lVar7 == 0) {
            return 0xffffffff;
          }
          FUN_00432480(PTR_LAB_027138d0,0x80,0);
        }
        puVar5 = PTR_DAT_027138c0;
        puVar4 = PTR_DAT_027138b8;
        iVar1 = param_2 * 0x4000;
        if ((*(int *)PTR_DAT_027138c0 < iVar1) || (*(long *)PTR_DAT_027138b8 == 0)) {
          lVar7 = FUN_00404750(*(undefined4 *)puVar3,(long)iVar1,0x10);
          if (lVar7 == 0) {
            return 0xffffffff;
          }
          if (*(long *)puVar4 != 0) {
            FUN_004047f0(*(undefined4 *)puVar3);
          }
          *(long *)puVar4 = lVar7;
          *(int *)puVar5 = iVar1;
        }
                    /* WARNING: Subroutine does not return */
        memset(__s,0,__n);
      }
    }
  }
  return 0xffffffff;
}


