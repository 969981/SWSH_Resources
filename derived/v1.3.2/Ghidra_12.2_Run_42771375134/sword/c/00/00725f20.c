/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00725f20; name: FUN_00725f20
 */


void FUN_00725f20(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined *local_150 [4];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long lStack_118;
  undefined *local_100;
  code *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0 [16];
  
  FUN_00728db0(local_150,*(undefined8 *)(param_1 + 8),1);
  puVar6 = PTR_LAB_02715b50;
  puVar5 = PTR_LAB_02715b48;
  puVar4 = PTR_FUN_02715b40;
  puVar3 = PTR_LAB_02715b38;
  local_e0[0] = PTR_LAB_02715b28;
  local_100 = PTR_LAB_02715b38;
  local_150[0] = PTR_DAT_02715b30 + 0x10;
  local_f8 = (code *)PTR_FUN_02715b40;
  local_f0 = PTR_LAB_02715b48;
  local_e8 = PTR_LAB_02715b50;
  local_130 = *(undefined8 *)(param_1 + 0x350);
  local_120 = *(undefined8 *)(param_1 + 0x360);
  uStack_128 = *(undefined8 *)(param_1 + 0x358);
  lVar1 = param_1 + 0x210;
  lStack_118 = lVar1;
  FUN_00726350(param_1,param_2,local_150);
  pcVar8 = local_f8;
  puVar7 = PTR_DAT_02715b58;
  puVar2 = PTR_DAT_02715b58 + 0x10;
  local_150[0] = puVar2;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined *)0x0;
    local_e8 = (undefined *)0x0;
    local_100 = (undefined *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar8)(local_e0);
  }
  FUN_00730830(local_150,*(undefined8 *)(param_1 + 8),1);
  local_130 = *(undefined8 *)(param_1 + 0x350);
  local_120 = *(undefined8 *)(param_1 + 0x360);
  uStack_128 = *(undefined8 *)(param_1 + 0x358);
  lStack_118 = lVar1;
  FUN_00726350(param_1,param_2,local_150);
  pcVar8 = local_f8;
  local_150[0] = puVar2;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined *)0x0;
    local_e8 = (undefined *)0x0;
    local_100 = (undefined *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar8)(local_e0);
  }
  FUN_00730830(local_150,*(undefined8 *)(param_1 + 8),0);
  local_130 = *(undefined8 *)(param_1 + 0x350);
  local_120 = *(undefined8 *)(param_1 + 0x360);
  uStack_128 = *(undefined8 *)(param_1 + 0x358);
  lStack_118 = lVar1;
  FUN_00726350(param_1,param_2,local_150);
  pcVar8 = local_f8;
  puVar2 = puVar7 + 0x10;
  local_150[0] = puVar2;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined *)0x0;
    local_e8 = (undefined *)0x0;
    local_100 = (undefined *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar8)(local_e0);
  }
  FUN_007364b0(local_150,*(undefined8 *)(param_1 + 8),0);
  local_130 = *(undefined8 *)(param_1 + 0x350);
  local_120 = *(undefined8 *)(param_1 + 0x360);
  uStack_128 = *(undefined8 *)(param_1 + 0x358);
  lStack_118 = lVar1;
  FUN_00726350(param_1,param_2,local_150);
  FUN_007364b0(local_150,*(undefined8 *)(param_1 + 8),1);
  local_130 = *(undefined8 *)(param_1 + 0x350);
  local_120 = *(undefined8 *)(param_1 + 0x360);
  uStack_128 = *(undefined8 *)(param_1 + 0x358);
  lStack_118 = lVar1;
  FUN_00726350(param_1,param_2,local_150);
  FUN_007364b0(local_150,*(undefined8 *)(param_1 + 8),2);
  local_130 = *(undefined8 *)(param_1 + 0x350);
  local_120 = *(undefined8 *)(param_1 + 0x360);
  uStack_128 = *(undefined8 *)(param_1 + 0x358);
  lStack_118 = lVar1;
  FUN_00726350(param_1,param_2,local_150);
  FUN_007364b0(local_150,*(undefined8 *)(param_1 + 8),3);
  local_130 = *(undefined8 *)(param_1 + 0x350);
  local_120 = *(undefined8 *)(param_1 + 0x360);
  uStack_128 = *(undefined8 *)(param_1 + 0x358);
  lStack_118 = lVar1;
  FUN_00726350(param_1,param_2,local_150);
  FUN_00738550(local_150,*(undefined8 *)(param_1 + 8));
  local_130 = *(undefined8 *)(param_1 + 0x350);
  local_120 = *(undefined8 *)(param_1 + 0x360);
  uStack_128 = *(undefined8 *)(param_1 + 0x358);
  lStack_118 = lVar1;
  FUN_00726350(param_1,param_2,local_150);
  pcVar8 = local_f8;
  local_150[0] = puVar2;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined *)0x0;
    local_e8 = (undefined *)0x0;
    local_100 = (undefined *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar8)(local_e0);
  }
  FUN_00728db0(local_150,*(undefined8 *)(param_1 + 8),1);
  local_e0[0] = PTR_LAB_02715b60;
  local_100 = puVar3;
  local_f8 = (code *)puVar4;
  local_f0 = puVar5;
  local_e8 = puVar6;
  local_150[0] = PTR_DAT_02715b68 + 0x10;
  local_130 = *(undefined8 *)(param_1 + 0x350);
  local_120 = *(undefined8 *)(param_1 + 0x360);
  uStack_128 = *(undefined8 *)(param_1 + 0x358);
  lStack_118 = lVar1;
  FUN_00726350(param_1,param_2,local_150);
  pcVar8 = local_f8;
  local_150[0] = puVar7 + 0x10;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined *)0x0;
    local_e8 = (undefined *)0x0;
    local_100 = (undefined *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar8)(local_e0);
  }
  return;
}


