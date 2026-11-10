/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dea0e0; name: FUN_00dea0e0
 */


undefined8 FUN_00dea0e0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  float fVar5;
  
  uVar1 = thunk_FUN_00e46320(*(undefined8 *)(param_1 + 0x88));
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  plVar2 = *(long **)(param_1 + 0x88);
  if (*(char *)((long)plVar2 + 0x44c) == '\0') {
    pcVar4 = *(code **)(*plVar2 + 0x178);
    puVar3 = PTR_DAT_0271e870;
  }
  else {
    pcVar4 = *(code **)(*plVar2 + 0x1c0);
    puVar3 = (undefined *)((long)plVar2 + 0x44c);
  }
  fVar5 = (float)(*pcVar4)(0,plVar2,puVar3);
  if (fVar5 < *(float *)PTR_DAT_0271ecc8) {
    return 0;
  }
  uVar1 = FUN_00ea09f0(*(undefined8 *)(param_1 + 0x88));
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar1 = FUN_00ea07b0(*(undefined8 *)(param_1 + 0x88));
  if ((uVar1 & 1) != 0) {
    if (*(uint *)(param_1 + 0xfc) < 7) {
      return 0;
    }
    if (1 < *(uint *)(param_1 + 0x100)) {
      return 0;
    }
    uVar1 = thunk_FUN_00e46320(*(undefined8 *)(param_1 + 0x88));
    if ((uVar1 & 1) != 0) {
      return 0;
    }
  }
  return 1;
}


