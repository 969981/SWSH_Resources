/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00952a80; name: FUN_00952a80
 */


void FUN_00952a80(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ushort local_68;
  undefined2 local_66;
  undefined1 local_64;
  undefined4 local_62;
  undefined2 local_5e;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  
  *param_2 = 0;
  uVar1 = FUN_009424e0(param_1,param_3[1]);
  uVar2 = FUN_008e1600();
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_009423d0(param_1);
    lVar4 = FUN_00954630(uVar3,uVar1,*(undefined2 *)(param_3 + 2));
    if (lVar4 != 0) {
      local_62 = 0xffffffff;
      local_64 = 0;
      local_5e = 0xffff;
      local_68 = (ushort)(byte)param_3[1];
      local_66 = *(undefined2 *)(param_3 + 2);
      uVar3 = FUN_009423b0(param_1);
      FUN_0093a470(uVar3,&local_68);
      uVar3 = FUN_009423e0(param_1);
      uVar2 = FUN_0092ddd0(uVar3,uVar1,*param_3,(ulong)&local_68 | 4);
      if ((*(int *)(param_3 + 8) != 2) && ((*(int *)(param_3 + 8) != 0 || ((uVar2 & 1) != 0)))) {
        uVar3 = FUN_009423b0(param_1);
        FUN_0093a4c0(uVar3,&local_68);
      }
      uVar3 = FUN_009423d0(param_1);
      thunk_FUN_008daae0(uVar3,lVar4);
      if ((param_3[4] != '\0') &&
         (uVar5 = FUN_00888fc0(*(undefined2 *)(param_3 + 2)), (uVar5 & 1) != 0)) {
        uVar3 = FUN_009423b0(param_1);
        FUN_009376a0(uVar3,uVar1,0);
      }
      if ((uVar2 & 1) != 0) {
        local_48 = *(undefined2 *)(param_3 + 2);
        local_46 = 1;
        local_50 = uVar1;
        FUN_00942450(param_1);
        uVar1 = FUN_00925010();
        FUN_0094a180(uVar1,auStack_58,&local_50);
      }
      *param_2 = 1;
    }
  }
  return;
}


