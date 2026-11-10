/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b2ec0; name: FUN_007b2ec0
 */


undefined8 FUN_007b2ec0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 8) != 0) {
    return 0;
  }
  lVar2 = FUN_017cb1d0(0xb0);
  if (lVar2 != 0) {
    FUN_017c28d0(lVar2);
  }
  *(long *)(param_1 + 8) = lVar2;
  plVar3 = (long *)FUN_017cb1d0(0x70);
  puVar1 = PTR_DAT_027169c0;
  if (plVar3 != (long *)0x0) {
    *(undefined1 *)(plVar3 + 1) = 0;
    plVar3[2] = 0;
    *(undefined4 *)(plVar3 + 3) = 0;
    *(undefined4 *)(plVar3 + 0xd) = 0;
    plVar3[0xb] = 0;
    plVar3[0xc] = 0;
    plVar3[9] = 0;
    plVar3[10] = 0;
    plVar3[4] = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
  }
  *(long **)(param_1 + 0x30) = plVar3;
  plVar3 = (long *)FUN_017cb1d0(0x40);
  if (plVar3 != (long *)0x0) {
    *(undefined1 *)(plVar3 + 1) = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    puVar1 = PTR_DAT_027169c8 + 0x10;
    plVar3[7] = 0;
    *plVar3 = (long)puVar1;
    *(undefined4 *)(plVar3 + 4) = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
  }
  *(long **)(param_1 + 0x70) = plVar3;
  plVar3 = (long *)FUN_017cb1d0(0x30);
  if (plVar3 != (long *)0x0) {
    *(undefined1 *)(plVar3 + 1) = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    puVar1 = PTR_DAT_027169d0;
    *(undefined8 *)((long)plVar3 + 0xc) = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    FUN_007b3f00(plVar3 + 3,0,0);
  }
  *(long **)(param_1 + 0x90) = plVar3;
  plVar3 = (long *)FUN_017cb1d0(0x18);
  if (plVar3 != (long *)0x0) {
    *(undefined1 *)(plVar3 + 1) = 0;
    puVar1 = PTR_DAT_027169d8;
    *(undefined4 *)((long)plVar3 + 0xc) = 0;
    *(undefined1 *)(plVar3 + 2) = 0;
    *plVar3 = (long)(puVar1 + 0x10);
  }
  *(long **)(param_1 + 0xb0) = plVar3;
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    if (*(long **)(param_1 + 8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 8) + 8))();
      *(undefined8 *)(param_1 + 8) = 0;
    }
  }
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 8))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(long **)(param_1 + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x70) + 8))();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x90) + 8))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb0) + 8))();
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return 0;
}


