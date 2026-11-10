/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045a9a0; name: FUN_0045a9a0
 */


undefined8 FUN_0045a9a0(long param_1,long param_2,uint *param_3)

{
  uint uVar1;
  ulong unaff_x21;
  ulong uVar2;
  float *pfVar3;
  uint uVar4;
  
  *(undefined1 *)(param_1 + 0xb9) = 1;
  uVar4 = *param_3;
  uVar2 = (ulong)uVar4;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (uVar4 != 0) {
    pfVar3 = (float *)(param_2 + 0xc);
    uVar4 = 1;
    do {
      if ((pfVar3[-1] != 0.0) && (0.0 < *pfVar3)) {
        unaff_x21 = unaff_x21 & 0xffffffff00000000 | (ulong)(uint)pfVar3[-1];
        uVar1 = FUN_00459200(param_1 + 0x60,*(undefined8 *)(pfVar3 + -3),unaff_x21);
        uVar4 = uVar4 & uVar1;
      }
      pfVar3 = pfVar3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    if (uVar4 == 0) {
      return 0;
    }
  }
  FUN_0045a3a0(param_1);
  return 1;
}


