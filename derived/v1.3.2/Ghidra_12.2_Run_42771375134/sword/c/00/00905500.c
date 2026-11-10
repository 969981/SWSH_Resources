/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00905500; name: FUN_00905500
 */


void FUN_00905500(long param_1,undefined8 param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_58;
  undefined6 uStack_50;
  undefined2 local_4a;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  
  uStack_43 = 0;
  uStack_44 = 1;
  uStack_48 = 0x1010101;
  local_58 = *(undefined8 *)(param_1 + 0x70);
  uStack_50 = (undefined6)(param_1 + 0x128);
  local_4a = (undefined2)((ulong)(param_1 + 0x128) >> 0x30);
  uVar7 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),0x1000);
  if ((uVar7 & 1) != 0) {
    FUN_00905990(param_1,&local_58);
  }
  uVar3 = FUN_00961740(&local_58);
  uVar8 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
  uVar8 = FUN_008df7f0(uVar8,uVar3);
  uVar9 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
  lVar10 = FUN_008df900(uVar9,*(undefined1 *)(param_1 + 0x2a6),0);
  uVar4 = FUN_00905830(param_1,lVar10,uVar8);
  uVar5 = FUN_00880c60();
  sVar2 = FUN_008e1290(lVar10);
  cVar1 = *(char *)(lVar10 + 0x33d);
  uVar6 = FUN_008e0a00(lVar10);
  FUN_00918500(param_2,uVar6,uVar4,uVar3,~uVar5 & 1,sVar2 == 0x37a && cVar1 == '\x01');
  return;
}


