/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c1a20; name: FUN_007c1a20
 */


bool FUN_007c1a20(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = *param_2 ^ *param_1;
  return (uVar1 & 0xf) == 0 && ((uVar1 & 0xf0) != 0 || (uVar1 & 0xf00) == 0);
}


