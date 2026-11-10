/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e64a0; name: FUN_004e64a0
 */


void FUN_004e64a0(long param_1,long param_2,long param_3)

{
  undefined1 auVar1 [12];
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auVar7 [16];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 auStack_118 [32];
  uint local_f8;
  undefined4 local_f4;
  undefined4 auStack_e8 [14];
  undefined4 auStack_b0 [8];
  undefined4 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (*(int *)(param_2 + 0x90) != 0) {
    FUN_004f1110(auStack_118,*(undefined4 *)(param_2 + 0x9c),param_1 + 0x60,param_2 + 0x70,
                 *(undefined4 *)(param_2 + 0xa0));
    local_128 = *(undefined4 *)(param_2 + 200);
    local_124 = *(undefined4 *)(param_2 + 0xcc);
    local_120 = *(undefined4 *)(param_2 + 0xd0);
    FUN_004f1830(auStack_118,&local_128,(undefined1 (*) [12])(param_3 + 0x80));
    auVar7 = NEON_fmov(0x3f800000,4);
    uVar4 = (ulong)local_f8;
    uStack_70 = CONCAT44(*(undefined4 *)((ulong)&local_128 | 4),local_128);
    auVar1 = *(undefined1 (*) [12])(param_3 + 0x80);
    auVar7._0_12_ = auVar1;
    uStack_68 = CONCAT44(auVar7._12_4_,local_120);
    uStack_78 = auVar7._8_8_;
    local_80 = auVar1._0_8_;
    if (local_f8 != 0) {
      if ((local_f8 & 1) != 0) {
        auStack_e8[uVar4 * 4] = 0;
        auStack_b0[uVar4] = 0xffffffff;
        uVar4 = uVar4 - 1;
      }
      if (local_f8 != 1) {
        uVar3 = ~((int)uVar4 - 1U);
        puVar5 = auStack_b0 + uVar4;
        puVar6 = auStack_e8 + uVar4 * 4;
        do {
          *puVar6 = 0;
          *puVar5 = 0xffffffff;
          uVar3 = uVar3 + 2;
          puVar6[-4] = 0;
          puVar6 = puVar6 + -8;
          puVar5[-1] = 0xffffffff;
          puVar5 = puVar5 + -2;
        } while (uVar3 != 0);
      }
      local_f8 = 0;
    }
    local_f4 = local_90;
    FUN_004f1f40(auStack_118,&uStack_70,&local_80,&uStack_70,0,0);
    FUN_004f1180(auStack_118);
  }
  if ((*(int *)(param_2 + 0x78) != 0) &&
     (lVar2 = FUN_004f49b0(param_2,*(undefined4 *)(param_2 + 0x90)), lVar2 != 0)) {
    FUN_004f2d80(param_2 + 0x70,lVar2);
  }
  FUN_004f3450(param_2);
  return;
}


