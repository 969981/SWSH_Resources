/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008238c0; name: FUN_008238c0
 */


/* WARNING: Removing unreachable block (ram,0x0082393c) */

void FUN_008238c0(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    plVar1 = malloc(0x20);
    lStack_50 = 0;
  }
  else {
    plVar1 = (long *)FUN_0080efb0(*(long *)(param_1 + 0x28),0,0x20);
    lStack_50 = *(long *)(param_1 + 0x28);
  }
  local_60 = &local_58;
  *plVar1 = (long)local_60;
  plVar1[1] = 0;
  plVar1[2] = lStack_50;
  plVar1[3] = 0;
  *plVar1 = (long)(plVar1 + 1);
  local_48 = 0;
  local_58 = 0;
  FUN_00822960(&local_60,0);
  lVar2 = *(long *)(param_1 + 0x20);
  puVar5 = *(undefined8 **)(lVar2 + param_2 * 8);
  if (puVar5 != (undefined8 *)0x0) {
    do {
      local_60 = puVar5;
      FUN_00823a00(plVar1,&local_60,&local_60);
      puVar3 = (undefined8 *)puVar5[3];
      puVar5[3] = 0;
      puVar5 = puVar3;
    } while (puVar3 != (undefined8 *)0x0);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  plVar4 = (long *)(lVar2 + (param_2 ^ 1) * 8);
  puVar5 = (undefined8 *)*plVar4;
  if ((undefined8 *)*plVar4 != (undefined8 *)0x0) {
    do {
      local_60 = puVar5;
      FUN_00823a00(plVar1,&local_60,&local_60);
      puVar3 = (undefined8 *)puVar5[3];
      puVar5[3] = 0;
      puVar5 = puVar3;
    } while (puVar3 != (undefined8 *)0x0);
    plVar4 = (long *)(*(long *)(param_1 + 0x20) + (param_2 ^ 1) * 8);
  }
  *plVar4 = (long)plVar1;
  *(long **)(*(long *)(param_1 + 0x20) + param_2 * 8) = plVar1;
  return;
}


