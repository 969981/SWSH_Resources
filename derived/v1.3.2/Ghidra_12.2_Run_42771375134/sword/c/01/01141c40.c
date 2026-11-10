/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01141c40; name: FUN_01141c40
 */


void FUN_01141c40(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = *(int *)(param_1 + 0x6ac);
  if (*(char *)(param_1 + 0x6b4) == '\0') {
    if (iVar1 == 3) {
      lVar5 = param_1 + 0x100;
      uVar4 = FUN_00ffdd70(lVar5,&DAT_02165820);
      FUN_016b81d0(uVar4,&DAT_02a63b28,0);
      lVar6 = FUN_00ffda40(lVar5,DAT_02a63b20);
      FUN_016b2d70(lVar6,0);
      FUN_016b2da0(lVar6,1);
      *(undefined8 *)(lVar6 + 0xf8) = 0;
      uVar4 = FUN_00ffdd70(lVar5,&DAT_02165820);
      FUN_016b81d0(uVar4,&DAT_02a63b38,0);
      lVar6 = FUN_00ffda40(lVar5,DAT_02a63b30);
      FUN_016b2d70(lVar6,0);
      FUN_016b2da0(lVar6,1);
      *(undefined8 *)(lVar6 + 0xf8) = 0;
      uVar4 = FUN_00ffdd70(lVar5,&DAT_02165820);
      FUN_016b81d0(uVar4,&DAT_02a63b48,0);
      lVar5 = FUN_00ffda40(lVar5,DAT_02a63b40);
      FUN_016b2d70(lVar5,0);
      uVar4 = 1;
    }
    else {
      if (iVar1 == 2) goto LAB_01141e7c;
      if (iVar1 != 1) {
        return;
      }
      lVar5 = param_1 + 0x100;
      uVar4 = FUN_00ffdd70(lVar5,&DAT_02165820);
      FUN_016b81d0(uVar4,&DAT_02a63b28,1);
      lVar6 = FUN_00ffda40(lVar5,DAT_02a63b20);
      FUN_016b2d70(lVar6,1);
      FUN_016b2da0(lVar6,1);
      *(undefined8 *)(lVar6 + 0xf8) = 0;
      uVar4 = FUN_00ffdd70(lVar5,&DAT_02165820);
      FUN_016b81d0(uVar4,&DAT_02a63b38,1);
      lVar6 = FUN_00ffda40(lVar5,DAT_02a63b30);
      FUN_016b2d70(lVar6,1);
      FUN_016b2da0(lVar6,1);
      *(undefined8 *)(lVar6 + 0xf8) = 0x2000000000000;
      uVar4 = FUN_00ffdd70(lVar5,&DAT_02165820);
      FUN_016b81d0(uVar4,&DAT_02a63b48,0);
      lVar5 = FUN_00ffda40(lVar5,DAT_02a63b40);
      FUN_016b2d70(lVar5,0);
      uVar4 = 0;
    }
    FUN_016b2da0(lVar5,uVar4);
    *(undefined8 *)(lVar5 + 0xf8) = 0;
  }
  else {
    if (iVar1 == 3) {
      cVar2 = *(char *)(*(long *)(param_1 + 0x5d0) + 200);
      param_1 = param_1 + 0x100;
      uVar4 = FUN_00ffdd70(param_1,&DAT_02165820);
      bVar3 = cVar2 == '\x01';
      FUN_016b81d0(uVar4,&DAT_02a63b28,bVar3);
      lVar5 = FUN_00ffda40(param_1,DAT_02a63b20);
      FUN_016b2d70(lVar5,bVar3);
      FUN_016b2da0(lVar5,1);
      *(undefined8 *)(lVar5 + 0xf8) = 0;
      uVar4 = FUN_00ffdd70(param_1,&DAT_02165820);
      FUN_016b81d0(uVar4,&DAT_02a63b38,0);
      lVar5 = FUN_00ffda40(param_1,DAT_02a63b30);
      FUN_016b2d70(lVar5,0);
      FUN_016b2da0(lVar5,0);
      *(undefined8 *)(lVar5 + 0xf8) = 0;
      uVar4 = FUN_00ffdd70(param_1,&DAT_02165820);
      FUN_016b81d0(uVar4,&DAT_02a63b48,0);
      lVar5 = FUN_00ffda40(param_1,DAT_02a63b40);
      FUN_016b2d70(lVar5,0);
      FUN_016b2da0(lVar5,0);
      *(undefined8 *)(lVar5 + 0xf8) = 0;
      uVar4 = FUN_00ffdd70(param_1,&DAT_02165820);
      FUN_016b81d0(uVar4,&DAT_02a63b58,0);
      lVar5 = FUN_00ffda40(param_1,DAT_02a63b50);
      FUN_016b2d70(lVar5,0);
      FUN_016b2da0(lVar5,0);
      *(undefined8 *)(lVar5 + 0xf8) = 0;
      uVar4 = FUN_00ffdd70(param_1,&DAT_02165820);
      FUN_016b7990(uVar4,&DAT_02a63b28,1,0);
      return;
    }
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        param_1 = param_1 + 0x100;
        uVar4 = FUN_00ffdd70(param_1,&DAT_02165820);
        FUN_016b81d0(uVar4,&DAT_02a63b28,1);
        lVar5 = FUN_00ffda40(param_1,DAT_02a63b20);
        FUN_016b2d70(lVar5,1);
        FUN_016b2da0(lVar5,1);
        *(undefined8 *)(lVar5 + 0xf8) = 0;
        uVar4 = FUN_00ffdd70(param_1,&DAT_02165820);
        FUN_016b81d0(uVar4,&DAT_02a63b38,1);
        lVar5 = FUN_00ffda40(param_1,DAT_02a63b30);
        FUN_016b2d70(lVar5,1);
        FUN_016b2da0(lVar5,1);
        *(undefined8 *)(lVar5 + 0xf8) = 0;
        uVar4 = FUN_00ffdd70(param_1,&DAT_02165820);
        FUN_016b81d0(uVar4,&DAT_02a63b48,1);
        lVar5 = FUN_00ffda40(param_1,DAT_02a63b40);
        FUN_016b2d70(lVar5,1);
        FUN_016b2da0(lVar5,1);
        *(undefined8 *)(lVar5 + 0xf8) = 0;
        uVar4 = FUN_00ffdd70(param_1,&DAT_02165820);
        FUN_016b81d0(uVar4,&DAT_02a63b58,1);
        lVar5 = FUN_00ffda40(param_1,DAT_02a63b50);
        FUN_016b2d70(lVar5,1);
        FUN_016b2da0(lVar5,1);
        *(undefined8 *)(lVar5 + 0xf8) = 0x2000000000000;
        return;
      }
      return;
    }
LAB_01141e7c:
    lVar5 = param_1 + 0x100;
    uVar4 = FUN_00ffdd70(lVar5,&DAT_02165820);
    FUN_016b81d0(uVar4,&DAT_02a63b28,1);
    lVar6 = FUN_00ffda40(lVar5,DAT_02a63b20);
    FUN_016b2d70(lVar6,1);
    FUN_016b2da0(lVar6,1);
    *(undefined8 *)(lVar6 + 0xf8) = 0;
    uVar4 = FUN_00ffdd70(lVar5,&DAT_02165820);
    FUN_016b81d0(uVar4,&DAT_02a63b38,1);
    lVar6 = FUN_00ffda40(lVar5,DAT_02a63b30);
    FUN_016b2d70(lVar6,1);
    FUN_016b2da0(lVar6,1);
    *(undefined8 *)(lVar6 + 0xf8) = 0;
    uVar4 = FUN_00ffdd70(lVar5,&DAT_02165820);
    FUN_016b81d0(uVar4,&DAT_02a63b48,1);
    lVar5 = FUN_00ffda40(lVar5,DAT_02a63b40);
    FUN_016b2d70(lVar5,1);
    FUN_016b2da0(lVar5,1);
    *(undefined8 *)(lVar5 + 0xf8) = 0x2000000000000;
  }
  uVar4 = FUN_00ffdd70(param_1 + 0x100,&DAT_02165820);
  FUN_016b81d0(uVar4,&DAT_02a63b58,0);
  lVar5 = FUN_00ffda40(param_1 + 0x100,DAT_02a63b50);
  FUN_016b2d70(lVar5,0);
  FUN_016b2da0(lVar5,0);
  *(undefined8 *)(lVar5 + 0xf8) = 0;
  return;
}


