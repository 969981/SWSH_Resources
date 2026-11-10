/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007888a0; name: FUN_007888a0
 */


byte FUN_007888a0(long param_1)

{
  byte bVar1;
  ushort uVar2;
  float fVar3;
  
  if (*(long *)(param_1 + 8) != 0) {
    if (*(char *)(param_1 + 3) == '\0') {
      return 1;
    }
    if (*(char *)(param_1 + 1) == '\0') {
      fVar3 = *(float *)(*(long *)(param_1 + 8) + 0x20);
      uVar2 = FUN_019a9320();
      bVar1 = FUN_019a9350(*(undefined8 *)(param_1 + 8));
      return (float)uVar2 <= fVar3 & (bVar1 ^ 1);
    }
  }
  return 0;
}


