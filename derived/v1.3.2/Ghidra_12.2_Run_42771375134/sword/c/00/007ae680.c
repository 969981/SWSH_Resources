/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ae680; name: FUN_007ae680
 */


undefined8 FUN_007ae680(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 8) != 0) {
    return 0;
  }
  lVar2 = FUN_017cb1d0(0xf0);
  if (lVar2 != 0) {
    FUN_017856b0(lVar2);
  }
  *(long *)(param_1 + 8) = lVar2;
  plVar3 = (long *)FUN_017cb1d0(0x58);
  if (plVar3 != (long *)0x0) {
    puVar1 = PTR_DAT_02716860 + 0x10;
    *(undefined1 *)(plVar3 + 1) = 0;
    *plVar3 = (long)puVar1;
    FUN_017e35a0(plVar3 + 4,0,0);
    puVar1 = PTR_DAT_02716868;
    plVar3[2] = 0;
    *(undefined1 *)(plVar3 + 3) = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    FUN_017e3870(plVar3 + 4);
  }
  plVar4 = *(long **)(param_1 + 8);
  *(long **)(param_1 + 0x30) = plVar3;
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,param_2);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    if (*(long **)(param_1 + 8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 8) + 8))();
      *(undefined8 *)(param_1 + 8) = 0;
    }
    plVar3 = *(long **)(param_1 + 0x30);
  }
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  (**(code **)(*plVar3 + 8))(plVar3);
  *(undefined8 *)(param_1 + 0x30) = 0;
  return 0;
}


