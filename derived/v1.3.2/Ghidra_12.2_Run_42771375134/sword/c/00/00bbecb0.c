/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbecb0; name: FUN_00bbecb0
 */


void FUN_00bbecb0(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_48;
  undefined8 local_38;
  
  piVar4 = (int *)FUN_00bd0180(*(undefined8 *)(param_1 + 0x5f8));
  lVar1 = param_1 + 0x100;
  FUN_00ffdc80(lVar1,"poke_panel");
  local_38 = FUN_016b8190();
  FUN_00bcfb40(*piVar4,*(undefined1 *)((long)piVar4 + 5),&local_38,(ulong)&local_38 | 4);
  if (*piVar4 == 0) {
    lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    uVar3 = FUN_0150b350(lVar6);
    if (uVar3 != *(byte *)(piVar4 + 1)) {
      FUN_00bb37b0(param_1,*(byte *)(piVar4 + 1),0);
      uVar2 = (undefined1)piVar4[1];
      FUN_00bb9350(param_1,0,uVar2,0,0,0);
      FUN_00bb9350(param_1,0,uVar2,1,0,0);
      FUN_00bb9350(param_1,0,uVar2,2,0,0);
      FUN_00bb9350(param_1,0,uVar2,3,0,0);
      FUN_00bb9350(param_1,0,uVar2,4,0,0);
      FUN_00bb9350(param_1,0,uVar2,5,0,0);
      FUN_00bb9350(param_1,0,uVar2,6,0,0);
      FUN_00bb9350(param_1,0,uVar2,7,0,0);
      FUN_00bb9350(param_1,0,uVar2,8,0,0);
      FUN_00bb9350(param_1,0,uVar2,9,0,0);
      FUN_00bb9350(param_1,0,uVar2,10,0,0);
      FUN_00bb9350(param_1,0,uVar2,0xb,0,0);
      FUN_00bb9350(param_1,0,uVar2,0xc,0,0);
      FUN_00bb9350(param_1,0,uVar2,0xd,0,0);
      FUN_00bb9350(param_1,0,uVar2,0xe,0,0);
      FUN_00bb9350(param_1,0,uVar2,0xf,0,0);
      FUN_00bb9350(param_1,0,uVar2,0x10,0,0);
      FUN_00bb9350(param_1,0,uVar2,0x11,0,0);
      FUN_00bb9350(param_1,0,uVar2,0x12,0,0);
      FUN_00bb9350(param_1,0,uVar2,0x13,0,0);
      FUN_00bb9350(param_1,0,uVar2,0x14,0,0);
      FUN_00bb9350(param_1,0,uVar2,0x15,0,0);
      FUN_00bb9350(param_1,0,uVar2,0x16,0,0);
      FUN_00bb9350(param_1,0,uVar2,0x17,0,0);
      FUN_00bb9350(param_1,0,uVar2,0x18,0,0);
      FUN_00bb9350(param_1,0,uVar2,0x19,0,0);
      FUN_00bb9350(param_1,0,uVar2,0x1a,0,0);
      FUN_00bb9350(param_1,0,uVar2,0x1b,0,0);
      FUN_00bb9350(param_1,0,uVar2,0x1c,0,0);
      FUN_00bb9350(param_1,0,uVar2,0x1d,0,0);
      FUN_0150b270(lVar6,(char)piVar4[1]);
    }
    local_38 = CONCAT44(local_38._4_4_ + 2,(int)local_38 + 1);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
  }
  else if (*piVar4 == 1) {
    if (*(uint *)(param_1 + 0x614) != (uint)*(byte *)(piVar4 + 1)) {
      FUN_00bb3b90(param_1);
      uVar2 = (undefined1)piVar4[1];
      FUN_00bb9350(param_1,1,uVar2,0,0,0);
      FUN_00bb9350(param_1,1,uVar2,1,0,0);
      FUN_00bb9350(param_1,1,uVar2,2,0,0);
      FUN_00bb9350(param_1,1,uVar2,3,0,0);
      FUN_00bb9350(param_1,1,uVar2,4,0,0);
      FUN_00bb9350(param_1,1,uVar2,5,0,0);
      *(uint *)(param_1 + 0x614) = (uint)*(byte *)(piVar4 + 1);
    }
    local_38 = CONCAT44(local_38._4_4_ + 2,(int)local_38);
  }
  uVar5 = FUN_00ffdc80(lVar1,"poke_panel");
  FUN_016b7990(uVar5,&local_38,1,0);
  local_48 = 0x3ca252075c61193e;
  FUN_00ffd430(lVar1,&local_48);
  local_48 = 0xcb4c8ebbb4b8e8b8;
  FUN_00ffd010(lVar1,&local_48);
  FUN_00bd0160(*(undefined8 *)(param_1 + 0x5f8),*piVar4,(char)piVar4[1],
               *(undefined1 *)((long)piVar4 + 5),0);
  *(undefined4 *)(param_1 + 0x608) = 0xf;
  return;
}


