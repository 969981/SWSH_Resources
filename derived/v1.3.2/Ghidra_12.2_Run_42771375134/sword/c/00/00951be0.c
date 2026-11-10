/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00951be0; name: FUN_00951be0
 */


void FUN_00951be0(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined8 param_6,uint param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 auStack_60 [8];
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  
  uVar1 = FUN_009424e0();
  if ((param_7 & 1) == 0) {
    local_54 = 0;
    local_58 = param_3;
    local_57 = param_4;
    local_56 = param_5;
    local_55 = param_2;
    FUN_00942450(param_1);
    uVar1 = FUN_009250e0();
    FUN_00951fc0(uVar1,auStack_60,&local_58);
    uVar1 = FUN_009423b0(param_1);
    FUN_00935bf0(uVar1,param_6);
  }
  else {
    uVar2 = FUN_009423b0(param_1);
    FUN_00938920(uVar2,uVar1);
    local_64 = 0;
    local_68 = param_3;
    local_67 = param_4;
    local_66 = param_5;
    local_65 = param_2;
    FUN_00942450(param_1);
    uVar2 = FUN_009250e0();
    FUN_00951fc0(uVar2,auStack_70,&local_68);
    uVar2 = FUN_009423b0(param_1);
    FUN_00935bf0(uVar2,param_6);
    uVar2 = FUN_009423b0(param_1);
    FUN_009389e0(uVar2,uVar1);
  }
  return;
}


