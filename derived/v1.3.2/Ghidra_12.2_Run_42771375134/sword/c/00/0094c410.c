/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094c410; name: FUN_0094c410
 */


void FUN_0094c410(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  byte local_48 [4];
  undefined1 local_44 [4];
  
  *param_2 = 0;
  local_48[0] = 0;
  uVar1 = FUN_00942380();
  FUN_008f93b0(uVar1,local_44,local_48,*param_3);
  if (local_48[0] != 0) {
    uVar3 = 0;
    do {
      uVar2 = FUN_0094c4b0(param_1,local_44[uVar3],param_3 + 1,param_3[5]);
      if ((uVar2 & 1) != 0) {
        *param_2 = 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_48[0]);
  }
  return;
}


