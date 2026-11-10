/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ac7b0; name: FUN_007ac7b0
 */


undefined8 FUN_007ac7b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0xb0) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0xb0) + 0xc0), lVar2 == 0)) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0xd8);
  if (lVar3 == 0) {
    lVar3 = FUN_017cd750(0x50);
    if (lVar3 == 0) {
      *(undefined8 *)(param_1 + 0xd8) = 0;
      return 0;
    }
    FUN_007ae530();
    *(long *)(param_1 + 0xd8) = lVar3;
  }
  uVar1 = FUN_007ae680(lVar3,lVar2);
  return uVar1;
}


