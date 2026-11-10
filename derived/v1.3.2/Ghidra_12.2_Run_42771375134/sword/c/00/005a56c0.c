/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a56c0; name: FUN_005a56c0
 */


undefined8 FUN_005a56c0(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *__s;
  undefined4 in_w5;
  int iVar4;
  int iVar5;
  
  puVar2 = PTR_DAT_02713978;
  puVar1 = PTR_DAT_02713970;
  iVar4 = *(int *)PTR_DAT_02713970;
  iVar5 = *(int *)PTR_DAT_02713978;
  if (iVar4 != 0 && iVar5 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderTextureArray.cpp(%d) : PPFX: ",0x5a5);
    FUN_00517ae0("==== CRenderTextureArray::Initialize() ====\n");
    iVar4 = *(int *)puVar1;
    iVar5 = *(int *)puVar2;
  }
  if (iVar4 != 0 && iVar5 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderTextureArray.cpp(%d) : PPFX: ",0x5a6);
    FUN_00517ae0("Instance name: %s\n",*(undefined8 *)(param_1 + 0x18));
  }
  FUN_0059ed30(param_1);
  *(uint *)(param_1 + 0x30) = param_2;
  if (param_2 == 0) {
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x2c) = in_w5;
  plVar3 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,
                                (-(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 |
                                (ulong)param_2 << 3) + 8,
                                "C:/workspace/YEBIS_draft/src/GPU/GPURenderTextureArray.cpp",0x5c1,0
                               );
  __s = plVar3;
  if (plVar3 != (long *)0x0) {
    __s = plVar3 + 1;
    *plVar3 = (long)(int)param_2;
  }
  *(long **)(param_1 + 0x38) = __s;
                    /* WARNING: Subroutine does not return */
  memset(__s,0,(long)*(int *)(param_1 + 0x30) << 3);
}


