/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00929240; name: FUN_00929240
 */


int FUN_00929240(long param_1,undefined8 param_2,ulong param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar2 = FUN_008e12a0(param_2,0xc);
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar7,2,uVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x32,uVar2);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x59,1);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x51,0);
  FUN_008db500(*(undefined8 *)(param_1 + 0x10),0x38,0x1000,0x19a,0x20000);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x13);
  uVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x32);
  uVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x38);
  uVar6 = FUN_008ec010(uVar2,uVar3);
  uVar8 = uVar6 & 0xffffffff;
  iVar4 = FUN_008e19f0(param_2);
  if ((iVar4 == 1) && (iVar4 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x59), iVar4 != 0)) {
    uVar8 = (ulong)(uint)((int)uVar6 * 0x32) / 100;
  }
  iVar4 = (int)uVar8;
  if (0x270 < (uint)(uVar8 >> 4)) {
    iVar4 = 10000;
  }
  if ((param_3 & 1) != 0) {
    iVar5 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x51);
    if (iVar5 != 0) {
      iVar4 = 10000 - iVar4;
    }
  }
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return iVar4;
}


