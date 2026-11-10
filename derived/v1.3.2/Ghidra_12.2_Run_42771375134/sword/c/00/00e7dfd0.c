/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7dfd0; name: FUN_00e7dfd0
 */


uint FUN_00e7dfd0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long local_40;
  long local_38;
  
  puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (puVar1 == puVar2) {
      uVar3 = 0;
LAB_00e7e0bc:
      return uVar3 & 1;
    }
    plVar6 = (long *)*puVar1;
    if ((plVar6 != (long *)0x0 && plVar6[0x34] == *param_1) &&
       (uVar4 = (**(code **)(*plVar6 + 0x88))(plVar6), (uVar4 & 1) == 0)) {
      plVar5 = plVar6 + 9;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      (**(code **)(*plVar6 + 0x10))(&local_40,plVar6);
      local_38 = local_40;
      local_40 = 0;
      uVar3 = FUN_00e7e0e0(&local_38);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        local_40 = 0;
      }
      (**(code **)(*plVar5 + 0x18))(plVar5);
      goto LAB_00e7e0bc;
    }
    puVar1 = puVar1 + 1;
  } while( true );
}


