/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099e9d0; name: FUN_0099e9d0
 */


void FUN_0099e9d0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_48 [8];
  
  uVar5 = FUN_00942380();
  FUN_00942390(param_1);
  uVar6 = FUN_00931920();
  uVar3 = FUN_008e0a00(param_2);
  uVar1 = FUN_008f9470(uVar5,uVar6,uVar3);
  iVar4 = FUN_0093b420(param_4);
  if (iVar4 == 0) {
    uVar2 = 5;
  }
  else {
    FUN_0093b2c0(param_4,0);
    uVar3 = FUN_008e0a00();
    uVar2 = FUN_00942580(param_1,uVar3);
  }
  lVar7 = FUN_00942400(param_1);
  *(undefined4 *)(lVar7 + 0x10) = *param_3;
  *(undefined1 *)(lVar7 + 0x14) = uVar1;
  *(undefined1 *)(lVar7 + 0x15) = uVar2;
  *(undefined2 *)(lVar7 + 0x16) = 0;
  *(undefined1 *)(lVar7 + 0x18) = 0;
  FUN_0095ee00(auStack_48);
  uVar5 = FUN_009423c0(param_1);
  FUN_0095ed00(uVar5,param_3,(undefined4 *)(lVar7 + 0x10),auStack_48);
  return;
}


