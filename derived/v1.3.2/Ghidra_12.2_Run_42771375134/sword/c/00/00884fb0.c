/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00884fb0; name: FUN_00884fb0
 */


undefined8 FUN_00884fb0(long *param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x58))(param_1,0);
  if ((param_3 & 1) == 0) {
    thunk_FUN_008787a0(uVar1,param_2);
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1,1);
    thunk_FUN_008787a0(uVar1,param_2 + 0x158);
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1,2);
    thunk_FUN_008787a0(uVar1,param_2 + 0x2b0);
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1,3);
    thunk_FUN_008787a0(uVar1,param_2 + 0x408);
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1,4);
    thunk_FUN_008787a0(uVar1,param_2 + 0x560);
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1,5);
    thunk_FUN_008787a0(uVar1,param_2 + 0x6b8);
  }
  else {
    FUN_008664a0();
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1,1);
    FUN_008664a0(uVar1,param_2 + 0x158);
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1,2);
    FUN_008664a0(uVar1,param_2 + 0x2b0);
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1,3);
    FUN_008664a0(uVar1,param_2 + 0x408);
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1,4);
    FUN_008664a0(uVar1,param_2 + 0x560);
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1,5);
    FUN_008664a0(uVar1,param_2 + 0x6b8);
  }
  *(char *)(param_2 + 0x810) = (char)param_1[0x11];
  *(undefined1 *)(param_2 + 0x811) = *(undefined1 *)((long)param_1 + 0x89);
  *(undefined2 *)(param_2 + 0x812) = 0;
  return 0x814;
}


