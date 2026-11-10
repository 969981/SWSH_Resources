/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d5ae0; name: FUN_008d5ae0
 */


void FUN_008d5ae0(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
  iVar1 = FUN_008e4c50(param_2);
  uVar2 = FUN_008e0a00(param_2);
  piVar3 = (int *)(param_1 + (uVar2 & 0xff) * 0x10 + 0xa8);
  if (*piVar3 == iVar1) {
    return;
  }
  if (*piVar3 != 0) {
    param_1 = param_1 + (uVar2 & 0xff) * 0x10;
    piVar3 = (int *)(param_1 + 0xac);
    if (*piVar3 == iVar1) {
      return;
    }
    if (*piVar3 != 0) {
      piVar3 = (int *)(param_1 + 0xb0);
      if (*piVar3 == iVar1) {
        return;
      }
      if (*piVar3 != 0) {
        piVar3 = (int *)(param_1 + 0xb4);
        if (*piVar3 == iVar1) {
          return;
        }
        if (*piVar3 != 0) {
          return;
        }
      }
    }
  }
  *piVar3 = iVar1;
  return;
}


