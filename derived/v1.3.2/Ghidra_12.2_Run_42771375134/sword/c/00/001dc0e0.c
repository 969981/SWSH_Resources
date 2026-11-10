/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001dc0e0; name: FUN_001dc0e0
 */


void FUN_001dc0e0(long *param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint uVar2;
  long *plVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_70;
  float local_68;
  float fStack_64;
  undefined8 local_60;
  undefined1 local_58;
  
  FUN_001dc340();
  pbVar1 = (byte *)((long)param_1 +
                   *(long *)(PTR_DAT_02711068 +
                            (ulong)(*(uint *)(param_1 + 0xd) >> 0x18 & 0xf) * 8 + 0x30) + 0x6c);
  if ((*(uint *)(param_1 + 0xd) & 1) != 0) {
    pbVar1 = (byte *)param_1[0xe];
  }
  if ((*pbVar1 & 1) != 0) {
    plVar3 = (long *)(**(code **)(*param_1 + 0x38))(param_1);
    fVar6 = (float)(**(code **)(*plVar3 + 0x268))(plVar3,0);
    plVar3 = (long *)(**(code **)(*param_1 + 0x38))(param_1);
    fVar7 = (float)(**(code **)(*plVar3 + 0x268))(plVar3,3);
    if (fVar6 * fVar7 != 0.0) {
      uVar2 = *(uint *)((long)param_1 + 0x17c);
      if ((uVar2 >> 1 & 1) == 0) {
        pfVar4 = (float *)FUN_003be160(param_1 + 0x10);
        uVar2 = *(uint *)((long)param_1 + 0x17c);
      }
      else {
        pfVar4 = (float *)(param_1[0xe] + 0xa8);
      }
      fVar7 = 0.0;
      if (*pfVar4 != 0.0) {
        fVar7 = 1.0 / *pfVar4;
      }
      fVar10 = 0.0;
      if (pfVar4[1] != 0.0) {
        fVar10 = 1.0 / pfVar4[1];
      }
      fVar11 = 0.0;
      if (pfVar4[2] != 0.0) {
        fVar11 = 1.0 / pfVar4[2];
      }
      if ((uVar2 & 1) == 0) {
        fVar8 = (float)FUN_003be0e0(param_1 + 0x10);
      }
      else {
        fVar8 = *(float *)(param_1[0xe] + 0xa4);
      }
      fVar8 = 6.0 / (1.0 / fVar8);
      fVar7 = fVar7 * fVar8;
      fVar10 = fVar10 * fVar8;
      fVar11 = fVar11 * fVar8;
      fVar8 = fabsf(fVar11 + (fVar10 - fVar7));
      fVar8 = sqrtf(fVar8);
      fVar9 = fabsf(fVar11 + (fVar7 - fVar10));
      fVar9 = sqrtf(fVar9);
      fVar7 = fabsf((fVar7 + fVar10) - fVar11);
      fVar7 = sqrtf(fVar7);
      uVar5 = FUN_00218580(param_2,0xffffff);
      uVar5 = FUN_00218620(uVar5,param_1 + 0x28);
      fStack_64 = fVar8 * 0.5;
      local_68 = fVar7 * -0.5;
      local_70 = (undefined *)CONCAT44(fVar9 * -0.5,fVar8 * -0.5);
      local_60 = CONCAT44(fVar7 * 0.5,fVar9 * 0.5);
      local_58 = 1;
      FUN_00218ad0(uVar5,&local_70);
    }
    plVar3 = (long *)(**(code **)(*param_1 + 0x38))(param_1);
    fVar7 = (float)(**(code **)(*plVar3 + 0x268))(plVar3,0x15);
    plVar3 = (long *)(**(code **)(*param_1 + 0x38))(param_1);
    fStack_64 = (float)(**(code **)(*plVar3 + 0x268))(plVar3,0x16);
    fStack_64 = fVar6 * fStack_64;
    if ((fVar6 * fVar7 != 0.0) || (fStack_64 != 0.0)) {
      local_70 = PTR_DAT_027110b8 + 0x10;
      local_68 = fVar6 * fVar7;
      local_60 = param_2;
                    /* try { // try from 001dc30c to 001dc317 has its CatchHandler @ 001dc334 */
      FUN_001dc6a0(param_1,&local_70);
    }
  }
  return;
}


