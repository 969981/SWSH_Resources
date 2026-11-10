/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ac3d0; name: FUN_007ac3d0
 */


long FUN_007ac3d0(ulong param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_28;
  
  lVar1 = FUN_017cd750(0xc0);
  if ((lVar1 != 0) && (FUN_01847ff0(lVar1,0), (param_1 & 1) != 0)) {
    FUN_017d2ee0(&local_28,param_2);
    *(undefined8 *)(lVar1 + 0x88) = local_28;
  }
  return lVar1;
}


