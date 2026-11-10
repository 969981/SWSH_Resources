/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01052e00; name: FUN_01052e00
 */


void FUN_01052e00(long param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 local_230 [124];
  
  lVar2 = *(long *)(param_1 + 0x148);
  lVar4 = *(long *)(lVar2 + 0x188);
  if ((lVar4 != 0 && param_2 != 0) && param_2 != 5) {
    FUN_00784060(local_230,*(undefined8 *)(lVar2 + 0x1c8));
    FUN_0079b7b0(lVar4,param_2,local_230);
    FUN_00784490(local_230);
    (**(code **)(**(long **)(lVar2 + 0x1a8) + 0x68))(*(long **)(lVar2 + 0x1a8),1);
    lVar4 = lVar2 + 0x19c;
    if (*(int *)(lVar2 + 0x19c) != 0) {
      FUN_0073edc0(*(undefined8 *)(*(long *)(lVar2 + 0x1b8) + 0xb0),lVar4);
      *(undefined4 *)(lVar2 + 0x19c) = 0;
      local_230[0] = 0;
      FUN_0073c7b0(*(undefined8 *)(*(long *)(lVar2 + 0x1b8) + 0xb0),local_230,lVar4);
    }
    uVar3 = (**(code **)(**(long **)(lVar2 + 0x1a8) + 0x58))();
    if ((uVar3 & 1) != 0) {
      uVar1 = FUN_0073ec70(*(undefined8 *)(*(long *)(lVar2 + 0x1b8) + 0xb0),param_3);
      *(undefined4 *)(lVar2 + 0x19c) = uVar1;
      local_230[0] = 0;
      FUN_0073c7b0(*(undefined8 *)(*(long *)(lVar2 + 0x1b8) + 0xb0),local_230,lVar4);
    }
  }
  return;
}


