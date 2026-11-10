/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0057b0f0; name: FUN_0057b0f0
 */


undefined8
FUN_0057b0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,int param_10,int param_11,long param_12,long param_13,undefined4 *param_14,int param_15
            ,int param_16)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 in_stack_00000020;
  undefined4 local_1a8 [2];
  undefined8 local_1a0 [32];
  
  iVar8 = *(int *)(param_9 + (long)param_15 * 0x1600 + (long)param_10 * 0x2c0 +
                   (long)param_11 * 0x58 + (long)param_16 * 4 + 0xb5dc);
  uVar4 = FUN_00542d00(*(undefined8 *)(param_9 + 0x20));
  if (((iVar8 == 0) && ((uVar4 & 1) == 0)) &&
     (iVar8 = *(int *)(param_9 + (long)param_15 * 0x1600 + (long)param_10 * 0x2c0 +
                       (long)param_16 * 4 + 0xb7ec), iVar8 == 0)) {
    uVar5 = 0xfffffffc;
  }
  else {
    iVar1 = param_10 + param_11 + 1;
    (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))(*(long **)(param_9 + 0x30),iVar8);
    if (0 < iVar1) {
      uVar4 = (ulong)(param_11 + param_10 + 1);
      puVar6 = local_1a0;
      puVar7 = (undefined4 *)(param_13 + 4);
      do {
        uVar2 = puVar7[-1];
        uVar3 = *puVar7;
        *puVar6 = 0;
        *(undefined4 *)(puVar6 + -1) = uVar2;
        *(undefined4 *)((long)puVar6 + -4) = uVar3;
        puVar6 = puVar6 + 2;
        puVar7 = puVar7 + 2;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xe4),local_1a8,iVar1);
    DAT_02760c18 = *param_14;
    DAT_02760c1c = param_14[1];
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760c18,1);
    if (0 < iVar1) {
      uVar4 = 0;
      do {
        if (0xf < uVar4) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("stage >= 0 && stage < 16","../src/GPU/GPUTextureUtil.h",0xbf3,
                        "GetHandle_tex2D_aTexture");
        }
        (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                  (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40 + uVar4 * 4),
                   *(undefined8 *)(param_12 + uVar4 * 8));
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)iVar1);
    }
    uVar5 = FUN_00572010(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         in_stack_00000020);
  }
  return uVar5;
}


