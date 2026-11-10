/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047b9c0; name: FUN_0047b9c0
 */


undefined8 FUN_0047b9c0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  
  uVar3 = FUN_0047bab0();
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x120) != 0) &&
     (plVar4 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x28), plVar4 != (long *)0x0)) {
    plVar4[3] = 0;
    plVar4[4] = 0;
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = 0;
    FUN_004a5bd0(plVar4);
    puVar1 = PTR_DAT_02713208;
    *(undefined4 *)(plVar4 + 4) = 0;
    *plVar4 = (long)(puVar1 + 0x10);
    plVar4[2] = 0;
    plVar4[3] = 0x2b00000000;
    local_2c = *(undefined4 *)(param_1 + 100);
    iVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0,0,0,auStack_30);
    if (iVar2 == 1) {
      FUN_00462550(param_1 + 0x98);
      *(long **)(param_1 + 0xf8) = plVar4;
      *(undefined4 *)(param_1 + 0x3c) = local_2c;
      *(undefined4 *)(param_1 + 0x120) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0xb5;
    }
  }
  return 2;
}


