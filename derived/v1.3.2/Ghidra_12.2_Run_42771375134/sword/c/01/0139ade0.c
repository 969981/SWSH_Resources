/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0139ade0; name: FUN_0139ade0
 */


void FUN_0139ade0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_1dc [260];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  
  lVar7 = param_1 + (long)*(int *)(param_1 + 0x800) * 0x30;
  uVar5 = *(undefined8 *)(lVar7 + 0x108);
  uVar3 = *(undefined8 *)(lVar7 + 0x120);
  local_b0 = *(undefined8 *)(lVar7 + 0x128);
  uVar4 = *(undefined8 *)(lVar7 + 0x110);
  uVar6 = *(undefined8 *)(lVar7 + 0x118);
  local_d8._4_4_ = (int)((ulong)*(undefined8 *)(lVar7 + 0x100) >> 0x20);
  uStack_d0._0_4_ = (int)uVar5;
  local_c8._4_4_ = (int)((ulong)uVar4 >> 0x20);
  uStack_d0._4_4_ = (int)((ulong)uVar5 >> 0x20);
  uVar2 = 2;
  if ((int)uStack_d0 == 0) {
    uVar2 = 1;
  }
  uVar1 = (ulong)((int)uStack_d0 != 0);
  if (local_d8._4_4_ != 0) {
    uVar1 = uVar2;
  }
  if (uStack_d0._4_4_ != 0) {
    uVar1 = uVar1 + 1;
  }
  if ((int)uVar4 != 0) {
    uVar1 = uVar1 + 1;
  }
  if (local_c8._4_4_ != 0) {
    uVar1 = uVar1 + 1;
  }
  local_c0._0_4_ = (int)uVar6;
  if ((int)local_c0 != 0) {
    uVar1 = uVar1 + 1;
  }
  local_c0._4_4_ = (int)((ulong)uVar6 >> 0x20);
  if (local_c0._4_4_ != 0) {
    uVar1 = uVar1 + 1;
  }
  local_b8._0_4_ = (int)uVar3;
  if ((int)local_b8 != 0) {
    uVar1 = uVar1 + 1;
  }
  local_b8._4_4_ = (int)((ulong)uVar3 >> 0x20);
  if (local_b8._4_4_ != 0) {
    uVar1 = uVar1 + 1;
  }
  if ((int)local_b0 != 0) {
    uVar1 = uVar1 + 1;
  }
  if (uVar1 != 0) {
    NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
    local_d8 = *(undefined8 *)(lVar7 + 0x100);
    uStack_d0 = uVar5;
    local_c8 = uVar4;
    local_c0 = uVar6;
    local_b8 = uVar3;
                    /* WARNING: Subroutine does not return */
    memset(auStack_1dc,0,0x104);
  }
  *(int *)(param_1 + 0x804) = *(int *)(param_1 + 0x804) + 1;
  return;
}


