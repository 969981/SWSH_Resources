/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00876c70; name: FUN_00876c70
 */


int FUN_00876c70(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_00864b10();
  uVar3 = 1;
  do {
    uVar2 = FUN_00864ba0(uVar3);
    if (param_3 < uVar2) break;
    uVar3 = uVar3 + 1;
  } while ((uVar3 & 0xff) < 0x65);
  iVar1 = uVar3 - 1;
  if ((uVar3 & 0xff) < 2) {
    iVar1 = 1;
  }
  return iVar1;
}


