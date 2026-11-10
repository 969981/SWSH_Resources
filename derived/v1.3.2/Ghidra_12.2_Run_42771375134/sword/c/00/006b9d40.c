/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b9d40; name: FUN_006b9d40
 */


void FUN_006b9d40(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  if (*param_3 != 0) {
    uVar1 = FUN_006b47f0(param_3 + 0xd);
    if ((uVar1 & 1) == 0) {
      piVar2 = (int *)*param_3;
      uVar1 = 0;
      if ((8 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
         (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar3 != 0)) {
        uVar1 = (ulong)*(uint *)((long)piVar2 + uVar3);
      }
    }
    else {
      uVar1 = FUN_006b4930(param_3 + 0xd);
    }
    FUN_006ac090(param_1,param_2,uVar1,param_3[8],param_4,param_5,param_6);
    piVar2 = (int *)param_3[1];
    uVar4 = 0;
    if (((piVar2 != (int *)0x0) && (6 < *(ushort *)((long)piVar2 - (long)*piVar2))) &&
       (uVar1 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar1 != 0)) {
      uVar4 = *(undefined4 *)((long)piVar2 + uVar1);
    }
    FUN_006ac190(uVar4,param_3[8]);
    *(undefined4 *)(param_3 + 0xc) = 0;
  }
  return;
}


