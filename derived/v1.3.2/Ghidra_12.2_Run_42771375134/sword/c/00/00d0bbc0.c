/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d0bbc0; name: FUN_00d0bbc0
 */


void FUN_00d0bbc0(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long local_2998 [1323];
  
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar1 = (long *)(**(code **)*puVar4)(puVar4);
  lVar2 = FUN_00cf3e00();
  for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
  }
  local_2998[0] = puVar4[0xe];
  if (local_2998[0] != 0) {
    (**(code **)(*(long *)(local_2998[0] + 0x48) + 0x10))();
  }
  lVar2 = FUN_00cf2f70(local_2998);
  if (local_2998[0] != 0) {
    (**(code **)(*(long *)(local_2998[0] + 0x48) + 0x18))();
    local_2998[0] = 0;
  }
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x90) != '\0')) {
    lVar5 = *(long *)(lVar2 + 0x98);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    uVar3 = FUN_00d0bd10(lVar2);
    if ((uVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      memset(local_2998,0,0x2955);
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
  }
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x198),1,1);
  *(undefined4 *)(param_1 + 400) = 9;
  return;
}


