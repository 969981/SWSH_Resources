/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011071e0; name: FUN_011071e0
 */


undefined8 FUN_011071e0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  FUN_01100080(*(undefined8 *)(param_1 + 0x298));
  FUN_010f5d50(param_1 + 0xb0);
  FUN_01108160(param_1 + 0x140);
  FUN_01107df0(param_1 + 0x1d0);
  if (*(char *)(param_1 + 0x7c) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x80);
    if (uVar1 < 2) {
      fVar3 = *(float *)(param_1 + 0x84);
      fVar4 = *(float *)(param_1 + 0x88);
      if (fVar3 < fVar4) {
        fVar3 = fVar3 + *(float *)(param_1 + 0x8c);
        *(float *)(param_1 + 0x84) = fVar3;
      }
      if (fVar4 <= fVar3) {
        *(float *)(param_1 + 0x84) = fVar4;
        fVar3 = fVar4;
        if (uVar1 == 1) {
          *(undefined4 *)(param_1 + 0x80) = 2;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined1 *)(param_1 + 0x7c) = 1;
        }
      }
      FUN_01106670(fVar3,*(undefined8 *)(param_1 + 0x280));
    }
    else if (uVar1 == 2) {
      if (10 < *(uint *)(param_1 + 0x90)) {
        *(undefined1 *)(param_1 + 0x7c) = 0;
      }
      *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) + 1;
      uVar1 = *(uint *)(param_1 + 0x78);
      goto joined_r0x0110729c;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x78);
joined_r0x0110729c:
  if (uVar1 < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x011072d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&DAT_02165114 + *(int *)(&DAT_02165114 + (ulong)uVar1 * 4)))(1);
    return uVar2;
  }
  return 0;
}


