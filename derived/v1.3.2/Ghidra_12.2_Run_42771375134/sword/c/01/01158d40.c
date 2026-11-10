/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01158d40; name: FUN_01158d40
 */


void FUN_01158d40(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  code *pcVar4;
  
  puVar1 = PTR_DAT_02724e68 + 0xd0;
  puVar2 = PTR_DAT_02724e68 + 0x110;
  *param_1 = (long)(PTR_DAT_02724e68 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  plVar3 = (long *)param_1[0xde];
  if (param_1 + 0xda == plVar3) {
    pcVar4 = *(code **)(*plVar3 + 0x20);
LAB_01158d94:
    (*pcVar4)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0x28);
    goto LAB_01158d94;
  }
  plVar3 = (long *)param_1[0xd6];
  if (param_1 + 0xd2 == plVar3) {
    pcVar4 = *(code **)(*plVar3 + 0x20);
LAB_01158dc0:
    (*pcVar4)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0x28);
    goto LAB_01158dc0;
  }
  plVar3 = (long *)param_1[0xce];
  if (param_1 + 0xca == plVar3) {
    pcVar4 = *(code **)(*plVar3 + 0x20);
LAB_01158dec:
    (*pcVar4)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0x28);
    goto LAB_01158dec;
  }
  plVar3 = (long *)param_1[0xc6];
  if (param_1 + 0xc2 == plVar3) {
    pcVar4 = *(code **)(*plVar3 + 0x20);
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB_01158e1c;
    pcVar4 = *(code **)(*plVar3 + 0x28);
  }
  (*pcVar4)();
LAB_01158e1c:
  if (param_1[0xbc] != 0) {
    (**(code **)(*(long *)(param_1[0xbc] + 0x48) + 0x18))();
    param_1[0xbc] = 0;
  }
  if (param_1[0xbb] != 0) {
    (**(code **)(*(long *)(param_1[0xbb] + 0x48) + 0x18))();
    param_1[0xbb] = 0;
  }
  if (param_1[0xba] != 0) {
    (**(code **)(*(long *)(param_1[0xba] + 0x48) + 0x18))();
    param_1[0xba] = 0;
  }
  FUN_00ff9a90(param_1);
  return;
}


