/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ce6250; name: FUN_00ce6250
 */


void FUN_00ce6250(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = FUN_010384a0(*(undefined8 *)(param_1 + 0x90));
  if ((uVar2 & 1) == 0) {
    return;
  }
  iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0x90));
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x78),0);
    lVar4 = *(long *)(*(long *)(param_1 + 0x78) + 0x620);
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
    FUN_016b2d70(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x600),1);
    FUN_01038270(*(undefined8 *)(param_1 + 0x90),1);
    return;
  }
  if (iVar1 != 0) {
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x98) + 0x70) = 0xff;
  plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x70) + 0x198);
  (**(code **)(*plVar3 + 0x70))(plVar3,0,0);
  iVar1 = FUN_00884820(*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x68));
  if (*(int *)(param_1 + 0xb4) == 3) {
    uVar2 = 0xc9505f21ec08b97d;
    uVar5 = 0x64508b6a519a;
  }
  else {
    if (*(int *)(param_1 + 0xb4) != 2) {
      uVar5 = 0;
      goto LAB_00ce6380;
    }
    uVar2 = 0x5aa456508b6a39d0;
    if (iVar1 != 2) {
      uVar2 = 0xbac3102f3b93a787;
    }
    uVar5 = 0x65508b6a534d;
  }
  uVar5 = uVar5 | 0x5aa4000000000000;
  if (iVar1 != 1) {
    uVar5 = uVar2;
  }
LAB_00ce6380:
  FUN_00ce64a0(param_1,uVar5,0,0,1);
  *(undefined4 *)(param_1 + 0xb4) = 4;
  return;
}


