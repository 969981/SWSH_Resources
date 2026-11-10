/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ac890; name: FUN_007ac890
 */


undefined8 FUN_007ac890(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0xb0) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0xb0) + 0xc0), lVar2 == 0)) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0xe0);
  if (lVar3 == 0) {
    lVar3 = FUN_017cd750(0xb8);
    if (lVar3 == 0) {
      *(undefined8 *)(param_1 + 0xe0) = 0;
      return 0;
    }
    FUN_007b2d50();
    *(long *)(param_1 + 0xe0) = lVar3;
  }
  uVar1 = FUN_007b2ec0(lVar3,lVar2);
  return uVar1;
}


