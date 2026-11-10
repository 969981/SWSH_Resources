/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ee890; name: FUN_008ee890
 */


uint FUN_008ee890(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 4;
  if ((param_2 & 0xff) != 1) {
    uVar1 = param_3;
  }
  uVar2 = param_2 & 1 | param_3 << 1;
  if (param_1 == 2) {
    uVar2 = uVar1;
  }
  return uVar2;
}


