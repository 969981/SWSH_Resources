/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e4270; name: FUN_012e4270
 */


void FUN_012e4270(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float extraout_s0;
  float fVar9;
  float extraout_var;
  float fVar10;
  float extraout_var_00;
  float fVar11;
  float extraout_var_01;
  undefined1 auVar12 [16];
  
  fVar10 = (float)*(undefined8 *)(param_1 + 0x768);
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0x768) >> 0x20);
  fVar8 = (float)*(undefined8 *)(param_1 + 0x760);
  fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x760) >> 0x20);
  fVar8 = fVar8 * fVar8;
  fVar9 = fVar9 * fVar9;
  fVar10 = fVar10 * fVar10;
  fVar11 = fVar11 * fVar11;
  auVar12._4_4_ = fVar9;
  auVar12._0_4_ = fVar8;
  auVar12._8_4_ = fVar10;
  auVar12._12_4_ = fVar11;
  auVar2._4_4_ = fVar9;
  auVar2._0_4_ = fVar8;
  auVar2._8_4_ = fVar10;
  auVar2._12_4_ = fVar11;
  auVar12 = NEON_ext(auVar12,auVar2,8,1);
  if (auVar12._0_4_ + fVar8 + auVar12._4_4_ + fVar9 == 0.0) {
    return;
  }
  bVar5 = *(char *)(param_1 + 0x520) != '\0';
  uVar6 = 2;
  if (!bVar5) {
    uVar6 = 1;
  }
  uVar1 = (ulong)bVar5;
  if (*(char *)(param_1 + 0x510) != '\0') {
    uVar1 = uVar6;
  }
  if (*(char *)(param_1 + 0x530) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x540) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x550) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x560) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x570) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x580) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x590) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x5a0) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x5b0) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x5c0) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x5d0) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x5e0) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x5f0) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x600) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x610) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x620) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x630) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x640) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x650) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x660) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x670) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x680) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x690) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x6a0) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x6b0) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x6c0) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x6d0) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x6e0) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_1 + 0x6f0) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (uVar1 == -(ulong)(*(char *)(param_1 + 0x700) != '\0')) {
    return;
  }
  lVar7 = param_1 + 0x370;
  uVar6 = FUN_0131cae0(lVar7);
  if (((((uVar6 & 1) != 0) && (*(int *)(param_1 + 0x308) != 1)) && (*(int *)(param_1 + 0x308) != 4))
     && (*(int *)(param_1 + 0x784) != 1)) {
    FUN_013205e0(*(undefined8 *)(param_1 + 0x818));
    fVar8 = extraout_s0 * extraout_s0;
    fVar9 = extraout_var * extraout_var;
    auVar3._4_4_ = fVar9;
    auVar3._0_4_ = fVar8;
    auVar3._8_4_ = extraout_var_00 * extraout_var_00;
    auVar3._12_4_ = extraout_var_01 * extraout_var_01;
    auVar4._4_4_ = fVar9;
    auVar4._0_4_ = fVar8;
    auVar4._8_4_ = extraout_var_00 * extraout_var_00;
    auVar4._12_4_ = extraout_var_01 * extraout_var_01;
    auVar12 = NEON_ext(auVar3,auVar4,8,1);
    if (auVar12._0_4_ + fVar8 + auVar12._4_4_ + fVar9 < 1.0) {
      if (1.0 <= *(float *)(param_1 + 0x810)) {
        if (*(code **)(param_1 + 0x790) != (code *)0x0) {
          (**(code **)(param_1 + 0x790))(param_1 + 0x7b0);
        }
        *(undefined8 *)(param_1 + 0x760) = 0;
        *(undefined8 *)(param_1 + 0x768) = 0;
        *(undefined2 *)(param_1 + 0x30c) = 0;
        FUN_0131b6b0(lVar7,0);
        if (((*(int *)(param_1 + 0x308) == 4) || (*(int *)(param_1 + 0x308) == 1)) &&
           (uVar6 = FUN_0131d090(lVar7), (uVar6 & 1) == 0)) {
          FUN_0131d150(lVar7,1);
        }
      }
      lVar7 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
      fVar8 = *(float *)(param_1 + 0x810) + (float)((double)*(long *)(lVar7 + 8) / DAT_01cd50a0);
      goto LAB_012e4470;
    }
  }
  fVar8 = 0.0;
LAB_012e4470:
  *(float *)(param_1 + 0x810) = fVar8;
  return;
}


