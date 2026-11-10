/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c46320; name: FUN_00c46320
 */


undefined8 FUN_00c46320(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined2 local_5738;
  undefined2 uStack_5736;
  undefined4 uStack_5734;
  undefined4 uStack_5730;
  undefined8 local_572c;
  undefined8 local_5724;
  undefined8 local_5718;
  undefined8 local_5710;
  undefined8 local_5708;
  undefined8 local_5700;
  undefined8 local_56f8;
  undefined8 local_56f0;
  undefined1 auStack_56e8 [11052];
  undefined8 uStack_2bbc;
  undefined8 uStack_2bb4;
  undefined8 uStack_2bac;
  undefined8 local_2ba0;
  undefined8 local_2b98;
  undefined8 local_2b90;
  undefined8 local_2b88;
  undefined8 local_2b80;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar4)(puVar4);
    lVar2 = FUN_00be66c0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        FUN_00c1ce80(&local_5738,puVar4 + -10);
        lVar2 = CONCAT44(uStack_5734,CONCAT22(uStack_5736,local_5738));
        goto joined_r0x00c464fc;
      }
    }
  }
  FUN_00c1ce80(&local_5738,0);
  lVar2 = CONCAT44(uStack_5734,CONCAT22(uStack_5736,local_5738));
joined_r0x00c464fc:
  if (lVar2 == 0) {
    return 0;
  }
  puVar4 = *(undefined8 **)(lVar2 + 0x60);
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = (long *)(**(code **)*puVar4)(puVar4);
    plVar3 = (long *)FUN_00c22170();
    if (plVar1 == (long *)0x0) {
      lVar2 = CONCAT44(uStack_5734,CONCAT22(uStack_5736,local_5738));
      goto joined_r0x00c463cc;
    }
    do {
      if (plVar1 == plVar3) {
        puVar4 = puVar4 + -10;
        lVar2 = CONCAT44(uStack_5734,CONCAT22(uStack_5736,local_5738));
        goto joined_r0x00c4652c;
      }
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
  }
  lVar2 = CONCAT44(uStack_5734,CONCAT22(uStack_5736,local_5738));
joined_r0x00c463cc:
  puVar4 = (undefined8 *)0x0;
joined_r0x00c4652c:
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    uStack_5736 = 0;
  }
  if ((puVar4 != (undefined8 *)0x0) && (*(char *)(param_1 + 200) != '\0')) {
    local_5738 = 0;
    local_5724 = 0;
    local_572c = 0;
    uStack_5734 = 0;
    uStack_5730 = 0;
    local_56f8 = 0;
    local_5700 = 0;
    local_5708 = 0;
    local_5710 = 0;
    local_5718 = 0;
    local_56f0 = 0x100000001;
    uStack_2bac = 0;
    uStack_2bb4 = 0;
    uStack_2bbc = 0;
    local_2b80 = 0;
    local_2b88 = 0;
    local_2b90 = 0;
    local_2b98 = 0;
    local_2ba0 = 0;
                    /* WARNING: Subroutine does not return */
    memset(auStack_56e8,0,0x2b2a);
  }
  return 0;
}


