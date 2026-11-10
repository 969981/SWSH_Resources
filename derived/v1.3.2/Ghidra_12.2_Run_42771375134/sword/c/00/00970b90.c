/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00970b90; name: FUN_00970b90
 */


void FUN_00970b90(undefined8 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0093eb90(param_1,2);
  if ((uVar1 == (param_2 & 0xff)) && (iVar2 = FUN_0093ed20(param_1), iVar2 == 2)) {
    FUN_0093ebe0(param_1,0x27);
    return;
  }
  return;
}


