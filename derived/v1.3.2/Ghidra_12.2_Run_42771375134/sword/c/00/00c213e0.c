/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c213e0; name: FUN_00c213e0
 */


void FUN_00c213e0(undefined1 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_5fd0 [11052];
  undefined8 uStack_34a4;
  undefined8 uStack_349c;
  undefined8 uStack_3494;
  undefined8 local_3488;
  undefined8 local_3480;
  undefined8 local_3478;
  undefined8 local_3470;
  undefined8 local_3468;
  undefined1 auStack_928 [16];
  long local_918;
  int local_8b8 [4];
  int local_8a8;
  long local_70;
  
  lVar1 = FUN_00c1d960();
  if ((((lVar1 != 0) && (lVar2 = FUN_00bda9a0(), lVar2 != 0)) &&
      (FUN_00bd9f00(local_8b8,lVar1), local_8b8[0] != 0)) && (local_70 == 0x644)) {
    if (local_8a8 == 0) {
      lVar2 = FUN_00bdbab0(lVar1);
    }
    else {
      lVar2 = FUN_00bdbac0(lVar1);
    }
    if ((((lVar2 != 0) && (FUN_00bdb920(auStack_928,lVar1), local_918 != 0)) &&
        ((*(long *)PTR_DAT_02716748 != 0 &&
         ((lVar2 = FUN_007ad1c0(), lVar2 != 0 && (*(long *)PTR_DAT_02710798 != 0)))))) &&
       (lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8), lVar2 != 0)) {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if (*(char *)(lVar1 + 0x70) == '\0') {
        *param_1 = 0;
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
      if (*(long *)(lVar1 + 0x80) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + 0x80) + 0x48) + 0x10))();
      }
      if (*(long *)(lVar1 + 0x90) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + 0x90) + 0x48) + 0x10))();
      }
      uStack_3494 = 0;
      uStack_349c = 0;
      uStack_34a4 = 0;
      local_3468 = 0;
      local_3470 = 0;
      local_3478 = 0;
      local_3480 = 0;
      local_3488 = 0;
                    /* WARNING: Subroutine does not return */
      memset(auStack_5fd0,0,0x2b2a);
    }
  }
  *param_1 = 0;
  return;
}


