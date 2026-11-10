/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe1cd0; name: FUN_00fe1cd0
 */


void FUN_00fe1cd0(long *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_02723048;
  *(undefined2 *)(param_1 + 1) = 0x100;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)((long)param_1 + 10) = 0;
  lVar2 = *param_3;
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  *(undefined4 *)(param_1 + 3) = 0x96;
  *(undefined1 *)((long)param_1 + 0x1c) = 1;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 4,0,0x128);
}


