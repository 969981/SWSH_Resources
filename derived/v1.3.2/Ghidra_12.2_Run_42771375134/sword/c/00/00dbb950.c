/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbb950; name: FUN_00dbb950
 */


void FUN_00dbb950(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long local_48;
  
  puVar3 = (undefined8 *)(param_1 + 0xb0);
  plVar1 = (long *)*puVar3;
  plVar4 = *(long **)(param_1 + 0xb8);
  if (plVar4 != plVar1) {
    lVar2 = *plVar1;
    while (lVar2 != param_2) {
      plVar1 = plVar1 + 1;
      if (plVar4 == plVar1) {
        return;
      }
      lVar2 = *plVar1;
    }
  }
  if (plVar1 == plVar4) {
    return;
  }
  local_48 = *plVar1;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    plVar4 = *(long **)(param_1 + 0xb8);
  }
  if (plVar1 + 1 == plVar4) {
    plVar5 = plVar1;
  }
  else {
    plVar6 = plVar1;
    do {
      if (*plVar6 != 0) {
        (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
        *plVar6 = 0;
      }
      plVar5 = plVar6 + 1;
      lVar2 = *plVar5;
      *plVar5 = 0;
      *plVar6 = lVar2;
      plVar6 = plVar5;
    } while (plVar4 + -1 != plVar5);
    plVar4 = *(long **)(param_1 + 0xb8);
    if (plVar4 == plVar5) goto LAB_00dbba68;
  }
  do {
    plVar6 = plVar4 + -1;
    if (*plVar6 != 0) {
      (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
      plVar4[-1] = 0;
    }
    plVar4 = plVar6;
  } while (plVar5 != plVar6);
LAB_00dbba68:
  plVar4 = *(long **)(param_1 + 0xb0);
  *(long **)(param_1 + 0xb8) = plVar5;
  do {
    if (plVar5 == plVar4) {
LAB_00dbba90:
      FUN_00dbb520(puVar3,plVar1,&local_48);
joined_r0x00dbbaec:
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      }
      return;
    }
    if (*plVar4 == param_3) {
      if (plVar5 != plVar4) {
        FUN_00dbb520(puVar3,plVar4 + 1,&local_48);
        goto joined_r0x00dbbaec;
      }
      goto LAB_00dbba90;
    }
    plVar4 = plVar4 + 1;
  } while( true );
}


