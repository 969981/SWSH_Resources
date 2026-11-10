/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a45a0; name: FUN_009a45a0
 */


void FUN_009a45a0(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_00942380();
  uVar2 = FUN_008f35c0(uVar1,0x200);
  if ((((uVar2 & 1) != 0) && (uVar2 = FUN_009426f0(param_1), (uVar2 & 1) == 0)) &&
     (uVar2 = FUN_009a4760(param_1), (uVar2 & 1) == 0)) {
    FUN_009423f0(param_1);
    uVar1 = FUN_00942fe0();
    uVar2 = FUN_00943290(uVar1,5);
    if ((uVar2 & 1) == 0) {
      uVar1 = FUN_00942380(param_1);
      uVar2 = FUN_008f93a0(uVar1,0);
      if ((uVar2 & 1) != 0) {
        FUN_009a4af0(param_1,0);
      }
      uVar1 = FUN_00942380(param_1);
      uVar2 = FUN_008f93a0(uVar1,1);
      if ((uVar2 & 1) != 0) {
        FUN_009a4af0(param_1,1);
        return;
      }
    }
  }
  return;
}


