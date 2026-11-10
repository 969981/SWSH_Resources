/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d3b5a0; name: FUN_00d3b5a0
 */


void FUN_00d3b5a0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  
  puVar3 = PTR_DAT_02710a48;
  puVar1 = PTR_DAT_0271ce88 + 0x10;
  puVar2 = PTR_DAT_0271ce88 + 0xa8;
  param_1[9] = (long)(PTR_DAT_0271ce88 + 0x68);
  param_1[10] = (long)puVar2;
  *param_1 = (long)puVar1;
  param_1[0x94] = (long)(puVar3 + 0x10);
  if (param_1[0x95] == 0) {
    param_1[0x95] = 0;
    pcVar5 = (code *)param_1[0xa7];
  }
  else {
    FUN_006e2100(param_1[0x95],param_1 + 0x94);
    lVar4 = param_1[0x95];
    param_1[0x95] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar5 = (code *)param_1[0xa7];
  }
  if (pcVar5 != (code *)0x0) {
    param_1[0xa9] = 0;
    param_1[0xa8] = 0;
    param_1[0xa7] = 0;
    param_1[0xa6] = 0;
    (*pcVar5)(param_1 + 0xaa);
  }
  pcVar5 = (code *)param_1[0x97];
  if (pcVar5 != (code *)0x0) {
    param_1[0x99] = 0;
    param_1[0x98] = 0;
    param_1[0x97] = 0;
    param_1[0x96] = 0;
    (*pcVar5)(param_1 + 0x9a);
  }
  if (param_1[0x95] != 0) {
    (**(code **)(*(long *)(param_1[0x95] + 0x48) + 0x18))();
    param_1[0x95] = 0;
  }
  if (param_1[0x92] != 0) {
    (**(code **)(*(long *)(param_1[0x92] + 0x48) + 0x18))();
    param_1[0x92] = 0;
  }
  param_1[0x70] = (long)(PTR_DAT_02715af8 + 0x10);
  if (param_1[0x71] == 0) {
    param_1[0x71] = 0;
    pcVar5 = (code *)param_1[0x83];
  }
  else {
    FUN_006e2100(param_1[0x71],param_1 + 0x70);
    lVar4 = param_1[0x71];
    param_1[0x71] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar5 = (code *)param_1[0x83];
  }
  if (pcVar5 != (code *)0x0) {
    param_1[0x85] = 0;
    param_1[0x84] = 0;
    param_1[0x83] = 0;
    param_1[0x82] = 0;
    (*pcVar5)(param_1 + 0x86);
  }
  pcVar5 = (code *)param_1[0x73];
  if (pcVar5 != (code *)0x0) {
    param_1[0x75] = 0;
    param_1[0x74] = 0;
    param_1[0x73] = 0;
    param_1[0x72] = 0;
    (*pcVar5)(param_1 + 0x76);
  }
  if (param_1[0x71] != 0) {
    (**(code **)(*(long *)(param_1[0x71] + 0x48) + 0x18))();
    param_1[0x71] = 0;
  }
  if ((param_1[0x6c] != 0) && (param_1[0x69] != 0)) {
    (**(code **)(*(long *)(param_1[0x69] + 0x48) + 0x18))();
    param_1[0x69] = 0;
  }
  param_1[0x6a] = -0x340d631b7bddd9bb;
  param_1[0x69] = 0;
  param_1[0x6b] = (long)&DAT_01d38550;
  param_1[0x6c] = 0;
  if (param_1[0x6d] != 0) {
    (**(code **)(*(long *)(param_1[0x6d] + 0x48) + 0x18))();
    param_1[0x6d] = 0;
  }
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  FUN_00d1fff0(param_1);
  return;
}


