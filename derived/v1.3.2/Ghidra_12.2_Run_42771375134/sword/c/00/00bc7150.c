/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc7150; name: FUN_00bc7150
 */


void FUN_00bc7150(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar2 == 0) {
    uVar1 = FUN_0150b350(0);
  }
  else {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar1 = FUN_0150b350(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  FUN_00bb37b0(param_1,uVar1,0);
  FUN_00bb4b40(param_1,0);
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
  FUN_00ffcf80(param_1 + 0x100,"anime_box_out");
  return;
}


