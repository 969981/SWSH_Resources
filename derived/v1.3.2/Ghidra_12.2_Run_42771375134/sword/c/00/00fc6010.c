/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc6010; name: FUN_00fc6010
 */


void FUN_00fc6010(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

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
  FUN_00ddccd0(param_1,param_2,param_3,lVar3);
  puVar2 = PTR_DAT_02722f08;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  *(undefined4 *)((long)param_1 + 0x65c) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0x248);
  param_1[10] = (long)(puVar2 + 0x288);
  *(undefined8 *)((long)param_1 + 0x654) = 0;
  *(undefined8 *)((long)param_1 + 0x64c) = 0;
  *(undefined8 *)((long)param_1 + 0x644) = 0;
  *(undefined8 *)((long)param_1 + 0x62c) = 0;
  *(undefined8 *)((long)param_1 + 0x63c) = 0;
  *(undefined8 *)((long)param_1 + 0x634) = 0;
  return;
}


