/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014d1b90; name: FUN_014d1b90
 */


void FUN_014d1b90(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_00ff5fc0();
  puVar1 = PTR_DAT_0272a420 + 0x78;
  puVar2 = PTR_DAT_0272a420 + 0x10;
  puVar3 = PTR_DAT_0272a420 + 0xb8;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = (long)puVar2;
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar3;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
                    /* WARNING: Subroutine does not return */
  memset((void *)((long)param_1 + 0x9c),0,0x2300);
}


