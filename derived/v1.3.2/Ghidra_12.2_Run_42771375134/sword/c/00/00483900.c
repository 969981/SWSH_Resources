/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00483900; name: FUN_00483900
 */


void FUN_00483900(long *param_1,undefined4 param_2,uint param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  lVar3 = (**(code **)(*param_1 + 0x220))(param_1,param_4);
  if (lVar3 != 0) {
    *(byte *)(lVar3 + 0x20) =
         *(byte *)(lVar3 + 0x20) & ((byte)param_3 ^ 0xff) | (byte)param_3 & (byte)param_2;
  }
  iVar2 = (**(code **)(*param_1 + 0x88))(param_1);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  if (param_4 == 0) {
    (**(code **)(*param_1 + 0x1c0))(param_1,param_2,param_3);
  }
  iVar2 = (**(code **)(*param_1 + 0x88))(param_1);
  plVar6 = param_1;
  if (((iVar2 != 0) && (iVar2 = (**(code **)(*param_1 + 0x88))(param_1), iVar2 != 10)) &&
     ((long *)param_1[0xf] != (long *)0x0)) {
    plVar1 = (long *)param_1[0xf];
    do {
      plVar5 = plVar1;
      if ((*(uint *)(plVar6 + 0x13) & 0x1f000) != 0) break;
      plVar1 = (long *)plVar5[0xf];
      plVar6 = plVar5;
    } while ((long *)plVar5[0xf] != (long *)0x0);
  }
  plVar1 = plVar6 + 3;
  if (((plVar6[7] != 0) && ((*(byte *)(plVar6[7] + 3) >> 5 & 1) != 0)) ||
     (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x1d), (uVar4 & 1) != 0)) {
    param_3 = param_3 & 0xfffffffe;
  }
  if (((plVar6[7] != 0) && ((*(byte *)(plVar6[7] + 3) >> 6 & 1) != 0)) ||
     (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x1e), (uVar4 & 1) != 0)) {
    param_3 = param_3 & 0xfffffffd;
  }
  if ((((int *)plVar6[7] != (int *)0x0) && (*(int *)plVar6[7] < 0)) ||
     (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x1f), (uVar4 & 1) != 0)) {
    param_3 = param_3 & 0xfffffffb;
  }
  if (((plVar6[7] != 0) && ((*(byte *)(plVar6[7] + 4) & 1) != 0)) ||
     (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x20), (uVar4 & 1) != 0)) {
    param_3 = param_3 & 0xfffffff7;
  }
  if (((plVar6[7] != 0) && ((*(byte *)(plVar6[7] + 4) >> 1 & 1) != 0)) ||
     (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x21), (uVar4 & 1) != 0)) {
    param_3 = param_3 & 0xffffffef;
  }
                    /* WARNING: Could not recover jumptable at 0x00483afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_3,param_4,0);
  return;
}


