/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7b9c0; name: FUN_00e7b9c0
 */


void FUN_00e7b9c0(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long local_48;
  long local_38;
  
  puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  while( true ) {
    if (puVar1 == puVar2) {
      *param_1 = 0;
      return;
    }
    plVar6 = (long *)*puVar1;
    if ((plVar6 != (long *)0x0 && plVar6[0x34] == *param_2) &&
       (uVar4 = (**(code **)(*plVar6 + 0x88))(plVar6), (uVar4 & 1) == 0)) break;
    puVar1 = puVar1 + 1;
  }
  plVar5 = plVar6 + 9;
  (**(code **)(*plVar5 + 0x10))(plVar5);
  (**(code **)(*plVar6 + 0x10))(&local_48,plVar6);
  lVar3 = local_48;
  local_48 = 0;
  local_38 = lVar3;
  FUN_00e7bad0(param_1,&local_38);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    local_38 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return;
}


