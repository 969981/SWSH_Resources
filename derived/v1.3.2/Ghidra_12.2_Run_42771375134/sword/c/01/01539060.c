/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01539060; name: FUN_01539060
 */


uint FUN_01539060(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    do {
      uVar1 = uVar2 & 1;
      uVar2 = uVar2 >> 1;
      uVar4 = uVar1 + uVar4;
    } while (uVar2 != 0);
    uVar3 = (ulong)(uVar4 & 0xff);
  }
  uVar2 = param_2 * (uint)(byte)(&DAT_02172f90)[uVar3] * 4;
  if (*(uint *)(param_1 + 100) <= uVar2) {
    uVar2 = *(uint *)(param_1 + 100);
  }
  return uVar2;
}


