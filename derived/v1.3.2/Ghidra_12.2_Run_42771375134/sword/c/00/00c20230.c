/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c20230; name: FUN_00c20230
 */


void FUN_00c20230(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined2 local_5ff8;
  undefined2 uStack_5ff6;
  undefined4 uStack_5ff4;
  undefined4 uStack_5ff0;
  undefined8 local_5fec;
  undefined8 local_5fe4;
  undefined8 local_5fd8;
  undefined8 local_5fd0;
  undefined8 local_5fc8;
  undefined8 local_5fc0;
  undefined8 local_5fb8;
  undefined8 local_5fb0;
  undefined1 auStack_5fa8 [11052];
  undefined8 uStack_347c;
  undefined8 uStack_3474;
  undefined8 uStack_346c;
  undefined8 local_3460;
  undefined8 local_3458;
  undefined8 local_3450;
  undefined8 local_3448;
  undefined8 local_3440;
  undefined1 auStack_900 [24];
  int local_8e8;
  int local_890 [532];
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar4)(puVar4);
    lVar2 = FUN_00be66c0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        FUN_00c1ce80(&local_5ff8,puVar4 + -10);
        lVar2 = CONCAT44(uStack_5ff4,CONCAT22(uStack_5ff6,local_5ff8));
        goto joined_r0x00c20498;
      }
    }
  }
  FUN_00c1ce80(&local_5ff8,0);
  lVar2 = CONCAT44(uStack_5ff4,CONCAT22(uStack_5ff6,local_5ff8));
joined_r0x00c20498:
  if (lVar2 == 0) {
    return;
  }
  puVar4 = *(undefined8 **)(lVar2 + 0x60);
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = (long *)(**(code **)*puVar4)(puVar4);
    plVar3 = (long *)FUN_00c22170();
    if (plVar1 == (long *)0x0) {
      lVar2 = CONCAT44(uStack_5ff4,CONCAT22(uStack_5ff6,local_5ff8));
      goto joined_r0x00c202d8;
    }
    do {
      if (plVar1 == plVar3) {
        puVar4 = puVar4 + -10;
        lVar2 = CONCAT44(uStack_5ff4,CONCAT22(uStack_5ff6,local_5ff8));
        goto joined_r0x00c204c0;
      }
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
  }
  lVar2 = CONCAT44(uStack_5ff4,CONCAT22(uStack_5ff6,local_5ff8));
joined_r0x00c202d8:
  puVar4 = (undefined8 *)0x0;
joined_r0x00c204c0:
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    local_5ff8 = 0;
    uStack_5ff6 = 0;
    uStack_5ff4 = 0;
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00bd9f00(local_890,puVar4);
    FUN_00bdb920(auStack_900,puVar4);
    if ((local_890[0] != 0) && (local_890[0] == local_8e8)) {
      local_5ff8 = 0;
      local_5fe4 = 0;
      local_5fec = 0;
      uStack_5ff4 = 0;
      uStack_5ff0 = 0;
      local_5fb8 = 0;
      local_5fc0 = 0;
      local_5fc8 = 0;
      local_5fd0 = 0;
      local_5fd8 = 0;
      local_5fb0 = 0x100000001;
      uStack_346c = 0;
      uStack_3474 = 0;
      uStack_347c = 0;
      local_3440 = 0;
      local_3448 = 0;
      local_3450 = 0;
      local_3458 = 0;
      local_3460 = 0;
                    /* WARNING: Subroutine does not return */
      memset(auStack_5fa8,0,0x2b2a);
    }
  }
  return;
}


