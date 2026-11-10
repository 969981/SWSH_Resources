/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099b8f0; name: FUN_0099b8f0
 */


undefined8 FUN_0099b8f0(undefined8 param_1,undefined8 param_2,int param_3)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_3 != 0) {
    return 0;
  }
  uVar4 = FUN_008daa40();
  uVar3 = FUN_008e0a00(param_2);
  lVar5 = FUN_008dd0a0(uVar4,7,uVar3);
  if (lVar5 != 0) {
    do {
      sVar1 = FUN_008dba00(lVar5);
      if (sVar1 == 0) {
        return 0;
      }
      lVar5 = FUN_008dd130(uVar4,lVar5,0);
    } while (lVar5 != 0);
  }
  uVar3 = FUN_008e0a00(param_2);
  uVar2 = FUN_008e1720(param_2,0xc);
  uVar4 = FUN_008daa50(param_1,7,0,5,uVar2,uVar3,&DAT_02626f10,2);
  return uVar4;
}


