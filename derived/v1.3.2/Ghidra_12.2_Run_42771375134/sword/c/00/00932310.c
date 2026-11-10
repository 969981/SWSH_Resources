/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00932310; name: FUN_00932310
 */


undefined4 FUN_00932310(uint *param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (*param_1 != 0) {
    uVar5 = 0;
    uVar3 = 0;
    uVar4 = 0;
    do {
      uVar1 = FUN_008fafc0(param_2,*(undefined1 *)((long)param_1 + uVar5 + 4),param_3);
      uVar3 = uVar3 | uVar1 ^ 1;
      uVar5 = uVar5 + 1;
      uVar4 = uVar4 | uVar1;
    } while (uVar5 < *param_1);
    if ((uVar4 & 1) != 0) {
      uVar2 = 2;
      if (param_4 < 2) {
        uVar2 = 3;
      }
      if ((uVar4 & uVar3 & 1) == 0) {
        uVar2 = 3;
      }
      return uVar2;
    }
  }
  return 4;
}


