/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0057af00; name: FUN_0057af00
 */


undefined8
FUN_0057af00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,int param_10,int param_11,long param_12,long param_13,int param_14,int param_15,
            undefined4 param_16)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined4 local_190 [2];
  undefined8 local_188 [31];
  
  if (*(int *)(param_9 + (long)param_14 * 0x1600 + (long)param_10 * 0x2c0 + (long)param_11 * 0x58 +
               (long)param_15 * 4 + 0x89dc) == 0) {
    uVar4 = 0xfffffffc;
  }
  else {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
    if (param_10 <= param_11) {
      param_10 = param_11;
    }
    if (param_10 < 0) {
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xe4),local_190,param_10 + 1);
    }
    else {
      puVar6 = (undefined4 *)(param_13 + 4);
      puVar5 = local_188;
      lVar7 = -1;
      do {
        uVar2 = puVar6[-1];
        uVar3 = *puVar6;
        lVar7 = lVar7 + 1;
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + -1) = uVar2;
        *(undefined4 *)((long)puVar5 + -4) = uVar3;
        puVar5 = puVar5 + 2;
        puVar6 = puVar6 + 2;
      } while (lVar7 < param_10);
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xe4),local_190);
      if (-1 < param_10) {
        uVar8 = 0;
        do {
          if (0xf < uVar8) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("stage >= 0 && stage < 16","../src/GPU/GPUTextureUtil.h",0xbf3,
                          "GetHandle_tex2D_aTexture");
          }
          (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                    (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40 + uVar8 * 4),
                     *(undefined8 *)(param_12 + uVar8 * 8));
          bVar1 = (long)uVar8 < (long)param_10;
          uVar8 = uVar8 + 1;
        } while (bVar1);
      }
    }
    uVar4 = FUN_00572010(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_16);
  }
  return uVar4;
}


