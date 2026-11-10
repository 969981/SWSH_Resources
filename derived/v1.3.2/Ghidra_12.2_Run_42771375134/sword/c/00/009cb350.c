/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009cb350; name: FUN_009cb350
 */


void FUN_009cb350(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  code *pcVar4;
  
  puVar1 = PTR_DAT_02718890 + 0xb8;
  puVar2 = PTR_DAT_02718890 + 0xd0;
  *param_1 = (long)(PTR_DAT_02718890 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[2] = (long)puVar2;
  if (param_1[0x69e] != 0) {
    (**(code **)(*(long *)(param_1[0x69e] + 0x48) + 0x18))();
    param_1[0x69e] = 0;
  }
  if (param_1[0x69d] != 0) {
    (**(code **)(*(long *)(param_1[0x69d] + 0x48) + 0x18))();
    param_1[0x69d] = 0;
  }
  if (param_1[0x69c] != 0) {
    (**(code **)(*(long *)(param_1[0x69c] + 0x48) + 0x18))();
    param_1[0x69c] = 0;
  }
  if (param_1[0x69b] != 0) {
    (**(code **)(*(long *)(param_1[0x69b] + 0x48) + 0x18))();
    param_1[0x69b] = 0;
  }
  if (param_1[0x69a] != 0) {
    (**(code **)(*(long *)(param_1[0x69a] + 0x48) + 0x18))();
    param_1[0x69a] = 0;
  }
  if (param_1[0x699] != 0) {
    (**(code **)(*(long *)(param_1[0x699] + 0x48) + 0x18))();
    param_1[0x699] = 0;
  }
  if (param_1[0x698] != 0) {
    (**(code **)(*(long *)(param_1[0x698] + 0x48) + 0x18))();
    param_1[0x698] = 0;
  }
  if (param_1[0x697] != 0) {
    (**(code **)(*(long *)(param_1[0x697] + 0x48) + 0x18))();
    param_1[0x697] = 0;
  }
  if (param_1[0x696] != 0) {
    (**(code **)(*(long *)(param_1[0x696] + 0x58) + 0x18))();
    param_1[0x696] = 0;
  }
  if (param_1[0x1b] != 0) {
    (**(code **)(*(long *)(param_1[0x1b] + 0x48) + 0x18))();
    param_1[0x1b] = 0;
  }
  if (param_1[0x18] != 0) {
    (**(code **)(*(long *)param_1[0xe] + 0x18))
              ((long *)param_1[0xe],param_1[0x16],param_1[0x18] << 4,8);
  }
  plVar3 = (long *)param_1[0x14];
  if (param_1 + 0x10 == plVar3) {
    pcVar4 = *(code **)(*plVar3 + 0x20);
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB_009cb4bc;
    pcVar4 = *(code **)(*plVar3 + 0x28);
  }
  (*pcVar4)();
LAB_009cb4bc:
  plVar3 = (long *)param_1[0xc];
  if (param_1 + 8 == plVar3) {
                    /* WARNING: Could not recover jumptable at 0x009cb4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))();
    return;
  }
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009cb4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))();
  return;
}


