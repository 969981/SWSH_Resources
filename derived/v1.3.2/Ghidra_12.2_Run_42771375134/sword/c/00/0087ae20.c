/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087ae20; name: FUN_0087ae20
 */


ulong FUN_0087ae20(long param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_00868580();
    return uVar3;
  }
  uVar3 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
  if (((uVar3 & 1) != 0) &&
     (uVar3 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98)), (uVar3 & 1) != 0)) {
    cVar1 = FUN_00868a40(*(undefined8 *)(param_1 + 0x98));
    if ((byte)(cVar1 - 1U) < 2) {
      uVar2 = FUN_0087a2f0(param_1);
      return (ulong)(uVar2 & 0xffff);
    }
  }
  uVar2 = FUN_00879c80(param_1);
  return (ulong)(uVar2 & 0xffff);
}


