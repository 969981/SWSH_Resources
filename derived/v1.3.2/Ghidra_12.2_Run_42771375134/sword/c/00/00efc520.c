/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00efc520; name: FUN_00efc520
 */


void FUN_00efc520(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_2e8 [616];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar2 = (ulong)(*(int *)(param_1 + 0xb8) == 2) << 1;
  if (*(int *)(param_1 + 0xb8) == 1) {
    lVar2 = 1;
  }
  lVar1 = lVar2 * 0x30;
  local_80 = *(undefined8 *)(&DAT_02a5ec90 + lVar1);
  uStack_78 = *(undefined8 *)(&DAT_02a5ec98 + lVar1);
  local_70 = *(undefined8 *)(&DAT_02a5eca0 + lVar1);
  lStack_68 = (&DAT_02a5eca8)[lVar2 * 6];
  if (lStack_68 != 0) {
    (**(code **)(*(long *)(lStack_68 + 0x48) + 0x10))();
  }
  local_60 = (&DAT_02a5ecb0)[lVar2 * 6];
  uStack_58 = (&DAT_02a5ecb8)[lVar2 * 6];
                    /* WARNING: Subroutine does not return */
  memset(auStack_2e8,0,0x148);
}


