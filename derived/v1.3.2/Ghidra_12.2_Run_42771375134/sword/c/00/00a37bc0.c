/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a37bc0; name: FUN_00a37bc0
 */


void FUN_00a37bc0(long param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x660) = uVar2;
  if ((param_3 & 1) == 0) {
    return;
  }
  lVar1 = 0x640;
  if (*(char *)(param_1 + 0x61d) != '\0') {
    lVar1 = 0x648;
  }
  FUN_00a39fd0(param_1,*(undefined8 *)(param_1 + lVar1),uVar2,1);
  return;
}


