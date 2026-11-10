/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092b0a0; name: FUN_0092b0a0
 */


uint FUN_0092b0a0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,ushort *param_5)

{
  undefined1 uVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  iVar4 = FUN_008e12a0(param_3,0xd);
  if ((int)(uint)*param_5 < iVar4) {
LAB_0092b0e0:
    uVar5 = 0;
  }
  else {
    FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = FUN_008e0a00(param_2);
    FUN_008db3f0(uVar7,3,uVar1);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = FUN_008e0a00(param_3);
    FUN_008db3f0(uVar7,4,uVar1);
    FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x59,param_4 & 1);
    FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x3f,0);
    FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x92);
    uVar5 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x3f);
    FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
    if ((uVar5 & 0xff) == 0) {
      bVar2 = thunk_FUN_008fa2d0(*(undefined8 *)(param_1 + 8),param_3);
      if (bVar2 == 0xff) {
        iVar4 = FUN_008ec900(0x14);
      }
      else if (bVar2 < 0xdc) {
        uVar6 = 10;
        if (bVar2 < 0xb4) {
          uVar6 = 0;
        }
        iVar4 = FUN_008ec900(uVar6);
      }
      else {
        iVar4 = FUN_008ec900(0xf);
      }
      if (iVar4 == 0) goto LAB_0092b0e0;
      uVar5 = 5;
    }
    sVar3 = FUN_008e12a0(param_3,0xd);
    *param_5 = sVar3 - 1;
  }
  return uVar5;
}


