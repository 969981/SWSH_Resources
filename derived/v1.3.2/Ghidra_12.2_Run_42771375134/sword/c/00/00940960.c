/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00940960; name: FUN_00940960
 */


void FUN_00940960(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar7 = FUN_00931920(param_1[1]);
  FUN_008df3f0(uVar7,param_2);
  uVar8 = FUN_008e2ec0();
  if ((uVar8 & 1) == 0) {
    uVar4 = FUN_008db610(param_1[6],2);
    uVar8 = FUN_008f9ff0(*param_1,uVar4,param_2);
    if ((uVar8 & 1) == 0) {
      uVar5 = FUN_008db610(param_1[6],0x12);
      iVar6 = FUN_00880b40();
      if (((iVar6 == 0xb) && (uVar8 = FUN_00880a00(uVar5,4), (uVar8 & 1) != 0)) &&
         (uVar8 = FUN_008db590(param_1[6],0x25,0x19), (uVar8 & 1) != 0)) {
        uVar7 = FUN_009319a0(param_1[1]);
        uVar3 = FUN_00913e70(uVar7,uVar4);
        FUN_00942fd0(param_1[5]);
        lVar9 = FUN_009429b0();
        bVar2 = *(byte *)(lVar9 + 0x24);
        if ((ulong)bVar2 < 5) {
          lVar1 = lVar9 + 0x24 + (ulong)bVar2;
          *(char *)(lVar1 + 1) = (char)param_2;
          *(char *)(lVar1 + 0xb) = (char)uVar4;
          *(undefined1 *)(lVar1 + 6) = uVar3;
          *(byte *)(lVar9 + 0x24) = bVar2 + 1;
        }
      }
    }
  }
  return;
}


