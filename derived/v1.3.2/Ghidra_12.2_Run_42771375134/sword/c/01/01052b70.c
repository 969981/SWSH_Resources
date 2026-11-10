/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01052b70; name: FUN_01052b70
 */


undefined8 FUN_01052b70(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_d0 [16];
  undefined1 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  float local_90;
  undefined4 local_8c;
  undefined4 local_80;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  lVar3 = *(long *)(param_1 + 0x148);
  iVar2 = *(int *)(lVar3 + 0xe0);
  if (iVar2 == 1) {
    return 0;
  }
  if (*(char *)(lVar3 + 0x151) == '\0') {
    FUN_00745400(&local_40,*(undefined8 *)(lVar3 + 0x148));
    iVar2 = *(int *)(lVar3 + 0xe0);
  }
  else {
    uStack_38 = *(undefined8 *)(lVar3 + 0x168);
    local_40 = *(undefined8 *)(lVar3 + 0x160);
    local_28 = *(undefined8 *)(lVar3 + 0x178);
    local_30 = *(undefined8 *)(lVar3 + 0x170);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x60) + 0x128);
  local_70 = *(undefined8 *)(lVar3 + 0x260);
  uStack_68 = *(ulong *)(lVar3 + 0x268) & 0xffffffff;
  local_c0 = (undefined1)iVar2;
  local_80 = 0x3f000000;
  local_98 = local_28;
  local_a0 = local_30;
  uStack_60 = CONCAT44(-*(float *)(lVar3 + 0x254),-*(float *)(lVar3 + 0x250));
  uStack_58 = (ulong)(uint)-*(float *)(lVar3 + 600);
  local_a8 = uStack_38;
  auVar4._0_4_ = ((float)local_30 - (float)local_40) * ((float)local_30 - (float)local_40);
  auVar4._4_4_ = (local_30._4_4_ - local_40._4_4_) * (local_30._4_4_ - local_40._4_4_);
  auVar4._8_4_ = ((float)local_28 - (float)uStack_38) * ((float)local_28 - (float)uStack_38);
  auVar4._12_4_ = (local_28._4_4_ - uStack_38._4_4_) * (local_28._4_4_ - uStack_38._4_4_);
  auVar5 = NEON_ext(auVar4,auVar4,8,1);
  local_b0 = local_40;
  local_90 = SQRT(auVar5._0_4_ + auVar4._0_4_ + auVar5._4_4_ + auVar4._4_4_);
  local_8c = *(undefined4 *)(*(long *)(lVar3 + 0x270) + 200);
  auVar4 = NEON_fmov(0x3f800000,4);
  uVar1 = FUN_0074b960((float)((ulong)*(undefined8 *)(lVar3 + 0xe8) >> 0x20) * (float)*param_2 +
                       *(float *)(lVar3 + 0xfc) * (float)((ulong)*param_2 >> 0x20) +
                       SUB164(*(undefined1 (*) [16])(lVar3 + 0x100),0xc) * (float)param_2[1] +
                       auVar4._12_4_ * (float)((ulong)*(undefined8 *)(lVar3 + 0x118) >> 0x20),auVar4
                       ,*(undefined1 (*) [16])(lVar3 + 0x100),*(undefined8 *)(lVar3 + 0x110),
                       auStack_d0);
  return uVar1;
}


