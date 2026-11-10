/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058b5f0; name: FUN_0058b5f0
 */


undefined8
FUN_0058b5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,long param_10,ulong param_11,undefined4 param_12)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  
  uVar1 = *(uint *)(param_10 + 0x44);
  if (uVar1 < 0x39 && (1L << ((ulong)uVar1 & 0x3f) & 0x180630000300000U) != 0) {
    lVar4 = 0;
  }
  else {
    if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713980 != 0) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: ",0x1a5);
      FUN_00517ae0("FXDCT_GetDepthCastTypeFromDepthFormat(): eDepthFormat: 0x%x.\n",(ulong)uVar1);
    }
    lVar4 = -1;
  }
  if (*(int *)(param_9 + lVar4 * 4 + 0x1b364) == 0) {
    uVar3 = 0xfffffffc;
  }
  else {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
    bVar2 = (param_11 & 1) == 0;
    local_90 = 0xbf800000;
    if (bVar2) {
      local_90 = 0x3f800000;
    }
    uStack_8c = 0x3f800000;
    if (bVar2) {
      uStack_8c = 0;
    }
    local_88 = 0;
    (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf0),&local_90);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x38),param_10);
    uVar3 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_12);
  }
  return uVar3;
}


