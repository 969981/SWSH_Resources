/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00955040; name: FUN_00955040
 */


void FUN_00955040(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 local_28;
  undefined2 local_27;
  
  uVar2 = FUN_0093ec60();
  uVar3 = FUN_008e1810(uVar2,0xf);
  if ((((uVar3 & 1) == 0) && (uVar1 = FUN_0093eb90(param_1,2), uVar1 == (param_2 & 0xff))) &&
     (uVar3 = FUN_00956750(param_1,param_2,2), (uVar3 & 1) != 0)) {
    FUN_0093efa0(param_1);
    local_27 = 0;
    local_28 = (char)param_2;
    FUN_0093fca0(param_1,&local_28);
  }
  return;
}


