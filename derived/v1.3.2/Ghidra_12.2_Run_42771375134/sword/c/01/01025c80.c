/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01025c80; name: FUN_01025c80
 */


undefined8 FUN_01025c80(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0x25800;
  lVar3 = param_1 + 0x90;
  while( true ) {
    if ((long)*(int *)(param_1 + 0x70) <= lVar3 - (param_1 + 0x90) >> 9) {
      return 0;
    }
    uVar1 = nn::friends::Friend::IsValid();
    if (((uVar1 & 1) != 0) && (lVar2 = nn::friends::Friend::GetAccountId(), lVar2 == param_2))
    break;
    lVar3 = lVar3 + 0x200;
    lVar4 = lVar4 + -0x200;
    if (lVar4 == 0) {
      return 0;
    }
  }
  return 1;
}


