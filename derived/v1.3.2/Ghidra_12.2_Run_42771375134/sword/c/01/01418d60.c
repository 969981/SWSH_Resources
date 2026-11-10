/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01418d60; name: FUN_01418d60
 */


void FUN_01418d60(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long local_58;
  undefined8 *puStack_50;
  undefined4 *local_48;
  undefined8 local_40;
  undefined4 local_34;
  
  local_34 = param_2;
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar4)(puVar4);
    lVar2 = FUN_01410b60();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        puVar4 = puVar4 + -10;
        goto LAB_01418dc0;
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_01418dc0:
  local_40 = FUN_0140ce50(puVar4);
  FUN_01415fe0(local_40,0);
  puStack_50 = &local_40;
  local_48 = &local_34;
  local_58 = param_1;
  switch(param_2) {
  case 0:
    pcVar3 = "msg_pokecamp_bl_00";
    goto LAB_01418e14;
  case 1:
    pcVar3 = "msg_pokecamp_bl_01";
LAB_01418e14:
    FUN_01419000(&local_58,pcVar3,1);
    break;
  case 2:
    FUN_01419000(&local_58,"msg_pokecamp_bl_02",0);
    FUN_01419270(param_1);
    break;
  case 3:
    FUN_01419000(&local_58,"msg_pokecamp_bl_03",0);
    break;
  case 4:
    *(undefined8 *)(param_1 + 0x80) = 1;
  }
  return;
}


