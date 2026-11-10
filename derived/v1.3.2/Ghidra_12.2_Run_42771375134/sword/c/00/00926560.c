/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00926560; name: FUN_00926560
 */


void FUN_00926560(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 *param_8)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  
  uVar6 = param_8[6];
  uVar3 = *(undefined1 *)(param_8 + 5);
  uVar4 = *(undefined2 *)(param_8 + 3);
  uVar7 = param_8[4];
  uVar5 = param_8[9];
  uVar1 = *(undefined1 *)((long)param_8 + 0xe);
  puVar12 = (undefined8 *)(param_1 + 0x10);
  FUN_008db2b0(*puVar12);
  uVar11 = *puVar12;
  uVar2 = FUN_008e0a00(param_6);
  FUN_008db3f0(uVar11,2,uVar2);
  FUN_008db3f0(*puVar12,0x12,param_2);
  FUN_008db460(*puVar12,0x16,uVar1);
  FUN_008db380(*puVar12,0x1d,uVar4);
  FUN_008db380(*puVar12,0x1b,uVar7);
  FUN_008db380(*puVar12,99,uVar3);
  FUN_008db380(*puVar12,0x1c,uVar6);
  FUN_008db380(*puVar12,0x6d,uVar5 >> 2 & 1);
  FUN_008db460(*puVar12,0x7a,uVar5 >> 3 & 1);
  uVar5 = FUN_0093b420(param_7);
  uVar5 = uVar5 & 0xff;
  FUN_008db3f0(*puVar12,5,uVar5);
  if (uVar5 != 0) {
    uVar13 = 0;
    do {
      FUN_0093b2c0(param_7,uVar13);
      uVar11 = *puVar12;
      uVar3 = FUN_008e0a00();
      FUN_008db3f0(uVar11,uVar13 + 6,uVar3);
      uVar13 = uVar13 + 1 & 0xff;
    } while (uVar13 < uVar5);
  }
  FUN_008dad40(*puVar12,0x2c);
  uVar3 = FUN_008db610(*puVar12,0x16);
  uVar4 = FUN_008db610(*puVar12,0x1d);
  uVar6 = FUN_008db610(*puVar12,0x1b);
  uVar7 = FUN_008db610(*puVar12,0x1c);
  iVar8 = FUN_008db610(*puVar12,99);
  iVar9 = FUN_008db610(*puVar12,0x6d);
  iVar10 = FUN_008db610(*puVar12,0x7a);
  FUN_008db2f0(*puVar12);
  *param_8 = param_2;
  param_8[1] = param_3;
  param_8[2] = param_4;
  param_8[6] = uVar7;
  param_8[7] = param_5;
  *(undefined1 *)((long)param_8 + 0xe) = uVar3;
  *(undefined2 *)(param_8 + 3) = uVar4;
  param_8[4] = uVar6;
  *(bool *)(param_8 + 5) = iVar8 != 0;
  param_8[9] = (uint)(iVar9 != 0) << 2 | (uint)(iVar10 != 0) << 3 | param_8[9] & 0xfffffff3;
  return;
}


