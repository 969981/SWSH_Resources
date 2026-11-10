/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093f350; name: FUN_0093f350
 */


undefined1 FUN_0093f350(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined2 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined2 uStack_66;
  undefined4 local_64;
  undefined1 auStack_60 [40];
  undefined1 local_38 [8];
  
  uVar1 = thunk_FUN_008dd3c0(param_3);
  local_78 = 0x1f1f;
  local_6c = 0;
  uStack_68 = 0;
  uStack_67 = 0;
  uStack_66 = 0;
  local_74 = 0;
  uStack_70 = 0;
  if ((uVar1 & 1) == 0) {
    param_3 = param_4;
  }
  local_64 = 1;
  FUN_00943e60(auStack_60);
  local_78 = CONCAT11((char)param_2,(char)param_2);
  local_74 = 0x1c;
  uVar2 = FUN_008ed130(param_2,param_3);
  uStack_70 = (undefined4)uVar2;
  local_6c = (undefined4)((ulong)uVar2 >> 0x20);
  uStack_67 = 2;
  uVar2 = FUN_009254c0(*(undefined8 *)(param_1 + 0x20));
  FUN_009440e0(uVar2,local_38,&local_78);
  return local_38[0];
}


