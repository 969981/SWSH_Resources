/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc7960; name: FUN_00bc7960
 */


void FUN_00bc7960(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  FUN_00bc7650(param_1,*(undefined1 *)(param_1 + 0x691),1);
  FUN_00bc7770(param_1,1);
  FUN_00bc78a0(param_1,0);
  uVar2 = FUN_00bb48a0(param_1);
  local_28 = FUN_016b8190();
  uVar2 = FUN_016b7950(uVar2,&local_28);
  uVar1 = FUN_00bb5fc0(uVar2,uVar2);
  if (uVar1 != *(byte *)(param_1 + 0x690)) {
    FUN_00bb37b0(param_1,uVar1,0);
    if (*(int *)(param_1 + 0x618) == 1) {
      FUN_00bb9350(param_1,0,uVar1,0,0,0);
      FUN_00bb9350(param_1,0,uVar1,1,0,0);
      FUN_00bb9350(param_1,0,uVar1,2,0,0);
      FUN_00bb9350(param_1,0,uVar1,3,0,0);
      FUN_00bb9350(param_1,0,uVar1,4,0,0);
      FUN_00bb9350(param_1,0,uVar1,5,0,0);
      FUN_00bb9350(param_1,0,uVar1,6,0,0);
      FUN_00bb9350(param_1,0,uVar1,7,0,0);
      FUN_00bb9350(param_1,0,uVar1,8,0,0);
      FUN_00bb9350(param_1,0,uVar1,9,0,0);
      FUN_00bb9350(param_1,0,uVar1,10,0,0);
      FUN_00bb9350(param_1,0,uVar1,0xb,0,0);
      FUN_00bb9350(param_1,0,uVar1,0xc,0,0);
      FUN_00bb9350(param_1,0,uVar1,0xd,0,0);
      FUN_00bb9350(param_1,0,uVar1,0xe,0,0);
      FUN_00bb9350(param_1,0,uVar1,0xf,0,0);
      FUN_00bb9350(param_1,0,uVar1,0x10,0,0);
      FUN_00bb9350(param_1,0,uVar1,0x11,0,0);
      FUN_00bb9350(param_1,0,uVar1,0x12,0,0);
      FUN_00bb9350(param_1,0,uVar1,0x13,0,0);
      FUN_00bb9350(param_1,0,uVar1,0x14,0,0);
      FUN_00bb9350(param_1,0,uVar1,0x15,0,0);
      FUN_00bb9350(param_1,0,uVar1,0x16,0,0);
      FUN_00bb9350(param_1,0,uVar1,0x17,0,0);
      FUN_00bb9350(param_1,0,uVar1,0x18,0,0);
      FUN_00bb9350(param_1,0,uVar1,0x19,0,0);
      FUN_00bb9350(param_1,0,uVar1,0x1a,0,0);
      FUN_00bb9350(param_1,0,uVar1,0x1b,0,0);
      FUN_00bb9350(param_1,0,uVar1,0x1c,0,0);
      FUN_00bb9350(param_1,0,uVar1,0x1d,0,0);
    }
    *(char *)(param_1 + 0x690) = (char)uVar1;
  }
  FUN_00bb94c0(param_1,&local_28);
  return;
}


