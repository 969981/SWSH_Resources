/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00404c50; name: FUN_00404c50
 */


void FUN_00404c50(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = param_2 + 7U & 0xfffffffffffffff8;
  if (uVar3 < 0x19) {
    uVar3 = 0x18;
  }
  if (param_2 + 7U >> 0x20 != 0) {
    uVar3 = 0;
  }
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = uVar3;
  }
  uVar2 = FUN_00404cb0(param_1,uVar1);
  FUN_00404e40(param_1,uVar2,uVar1);
  return;
}


