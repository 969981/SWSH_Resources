/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092f720; name: FUN_0092f720
 */


undefined8 FUN_0092f720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar3 = FUN_008e0a00(param_2);
  uVar5 = FUN_00913f10(param_4,param_1,uVar3);
  if (((uVar5 & 1) != 0) && (iVar4 = FUN_008e12a0(param_2,0x13), iVar4 == 99)) {
    return 1;
  }
  uVar3 = FUN_008e0a00(param_3);
  uVar5 = FUN_00913f10(param_4,param_1,uVar3);
  if (((uVar5 & 1) != 0) && (iVar4 = FUN_008e12a0(param_3,0x13), iVar4 == 99)) {
    return 1;
  }
  uVar5 = FUN_008e1810(param_2,0x1d);
  if ((uVar5 & 1) != 0) {
    return 1;
  }
  uVar5 = FUN_008e1810(param_2,0x1e);
  if ((uVar5 & 1) != 0) {
    cVar1 = FUN_008e1a60(param_2,0x1e);
    cVar2 = FUN_008e0a00(param_3);
    if (cVar1 == cVar2) {
      return 1;
    }
  }
  return 0;
}


