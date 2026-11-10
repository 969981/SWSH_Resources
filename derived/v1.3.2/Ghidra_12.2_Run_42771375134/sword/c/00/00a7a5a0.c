/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a7a5a0; name: FUN_00a7a5a0
 */


void FUN_00a7a5a0(long param_1,byte param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_28 [8];
  
  *(undefined4 *)(param_1 + 0xa0) = 3;
  *(byte *)(param_1 + 0x16f9) = param_2 & 1;
  lVar3 = *(long *)(*(long *)(param_1 + 0x1e18) + 0x400);
  if (lVar3 == 0) {
    FUN_00dab450(0,0,0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x1e18) + 0x400);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_00dab450(lVar3,0,0);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(*(long *)(param_1 + 0x1e18) + 0x400);
  }
  if (lVar3 == 0) {
    FUN_00dab450(0,1,0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x1e18) + 0x400);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_00dab450(lVar3,1,0);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(*(long *)(param_1 + 0x1e18) + 0x400);
  }
  if (lVar3 == 0) {
    FUN_00dab450(0,2,0);
    lVar3 = *(long *)(param_1 + 0x448);
    *(undefined1 *)(param_1 + 0x6c0) = 0;
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_00dab450(lVar3,2,0);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(param_1 + 0x448);
    *(undefined1 *)(param_1 + 0x6c0) = 0;
  }
  if (((lVar3 != 0) && (lVar3 = FUN_00706c40(lVar3,auStack_28), lVar3 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x78), lVar3 != 0)) {
    *(undefined8 *)(param_1 + 0x1ff8) = *(undefined8 *)(lVar3 + 0x2a8);
    uVar2 = *(undefined8 *)(lVar3 + 0x2b8);
    uVar1 = *(undefined4 *)(lVar3 + 0x2d0);
    *(undefined8 *)(param_1 + 0x2018) = *(undefined8 *)(lVar3 + 0x2c8);
    *(undefined8 *)(param_1 + 0x2008) = uVar2;
    uVar2 = *(undefined8 *)(lVar3 + 0x2a0);
    *(undefined8 *)(param_1 + 0x2000) = *(undefined8 *)(lVar3 + 0x2b0);
    *(undefined8 *)(param_1 + 0x1ff0) = uVar2;
    uVar2 = *(undefined8 *)(lVar3 + 0x2c0);
    *(undefined4 *)(param_1 + 0x2020) = uVar1;
    *(undefined8 *)(param_1 + 0x2010) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x18f4) = 0;
  return;
}


