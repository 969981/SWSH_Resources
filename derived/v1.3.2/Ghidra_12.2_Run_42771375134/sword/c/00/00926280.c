/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00926280; name: FUN_00926280
 */


void FUN_00926280(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined4 *param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ushort local_6c;
  undefined8 local_68;
  
  uVar3 = FUN_008e2920(param_6);
  uVar1 = FUN_00880ae0(param_2);
  uVar4 = FUN_00880f80(param_2);
  uVar5 = FUN_00880a00(param_2,0);
  uVar6 = FUN_00880b10(param_2);
  uVar11 = thunk_FUN_008dd3c0(param_2);
  if ((uVar11 & 1) != 0) {
    uVar6 = thunk_FUN_00880b10(param_4);
  }
  local_6c = FUN_00880ab0(param_2);
  uVar11 = thunk_FUN_008dd3c0(param_2);
  if ((uVar11 & 1) != 0) {
    local_6c = thunk_FUN_00881040(param_4);
    local_6c = local_6c & 0xff;
  }
  puVar13 = (undefined8 *)(param_1 + 0x10);
  FUN_008db2b0(*puVar13);
  uVar12 = *puVar13;
  uVar2 = FUN_008e0a00(param_6);
  FUN_008db3f0(uVar12,2,uVar2);
  FUN_008db3f0(*puVar13,0x12,param_2);
  FUN_008db460(*puVar13,0x16,uVar1);
  FUN_008db380(*puVar13,0x1d,uVar3);
  FUN_008db380(*puVar13,0x1b,uVar6);
  FUN_008db380(*puVar13,99,uVar5 & 1);
  FUN_008db380(*puVar13,0x1c,uVar4);
  FUN_008db380(*puVar13,0x6d,0);
  FUN_008db460(*puVar13,0x7a,0);
  FUN_008db460(*puVar13,0x52,0);
  uVar11 = FUN_008e1810(param_6,0x25);
  if ((uVar11 & 1) != 0) {
    local_68 = FUN_008e1aa0(param_6,0x25);
    uVar12 = *puVar13;
    uVar3 = FUN_008ed2f0(&local_68);
    FUN_008db590(uVar12,0x16,uVar3);
  }
  FUN_008dad40(*puVar13,0x2a);
  FUN_008db4d0(*puVar13,0x16);
  FUN_008dad40(*puVar13,0x2b);
  uVar1 = FUN_008db610(*puVar13,0x16);
  uVar3 = FUN_008db610(*puVar13,0x1d);
  uVar4 = FUN_008db610(*puVar13,0x1b);
  uVar6 = FUN_008db610(*puVar13,0x1c);
  iVar7 = FUN_008db610(*puVar13,99);
  iVar8 = FUN_008db610(*puVar13,0x6d);
  iVar9 = FUN_008db610(*puVar13,0x7a);
  iVar10 = FUN_008db610(*puVar13,0x52);
  FUN_008db2f0(*puVar13);
  *param_7 = param_2;
  param_7[1] = param_3;
  param_7[2] = param_4;
  *(undefined1 *)((long)param_7 + 0xe) = uVar1;
  param_7[6] = uVar6;
  param_7[7] = param_5;
  *(ushort *)(param_7 + 8) = local_6c;
  *(undefined2 *)(param_7 + 3) = uVar3;
  param_7[4] = uVar4;
  *(bool *)(param_7 + 5) = iVar7 != 0;
  param_7[9] = (uint)(iVar8 != 0) << 2 | (uint)(iVar9 != 0) << 3;
  if (iVar10 != 0) {
    *(undefined1 *)((long)param_7 + 0xe) = 0x12;
  }
  return;
}


