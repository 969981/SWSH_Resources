/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0095f150; name: FUN_0095f150
 */


void FUN_0095f150(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  
  iVar2 = FUN_0093b420(param_2);
  if (iVar2 != 0) {
    iVar9 = 0;
    do {
      uVar7 = FUN_0093b2c0(param_2,iVar9);
      cVar1 = FUN_00942730(param_1,uVar7);
      if ((cVar1 == -1) && (uVar8 = FUN_008e1600(uVar7), (uVar8 & 1) == 0)) {
        uVar3 = FUN_008e12a0(uVar7,0xd);
        uVar4 = FUN_008e12a0(uVar7,0xf);
        iVar5 = FUN_016ac470(uVar3,uVar4);
        if (iVar5 == 2) {
          uVar6 = FUN_008e0a00(uVar7);
          uVar7 = FUN_009423b0(param_1);
          FUN_0093a0e0(uVar7,uVar6,1,1,0x107,uVar6 & 0xff,0);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar2 != iVar9);
  }
  return;
}


