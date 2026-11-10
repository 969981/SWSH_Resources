/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087a5f0; name: FUN_0087a5f0
 */


ulong FUN_0087a5f0(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
  if ((uVar5 & 1) == 0) {
    uVar1 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
    uVar2 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
    uVar3 = FUN_00869080(*(undefined8 *)(param_1 + 0x98));
    uVar4 = FUN_00876c70(uVar1,uVar2,uVar3);
    return (ulong)(uVar4 & 0xff);
  }
  uVar5 = FUN_00868910();
  return uVar5;
}


