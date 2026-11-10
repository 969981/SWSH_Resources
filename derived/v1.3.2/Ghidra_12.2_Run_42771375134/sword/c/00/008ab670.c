/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ab670; name: FUN_008ab670
 */


void FUN_008ab670(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long local_38;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 == (undefined8 *)0x0)) {
    puVar5 = (undefined8 *)0x0;
    iVar3 = *(int *)(param_1 + 0x9c);
    if (iVar3 == 0x286) goto LAB_008ab6d8;
LAB_008ab708:
    if (iVar3 == 0x382) {
      lVar2 = puVar5[0x15];
      uVar4 = 8;
      if (*(char *)(lVar2 + 0x29) != '\0') {
        uVar4 = 6;
      }
      FUN_008a6a20(&local_38,puVar5,uVar4);
      uVar4 = 9;
      if (*(char *)(lVar2 + 0x29) != '\0') {
        uVar4 = 7;
      }
    }
    else {
      if (iVar3 != 800) {
        lVar2 = 0;
        FUN_016a6730(0);
        local_38 = 0;
        goto joined_r0x008ab7e4;
      }
      FUN_008a6a20(&local_38,puVar5,2);
      uVar4 = 3;
    }
  }
  else {
    plVar1 = (long *)(**(code **)*puVar5)(puVar5);
    lVar2 = FUN_00897d00();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        puVar5 = puVar5 + -10;
        iVar3 = *(int *)(param_1 + 0x9c);
        goto joined_r0x008ab7f8;
      }
    }
    puVar5 = (undefined8 *)0x0;
    iVar3 = *(int *)(param_1 + 0x9c);
joined_r0x008ab7f8:
    if (iVar3 != 0x286) goto LAB_008ab708;
LAB_008ab6d8:
    FUN_008a6a20(&local_38,puVar5,0);
    uVar4 = 1;
  }
  lVar2 = local_38;
  FUN_008a6a20(&local_38,puVar5,uVar4);
  FUN_016a6730(lVar2);
joined_r0x008ab7e4:
  if ((param_2 & 1) != 0) {
    FUN_016a6070(local_38);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))((long *)(local_38 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


