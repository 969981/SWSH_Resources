/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b9e50; name: FUN_006b9e50
 */


void FUN_006b9e50(undefined8 param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  
  if (*param_2 != 0) {
    uVar2 = FUN_006b47f0(param_2 + 0xd);
    if ((uVar2 & 1) == 0) {
      piVar4 = (int *)*param_2;
      uVar2 = 0;
      if ((8 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
         (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar5 != 0)) {
        uVar2 = (ulong)*(uint *)((long)piVar4 + uVar5);
      }
    }
    else {
      uVar2 = FUN_006b4930(param_2 + 0xd);
    }
    FUN_006ac250(param_1,uVar2,param_2[8]);
    FUN_006ac330(param_2[8]);
    uVar3 = FUN_006a0e30();
    iVar1 = FUN_0069a7d0();
    if ((iVar1 == 1) && (uVar2 = FUN_0069a920(uVar3), (uVar2 & 1) != 0)) {
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    }
  }
  return;
}


