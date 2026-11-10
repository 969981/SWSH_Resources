/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077dba0; name: FUN_0077dba0
 */


short FUN_0077dba0(short *param_1,uint param_2)

{
  ushort uVar1;
  short sVar2;
  
  if (*param_1 != 0x10) {
    return 0;
  }
  uVar1 = param_1[1];
  if (0x10 < uVar1) {
    return 0;
  }
  sVar2 = 0;
  if ((uVar1 != 0) && (param_2 < uVar1 - 1)) {
    sVar2 = param_1[param_2 + 3];
  }
  return sVar2;
}


