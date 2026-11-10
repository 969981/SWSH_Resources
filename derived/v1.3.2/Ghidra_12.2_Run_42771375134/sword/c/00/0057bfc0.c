/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0057bfc0; name: FUN_0057bfc0
 */


undefined1  [16]
FUN_0057bfc0(undefined1 param_1 [16],float param_2,float param_3,undefined1 param_4 [16],
            undefined4 param_5,float param_6,undefined8 param_7,int param_8,float *param_9)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined4 local_70;
  undefined4 uStack_6c;
  float local_68;
  undefined4 uStack_64;
  
  uVar6 = param_4._0_4_;
  uVar8 = param_1._8_8_;
  uVar7 = param_1._0_8_;
  if (param_8 != 0) {
    fVar3 = param_3;
    uStack_6c = param_5;
    local_70 = FUN_0057bb40(param_4._0_8_);
    local_68 = fVar3;
    uStack_64 = uVar6;
    if (param_8 == 10) {
      fVar3 = powf(*param_9,DAT_01d4bd24);
      if (0.0 <= fVar3) {
        if (1.0 < fVar3) {
          fVar3 = 1.0;
        }
        fVar3 = fVar3 / DAT_01d4c158;
      }
      else {
        fVar3 = 0.0;
      }
      iVar1 = (int)fVar3;
      iVar2 = 0x14;
      if (iVar1 + 1 < 0x14) {
        iVar2 = iVar1 + 1;
      }
      fVar3 = *(float *)(&DAT_01d6c9ec + (long)iVar1 * 4) +
              (*(float *)(&DAT_01d6c9ec + (long)iVar2 * 4) -
              *(float *)(&DAT_01d6c9ec + (long)iVar1 * 4)) * (fVar3 - (float)iVar1);
    }
    else {
      fVar3 = 0.0;
    }
    fVar9 = param_1._0_4_ / param_6;
    fVar10 = (param_2 / param_3) / param_6;
    fVar4 = (float)FUN_00562ba0(fVar3,param_8,&local_70,0);
    if (fVar3 < fVar9) {
      fVar9 = fVar3 + (fVar9 - fVar3) * ((1.0 - fVar3) / (fVar10 - fVar3));
    }
    fVar3 = (float)FUN_00562ba0(fVar9,param_8,&local_70,0);
    if (fVar4 < fVar3) {
      fVar3 = fVar4 + ((fVar10 - fVar4) / (1.0 - fVar4)) * (fVar3 - fVar4);
    }
    uVar7 = (ulong)(uint)(fVar3 * param_6 * param_3);
    uVar8 = 0;
  }
  auVar5._8_8_ = uVar8;
  auVar5._0_8_ = uVar7;
  return auVar5;
}


