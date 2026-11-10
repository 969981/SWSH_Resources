/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00940d40; name: FUN_00940d40
 */


int FUN_00940d40(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar1 = FUN_008db610(*(undefined8 *)(param_1 + 0x30),3);
  if ((uVar1 == (param_2 & 0xff)) &&
     (uVar1 = FUN_008db610(*(undefined8 *)(param_1 + 0x30),5), uVar1 != 0)) {
    iVar3 = 0;
    uVar5 = 0;
    do {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      uVar2 = FUN_008db610(uVar4,5);
      if (((uVar5 & 0xff) < uVar2) &&
         (uVar2 = FUN_008db610(uVar4,(uVar5 & 0xff) + 6), (uVar2 & 0xff) != 0x1f)) {
        uVar4 = FUN_00931920(*(undefined8 *)(param_1 + 8));
        FUN_008df3f0(uVar4,uVar2);
        uVar2 = FUN_008e1600();
        iVar3 = iVar3 + (uVar2 & 1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}


