/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094c670; name: FUN_0094c670
 */


void FUN_0094c670(undefined8 param_1,undefined1 *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined1 local_46;
  char local_38 [8];
  
  *param_2 = 0;
  if (*(char *)((long)param_3 + 3) == '\x1f') {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_009424e0(param_1);
  }
  FUN_00942390(param_1);
  uVar2 = FUN_009319a0();
  uVar3 = FUN_00913dd0(uVar2,*(undefined1 *)(param_3 + 1));
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_009424e0(param_1,*(undefined1 *)(param_3 + 1));
    uVar3 = FUN_008e1600();
    if ((uVar3 & 1) == 0) {
      local_48 = *param_3;
      local_46 = *(undefined1 *)(param_3 + 2);
      local_58 = uVar2;
      uStack_50 = uVar4;
      FUN_00942450(param_1);
      uVar4 = FUN_009252b0();
      FUN_0094c820(uVar4,local_38,&local_58);
      if (local_38[0] != '\0') {
        iVar1 = FUN_00943f50(param_3 + 4);
        if (iVar1 != 0) {
          uVar4 = FUN_009423b0(param_1);
          FUN_00935bf0(uVar4,param_3 + 4);
        }
        *param_2 = 1;
      }
    }
  }
  return;
}


