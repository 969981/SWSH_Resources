/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00935320; name: FUN_00935320
 */


undefined8 FUN_00935320(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_008ef450(param_2);
  uVar2 = 0;
  if (((int)param_3 < 0x18) && ((uVar1 & 1) != 0)) {
    uVar2 = *(undefined8 *)(param_1 + ((ulong)param_2 & 0xff) * 0x300 + (ulong)param_3 * 0x20 + 8);
  }
  return uVar2;
}


