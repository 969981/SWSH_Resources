/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092dfd0; name: FUN_0092dfd0
 */


void FUN_0092dfd0(long param_1,undefined8 param_2,undefined4 param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  undefined8 uVar7;
  
  bVar1 = FUN_00880c00(param_3);
  if ((bVar1 & 0xfe) == 0) {
    bVar1 = 1;
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_008ec840();
  }
  param_4[1] = 0;
  param_4[4] = 7;
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[7] = 0;
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar7,3,uVar3);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x2c,bVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x12,param_3);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x54,param_5 & 1);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x2d,uVar2);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x59,0);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x49,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x44);
  bVar4 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x2d);
  if (bVar1 < 2) {
    if ((bVar4 & 0xfe) == 0) {
      bVar4 = 0;
      bVar1 = 0;
      bVar6 = 1;
      *param_4 = 1;
    }
    else {
      *param_4 = bVar4;
      bVar4 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x49);
      bVar1 = 0;
      bVar6 = 0;
    }
  }
  else if ((bVar1 < 6) && (iVar5 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x59), iVar5 != 0))
  {
    bVar4 = 0;
    bVar6 = 0;
    *param_4 = bVar1;
    bVar1 = 1;
  }
  else {
    *param_4 = bVar4;
    bVar4 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x49);
    bVar6 = 0;
    bVar1 = 1;
  }
  param_4[2] = bVar4;
  param_4[3] = bVar1;
  param_4[8] = bVar6;
  param_4[9] = bVar6;
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return;
}


