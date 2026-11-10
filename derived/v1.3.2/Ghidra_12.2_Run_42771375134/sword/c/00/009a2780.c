/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a2780; name: FUN_009a2780
 */


void FUN_009a2780(undefined8 param_1,long param_2,uint *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_3 = 0;
  if (param_5 != 0x207) {
    uVar2 = FUN_00942420(param_1);
    uVar3 = FUN_00942380(param_1);
    uVar2 = FUN_00946450(uVar2,uVar3,0x207,param_4,param_6);
    *(undefined8 *)(param_2 + (ulong)*param_3 * 8) = uVar2;
    if ((*(long *)(param_2 + (ulong)*param_3 * 8) != 0) &&
       (uVar1 = *param_3 + 1, *param_3 = uVar1, 3 < uVar1)) {
      return;
    }
    if (param_5 == 0x206) goto LAB_009a286c;
  }
  uVar2 = FUN_00942420(param_1);
  uVar3 = FUN_00942380(param_1);
  uVar2 = FUN_00946450(uVar2,uVar3,0x206,param_4,param_6);
  *(undefined8 *)(param_2 + (ulong)*param_3 * 8) = uVar2;
  if ((*(long *)(param_2 + (ulong)*param_3 * 8) != 0) &&
     (uVar1 = *param_3 + 1, *param_3 = uVar1, 3 < uVar1)) {
    return;
  }
  if (param_5 == 0x208) {
    return;
  }
LAB_009a286c:
  uVar2 = FUN_00942420(param_1);
  uVar3 = FUN_00942380(param_1);
  uVar2 = FUN_00946450(uVar2,uVar3,0x208,param_4,param_6);
  *(undefined8 *)(param_2 + (ulong)*param_3 * 8) = uVar2;
  if (*(long *)(param_2 + (ulong)*param_3 * 8) != 0) {
    *param_3 = *param_3 + 1;
  }
  return;
}


