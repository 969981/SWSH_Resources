/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077f220; name: FUN_0077f220
 */


void FUN_0077f220(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if ((char)param_1[0x13] != '\0') {
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar2 = param_1[0xb] + lVar3;
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar2 + 0x10);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar2 + 0x18);
      *(char *)(param_1[0xb] + lVar3 + 0x92) = (char)uVar4;
      plVar1 = (long *)(param_1[0xb] + lVar3);
      lVar2 = *plVar1;
      lVar5 = plVar1[3];
      *(long *)(lVar2 + 0x30) = plVar1[2];
      *(int *)(lVar2 + 0x38) = (int)lVar5;
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
      (**(code **)(**(long **)(param_1[0xb] + lVar3) + 0x100))
                (*(long **)(param_1[0xb] + lVar3),&DAT_0213fa00,0);
      *(undefined1 *)(*(long *)(param_1[0xb] + lVar3) + 0x59) = 0xff;
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0xa0;
    } while (uVar4 < *(byte *)(param_1 + 0x13));
  }
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined1 *)((long)param_1 + 0x9f) = 0;
  FUN_0077f910(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077f300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))(param_1);
  return;
}


