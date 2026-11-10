/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7fe00; name: FUN_00d7fe00
 */


void FUN_00d7fe00(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 local_28;
  
  iVar1 = **(int **)(*(long *)(param_1 + 0x5d0) + 0x280);
  if (iVar1 == 1) {
    local_28 = 0x842f8498cdd9ad09;
    lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  else if (iVar1 == 2) {
    local_28 = 0x842f8498cdd9ad09;
    lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
    FUN_00d7df20(param_1);
  }
  iVar1 = **(int **)(*(long *)(param_1 + 0x5d0) + 0x280);
  local_28 = 0x59ee533072e36b31;
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | iVar1 == 1;
  uVar3 = 0x3f800000;
  if (**(int **)(*(long *)(param_1 + 0x5d0) + 0x280) != 2) {
    uVar3 = 0;
  }
  local_28 = 0xb0d9d76a71ba8c64;
  FUN_00ffd510(uVar3,param_1 + 0x100,&local_28);
  return;
}


