/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e31a70; name: FUN_00e31a70
 */


void FUN_00e31a70(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_3[6] == 1) {
    uVar3 = *param_2;
    uVar2 = (uint)*(ushort *)(param_3 + 7);
  }
  else {
    if (param_3[6] != 0) goto LAB_00e31abc;
    uVar2 = FUN_00e317f0(param_1,*param_3,*(undefined2 *)(param_3 + 1),param_1 + 0x2a8);
    uVar3 = *param_2;
  }
  FUN_00878810(uVar3,uVar2);
LAB_00e31abc:
  iVar1 = param_3[8];
  if (*(char *)((long)param_3 + 0x4a) == '\0') {
    if (iVar1 != 0) {
      FUN_0087bfb0(*param_2,0);
      FUN_0087bfb0(*param_2,1,param_3[9]);
      FUN_0087bfb0(*param_2,2,param_3[10]);
      FUN_0087bfb0(*param_2,3,param_3[0xb]);
    }
  }
  else if (iVar1 != 0) {
    FUN_0087bd30(*param_2,iVar1);
  }
  FUN_0087a8a0(*param_2,0,*(undefined1 *)((long)param_3 + 0x42));
  FUN_0087a8a0(*param_2,1,*(undefined1 *)((long)param_3 + 0x43));
  FUN_0087a8a0(*param_2,2,*(undefined1 *)(param_3 + 0x11));
  FUN_0087a8a0(*param_2,3,*(undefined1 *)((long)param_3 + 0x45));
  FUN_0087a8a0(*param_2,4,*(undefined1 *)((long)param_3 + 0x46));
  FUN_0087a8a0(*param_2,5,*(undefined1 *)((long)param_3 + 0x47));
  FUN_008798b0(*param_2,param_3[0xc]);
  if (*(char *)(param_3 + 0xd) != '\0') {
    FUN_00879870(*param_2);
  }
  FUN_0087edf0(*param_2,*(undefined2 *)(param_3 + 0x12));
  return;
}


