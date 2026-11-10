/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eae080; name: FUN_00eae080
 */


void FUN_00eae080(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar4 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar4 == 0)) {
    lVar3 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar4);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00de4a10(param_1,param_2,param_3,lVar3);
  puVar2 = PTR_DAT_027201b8;
  *(undefined1 *)((long)param_1 + 0x44c) = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0x198);
  param_1[10] = (long)(puVar2 + 0x1d8);
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x8b,0,0x236);
}


