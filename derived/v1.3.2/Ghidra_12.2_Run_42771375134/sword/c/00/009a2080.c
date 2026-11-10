/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a2080; name: FUN_009a2080
 */


undefined4 FUN_009a2080(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar2 = FUN_008e12a0(param_2,0x11);
  FUN_00942380(param_1);
  uVar3 = FUN_008f8940();
  uVar2 = uVar2 & 0xffff;
  uVar3 = uVar3 & 0xff;
  iVar1 = uVar2 - uVar3;
  if (uVar2 < uVar3 || iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_008ebfa0(uVar2 + uVar3 + 1);
  if ((uVar2 & 0xffff) < uVar3) {
    return 0;
  }
  uVar4 = FUN_008e1920(param_2,0);
  if ((uVar4 & 1) != 0) {
    return 4;
  }
  uVar2 = FUN_008ebfa0(0x100);
  if ((int)(uVar2 & 0xffff) < iVar1) {
    uVar5 = FUN_009423e0(param_1);
    uVar4 = FUN_00929520(uVar5,param_2);
    if ((uVar4 & 1) == 0) {
      return 2;
    }
  }
  uVar6 = 3;
  if (iVar1 <= (int)(uVar2 - iVar1 & 0xffff)) {
    uVar6 = 4;
  }
  return uVar6;
}


