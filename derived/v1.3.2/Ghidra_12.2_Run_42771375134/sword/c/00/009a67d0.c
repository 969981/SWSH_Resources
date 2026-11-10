/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a67d0; name: FUN_009a67d0
 */


bool FUN_009a67d0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_00942380();
  uVar3 = FUN_008f35c0(uVar2,0x4000);
  if ((uVar3 & 1) != 0) {
    return false;
  }
  uVar2 = FUN_00942380(param_1);
  uVar3 = FUN_008f35c0(uVar2,0x400);
  if ((uVar3 & 1) != 0) {
    return false;
  }
  uVar2 = FUN_00942380(param_1);
  uVar3 = FUN_008f35c0(uVar2,0x800);
  if ((uVar3 & 1) != 0) {
    return false;
  }
  uVar2 = FUN_00942380(param_1);
  uVar3 = FUN_008f35c0(uVar2,0x1000);
  if ((uVar3 & 1) != 0) {
    return false;
  }
  uVar2 = FUN_00942380(param_1);
  uVar3 = FUN_008f35c0(uVar2,0x40000);
  if ((uVar3 & 1) != 0) {
    return false;
  }
  uVar2 = FUN_00942380(param_1);
  uVar3 = FUN_008f35c0(uVar2,0x80000);
  if ((uVar3 & 1) != 0) {
    return false;
  }
  uVar2 = FUN_00942380(param_1);
  uVar3 = FUN_008f89c0(uVar2,0x10);
  if ((uVar3 & 1) != 0) {
    return false;
  }
  uVar2 = FUN_00942380(param_1);
  uVar3 = FUN_008f89c0(uVar2,0x20);
  if ((uVar3 & 1) != 0) {
    return false;
  }
  uVar2 = FUN_00942380(param_1);
  uVar3 = FUN_008f89c0(uVar2,0x80);
  if ((uVar3 & 1) == 0) {
    iVar1 = FUN_00942620(param_1);
    return iVar1 != 2;
  }
  return false;
}


