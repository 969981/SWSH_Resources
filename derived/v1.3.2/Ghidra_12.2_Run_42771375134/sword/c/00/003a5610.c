/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a5610; name: FUN_003a5610
 */


void FUN_003a5610(long param_1,undefined8 param_2,undefined4 param_3)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  undefined1 local_68;
  
  local_90 = 0;
  local_a0 = 0;
  uStack_98 = 0x3f80000000000000;
  local_88 = 0;
  FUN_00218620(param_2,&local_a0);
  FUN_00218580(param_2,param_3);
  local_80 = *(float *)(param_1 + 0x340) - *(float *)(param_1 + 0x350);
  local_78 = *(float *)(param_1 + 0x348) - *(float *)(param_1 + 0x358);
  fStack_74 = *(float *)(param_1 + 0x340) + *(float *)(param_1 + 0x350);
  fStack_7c = *(float *)(param_1 + 0x344) - *(float *)(param_1 + 0x354);
  local_70 = *(float *)(param_1 + 0x344) + *(float *)(param_1 + 0x354);
  fStack_6c = *(float *)(param_1 + 0x348) + *(float *)(param_1 + 0x358);
  local_68 = 1;
  FUN_00218ad0(param_2,&local_80);
  lVar4 = 0;
  lVar6 = 0x488;
  local_b0 = 0x440;
  local_a8 = 0;
  do {
    if (*(int *)(param_1 + lVar4 * 4 + 0x360) != 0) {
      lVar5 = param_1 + lVar4 * 0x20;
      local_80 = *(float *)(lVar5 + 0x390) - *(float *)(lVar5 + 0x3a0);
      local_78 = *(float *)(lVar5 + 0x398) - *(float *)(lVar5 + 0x3a8);
      fStack_74 = *(float *)(lVar5 + 0x390) + *(float *)(lVar5 + 0x3a0);
      fStack_7c = *(float *)(lVar5 + 0x394) - *(float *)(lVar5 + 0x3a4);
      local_70 = *(float *)(lVar5 + 0x394) + *(float *)(lVar5 + 0x3a4);
      fStack_6c = *(float *)(lVar5 + 0x398) + *(float *)(lVar5 + 0x3a8);
      local_68 = 1;
      FUN_00218ad0(param_2,&local_80);
      lVar8 = 5;
      lVar3 = local_a8;
      lVar5 = local_b0;
      lVar7 = lVar6;
      do {
        if (*(int *)(param_1 + lVar5) != 0) {
          pfVar1 = (float *)(param_1 + lVar7);
          local_68 = 1;
          fStack_7c = pfVar1[-5] - pfVar1[-1];
          local_70 = pfVar1[-5] + pfVar1[-1];
          local_80 = pfVar1[-6] - pfVar1[-2];
          local_78 = pfVar1[-4] - *pfVar1;
          fStack_74 = pfVar1[-6] + pfVar1[-2];
          fStack_6c = pfVar1[-4] + *pfVar1;
          FUN_00218ad0(param_2,&local_80);
          lVar2 = param_1 + lVar3;
          if (*(int *)(lVar2 + 0x8a0) != 0) {
            local_80 = *(float *)(lVar2 + 0x8d0) - *(float *)(lVar2 + 0x8e0);
            local_78 = *(float *)(lVar2 + 0x8d8) - *(float *)(lVar2 + 0x8e8);
            fStack_74 = *(float *)(lVar2 + 0x8d0) + *(float *)(lVar2 + 0x8e0);
            fStack_7c = *(float *)(lVar2 + 0x8d4) - *(float *)(lVar2 + 0x8e4);
            local_70 = *(float *)(lVar2 + 0x8d4) + *(float *)(lVar2 + 0x8e4);
            fStack_6c = *(float *)(lVar2 + 0x8d8) + *(float *)(lVar2 + 0x8e8);
            local_68 = 1;
            FUN_00218ad0(param_2,&local_80);
          }
          if (*(int *)(lVar2 + 0x8a4) != 0) {
            local_80 = *(float *)(lVar2 + 0x8f0) - *(float *)(lVar2 + 0x900);
            local_78 = *(float *)(lVar2 + 0x8f8) - *(float *)(lVar2 + 0x908);
            fStack_74 = *(float *)(lVar2 + 0x8f0) + *(float *)(lVar2 + 0x900);
            fStack_7c = *(float *)(lVar2 + 0x8f4) - *(float *)(lVar2 + 0x904);
            local_70 = *(float *)(lVar2 + 0x8f4) + *(float *)(lVar2 + 0x904);
            fStack_6c = *(float *)(lVar2 + 0x8f8) + *(float *)(lVar2 + 0x908);
            local_68 = 1;
            FUN_00218ad0(param_2,&local_80);
          }
          if (*(int *)(lVar2 + 0x8a8) != 0) {
            local_80 = *(float *)(lVar2 + 0x910) - *(float *)(lVar2 + 0x920);
            local_78 = *(float *)(lVar2 + 0x918) - *(float *)(lVar2 + 0x928);
            fStack_74 = *(float *)(lVar2 + 0x910) + *(float *)(lVar2 + 0x920);
            fStack_7c = *(float *)(lVar2 + 0x914) - *(float *)(lVar2 + 0x924);
            local_70 = *(float *)(lVar2 + 0x914) + *(float *)(lVar2 + 0x924);
            fStack_6c = *(float *)(lVar2 + 0x918) + *(float *)(lVar2 + 0x928);
            local_68 = 1;
            FUN_00218ad0(param_2,&local_80);
          }
          if (*(int *)(lVar2 + 0x8ac) != 0) {
            local_80 = *(float *)(lVar2 + 0x930) - *(float *)(lVar2 + 0x940);
            local_78 = *(float *)(lVar2 + 0x938) - *(float *)(lVar2 + 0x948);
            fStack_74 = *(float *)(lVar2 + 0x930) + *(float *)(lVar2 + 0x940);
            fStack_7c = *(float *)(lVar2 + 0x934) - *(float *)(lVar2 + 0x944);
            local_70 = *(float *)(lVar2 + 0x934) + *(float *)(lVar2 + 0x944);
            fStack_6c = *(float *)(lVar2 + 0x938) + *(float *)(lVar2 + 0x948);
            local_68 = 1;
            FUN_00218ad0(param_2,&local_80);
          }
          if (*(int *)(lVar2 + 0x8b0) != 0) {
            local_80 = *(float *)(lVar2 + 0x950) - *(float *)(lVar2 + 0x960);
            local_78 = *(float *)(lVar2 + 0x958) - *(float *)(lVar2 + 0x968);
            fStack_74 = *(float *)(lVar2 + 0x950) + *(float *)(lVar2 + 0x960);
            fStack_7c = *(float *)(lVar2 + 0x954) - *(float *)(lVar2 + 0x964);
            local_70 = *(float *)(lVar2 + 0x954) + *(float *)(lVar2 + 0x964);
            fStack_6c = *(float *)(lVar2 + 0x958) + *(float *)(lVar2 + 0x968);
            local_68 = 1;
            FUN_00218ad0(param_2,&local_80);
          }
        }
        lVar5 = lVar5 + 4;
        lVar3 = lVar3 + 0xe0;
        lVar8 = lVar8 + -1;
        lVar7 = lVar7 + 0x20;
      } while (lVar8 != 0);
    }
    local_b0 = local_b0 + 0xe0;
    lVar4 = lVar4 + 1;
    lVar6 = lVar6 + 0xe0;
    local_a8 = local_a8 + 0x460;
  } while (lVar4 != 5);
  return;
}


