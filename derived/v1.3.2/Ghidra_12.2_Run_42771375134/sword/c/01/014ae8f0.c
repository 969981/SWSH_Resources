/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ae8f0; name: FUN_014ae8f0
 */


void FUN_014ae8f0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_008783b0();
  if (iVar2 != 0x2a4) {
    return;
  }
  uVar1 = 0;
  if ((param_2 & 0xffff) < 10) {
    uVar1 = param_2;
  }
  FUN_0087df30(param_1,uVar1,0);
  if ((uVar1 & 0xffff) == 0) {
    FUN_00878bd0(param_1,0);
    FUN_00878b90(param_1,0);
    return;
  }
  FUN_00878b90(param_1,5);
  return;
}


