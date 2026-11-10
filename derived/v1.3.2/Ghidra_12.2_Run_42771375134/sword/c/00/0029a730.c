/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029a730; name: FUN_0029a730
 */


void FUN_0029a730(undefined8 *param_1,int param_2,undefined1 (*param_3) [16])

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 1) = 0x7e7fffff;
    *param_1 = 0x7e7fffff7e7fffff;
    *(undefined4 *)((long)param_1 + 0xc) = 0xfe7fffff;
    *(undefined4 *)(param_1 + 2) = 0xfe7fffff;
    *(undefined4 *)((long)param_1 + 0x14) = 0xfe7fffff;
    return;
  }
  uVar2 = param_2 - 1;
  auVar3 = *(undefined1 (*) [12])(*param_3 + (ulong)uVar2 * 0xc);
  auVar7._12_4_ = 0;
  auVar7._0_12_ = auVar3;
  auVar5 = auVar3;
  if (uVar2 != 0) {
    auVar4 = auVar7;
    if ((uVar2 & 1) != 0) {
      uVar2 = param_2 - 2;
      auVar6 = NEON_fmin(auVar7,*param_3,4);
      auVar4 = NEON_fmax(auVar7,*param_3,4);
      auVar3 = auVar4._0_12_;
      param_3 = (undefined1 (*) [16])(*param_3 + 0xc);
      auVar7 = auVar6;
      auVar5 = auVar6._0_12_;
    }
    if (param_2 != 2) {
      do {
        auVar7 = NEON_fmin(auVar7,*param_3,4);
        auVar4 = NEON_fmax(auVar4,*param_3,4);
        puVar1 = *param_3;
        param_3 = (undefined1 (*) [16])(param_3[1] + 8);
        auVar7 = NEON_fmin(auVar7,*(undefined1 (*) [16])(puVar1 + 0xc),4);
        auVar4 = NEON_fmax(auVar4,*(undefined1 (*) [16])(puVar1 + 0xc),4);
        auVar3 = auVar4._0_12_;
        uVar2 = uVar2 - 2;
        auVar5 = auVar7._0_12_;
      } while (uVar2 != 0);
    }
  }
  *param_1 = auVar5._0_8_;
  *(int *)(param_1 + 1) = auVar5._8_4_;
  *(int *)((long)param_1 + 0xc) = auVar3._0_4_;
  *(int *)(param_1 + 2) = auVar3._4_4_;
  *(int *)((long)param_1 + 0x14) = auVar3._8_4_;
  return;
}


