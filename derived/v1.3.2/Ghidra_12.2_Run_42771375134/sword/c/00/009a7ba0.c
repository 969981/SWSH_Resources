/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a7ba0; name: FUN_009a7ba0
 */


void FUN_009a7ba0(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_009a7c60();
  uVar2 = FUN_009426f0(param_1);
  if ((uVar2 & 1) != 0) {
    FUN_009423f0(param_1);
    uVar3 = FUN_00942fe0();
    FUN_00943280(uVar3,4);
    return;
  }
  if (iVar1 == 3) {
    FUN_009423f0(param_1);
    uVar3 = FUN_00942fe0();
    FUN_00943280(uVar3,5);
    return;
  }
  if (iVar1 == 2) {
    FUN_009423f0(param_1);
    uVar3 = FUN_00942fe0();
    FUN_00943280(uVar3,1);
    return;
  }
  if (iVar1 == 1) {
    FUN_009423f0(param_1);
    uVar3 = FUN_00942fe0();
    FUN_00943280(uVar3,3);
    return;
  }
  return;
}


