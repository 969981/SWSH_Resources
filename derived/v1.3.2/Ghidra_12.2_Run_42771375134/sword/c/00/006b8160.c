/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b8160; name: FUN_006b8160
 */


void FUN_006b8160(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_006b7c50();
  if ((float)uVar1 < 1.0) {
    FUN_006b6f40(1.0 - (float)uVar1,*(undefined8 *)(param_2 + 0x78));
    FUN_006b6f40(uVar1,*(undefined8 *)(param_2 + 0x80));
    FUN_006b6b50(param_1,*(undefined8 *)(param_2 + 0x80));
    return;
  }
  FUN_006b8090(param_1,0xbf800000,param_2);
  return;
}


