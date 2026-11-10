/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fc5c0; name: FUN_003fc5c0
 */


void FUN_003fc5c0(long *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  
  FUN_003c6850(param_1,param_2,0);
  puVar2 = PTR_DAT_027129a8;
  param_1[8] = param_3;
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined4 *)((long)param_1 + 0x4c) = 0xffffffff;
  lVar3 = *(long *)(*(long *)(param_1[2] + 0x48) + 0x1118);
  if (*(int *)(lVar3 + 0x18) == 0) {
    iVar4 = *(int *)(lVar3 + 8);
    *(int *)(lVar3 + 8) = iVar4 + 1;
  }
  else {
    uVar1 = *(int *)(lVar3 + 0x18) - 1;
    iVar4 = *(int *)(*(long *)(lVar3 + 0x10) + (ulong)uVar1 * 4);
    *(uint *)(lVar3 + 0x18) = uVar1;
  }
  *(int *)(param_1 + 9) = iVar4;
                    /* try { // try from 003fc630 to 003fc637 has its CatchHandler @ 003fc644 */
  FUN_003fbea0(param_1);
  return;
}


