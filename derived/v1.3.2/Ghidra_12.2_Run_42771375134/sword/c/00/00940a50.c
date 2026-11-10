/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00940a50; name: FUN_00940a50
 */


void FUN_00940a50(long param_1,uint param_2)

{
  long lVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  iVar4 = FUN_008db610(*(undefined8 *)(param_1 + 0x30),0x55);
  if ((iVar4 == 0) &&
     (uVar5 = FUN_008db610(*(undefined8 *)(param_1 + 0x30),4), uVar5 == (param_2 & 0xff))) {
    uVar7 = FUN_00931920(*(undefined8 *)(param_1 + 8));
    FUN_008deea0(uVar7,param_2);
    uVar8 = FUN_008e2ec0();
    if ((uVar8 & 1) == 0) {
      uVar7 = FUN_008db610(*(undefined8 *)(param_1 + 0x30),0x12);
      uVar8 = FUN_00880a00(uVar7,4);
      if (((uVar8 & 1) != 0) &&
         (uVar8 = FUN_008db590(*(undefined8 *)(param_1 + 0x30),0x47,1), (uVar8 & 1) != 0)) {
        uVar6 = FUN_008db610(*(undefined8 *)(param_1 + 0x30),3);
        uVar7 = FUN_009319a0(*(undefined8 *)(param_1 + 8));
        uVar3 = FUN_00913e70(uVar7,uVar6);
        FUN_00942fd0(*(undefined8 *)(param_1 + 0x28));
        lVar9 = FUN_009429b0();
        bVar2 = *(byte *)(lVar9 + 0x24);
        if ((ulong)bVar2 < 5) {
          lVar1 = lVar9 + 0x24 + (ulong)bVar2;
          *(char *)(lVar1 + 1) = (char)param_2;
          *(char *)(lVar1 + 0xb) = (char)uVar6;
          *(undefined1 *)(lVar1 + 6) = uVar3;
          *(byte *)(lVar9 + 0x24) = bVar2 + 1;
        }
        FUN_008db590(*(undefined8 *)(param_1 + 0x30),0x59,1);
        return;
      }
    }
  }
  return;
}


