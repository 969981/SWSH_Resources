/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092a710; name: FUN_0092a710
 */


bool FUN_0092a710(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined1 *param_5)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  uVar14 = *(undefined8 *)(param_1 + 8);
  uVar12 = FUN_009319a0(*(undefined8 *)(param_1 + 0x18));
  uVar13 = FUN_0092f720(uVar14,param_2,param_3,uVar12);
  if ((((uVar13 & 1) == 0) &&
      (uVar13 = FUN_0092a9a0(param_1,param_2,param_3,*param_4), (uVar13 & 1) == 0)) &&
     (uVar13 = FUN_008e1810(param_3,0x21), (uVar13 & 1) == 0)) {
    uVar6 = FUN_009285d0(param_1,0x42,param_2,param_3,param_4);
    FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = FUN_008e0a00(param_2);
    FUN_008db3f0(uVar12,3,uVar2);
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = FUN_008e0a00(param_3);
    FUN_008db3f0(uVar12,4,uVar2);
    FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x52,0);
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = FUN_008e12a0(param_2,6);
    FUN_008db380(uVar12,0x2a,uVar7);
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = FUN_008e12a0(param_3,7);
    FUN_008db380(uVar12,0x2b,uVar7);
    FUN_008db500(*(undefined8 *)(param_1 + 0x10),0x38,0x1000,0x29,0x20000);
    FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x41);
    cVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x2a);
    iVar8 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x2b);
    cVar4 = (char)iVar8;
    cVar5 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x52);
    uVar13 = FUN_008e1810(param_3,0x11);
    if ((((uVar13 & 1) != 0) && (0x6000000 < iVar8 * 0x1000000)) || (cVar5 != '\0')) {
      cVar4 = '\x06';
    }
    uVar13 = FUN_008e2df0(param_2,0xe);
    if ((uVar13 & 1) != 0) {
      FUN_008db5d0(*(undefined8 *)(param_1 + 0x10),0x38,0x1333);
    }
    uVar7 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x38);
    FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
    uVar9 = FUN_008ec960((cVar3 + 6) - (int)cVar4,0,0xc);
    uVar2 = FUN_008ec350(uVar6,uVar9);
    uVar10 = FUN_008ec010(uVar2,uVar7);
    if (99 < uVar10) {
      uVar10 = 100;
    }
    cVar3 = thunk_FUN_008fa2d0(*(undefined8 *)(param_1 + 8),param_3);
    if (cVar3 == -1) {
      bVar1 = uVar10 < 10;
      uVar10 = uVar10 - 10;
      if (bVar1 || uVar10 == 0) {
        uVar10 = 0;
      }
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 1;
      }
    }
    uVar11 = FUN_008ebfa0(100);
    bVar1 = uVar11 < (uVar10 & 0xff);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


