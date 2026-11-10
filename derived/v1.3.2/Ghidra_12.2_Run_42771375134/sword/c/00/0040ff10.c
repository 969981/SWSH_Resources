/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040ff10; name: FUN_0040ff10
 */


void FUN_0040ff10(long param_1,long param_2,ulong param_3,long *param_4)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x50);
  lVar4 = param_2 + (param_3 & 0xffffffff);
  if ((((*(byte *)(param_1 + 0x50) & 1) != 0) && (param_2 <= *(long *)(param_1 + 0x20))) &&
     (*(long *)(param_1 + 0x20) < lVar4)) {
    FUN_004091c0(*(undefined8 *)(param_1 + 8),param_1 + 0x28);
    uVar2 = *(byte *)(param_1 + 0x50) & 0xfffffffe;
    *(char *)(param_1 + 0x50) = (char)uVar2;
  }
  if ((((uVar2 >> 1 & 1) != 0) && (lVar3 = *(long *)(param_1 + 0x38), lVar3 < lVar4)) &&
     (param_2 <= lVar3)) {
    FUN_00409300(*(undefined8 *)(param_1 + 8),param_1 + 0x40,(int)lVar3 - (int)param_2);
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfd;
  }
  bVar1 = *(byte *)(*(long *)(param_1 + 8) + 0x5a);
  if (((bVar1 >> 4 & 1) != 0) || ((bVar1 & 3) == 0)) {
    return;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    lVar4 = *(long *)(param_1 + 0x10);
    if ((char)param_4[1] == '\0') {
      *param_4 = lVar4;
      *(undefined1 *)(param_4 + 1) = 1;
    }
    else if (lVar4 < *param_4) {
      *param_4 = lVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00410024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x88))
            (*(long **)(param_1 + 8),param_2,param_3 & 0xffffffff,param_4);
  return;
}


