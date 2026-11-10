/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00926b20; name: FUN_00926b20
 */


bool FUN_00926b20(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 param_5,int param_6,uint param_7,uint param_8,byte param_9,
                 undefined1 param_10,undefined2 *param_11)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  char local_64 [4];
  
  puVar13 = (undefined8 *)(param_1 + 0x10);
  FUN_008db2b0(*puVar13);
  uVar15 = *puVar13;
  uVar1 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar15,2,uVar1);
  FUN_008db460(*puVar13,0x60,0);
  FUN_008db460(*puVar13,0x76,0);
  FUN_008dad40(*puVar13,0x8f);
  iVar5 = FUN_008db610(*puVar13,0x60);
  FUN_008db2f0(*puVar13);
  FUN_008db2b0(*puVar13);
  FUN_008db3f0(*puVar13,0x3d,param_5);
  uVar15 = *puVar13;
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar15,3,uVar1);
  uVar15 = *puVar13;
  uVar1 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar15,4,uVar1);
  uVar11 = param_7 & 1;
  FUN_008db3f0(*puVar13,0x4c,uVar11);
  FUN_008db3f0(*puVar13,0x16,*(undefined1 *)((long)param_4 + 0xe));
  FUN_008db3f0(*puVar13,0x12,*param_4);
  FUN_008db3f0(*puVar13,99,*(undefined1 *)(param_4 + 5));
  FUN_008db3f0(*puVar13,0x1b,param_4[4]);
  FUN_008db3f0(*puVar13,0x19,param_4[7]);
  FUN_008db3f0(*puVar13,0x4d,param_9 & 1);
  FUN_008db3f0(*puVar13,0x60,iVar5 != 0);
  FUN_008db380(*puVar13,0x3a,0);
  FUN_008db380(*puVar13,0x3b,0);
  FUN_008db380(*puVar13,0x3c,0);
  FUN_008dad40(*puVar13,0x5a);
  FUN_008dad40(*puVar13,0x5b);
  uVar6 = FUN_008db610(*puVar13,0x3a);
  iVar5 = FUN_008db610(*puVar13,0x3b);
  iVar7 = FUN_008db610(*puVar13,0x3c);
  uVar10 = 0;
  if (iVar7 == 0) {
    uVar10 = uVar6;
  }
  if (iVar7 == 0 && iVar5 == 0) {
    uVar2 = FUN_00927150(param_1,param_2,param_3,param_4);
    uVar3 = FUN_009272b0(param_1,param_2,param_3,param_4,uVar11,local_64);
    uVar4 = FUN_009275a0(param_1,param_2,param_3,param_4,uVar11);
    uVar1 = FUN_008e12a0(param_2,0x11);
    uVar11 = FUN_008ebea0(uVar2,uVar3,uVar1,uVar4);
    if (param_6 != 0x1000) {
      uVar11 = FUN_008ec010(uVar11);
    }
    iVar8 = FUN_008ec650(param_10,*(undefined1 *)((long)param_4 + 0xe));
    if (iVar8 == 0x1000) {
      if ((param_7 & 1) != 0) goto LAB_00926eb4;
LAB_00926e90:
      if ((param_8 & 1) == 0) goto LAB_00926ed0;
LAB_00926e94:
      uVar10 = 0x55;
    }
    else {
      uVar11 = FUN_008ec010(uVar11,iVar8);
      if ((param_7 & 1) == 0) goto LAB_00926e90;
LAB_00926eb4:
      uVar11 = (uVar11 * 0xf) / 10;
      if ((param_8 & 1) != 0) goto LAB_00926e94;
LAB_00926ed0:
      iVar8 = FUN_008ebfa0(0x10);
      uVar10 = 100U - iVar8 & 0xffff;
    }
    uVar12 = (ulong)(uVar10 * uVar11) / 100;
    if (*(char *)((long)param_4 + 0xe) != '\x12') {
      uVar9 = FUN_00927830(param_1,param_2);
      uVar12 = FUN_008ec010(uVar12,uVar9);
      uVar12 = uVar12 & 0xffffffff;
    }
    uVar12 = FUN_008ebee0(uVar12,param_5);
    uVar14 = uVar12 & 0xffffffff;
    if (((param_4[4] == 1) && (iVar8 = FUN_008e19f0(param_2), iVar8 == 4)) && (local_64[0] == '\0'))
    {
      uVar14 = (ulong)(uint)((int)uVar12 * 0x32) / 100;
    }
    FUN_008db500(*puVar13,0x38,0x1000,0x29,0x20000);
    FUN_008db380(*puVar13,0x35,uVar14);
    FUN_008db460(*puVar13,100,0);
    FUN_008db460(*puVar13,0x65,0);
    FUN_008dad40(*puVar13,0x5c);
    uVar9 = FUN_008db610(*puVar13,0x38);
    uVar15 = FUN_008db610(*puVar13,0x35);
    uVar10 = FUN_008ec010(uVar15,uVar9);
    uVar12 = FUN_008e0a10(param_2);
  }
  else {
    uVar12 = FUN_008e0a10(param_2);
  }
  if (((uVar12 & 1) != 0) && (uVar10 != 0)) {
    FUN_008db460(*puVar13,0x7f,0);
    FUN_008dad40(*puVar13,0x5d);
    iVar8 = FUN_008db610(*puVar13,0x7f);
    if (iVar8 == 0) {
      FUN_008db460(*puVar13,0x39,0x1000);
      FUN_008dad40(*puVar13,0x5e);
      uVar9 = FUN_008db610(*puVar13,0x39);
      uVar10 = FUN_008ec010(uVar10,uVar9);
      iVar8 = FUN_008f8110(*(undefined8 *)(param_1 + 8));
      goto joined_r0x00927014;
    }
  }
  iVar8 = FUN_008f8110(*(undefined8 *)(param_1 + 8));
joined_r0x00927014:
  if (iVar8 == 2) {
    FUN_008e0b60(param_3);
    FUN_008e5ed0();
    uVar12 = FUN_0093db60();
    uVar11 = uVar10 / 10;
    if ((uVar12 & 1) == 0) {
      uVar11 = uVar10;
    }
    uVar10 = uVar11;
  }
  FUN_008dad40(*puVar13,0x5f);
  FUN_008db2f0(*puVar13);
  if (uVar10 == 0 && iVar7 == 0) {
    uVar10 = 1;
  }
  *param_11 = (short)uVar10;
  return iVar7 != 0 || iVar5 != 0;
}


