/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059c810; name: FUN_0059c810
 */


uint FUN_0059c810(long param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
                 undefined8 param_10)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = *(int *)(param_1 + 0xa0);
  }
  lVar5 = *(long *)(param_1 + (long)iVar1 * 8 + 0xf0);
  if (lVar5 == 0) {
    uVar3 = FUN_0059c990(param_4,param_5,param_6,param_7,param_9);
  }
  else {
    if (*(int *)(param_1 + 0x2c) < 0) {
      lVar5 = 0;
    }
    else if (iVar1 < 0) {
      lVar5 = *(long *)(param_1 + (long)*(int *)(param_1 + 0xa0) * 8 + 0xf0);
    }
    uVar3 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x18,
                         "C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp",0x798,0);
    uVar3 = FUN_0059a940(uVar3,lVar5);
  }
  plVar4 = (long *)(param_1 + (long)param_2 * 8 + 0xe0);
  *(undefined8 *)(*plVar4 + (ulong)param_3 * 8) = uVar3;
  if (-1 < *(int *)(param_1 + 0x2c)) {
    if (param_2 < 0) {
      plVar4 = (long *)(param_1 + (long)*(int *)(param_1 + 0xa0) * 8 + 0xe0);
    }
    lVar5 = *(long *)(*plVar4 + (ulong)param_3 * 8);
    if (lVar5 != 0) {
      param_4 = *(undefined4 *)(lVar5 + 0x10);
      param_5 = *(undefined4 *)(lVar5 + 0x14);
    }
  }
  uVar2 = *(uint *)(param_1 + 0x50) & 0xefffffff;
  if (param_9 != 0) {
    uVar2 = *(uint *)(param_1 + 0x50);
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x200))
                    (*(long **)(param_1 + 0x20),param_4,param_5,param_6,param_7,param_8,param_10,
                     uVar2,0,*(undefined4 *)(param_1 + 0x38),0);
  return uVar2 & (int)uVar2 >> 0x1f;
}


