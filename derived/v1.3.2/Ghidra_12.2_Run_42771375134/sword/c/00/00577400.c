/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00577400; name: FUN_00577400
 */


void FUN_00577400(undefined8 param_1,uint param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_90 [16];
  
  if (0 < (int)param_2) {
    uVar1 = 0;
    do {
      lVar3 = *(long *)(param_3 + uVar1 * 8);
      do {
        lVar2 = lVar3;
        lVar3 = *(long *)(lVar2 + 0x120);
      } while (lVar3 != 0);
      local_90[uVar1] = *(undefined8 *)(lVar2 + 0xa8);
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_2);
  }
  do {
    lVar3 = param_4;
    param_4 = *(long *)(lVar3 + 0x120);
  } while (param_4 != 0);
  FUN_00576ff0(param_1,param_2,local_90,*(undefined8 *)(lVar3 + 0xa8));
  return;
}


