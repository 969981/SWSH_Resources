/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ce5ea0; name: FUN_00ce5ea0
 */


void FUN_00ce5ea0(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x90) + 0x5e0) + 0x58) == '\0') {
    iVar1 = FUN_010386e0();
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0xb4) = 0;
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x78),0);
      lVar5 = *(long *)(*(long *)(param_1 + 0x78) + 0x620);
      *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
      FUN_016b2d70(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x600),1);
      return;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x18) = 5;
      FUN_010364c0(*(undefined8 *)(param_1 + 0x78),1);
      FUN_01037030(*(undefined8 *)(param_1 + 0x88));
      uVar4 = 6;
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      plVar2 = *(long **)(*(long *)(param_1 + 0x98) + 0x68);
      uVar3 = (**(code **)(*plVar2 + 0x50))
                        (plVar2,*(undefined1 *)(*(long *)(param_1 + 0x98) + 0x70));
      FUN_014c84c0(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8),0,uVar3);
      FUN_00ce64a0(param_1,0x5aa458508b6a3d36,1,1,0);
      uVar4 = 2;
    }
    *(undefined4 *)(param_1 + 0xb4) = uVar4;
  }
  return;
}


