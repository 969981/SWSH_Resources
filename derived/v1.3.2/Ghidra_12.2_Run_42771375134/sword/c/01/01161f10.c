/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01161f10; name: FUN_01161f10
 */


void FUN_01161f10(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_02724d78 + 0xb8;
  puVar2 = PTR_DAT_02724d78 + 0xf8;
  *param_1 = (long)(PTR_DAT_02724d78 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x172] != 0) {
    (**(code **)(*(long *)(param_1[0x172] + 0x48) + 0x18))();
    param_1[0x172] = 0;
  }
  if ((char)param_1[0x16d] != '\0') {
    *(undefined1 *)(param_1 + 0x16d) = 0;
  }
  if (param_1[0x165] != 0) {
    (**(code **)(*(long *)(param_1[0x165] + 0x48) + 0x18))();
    param_1[0x165] = 0;
  }
  if (param_1[0x164] != 0) {
    (**(code **)(*(long *)(param_1[0x164] + 0x48) + 0x18))();
    param_1[0x164] = 0;
  }
  if (param_1[0x163] != 0) {
    (**(code **)(*(long *)(param_1[0x163] + 0x48) + 0x18))();
    param_1[0x163] = 0;
  }
  if (param_1[0x162] != 0) {
    (**(code **)(*(long *)(param_1[0x162] + 0x48) + 0x18))();
    param_1[0x162] = 0;
  }
  plVar3 = (long *)param_1[0x160];
  if (param_1 + 0x15c == plVar3) {
    pcVar4 = *(code **)(*plVar3 + 0x20);
LAB_01161fe8:
    (*pcVar4)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0x28);
    goto LAB_01161fe8;
  }
  plVar3 = (long *)param_1[0x15a];
  if (param_1 + 0x156 == plVar3) {
    pcVar4 = *(code **)(*plVar3 + 0x20);
LAB_01162014:
    (*pcVar4)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0x28);
    goto LAB_01162014;
  }
  plVar3 = (long *)param_1[0x154];
  if (param_1 + 0x150 == plVar3) {
    pcVar4 = *(code **)(*plVar3 + 0x20);
LAB_01162040:
    (*pcVar4)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0x28);
    goto LAB_01162040;
  }
  plVar3 = (long *)param_1[0x14e];
  if (param_1 + 0x14a == plVar3) {
    pcVar4 = *(code **)(*plVar3 + 0x20);
LAB_0116206c:
    (*pcVar4)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0x28);
    goto LAB_0116206c;
  }
  plVar3 = (long *)param_1[0x148];
  if (param_1 + 0x144 == plVar3) {
    pcVar4 = *(code **)(*plVar3 + 0x20);
LAB_01162098:
    (*pcVar4)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0x28);
    goto LAB_01162098;
  }
  plVar3 = (long *)param_1[0x142];
  if (param_1 + 0x13e == plVar3) {
    pcVar4 = *(code **)(*plVar3 + 0x20);
LAB_011620c4:
    (*pcVar4)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0x28);
    goto LAB_011620c4;
  }
  plVar3 = (long *)param_1[0x13c];
  if (param_1 + 0x138 == plVar3) {
    pcVar4 = *(code **)(*plVar3 + 0x20);
LAB_011620f0:
    (*pcVar4)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0x28);
    goto LAB_011620f0;
  }
  plVar3 = (long *)param_1[0x136];
  if (param_1 + 0x132 == plVar3) {
    pcVar4 = *(code **)(*plVar3 + 0x20);
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB_01162120;
    pcVar4 = *(code **)(*plVar3 + 0x28);
  }
  (*pcVar4)();
LAB_01162120:
  if (param_1[0x125] != 0) {
    (**(code **)(*(long *)(param_1[0x125] + 0x48) + 0x18))();
    param_1[0x125] = 0;
  }
  if (param_1[0x124] != 0) {
    (**(code **)(*(long *)(param_1[0x124] + 0x48) + 0x18))();
    param_1[0x124] = 0;
  }
  if (param_1[0x123] != 0) {
    (**(code **)(*(long *)(param_1[0x123] + 0x48) + 0x18))();
    param_1[0x123] = 0;
  }
  if (param_1[0x122] != 0) {
    (**(code **)(*(long *)(param_1[0x122] + 0x48) + 0x18))();
    param_1[0x122] = 0;
  }
  if (param_1[0x121] != 0) {
    (**(code **)(*(long *)(param_1[0x121] + 0x48) + 0x18))();
    param_1[0x121] = 0;
  }
  if (param_1[0x120] != 0) {
    (**(code **)(*(long *)(param_1[0x120] + 0x48) + 0x18))();
    param_1[0x120] = 0;
  }
  if (param_1[0x11f] != 0) {
    (**(code **)(*(long *)(param_1[0x11f] + 0x48) + 0x18))();
    param_1[0x11f] = 0;
  }
  if (param_1[0x11e] != 0) {
    (**(code **)(*(long *)(param_1[0x11e] + 0x48) + 0x18))();
    param_1[0x11e] = 0;
  }
  FUN_011625a0(param_1 + 0xe0);
  puVar2 = PTR_DAT_027178a0;
  puVar1 = PTR_DAT_02710a38;
  puVar5 = (undefined8 *)param_1[0xcd];
  param_1[0xcd] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0xc1] = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar2 + 0xb8);
  param_1[10] = (long)(puVar2 + 0xf8);
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*(long *)param_1[0xce] + 0x18))
              ((long *)param_1[0xce],puVar5,param_1[0xcf],param_1[0xd0]);
  }
  puVar5 = (undefined8 *)param_1[0xc9];
  param_1[0xc9] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*(long *)param_1[0xca] + 0x18))
              ((long *)param_1[0xca],puVar5,param_1[0xcb],param_1[0xcc]);
  }
  puVar5 = (undefined8 *)param_1[0xc5];
  param_1[0xc5] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*(long *)param_1[0xc6] + 0x18))
              ((long *)param_1[0xc6],puVar5,param_1[199],param_1[200]);
  }
  puVar5 = (undefined8 *)param_1[0xbc];
  param_1[0xbc] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*(long *)param_1[0xbd] + 0x18))
              ((long *)param_1[0xbd],puVar5,param_1[0xbe],param_1[0xbf]);
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


