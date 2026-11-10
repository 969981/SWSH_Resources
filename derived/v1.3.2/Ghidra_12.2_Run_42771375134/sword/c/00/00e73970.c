/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e73970; name: FUN_00e73970
 */


undefined8 FUN_00e73970(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 local_38;
  
  puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    plVar4 = (long *)*puVar1;
    (**(code **)plVar4[10])(plVar4 + 10);
    uVar3 = FUN_00e75e30();
    if ((((uVar3 & 1) != 0) && (plVar4[0x34] == *param_2)) &&
       (uVar3 = (**(code **)(*(long *)*puVar1 + 0x88))(), (uVar3 & 1) == 0)) break;
    puVar1 = puVar1 + 1;
  }
  (**(code **)(*plVar4 + 0x10))(&local_38,plVar4);
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(undefined8 *)(param_1 + 0x88) = local_38;
  *(int *)(param_1 + 0x90) = (int)param_2[1];
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)((long)param_2 + 0x14);
  *(int *)(param_1 + 0xd0) = (int)param_2[3];
  *(undefined1 *)(param_1 + 0x9c) = *(undefined1 *)((long)param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x9d) = *(undefined1 *)((long)param_2 + 0x1d);
  *(undefined1 *)(param_1 + 0xd4) = *(undefined1 *)((long)param_2 + 0x24);
  *(int *)(param_1 + 0xdc) = (int)param_2[4];
  return 1;
}


