/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab37c0; name: FUN_00ab37c0
 */


void FUN_00ab37c0(undefined1 param_1 [16],undefined1 param_2 [16],long *param_3,long *param_4,
                 undefined4 param_5,uint param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_015f5d10();
  puVar3 = PTR_DAT_02719898;
  param_3[0x11] = 0;
  *param_3 = (long)(puVar3 + 0x10);
  param_3[9] = (long)(puVar3 + 0x60);
  param_3[10] = (long)(puVar3 + 0xa0);
  param_3[0x10] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,param_3 + 0x14);
    lVar4 = *param_4;
    lVar1 = param_4[1];
    lVar2 = param_4[3];
    param_3[0x12] = param_4[2];
    param_3[0x13] = lVar2;
    param_3[0x10] = lVar4;
    param_3[0x11] = lVar1;
  }
  *(uint *)(param_3 + 0x26) = param_6;
  *(undefined4 *)((long)param_3 + 0x134) = 0;
  puVar3 = PTR_PTR_02718e90;
  param_3[0x21] = param_1._8_8_;
  param_3[0x20] = param_1._0_8_;
  lVar4 = (ulong)param_6 * 8;
  param_3[0x23] = param_2._8_8_;
  param_3[0x22] = param_2._0_8_;
  *(undefined4 *)(param_3 + 0x27) = param_5;
  fVar5 = (float)(**(code **)(puVar3 + lVar4))(0);
  fVar6 = (float)(**(code **)(puVar3 + lVar4))(0);
  fVar7 = (float)(**(code **)(puVar3 + lVar4))(0,param_2._0_8_,param_1._0_8_);
  param_3[0x25] = (ulong)(uint)(param_1._8_4_ + (param_2._8_4_ - param_1._8_4_) * fVar7);
  param_3[0x24] =
       CONCAT44(param_1._4_4_ + (param_2._4_4_ - param_1._4_4_) * fVar6,
                param_1._0_4_ + (param_2._0_4_ - param_1._0_4_) * fVar5);
  return;
}


