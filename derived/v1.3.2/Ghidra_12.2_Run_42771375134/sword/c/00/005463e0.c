/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005463e0; name: FUN_005463e0
 */


void FUN_005463e0(long *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long *plVar6;
  long *local_28;
  
  FUN_00545e70();
  puVar2 = PTR_DAT_02713b88;
  param_1[3] = param_2;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined8 *)((long)param_1 + 0xc) = 0xffffffff00000000;
  param_1[7] = 0;
  plVar6 = param_1 + 6;
  *plVar6 = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  local_28 = param_1;
  if (*(undefined8 **)(param_2 + 0x18) == *(undefined8 **)(param_2 + 0x20)) {
    FUN_00546770(param_2 + 0x10,&local_28);
  }
  else {
    **(undefined8 **)(param_2 + 0x18) = param_1;
    *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + 8;
  }
  puVar2 = PTR_DAT_02713a88;
  uVar1 = *(uint *)(PTR_DAT_02713a88 + 0x10);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  puVar3 = (ulong *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,(ulong)uVar1 + 8,
                                 "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceResource.cpp",0x629,0
                                );
  puVar4 = puVar3;
  if (puVar3 != (ulong *)0x0) {
    puVar4 = puVar3 + 1;
    *puVar3 = (ulong)uVar1;
  }
  *plVar6 = (long)puVar4;
  *(undefined1 *)puVar4 = 0;
  if (1 < *(uint *)(puVar2 + 0x10)) {
    uVar5 = 1;
    do {
      *(undefined1 *)(*plVar6 + uVar5) = 0;
      uVar1 = *(uint *)(puVar2 + 0x10);
      uVar5 = uVar5 + 1;
      if (uVar1 < 2) {
        uVar1 = 1;
      }
    } while (uVar5 < uVar1);
  }
  return;
}


