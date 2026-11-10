/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0136e130; name: FUN_0136e130
 */


void FUN_0136e130(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_40;
  undefined4 local_34;
  
  plVar1 = *(long **)(param_1 + 0x80);
  plVar2 = *(long **)(param_1 + 0x88);
  while( true ) {
    if (plVar1 == plVar2) {
      return;
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 9;
  }
  lVar5 = plVar2[-8];
  lVar4 = plVar2[-7];
  *plVar1 = plVar2[-9];
  plVar1[1] = lVar5;
  plVar1[2] = lVar4;
  FUN_0136e8c0(plVar1 + 3,plVar2 + -6);
  lVar5 = *(long *)(param_1 + 0x88);
  if (*(long *)(lVar5 + -0x10) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar5 + -0x10) + 0x48) + 0x18))();
    *(undefined8 *)(lVar5 + -0x10) = 0;
  }
  if (*(long *)(lVar5 + -0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar5 + -0x18) + 0x48) + 0x18))();
    *(undefined8 *)(lVar5 + -0x18) = 0;
  }
  if (*(long *)(lVar5 + -0x20) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar5 + -0x20) + 0x48) + 0x18))();
    *(undefined8 *)(lVar5 + -0x20) = 0;
  }
  if (*(long *)(lVar5 + -0x28) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar5 + -0x28) + 0x48) + 0x18))();
    *(undefined8 *)(lVar5 + -0x28) = 0;
  }
  if (*(long *)(lVar5 + -0x30) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar5 + -0x30) + 0x48) + 0x18))();
    *(undefined8 *)(lVar5 + -0x30) = 0;
  }
  *(long *)(param_1 + 0x88) = lVar5 + -0x48;
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  for (puVar6 = *(undefined8 **)(param_1 + 0xb0); puVar6 != puVar3; puVar6 = puVar6 + 0x10) {
    local_34 = 1;
    local_40 = param_2;
    (*(code *)*puVar6)(puVar6 + 4,&local_34,&local_40);
  }
  return;
}


