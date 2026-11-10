/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059fea0; name: FUN_0059fea0
 */


void FUN_0059fea0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar1 = PTR_PTR_02713988;
  puVar2 = (undefined1 *)
           FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x10,
                        "C:/workspace/YEBIS_draft/src/GPU/GPURenderTexturePool.cpp",0x143,0);
  *puVar2 = 0;
  *(undefined8 *)(puVar2 + 8) = param_2;
  plVar6 = (long *)(param_1 + 0x30);
  plVar3 = (long *)FUN_005b9a50(*(undefined8 *)puVar1,0x18,"../src/GPU/GPUMemoryAllocator.h",0x1b8,0
                               );
  *plVar3 = 0;
  plVar3[2] = (long)puVar2;
  if ((param_3 & 1) == 0) {
    plVar3[1] = (long)plVar6;
    lVar5 = *plVar6;
    *plVar3 = lVar5;
    *(long **)(lVar5 + 8) = plVar3;
  }
  else {
    *plVar3 = (long)plVar6;
    plVar6 = (long *)(param_1 + 0x38);
    puVar4 = (undefined8 *)*plVar6;
    plVar3[1] = (long)puVar4;
    *puVar4 = plVar3;
  }
  *plVar6 = (long)plVar3;
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  *(int *)(*(long *)(puVar2 + 8) + 8) = *(int *)(*(long *)(puVar2 + 8) + 8) + 1;
  return;
}


