/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ee700; name: FUN_008ee700
 */


void FUN_008ee700(int param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  
  uVar2 = FUN_008ee550();
  if (param_1 == 2) {
    uVar3 = 0;
    if (uVar2 != 4) {
      uVar3 = 4;
    }
    uVar1 = 0;
    if ((int)uVar2 < 5) {
      uVar1 = uVar3;
    }
    goto LAB_008ee780;
  }
  if (param_1 == 1) {
    if (4 < (int)uVar2) goto LAB_008ee764;
    puVar4 = &DAT_02149ce1;
  }
  else {
    if ((param_1 != 0) || (4 < (int)uVar2)) {
LAB_008ee764:
      uVar1 = 0;
      goto LAB_008ee780;
    }
    puVar4 = &DAT_02149cdc;
  }
  uVar1 = puVar4[uVar2] == '\0';
LAB_008ee780:
  FUN_008ee8b0(param_1,param_2,uVar1,param_4);
  return;
}


