/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01517230; name: FUN_01517230
 */


ulong FUN_01517230(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  char local_28 [4];
  byte local_24 [4];
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,1,plVar1[1]);
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,local_28,1,0);
    uVar3 = uVar3 & 0xffffffff;
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar5 = 0;
  *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (local_28[0] == '\f') {
      plVar1 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
      plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,1,plVar1[1]);
      if ((uVar3 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar1 + 0x10))(plVar1,local_24,1,0);
        uVar5 = uVar5 & 1;
      }
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
      uVar3 = (ulong)local_24[0] << 8;
    }
  }
  return uVar3 | uVar5;
}


