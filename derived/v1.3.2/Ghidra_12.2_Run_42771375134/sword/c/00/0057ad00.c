/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0057ad00; name: FUN_0057ad00
 */


undefined8
FUN_0057ad00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,uint param_10,long param_11,long param_12,uint param_13,int param_14,int param_15,
            undefined4 param_16)

{
  long lVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 local_190 [2];
  undefined8 local_188 [31];
  
  lVar1 = param_9 + (long)param_14 * 0x2c0 + (long)(int)param_10 * 0x58 + (long)param_15 * 4;
  piVar2 = (int *)(lVar1 + 0x8404);
  if ((param_13 & 1) == 0) {
    piVar2 = (int *)(lVar1 + 0x7e84);
  }
  if (*piVar2 == 0) {
    uVar5 = 0xfffffffc;
  }
  else {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
    if ((int)param_10 < 1) {
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xe4),local_190,param_10);
    }
    else {
      uVar6 = (ulong)param_10;
      puVar8 = (undefined4 *)(param_12 + 4);
      puVar7 = local_188;
      do {
        uVar3 = puVar8[-1];
        uVar4 = *puVar8;
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + -1) = uVar3;
        *(undefined4 *)((long)puVar7 + -4) = uVar4;
        puVar7 = puVar7 + 2;
        puVar8 = puVar8 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xe4),local_190,param_10);
      if (0 < (int)param_10) {
        uVar6 = 0;
        do {
          if (0xf < uVar6) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("stage >= 0 && stage < 16","../src/GPU/GPUTextureUtil.h",0xbf3,
                          "GetHandle_tex2D_aTexture");
          }
          (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                    (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40 + uVar6 * 4),
                     *(undefined8 *)(param_11 + uVar6 * 8));
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)param_10);
      }
    }
    uVar5 = FUN_00572010(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_16);
  }
  return uVar5;
}


