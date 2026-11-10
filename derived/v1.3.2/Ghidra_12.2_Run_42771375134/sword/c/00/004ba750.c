/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ba750; name: FUN_004ba750
 */


undefined8 FUN_004ba750(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined1 auStack_1a8 [88];
  undefined8 local_150;
  undefined2 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined5 uStack_128;
  undefined3 local_123;
  undefined5 uStack_120;
  undefined4 local_118;
  undefined1 local_114;
  undefined1 auStack_110 [96];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  
  lVar1 = FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,param_2,0);
  if (lVar1 == 0) {
    return 2;
  }
  local_48 = 0;
  plVar3 = *(long **)(param_1 + 0x128);
  uVar2 = 0;
  if (plVar3 != (long *)0x0) {
    do {
      if ((int)plVar3[1] == (int)param_2) {
        uVar2 = (undefined4)plVar3[2];
        goto LAB_004ba7cc;
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    uVar2 = 0;
  }
LAB_004ba7cc:
  _local_50 = CONCAT44(4,uVar2);
  memcpy(auStack_1a8,(void *)(param_3 + 0x28),0x48);
  local_148 = 0xff00;
  local_150 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_140 = 0;
  uStack_138 = 0x3f80000000000000;
  local_118 = 0;
  local_114 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_120 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_123 = 0;
                    /* WARNING: Subroutine does not return */
  memset(auStack_110,0,0x5e);
}


