/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a3550; name: FUN_009a3550
 */


void FUN_009a3550(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_58 [8];
  long local_50;
  undefined1 local_48;
  
  uVar1 = *param_3;
  FUN_00942380();
  uVar2 = FUN_008f94e0(uVar1);
  lVar5 = FUN_009424e0(param_1,uVar1);
  uVar6 = FUN_008e0a10();
  if ((uVar6 & 1) != 0) {
    return;
  }
  uVar7 = FUN_00942390(param_1);
  uVar6 = FUN_009a3be0(uVar7,lVar5);
  if ((uVar6 & 1) == 0) {
    return;
  }
  uVar6 = FUN_008e55a0(lVar5);
  if ((uVar6 & 1) != 0) {
    local_48 = 0;
    local_50 = lVar5;
    FUN_00942450(param_1);
    uVar7 = FUN_00925a10();
    FUN_0095fd70(uVar7,auStack_58,&local_50);
  }
  sVar3 = FUN_008e1290(lVar5);
  if (sVar3 == 0x34d) {
    if (*(char *)(lVar5 + 0x33d) == '\x01') {
      lVar10 = 0;
    }
    else {
      if (*(char *)(lVar5 + 0x33d) != '\x02') goto LAB_009a3640;
      lVar10 = 1;
    }
    uVar4 = FUN_008e0a00(lVar5);
    uVar7 = FUN_009423b0(param_1);
    FUN_00938360(uVar7,uVar4,(&UNK_01d4a826)[lVar10 * 8],0);
  }
LAB_009a3640:
  uVar7 = FUN_00942380(param_1);
  uVar8 = FUN_00942390(param_1);
  uVar9 = FUN_009423b0(param_1);
  FUN_0092f930(uVar7,uVar8,uVar9,3,uVar1,0,0);
  uVar7 = FUN_009423b0(param_1);
  FUN_00939ef0(uVar7,uVar2);
  uVar7 = FUN_009423b0(param_1);
  FUN_00939df0(uVar7,uVar1);
  uVar7 = FUN_009423b0(param_1);
  FUN_0093a030(uVar7,uVar1);
  uVar4 = FUN_009425b0(param_1,lVar5);
  uVar7 = FUN_009423b0(param_1);
  FUN_00939040(uVar7,0,uVar4);
  uVar7 = FUN_00942380(param_1);
  FUN_008f90a0(uVar7,lVar5);
  uVar6 = FUN_008e5a80(lVar5);
  if (((uVar6 & 1) != 0) && (uVar6 = FUN_00942740(param_1,lVar5), (uVar6 & 1) != 0)) {
    uVar7 = FUN_00942380(param_1);
    FUN_008f9210(uVar7,lVar5);
  }
  uVar6 = FUN_00942740(param_1,lVar5);
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_00942790(param_1,lVar5);
    if ((uVar6 & 1) == 0) {
      FUN_009a3820(param_1,lVar5);
    }
  }
  else {
    FUN_009a3770(param_1,lVar5);
  }
  return;
}


