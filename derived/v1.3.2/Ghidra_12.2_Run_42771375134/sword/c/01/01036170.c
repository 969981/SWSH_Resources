/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01036170; name: FUN_01036170
 */


void FUN_01036170(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00ffdbc0(param_1 + 0x100,0x503657c169b96f68);
  lVar2 = FUN_00ffdbc0(param_1 + 0x100,0xfc65d3908de40e72);
  *(undefined8 *)(lVar1 + 0xf8) = 0x1000000000000;
  *(undefined8 *)(lVar2 + 0xf8) = 0x2000000000000;
  *(long *)(param_1 + 0x5d0) = lVar1;
  *(long *)(param_1 + 0x5d8) = lVar2;
  return;
}


