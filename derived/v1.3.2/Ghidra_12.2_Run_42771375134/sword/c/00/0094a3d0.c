/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094a3d0; name: FUN_0094a3d0
 */


void FUN_0094a3d0(undefined8 param_1,undefined1 *param_2,char *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_70;
  undefined4 local_68;
  undefined8 local_60;
  char local_58;
  char local_57;
  undefined1 *local_50;
  byte local_48;
  undefined1 auStack_38 [8];
  
  *param_2 = 0;
  FUN_00942390();
  uVar1 = FUN_009319a0();
  uVar2 = FUN_00913dd0(uVar1,param_3[1]);
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_009424e0(param_1,param_3[1]);
    uVar2 = FUN_008e1600();
    if (((uVar2 & 1) == 0) || (param_3[2] != '\0')) {
      lVar4 = 0;
      if ((*param_3 != '\x1f') && (*(int *)(param_3 + 4) != 0)) {
        lVar4 = FUN_009424e0(param_1);
      }
      local_68 = *(undefined4 *)(param_3 + 4);
      local_70 = lVar4;
      uVar3 = FUN_009423b0(param_1);
      FUN_00935bf0(uVar3,param_3 + 0xc);
      local_58 = *param_3;
      local_57 = param_3[8];
      local_50 = (undefined1 *)0x0;
      if (lVar4 != 0) {
        local_50 = (undefined1 *)&local_70;
      }
      local_48 = param_3[3] ^ 1;
      local_60 = uVar1;
      FUN_00942450(param_1);
      uVar1 = FUN_00925950();
      FUN_00925f40(uVar1,auStack_38,&local_60);
      *param_2 = 1;
    }
  }
  return;
}


