/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a243b0; name: FUN_00a243b0
 */


void FUN_00a243b0(long param_1,long *param_2,uint param_3,byte *param_4)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  
  lVar3 = param_1 + (ulong)param_3 * 0x18;
  if (*(long *)(lVar3 + 0x740) != 0) {
    plVar2 = (long *)(lVar3 + 0x740);
    bVar1 = *param_4;
    if (((param_4[1] == 0) && (param_2 != (long *)0x0)) && (bVar1 != 0)) {
      lVar3 = (**(code **)(*param_2 + 0x7f8))(param_2,param_3);
      if (lVar3 == 0) {
        bVar1 = 1;
      }
      else {
        bVar1 = FUN_008e1600();
        bVar1 = ~bVar1 & 1;
      }
    }
    *(byte *)(*plVar2 + 0x1cc) = param_4[3];
    plVar2 = (long *)*plVar2;
    if (bVar1 == 0) {
      if ((*(char *)((long)plVar2 + 0x7c) == '\0') || (*(char *)((long)plVar2 + 0x7d) == '\0'))
      goto LAB_00a24480;
      *(undefined1 *)((long)plVar2 + 0x7d) = 0;
      pcVar4 = *(code **)(*plVar2 + 0x20);
    }
    else {
      if ((*(char *)((long)plVar2 + 0x7c) == '\0') || (*(char *)((long)plVar2 + 0x7d) != '\0'))
      goto LAB_00a24480;
      *(undefined1 *)((long)plVar2 + 0x7d) = 1;
      *(byte *)(plVar2[0x10] + 0x58) = *(byte *)(plVar2[0x10] + 0x58) | 1;
      pcVar4 = *(code **)(*plVar2 + 0x18);
    }
    (*pcVar4)();
  }
LAB_00a24480:
  param_1 = param_1 + (ulong)param_3 * 0x18;
  lVar3 = *(long *)(param_1 + 0x750);
  if (lVar3 != 0) {
    *(byte *)(lVar3 + 0x182) = param_4[3];
    plVar2 = *(long **)(param_1 + 0x750);
    if (param_4[2] == 0) {
      if ((*(char *)((long)plVar2 + 0x7c) != '\0') && (*(char *)((long)plVar2 + 0x7d) != '\0')) {
        *(undefined1 *)((long)plVar2 + 0x7d) = 0;
                    /* WARNING: Could not recover jumptable at 0x00a2450c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x20))();
        return;
      }
    }
    else if ((*(char *)((long)plVar2 + 0x7c) != '\0') && (*(char *)((long)plVar2 + 0x7d) == '\0')) {
      *(undefined1 *)((long)plVar2 + 0x7d) = 1;
      *(byte *)(plVar2[0x10] + 0x58) = *(byte *)(plVar2[0x10] + 0x58) | 1;
                    /* WARNING: Could not recover jumptable at 0x00a244e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}


