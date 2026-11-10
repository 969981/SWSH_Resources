/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009272b0; name: FUN_009272b0
 */


void FUN_009272b0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 ulong param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(param_1 + 0x10);
  FUN_008db2b0(*puVar7);
  uVar6 = *puVar7;
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar6,3,uVar1);
  uVar6 = *puVar7;
  uVar1 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar6,4,uVar1);
  FUN_008db380(*puVar7,0x40,0x1f);
  FUN_008db380(*puVar7,0x59,0);
  FUN_008dad40(*puVar7,0x49);
  iVar3 = FUN_008db610(*puVar7,0x59);
  uVar4 = FUN_008db610(*puVar7,0x40);
  if ((uVar4 & 0xff) != 0x1f) {
    uVar6 = FUN_00931920(*(undefined8 *)(param_1 + 0x18));
    param_2 = FUN_008deea0(uVar6,uVar4);
  }
  uVar5 = 10;
  if (param_4[4] != 2) {
    uVar5 = 8;
  }
  FUN_008db2b0(8,*puVar7);
  uVar6 = *puVar7;
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar6,3,uVar1);
  FUN_008db3f0(*puVar7,0x12,*param_4);
  FUN_008db460(*puVar7,0x41,uVar5);
  FUN_008dad40(*puVar7,0x4b);
  uVar5 = FUN_008db610(*puVar7,0x41);
  FUN_008db2f0(*puVar7);
  if (iVar3 == 0) {
    if ((param_5 & 1) != 0) {
      switch(uVar5) {
      case 8:
        iVar3 = FUN_008e12a0(param_2,1);
        break;
      case 9:
        iVar3 = FUN_008e12a0(param_2,2);
        break;
      case 10:
        iVar3 = FUN_008e12a0(param_2,3);
        break;
      case 0xb:
        iVar3 = FUN_008e12a0(param_2,4);
        break;
      default:
        goto switchD_00927448_default;
      }
      if (iVar3 < 6) goto LAB_00927418;
    }
switchD_00927448_default:
    uVar2 = FUN_008e12a0(param_2,uVar5);
  }
  else {
LAB_00927418:
    uVar2 = FUN_008e1720(param_2,uVar5);
  }
  FUN_008db3f0(*puVar7,0x12,*param_4);
  FUN_008db3f0(*puVar7,0x16,*(undefined1 *)((long)param_4 + 0xe));
  FUN_008db3f0(*puVar7,0x1b,param_4[4]);
  FUN_008db380(*puVar7,0x36,uVar2);
  FUN_008db500(*puVar7,0x38,0x1000,0x19a,0x20000);
  FUN_008db460(*puVar7,0x5a,0);
  FUN_008dad40(*puVar7,0x4c);
  uVar2 = FUN_008db610(*puVar7,0x36);
  uVar5 = FUN_008db610(*puVar7,0x38);
  iVar3 = FUN_008db610(*puVar7,0x5a);
  *(bool *)param_6 = iVar3 != 0;
  FUN_008db2f0(*puVar7);
  FUN_008ec010(uVar2,uVar5);
  return;
}


