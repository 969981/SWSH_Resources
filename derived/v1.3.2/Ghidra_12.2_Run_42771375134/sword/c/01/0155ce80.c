/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0155ce80; name: FUN_0155ce80
 */


byte FUN_0155ce80(long *param_1)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  char local_34 [4];
  undefined1 local_28 [4];
  char local_24 [4];
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,1,plVar2[1]);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,local_34,1,0);
    uVar4 = uVar4 & 0xffffffff;
  }
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
  bVar1 = 0;
  *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
  if (((uVar4 & 1) != 0) && (local_34[0] == '\x05')) {
    plVar2 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
    plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
    uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,4,plVar2[1]);
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,local_28,4,0);
      uVar4 = uVar4 & 0xffffffff;
    }
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 4;
    if ((uVar4 & 1) == 0) {
      bVar1 = 0;
    }
    else {
      plVar2 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
      plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
      uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,1,plVar2[1]);
      if ((uVar4 & 1) == 0) {
        bVar1 = 0;
      }
      else {
        bVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,local_24,1,0);
      }
      lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
      bVar1 = bVar1 & local_24[0] == '\f';
    }
  }
  return bVar1;
}


